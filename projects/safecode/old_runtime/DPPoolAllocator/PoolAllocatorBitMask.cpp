//===- PoolAllocatorBitMask.cpp - Implementation of poolallocator runtime -===//
// 
//                       The LLVM Compiler Infrastructure
//
// This file was developed by the LLVM research group and is distributed under
// the University of Illinois Open Source License. See LICENSE.TXT for details.
// 
//===----------------------------------------------------------------------===//
//
// This file is one possible implementation of the LLVM pool allocator runtime
// library.
//
// This uses the 'Ptr1' field to maintain a linked list of slabs that are either
// empty or are partially allocated from.  The 'Ptr2' field of the PoolTy is
// used to track a linked list of slabs which are full, ie, all elements have
// been allocated from them.
// Ptr3 is unmapped page list 
//
//===----------------------------------------------------------------------===//

#include "PoolAllocator.h"
#include "PageManager.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//===----------------------------------------------------------------------===//
//
//  PoolSlab implementation
//
//===----------------------------------------------------------------------===//


// PoolSlab Structure - Hold multiple objects of the current node type.
// Invariants: FirstUnused <= UsedEnd
//
struct PoolSlab {
	PoolSlab **PrevPtr, *Next;
	bool isSingleArray;   // If this slab is used for exactly one array
	PoolSlab * OrigSlab;
private:
	// FirstUnused - First empty node in slab
	unsigned short FirstUnused;

	// UsedBegin - The first node in the slab that is used.
	unsigned short UsedBegin;

	// UsedEnd - 1 past the last allocated node in slab. 0 if slab is empty
	unsigned short UsedEnd;

	// NumNodesInSlab - This contains the number of nodes in this slab, which
	// effects the size of the NodeFlags vector, and indicates the number of nodes
	// which are in the slab.
	unsigned short NumNodesInSlab;

	// NodeFlagsVector - This array contains two bits for each node in this pool
	// slab.  The first (low address) bit indicates whether this node has been
	// allocated, and the second (next higher) bit indicates whether this is the
	// start of an allocation.
	//
	// This is a variable sized array, which has 2*NumNodesInSlab bits (rounded up
	// to 4 bytes).
	unsigned NodeFlagsVector[1];
  
	bool isNodeAllocated(unsigned NodeNum) {
		return NodeFlagsVector[NodeNum/16] & (1 << (NodeNum & 15));
	}

	void markNodeAllocated(unsigned NodeNum) {
		NodeFlagsVector[NodeNum/16] |= 1 << (NodeNum & 15);
	}

	void markNodeFree(unsigned NodeNum) {
		NodeFlagsVector[NodeNum/16] &= ~(1 << (NodeNum & 15));
	}

	void setStartBit(unsigned NodeNum) {
		NodeFlagsVector[NodeNum/16] |= 1 << ((NodeNum & 15)+16);
	}

	bool isStartOfAllocation(unsigned NodeNum) {
		return NodeFlagsVector[NodeNum/16] & (1 << ((NodeNum & 15)+16));
	}
  
	void clearStartBit(unsigned NodeNum) {
		NodeFlagsVector[NodeNum/16] &= ~(1 << ((NodeNum & 15)+16));
	}

public:
	// create - Create a new (empty) slab and add it to the end of the Pools list.
	static PoolSlab *create(PoolTy *Pool);

	// createSingleArray - Create a slab for a large singlearray with NumNodes
	// entries in it, returning the pointer into the pool directly.
	static void *createSingleArray(PoolTy *Pool, unsigned NumNodes);

	
	// getSlabSize - Return the number of nodes that each slab should contain.
	static unsigned getSlabSize(PoolTy *Pool) {
    
	// We need space for the header...
    unsigned NumNodes = PageSize-sizeof(PoolSlab);
    
    // We need space for the NodeFlags...
    unsigned NodeFlagsBytes = NumNodes/Pool->NodeSize * 2 / 8;
    NumNodes -= (NodeFlagsBytes+3) & ~3;  // Round up to int boundaries.

    // Divide the remainder among the nodes!
    return NumNodes / Pool->NodeSize;
	}

  void addToList(PoolSlab **PrevPtrPtr) {
    PoolSlab *InsertBefore = *PrevPtrPtr;
    *PrevPtrPtr = this;
    PrevPtr = PrevPtrPtr;
    Next = InsertBefore;
    if (InsertBefore) InsertBefore->PrevPtr = &Next;
  }

	void unlinkFromList() {
		(*PrevPtr) = Next;
	
		if (Next)
			Next->PrevPtr = PrevPtr;
	}

	unsigned getSlabSize() const {
		return NumNodesInSlab;
	}

	// Unmap - Release the memory for the current object.
	void mprotect();

	// isEmpty - This is a quick check to see if this slab is completely empty or
	// not.
	bool isEmpty() const { return UsedEnd == 0; }

	// isFull - This is a quick check to see if the slab is completely allocated.
	//
	bool isFull() const {
		return isSingleArray || FirstUnused == getSlabSize();
	}

	// allocateSingle - Allocate a single element from this pool, returning -1 if
	// there is no space.
	int allocateSingle();

	// allocateMultiple - Allocate multiple contiguous elements from this pool,
	// returning -1 if there is no space.
	int allocateMultiple(unsigned Num);

	// getElementAddress - Return the address of the specified element.
	void *getElementAddress(unsigned ElementNum, unsigned ElementSize) {
		char *Data = (char *)&NodeFlagsVector;
    
		if (!isSingleArray) 
			Data = (char*)&NodeFlagsVector[((unsigned)NumNodesInSlab+15)/16];
		
		return &Data[ElementNum*ElementSize];
	}
  
	const void *getElementAddress(unsigned ElementNum, unsigned ElementSize)const{
		const char *Data = (char *)&NodeFlagsVector;
		
		if (!isSingleArray) 
			Data = (const char*)&NodeFlagsVector[((unsigned)NumNodesInSlab+15)/16];
		
		return &Data[ElementNum*ElementSize];
	}

	// containsElement - Return the element number of the specified address in
	// this slab.  If the address is not in slab, return -1.
	int containsElement(void *Ptr, unsigned ElementSize) const;

	// freeElement - Free the single node, small array, or entire array indicated.
	void freeElement(unsigned short ElementIdx);

	// getSize --- size of an allocation
	unsigned getSize(void *Node, unsigned ElementSize) ;
    
	// lastNodeAllocated - Return one past the last node in the pool which is
	// before ScanIdx, that is allocated.  If there are no allocated nodes in this
	// slab before ScanIdx, return 0.
	unsigned lastNodeAllocated(unsigned ScanIdx);
};

// create - Create a new (empty) slab and add it to the end of the Pools list.
PoolSlab *PoolSlab::create(PoolTy *Pool) {
	unsigned NodesPerSlab = getSlabSize(Pool);

	unsigned Size = sizeof(PoolSlab) + 4*((NodesPerSlab+15)/16) +
						Pool->NodeSize*getSlabSize(Pool);
	assert(Size <= PageSize && "Trying to allocate a slab larger than a page!");
	PoolSlab *PS = (PoolSlab*)AllocatePage();

	PS->NumNodesInSlab = NodesPerSlab;
	PS->OrigSlab = PS;
	PS->isSingleArray = 0;  // Not a single array!
	PS->FirstUnused = 0;    // Nothing allocated.
	PS->UsedBegin   = 0;    // Nothing allocated.
	PS->UsedEnd     = 0;    // Nothing allocated.

	// Add the slab to the list...
	PS->addToList((PoolSlab**)&Pool->Ptr1);
	return PS;
}

void *PoolSlab::createSingleArray(PoolTy *Pool, unsigned NumNodes) {
	// FIXME: This wastes memory by allocating space for the NodeFlagsVector
	unsigned NodesPerSlab = getSlabSize(Pool);
	assert(NumNodes > NodesPerSlab && "No need to create a single array!");
	unsigned NumPages = (NumNodes+NodesPerSlab-1)/NodesPerSlab;
	PoolSlab *PS = (PoolSlab*)AllocateNPages(NumPages);
	assert(PS && "poolalloc: Could not allocate memory!");
  
	PS->addToList((PoolSlab**)&Pool->Ptr2);

	PS->isSingleArray = 1;  // Not a single array!
	PS->OrigSlab = PS;
	*(unsigned*)&PS->FirstUnused = NumPages;
	PS->NumNodesInSlab = NumNodes;
	return PS->getElementAddress(0, 0);
}

void PoolSlab::mprotect() {
	if (isSingleArray) {
		unsigned NumPages = *(unsigned*)&FirstUnused; 
		MprotectPage((char*)this, NumPages);
	}
	else 
		MprotectPage(this, 1);
}

// allocateSingle - Allocate a single element from this pool, returning -1 if
// there is no space.
int PoolSlab::allocateSingle() {
	// If the slab is a single array, go on to the next slab.  Don't allocate
	// single nodes in a SingleArray slab.
	if (isSingleArray) return -1;

	unsigned SlabSize = getSlabSize();

	// Check to see if there are empty entries at the end of the slab...
	if (UsedEnd < SlabSize) {
		// Mark the returned entry used
		unsigned short UE = UsedEnd;
		markNodeAllocated(UE);
		setStartBit(UE);
    
		// If we are allocating out the first unused field, bump its index also
		if (FirstUnused == UE)
			FirstUnused++;
    
		// Return the entry, increment UsedEnd field.
		return UsedEnd++;
	}
  
	// If not, check to see if this node has a declared "FirstUnused" value that
	// is less than the number of nodes allocated...
	//
	if (FirstUnused < SlabSize) {
		// Successfully allocate out the first unused node
		unsigned Idx = FirstUnused;
		markNodeAllocated(Idx);
		setStartBit(Idx);
    
		// Increment FirstUnused to point to the new first unused value...
		// FIXME: this should be optimized
		unsigned short FU = FirstUnused;
		do {
			++FU;
		} while (FU != SlabSize && isNodeAllocated(FU));
		
		FirstUnused = FU;
		return Idx;
	}
  
	return -1;
}

// allocateMultiple - Allocate multiple contiguous elements from this pool,
// returning -1 if there is no space.
int PoolSlab::allocateMultiple(unsigned Size) {
	// Do not allocate small arrays in SingleArray slabs
	if (isSingleArray) return -1;

	// For small array allocation, check to see if there are empty entries at the
	// end of the slab...
	if (UsedEnd+Size <= getSlabSize()) {
		// Mark the returned entry used and set the start bit
		unsigned UE = UsedEnd;
		setStartBit(UE);
		for (unsigned i = UE; i != UE+Size; ++i)
			markNodeAllocated(i);
    
		// If we are allocating out the first unused field, bump its index also
		if (FirstUnused == UE)
			FirstUnused += Size;

		// Increment UsedEnd
		UsedEnd += Size;

		// Return the entry
		return UE;
	}

	// If not, check to see if this node has a declared "FirstUnused" value
	// starting which Size nodes can be allocated
	//
	unsigned Idx = FirstUnused;
	while (Idx+Size <= getSlabSize()) {
		assert(!isNodeAllocated(Idx) && "FirstUsed is not accurate!");

		// Check if there is a continuous array of Size nodes starting FirstUnused
		unsigned LastUnused = Idx+1;
		for (; LastUnused != Idx+Size && !isNodeAllocated(LastUnused); ++LastUnused)
			/*empty*/;

		// If we found an unused section of this pool which is large enough, USE IT!
		if (LastUnused == Idx+Size) {
		setStartBit(Idx);
			// FIXME: this loop can be made more efficient!
		for (unsigned i = Idx; i != Idx + Size; ++i)
			markNodeAllocated(i);

		// This should not be allocating on the end of the pool, so we don't need
		// to bump the UsedEnd pointer.
		assert(Idx != UsedEnd && "Shouldn't allocate at end of pool!");

		// If we are allocating out the first unused field, bump its index also.
		if (Idx == FirstUnused)
			FirstUnused += Size;
      
		// Return the entry
		return Idx;
		}

		// Otherwise, try later in the pool.  Find the next unused entry.
		Idx = LastUnused;
		while (Idx+Size <= getSlabSize() && isNodeAllocated(Idx))
			++Idx;
	}

	return -1;
}

unsigned PoolSlab::getSize(void *Ptr, unsigned ElementSize) {
  const void *FirstElement = getElementAddress(0, 0);
  if (FirstElement <= Ptr) {
    unsigned Delta = (char*)Ptr-(char*)FirstElement;
    unsigned Index = Delta/ElementSize;
    if (Index < getSlabSize()) {
      //we have the index now do something like free
      assert(isStartOfAllocation(Index) &&
	     "poolrealloc: Attempt to realloc from the middle of allocated array\n");
      unsigned short ElementEndIdx = Index + 1;
      
      // FIXME: This should use manual strength reduction to produce decent code.
      unsigned short UE = UsedEnd;
      while (ElementEndIdx != UE &&
	     !isStartOfAllocation(ElementEndIdx) && 
	     isNodeAllocated(ElementEndIdx)) {
	++ElementEndIdx;
  }
      return (ElementEndIdx - Index);
    }
  }
  abort();
}

// containsElement - Return the element number of the specified address in
// this slab.  If the address is not in slab, return -1.
int PoolSlab::containsElement(void *Ptr, unsigned ElementSize) const {
  const void *FirstElement = getElementAddress(0, 0);
  if (FirstElement <= Ptr) {
    unsigned Delta = (char*)Ptr-(char*)FirstElement;
    unsigned Index = Delta/ElementSize;
	// printf("Index = 0x%x SlabSize = 0x%x\n", Index, getSlabSize());
    if (Index < getSlabSize()) {
	  assert(Delta % ElementSize == 0 &&
             "Freeing pointer into the middle of an element!");
      return Index;
    }
  }
  return -1;
}


// freeElement - Free the single node, small array, or entire array indicated.
void PoolSlab::freeElement(unsigned short ElementIdx) {
  assert(isNodeAllocated(ElementIdx) &&
         "poolfree: Attempt to free node that is already freed\n");
  assert(!isSingleArray && "Cannot free an element from a single array!");

  // Mark this element as being free!
  markNodeFree(ElementIdx);

  // If this slab is not a SingleArray
  assert(isStartOfAllocation(ElementIdx) &&
         "poolfree: Attempt to free middle of allocated array\n");
  
  // Free the first cell
  clearStartBit(ElementIdx);
  markNodeFree(ElementIdx);
  
  // Free all nodes if this was a small array allocation.
  unsigned short ElementEndIdx = ElementIdx + 1;

  // FIXME: This should use manual strength reduction to produce decent code.
  unsigned short UE = UsedEnd;
  while (ElementEndIdx != UE &&
         !isStartOfAllocation(ElementEndIdx) && 
         isNodeAllocated(ElementEndIdx)) {
    markNodeFree(ElementEndIdx);
    ++ElementEndIdx;
  }
  
  // Update the first free field if this node is below the free node line
  if (ElementIdx < FirstUnused) FirstUnused = ElementIdx;

  // Update the first used field if this node was the first used.
  if (ElementIdx == UsedBegin) UsedBegin = ElementEndIdx;
  
  // If we are freeing the last element in a slab, shrink the UsedEnd marker
  // down to the last used node.
  if (ElementEndIdx == UE) {
#if 0
      printf("FU: %d, UB: %d, UE: %d  FREED: [%d-%d)",
           FirstUnused, UsedBegin, UsedEnd, ElementIdx, ElementEndIdx);
#endif

    // If the user is freeing the slab entirely in-order, it's quite possible
    // that all nodes are free in the slab.  If this is the case, simply reset
    // our pointers.
    if (UsedBegin == UE) {
      //printf(": SLAB EMPTY\n");
      FirstUnused = 0;
      UsedBegin = 0;
      UsedEnd = 0;
    } else if (FirstUnused == ElementIdx) {
      // Freed the last node(s) in this slab.
      FirstUnused = ElementIdx;
      UsedEnd = ElementIdx;
    } else {
      UsedEnd = lastNodeAllocated(ElementIdx);
      //      assert(FirstUnused <= UsedEnd &&
      //             "FirstUnused field was out of date!");
    }
  }
}

unsigned PoolSlab::lastNodeAllocated(unsigned ScanIdx) {
  // Check the last few nodes in the current word of flags...
  unsigned CurWord = ScanIdx/16;
  unsigned short Flags = NodeFlagsVector[CurWord] & 0xFFFF;
  if (Flags) {
    // Mask off nodes above this one
    Flags &= (1 << ((ScanIdx & 15)+1))-1;
    if (Flags) {
      // If there is still something in the flags vector, then there is a node
      // allocated in this part.  The goto is a hack to get the uncommonly
      // executed code away from the common code path.
      //printf("A: ");
      goto ContainsAllocatedNode;
    }
  }

  // Ok, the top word doesn't contain anything, scan the whole flag words now.
  --CurWord;
  while (CurWord != ~0U) {
    Flags = NodeFlagsVector[CurWord] & 0xFFFF;
    if (Flags) {
      // There must be a node allocated in this word!
      //printf("B: ");
      goto ContainsAllocatedNode;
    }
    CurWord--;
  }
  return 0;

ContainsAllocatedNode:
  // Figure out exactly which node is allocated in this word now.  The node
  // allocated is the one with the highest bit set in 'Flags'.
  //
  // This should use __builtin_clz to get the value, but this builtin is only
  // available with GCC 3.4 and above.  :(
  assert(Flags && "Should have allocated node!");
  
  unsigned short MSB;
#if GCC3_4_EVENTUALLY
  MSB = 16 - ::__builtin_clz(Flags);
#else
  for (MSB = 15; (Flags & (1U << MSB)) == 0; --MSB)
    /*empty*/;
#endif

  assert((1U << MSB) & Flags);   // The bit should be set
  assert((~(1U << MSB) & Flags) < Flags);// Removing it should make flag smaller
  ScanIdx = CurWord*16 + MSB;
  assert(isNodeAllocated(ScanIdx));
  return ScanIdx;
}


//===----------------------------------------------------------------------===//
//
//  Pool allocator library implementation
//
//===----------------------------------------------------------------------===//

// poolinit - Initialize a pool descriptor to empty
//
void poolinit(PoolTy *Pool, unsigned NodeSize) {
  assert(Pool && "Null pool pointer passed into poolinit!\n");

  // Ensure the page manager is initialized
  InitializePageManager();

  // We must alway return unique pointers, even if they asked for 0 bytes
  Pool->NodeSize = NodeSize ? NodeSize : 1;
  Pool->Ptr1 = Pool->Ptr2 = Pool->Ptr3 = 0;
}

// pooldestroy - Release all memory allocated for a pool
//
void pooldestroy(PoolTy *Pool) {
  assert(Pool && "Null pool pointer passed in to pooldestroy!\n");

  // Free any partially allocated slabs
  PoolSlab *PS = (PoolSlab*)Pool->Ptr1;
  while (PS) {
    PoolSlab *Next = PS->Next;
    FreePage(PS); //FIXME for arrays 
    PS = Next;
  }

  // Free the completely allocated slabs
  PS = (PoolSlab*)Pool->Ptr2;
  while (PS) {
    PoolSlab *Next = PS->Next;
    FreePage(PS);
    PS = Next;
  }

  PS = (PoolSlab*)Pool->Ptr3;
    while (PS) {
    PoolSlab *Next = PS->Next;
    FreePage(PS);
    PS = Next;
  }
}


void *poolrealloc(PoolTy *Pool, void *Node, unsigned NumBytes) {
  if (Node == 0) return poolalloc(Pool, NumBytes);
  if (NumBytes == 0) {
    poolfree(Pool,Node);
    return 0;
  }
  void *New = poolalloc(Pool, NumBytes);
  assert(New != 0 && "Our poolalloc doesn't ever return null !");

  assert((PageSize & PageSize-1) == 0 && "Page size is not a power of 2??");
  PoolSlab *PS = (PoolSlab*)((long)Node & ~(PageSize-1));
  unsigned Size = 0;;
  if (PS->isSingleArray) {
    Size = PS->getSlabSize() * Pool->NodeSize;
  } else {
    Size = PS->getSize(Node, Pool->NodeSize);
  }
  //get the index of the old one 
  // Copy the min of the new and old sizes over.
  memcpy(New, Node, Size < NumBytes ? Size : NumBytes);
  poolfree(Pool, Node);
  return New;
}

//
// Function: poolstrdup()
//
// Description:
//  This is a pool allocated equivalent of strdup().  It allocates new memory
//  from the given pool, copies the string into it, and returns a pointer to
//  to the newly allocated memory.
//
void *
poolstrdup(PoolTy *Pool, char *Node) {
  if (Node == 0) return 0;

  unsigned int NumBytes = strlen(Node) + 1;
  void *New = poolalloc(Pool, NumBytes);
  if (New) {
    memcpy(New, Node, NumBytes+1);
  }
  return New;
}

// poolallocarray - a helper function used to implement poolalloc, when the
// number of nodes to allocate is not 1.
static void *poolallocarray(PoolTy* Pool, unsigned Size) {
  assert(Pool && "Null pool pointer passed into poolallocarray!\n");
  if (Size > PoolSlab::getSlabSize(Pool))
    return PoolSlab::createSingleArray(Pool, Size);    

  PoolSlab *PS = (PoolSlab*)Pool->Ptr1;

  // Loop through all of the slabs looking for one with an opening
  for (; PS; PS = PS->Next) {
    int Element = PS->allocateMultiple(Size);
    if (Element != -1) {
      // We allocated an element.  Check to see if this slab has been completely
      // filled up.  If so, move it to the Ptr2 list.
      if (PS->isFull()) {
        PS->unlinkFromList();
        PS->addToList((PoolSlab**)&Pool->Ptr2);
      }
      PS = (PoolSlab *)RemapPage(PS);
      return PS->getElementAddress(Element, Pool->NodeSize);
    }
  }
  
  PoolSlab *New = PoolSlab::create(Pool);
  int Idx = New->allocateMultiple(Size);
  assert(Idx == 0 && "New allocation didn't return zero'th node?");
  New = (PoolSlab *)RemapPage(New);
  return New->getElementAddress(0, 0);
}

void *poolalloc(PoolTy *Pool, unsigned NumBytes) {
  assert(Pool && "Null pool pointer passed in to poolalloc!\n");

  unsigned NodeSize = Pool->NodeSize;
  unsigned NodesToAllocate = (NumBytes+NodeSize-1)/NodeSize;
  if (NodesToAllocate > 1)
    return poolallocarray(Pool, NodesToAllocate);

  // Special case the most common situation, where a single node is being
  // allocated.
  PoolSlab *PS = (PoolSlab*)Pool->Ptr1;
  
  if (__builtin_expect(PS != 0, 1)) {
    int Element = PS->allocateSingle();
    if (__builtin_expect(Element != -1, 1)) {
      // We allocated an element.  Check to see if this slab has been
      // completely filled up.  If so, move it to the Ptr2 list.
      if (__builtin_expect(PS->isFull(), false)) {
        PS->unlinkFromList();
        PS->addToList((PoolSlab**)&Pool->Ptr2);
      }
      PS = (PoolSlab *)RemapPage(PS);
      return PS->getElementAddress(Element, NodeSize);
    }

    // Loop through all of the slabs looking for one with an opening
    for (PS = PS->Next; PS; PS = PS->Next) {
      int Element = PS->allocateSingle();
      if (Element != -1) {
        // We allocated an element.  Check to see if this slab has been
        // completely filled up.  If so, move it to the Ptr2 list.
        if (PS->isFull()) {
          PS->unlinkFromList();
          PS->addToList((PoolSlab**)&Pool->Ptr2);
        }
        
	PS = (PoolSlab *)RemapPage(PS);
        return PS->getElementAddress(Element, NodeSize);
      }
    }
  }

  // Otherwise we must allocate a new slab and add it to the list
  PoolSlab *New = PoolSlab::create(Pool);
  int Idx = New->allocateSingle();
  assert(Idx == 0 && "New allocation didn't return zero'th node?");
  New = (PoolSlab *)RemapPage(New);
  return New->getElementAddress(0, 0);
}



void poolfree(PoolTy *Pool, void *Node) {
	assert(Pool && "Null pool pointer passed in to poolfree!\n");
	if (!Node) return;
  
	PoolSlab *PS;
	unsigned Idx;
	if (0) {                  // THIS SHOULD BE SET FOR SAFECODE!
		unsigned TheIndex;
		//    PS = SearchForContainingSlab(Pool, Node, TheIndex);
		Idx = TheIndex;
	}
	else {
		// Since it is undefined behavior to free a node which has not been
		// allocated, we know that the pointer coming in has to be a valid node
		// pointer in the pool.  Mask off some bits of the address to find the base
		// of the pool.
		assert((PageSize & PageSize-1) == 0 && "Page size is not a power of 2??");
		PS = (PoolSlab*)((long)Node & ~(PageSize-1));

		if (PS->isSingleArray) {
			PS->unlinkFromList();
			// PS->addToList((PoolSlab**)&Pool->Ptr3);
			PS->mprotect();
			return;
		}

		Idx = PS->containsElement(Node, Pool->NodeSize);
		assert((int)Idx != -1 && "Node not contained in slab??");
	}

    if (PS->isFull()) {
		// Now that we found the node, we are about to free an element from it.
		// This will make the slab no longer completely full, so we must move it to
		// the other list!
		PS->unlinkFromList(); // Remove it from the Ptr2 list.

		PoolSlab **InsertPosPtr = (PoolSlab**)&Pool->Ptr1;

		// If the partially full list has an empty node sitting at the front of the
		// list, insert right after it.
		if ((*InsertPosPtr)->isEmpty())
			InsertPosPtr = &(*InsertPosPtr)->Next;

		PS->addToList(InsertPosPtr);     // Insert it now in the Ptr1 list.
	}

	// Free the actual element now!
	PS->freeElement(Idx);
	
	// Ok, if this slab is empty, we unlink it from the of slabs and either move
	// it to the head of the list, or free it, depending on whether or not there
	// is already an empty slab at the head of the list.
	//
	if (PS->isEmpty()) {
		PS->unlinkFromList();   // Unlink from the list of slabs...

		// If we can free this pool, check to see if there are any empty slabs at
		// the start of this list.  If so, delete the FirstSlab!
		PoolSlab *FirstSlab = (PoolSlab*)Pool->Ptr1;
		if (FirstSlab && FirstSlab->isEmpty()) {
			// Here we choose to delete FirstSlab instead of the pool we just freed
			// from because the pool we just freed from is more likely to be in the
			// processor cache.
			FirstSlab->unlinkFromList();
			FreePage(FirstSlab);
		}
    
		// Link our slab onto the head of the list so that allocations will find it
		// efficiently.    
		PS->addToList((PoolSlab**)&Pool->Ptr1);
	}
  
	PS->mprotect();
	return;
}

/*
void poolcheck(PoolTy *Pool, void *Node) {
	PoolSlab *PS;
	PS = (PoolSlab*)((long)Node & ~(PageSize-1));
	if (Pool->prevPage[0] == PS) {
		return;
	}
	if (Pool->prevPage[1] == PS) {
		return;
	}    
	if (Pool->prevPage[2] == PS) {
		return;
	}    
	if (Pool->prevPage[3] == PS) {
		return;
	}    
	poolcheckoptim(Pool, Node);
	return;
}

void poolcheckoptim(PoolTy *Pool, void *Node) {
	if (Pool->AllocadPool > 0) {
		if (Pool->allocaptr <= Node) {
			unsigned diffPtr = (unsigned)Node - (unsigned)Pool->allocaptr;
			unsigned offset = diffPtr % Pool->NodeSize;
			
			if ((diffPtr  < Pool->AllocadPool ) && (offset >= 0))
				return;
		}
    
	PCheckPassed = 0;
	abort();
	}
  
	PoolSlab *PS = (PoolSlab*)((long)Node & ~(PageSize-1));

	if (Pool->NumSlabs > AddrArrSize) {
		hash_set<void*> &theSlabs = *Pool->Slabs;
    
		if (theSlabs.find((void*)PS) == theSlabs.end()) {
			// Check the LargeArrays
			if (Pool->LargeArrays) {
				PoolSlab *PSlab = (PoolSlab*) Pool->LargeArrays;
				int Idx = -1;
				
				while (PSlab) {
					assert(PSlab && "poolcheck: node being free'd not found in "
						"allocation pool specified!\n");
					Idx = PSlab->containsElement(Node, Pool->NodeSize);
					if (Idx != -1) {
						Pool->prevPage[Pool->lastUsed] = PS;
						Pool->lastUsed = (Pool->lastUsed + 1) % 4;
						break;
					}
					PSlab = PSlab->Next;
				}

				if (Idx == -1) {
					printf ("poolcheck1: node being checked not found in pool with right"
							" alignment\n");
					PCheckPassed = 0;
					abort();
					exit(-1);
				}
				
				else {
					//exit(-1);
				}
			}
			
			else {
				printf ("poolcheck2: node being checked not found in pool with right"
					" alignment\n");
				abort();
				exit(-1);
			}
		}
		
		else {
			unsigned long startaddr = (unsigned long)PS->getElementAddress(0,0);
			if (startaddr > (unsigned long) Node) {
				printf("poolcheck: node being checked points to meta-data \n");
				abort();
			}
			
			unsigned long offset = ((unsigned long) Node - (unsigned long) startaddr) % Pool->NodeSize;
			if (offset != 0) {
				printf ("poolcheck3: node being checked does not have right alignment\n");
				abort();
			}
			Pool->prevPage[Pool->lastUsed] = PS;
			Pool->lastUsed = (Pool->lastUsed + 1) % 4;
		}
	}
	
	else {
		bool found = false;
		for (unsigned i = 0; i < AddrArrSize && !found; ++i) {
			if ((unsigned)Pool->SlabAddressArray[i] == (unsigned) PS) {
				found = true;
				Pool->prevPage[Pool->lastUsed] = PS;
				Pool->lastUsed = (Pool->lastUsed + 1) % 4;
			}
		} 

		if (found) {
			// Check that Node does not point to PoolSlab meta-data
			unsigned long startaddr = (unsigned long)PS->getElementAddress(0,0);
			if (startaddr > (unsigned long) Node) {
				printf("poolcheck: node being checked points to meta-data \n");
				exit(-1);
			}
			unsigned long offset = ((unsigned long) Node - (unsigned long) startaddr) % Pool->NodeSize;
			if (offset != 0) {
				printf("poolcheck4: node being checked does not have right alignment\n");
				abort();
			}
		}
		
		else {
			// Check the LargeArrays
			if (Pool->LargeArrays) {
				PoolSlab *PSlab = (PoolSlab*) Pool->LargeArrays;
				int Idx = -1;
				while (PSlab) {
					assert(PSlab && "poolcheck: node being free'd not found in "
                          "allocation pool specified!\n");
					Idx = PSlab->containsElement(Node, Pool->NodeSize);
					if (Idx != -1) {
						Pool->prevPage[Pool->lastUsed] = PS;
						Pool->lastUsed = (Pool->lastUsed + 1) % 4;
						break;
					}
				PSlab = PSlab->Next;
				}
			if (Idx == -1) {
				printf ("poolcheck6: node being checked not found in pool with right"
                  " alignment\n");
				abort();
			}
		} 
		
		else {
			printf ("poolcheck5: node being checked not found in pool with right"
                " alignment %x %x\n",Pool,Node);
			abort();
		}
	}
  }
}

*/
