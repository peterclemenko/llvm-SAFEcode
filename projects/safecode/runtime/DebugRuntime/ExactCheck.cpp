/*===- ExactCheck.cpp - Implementation of exactcheck functions ------------===*/
/*                                                                            */
/*                          The SAFECode Compiler                             */
/*                                                                            */
/* This file was developed by the LLVM research group and is distributed      */
/* under the University of Illinois Open Source License. See LICENSE.TXT for  */
/* details.                                                                   */
/*                                                                            */
/*===----------------------------------------------------------------------===*/
/*                                                                            */
/* This file implements the exactcheck family of functions.                   */
/*                                                                            */
/*===----------------------------------------------------------------------===*/

#include "DebugReport.h"
#include "ConfigData.h"

#include "../include/BitmapAllocator.h"
#include "../include/CWE.h"


#include "PoolAllocator.h"
#include "RewritePtr.h"


#include <stdint.h>

#include <cstdio>

extern FILE * ReportLog;

using namespace llvm;

static void *
exactcheck_check (void * Source, void * ObjStart, void * ObjEnd,
                  const void * Dest, const char * SourceFile,
                  unsigned int lineno) __attribute__((noinline));

static void
failLSCheck (const char *base,
             const char *result,
             unsigned size,
             const char * SourceFile,
             unsigned int lineno) __attribute__((noinline));

void
failLSCheck (const char *base,
             const char *result,
             unsigned size,
             const char * SourceFile,
             unsigned int lineno) {
  DebugViolationInfo v;
  v.type = ViolationInfo::FAULT_LOAD_STORE,
    v.faultPC = __builtin_return_address(0),
    v.faultPtr = result,
    v.CWE = CWEBufferOverflow,
    v.PoolHandle = 0,
    v.dbgMetaData = NULL,
    v.SourceFile = SourceFile,
    v.lineNo = lineno;
  
  ReportMemoryViolation(&v);
}

/*
 * Function: fastlscheck()
 *
 * Description:
 *  This function performs a fast load/store check.  If the check fails, it
 *  will *not* attempt to do pointer rewriting.
 *
 * Inputs:
 *  base   - The address of the first byte of a memory object.
 *  result - The pointer that is being checked.
 *  size   - The size of the object in bytes.
 *  lslen  - The length of the data accessed in memory.
 */
void
fastlscheck (const char *base, const char *result, unsigned size,
             unsigned lslen) {
  /*
   * If the pointer is within the object, the check passes.  Return the checked
   * pointer.
   */
  const char * end = result + lslen - 1;
  if ((result >= base) && (result < (base + size))) {
    if ((end >= base) && (end < (base + size))) {
      return;
    }
  }

  failLSCheck (base, result, size, "unknown", 0);
  return;
}

/*
 * Function: fastlscheck_debug()
 *
 * Description:
 *  This function performs a fast load/store check.  If the check fails, it
 *  will *not* attempt to do pointer rewriting.
 *
 * Inputs:
 *  base   - The address of the first byte of a memory object.
 *  result - The pointer that is being checked.
 *  size   - The size of the object in bytes.
 */
void
fastlscheck_debug (const char *base, const char *result, unsigned size,
                   unsigned lslen,
                   unsigned tag,
                   const char * SourceFile,
                   unsigned lineno) {
  /*
   * If the pointer is within the object, the check passes.  Return the checked
   * pointer.
   */
  const char * end = result + lslen - 1;
  if ((result >= base) && (result < (base + size))) {
    if ((end >= base) && (end < (base + size))) {
      return;
    }
  }

  failLSCheck (base, result, size, SourceFile, lineno);
  return;
}

/*
 * Function: exactcheck2()
 *
 * Description:
 *  Determine whether a pointer is within the specified bounds of an object.
 *
 * Inputs:
 *  source - The source pointer of the indexing operation (the GEP).
 *  base   - The address of the first byte of a memory object.
 *  result - The pointer that is being checked.
 *  size   - The size of the object in bytes.
 *
 * Return value:
 *  If there is no bounds check violation, the result pointer is returned.
 *  Otherwise, depending upon the configuration of the run-time, either an
 *  error is returned or a rewritten Out-of-Bounds (OOB) pointer is returned.
 */
void *
exactcheck2 (char * source, char *base, char *result, unsigned size) {

  /*
   * If the pointer is within the object, the check passes.  Return the checked
   * pointer.
   */
  if ((result >= base) && (result < (base + size))) {
    return (void*)result;
  }
  return exactcheck_check (source, base, base + size-1, result, NULL, 0);
}

/*
 * Function: exactcheck2_debug()
 *
 * Description:
 *  This function is identical to exactcheck2(), but the caller provides more
 *  source level information about the run-time check for error reporting if
 *  the check fails.
 *
 * Inputs:
 *  source - The source pointer of the indexing operation (the GEP).
 *  base   - The address of the first byte of a memory object.
 *  result - The pointer that is being checked.
 *  size   - The size of the object in bytes.
 *
 * Return value:
 *  If there is no bounds check violation, the result pointer is returned.
 *  This forces the call to exactcheck() to be considered live (previous
 *  optimizations dead-code eliminated it).
 */
void *
exactcheck2_debug (char *source,
                   char *base,
                   char *result,
                   unsigned size,
                   unsigned tag,
                   const char * SourceFile,
                   unsigned lineno) {
  /*
   * If the pointer is within the object, the check passes.  Return the checked
   * pointer.
   */
  if ((result >= base) && (result < (base + size))) {
    return (void*) result;
  }

  return exactcheck_check (source, base, base + size - 1, result, 
                           SourceFile, lineno);
}

/*
 * Function: exactcheck_check()
 *
 * Description:
 *  This is the slow path for an exactcheck.  It handles pointer rewriting
 *  and error reporting when an exactcheck fails.
 *
 * Inputs:
 *  source - The source pointer of the indexing operation (the GEP).
 *  ObjStart - The address of the first valid byte of the object.
 *  ObjEnd   - The address of the last valid byte of the object.
 *  Dest     - The result pointer of the indexing operation (the GEP).
 *  SourceFile - The name of the file in which the check occurs.
 *  lineno     - The line number within the file in which the check occurs.
 */
void *
exactcheck_check (void * Source,
                  void * ObjStart,
                  void * ObjEnd,
                  const void * Dest,
                  const char * SourceFile,
                  unsigned int lineno) {

  void * RealDest = const_cast<void*>(Dest);
  void * RealObjStart = ObjStart;
  void * RealObjEnd = ObjEnd;

  /*
   * On entry, we know that the supplied Dest pointer lies outside the 
   * bounds indicated by ObjStart and ObjEnd.  However, it is possible 
   * that Dest, ObjStart, and ObjEnd were all computed from a rewrite
   * pointer.  Test to see if this is the case, and re-run the check
   * if it is.
   *
   * Note that we define pool = NULL.  This forces use of the global
   * pool, which is the only pool that can be used at present.  Change
   * the function to pass in a pool pointer later if need be.
   */
  if (isRewritePtr (Source)) {
    /*
     * Get the real pointer value (which must be outside the bounds 
     * of a valid object, as the pointer was re-written).
     */
    DebugPoolTy * Pool = NULL;
    void * RealSrc = pchk_getActualValue (Pool, Source);

    /*
     * Compute the real result pointer (the value the GEP would really have
     * on the original pointer value).
     */
     RealDest = (void *)((intptr_t) RealSrc + 
                        ((intptr_t) Dest - (intptr_t) Source));

    /*
     * Retrieve the original bounds of the object.
     */
    getOOBObject(Source, RealObjStart, RealObjEnd);

    /* 
     * Re-run the bounds check
     */
    if (__builtin_expect (((RealObjStart <= RealDest) && 
                          ((RealDest <= RealObjEnd))), 1)) {
      if (logregs) {
        fprintf (stderr, "exactcheck:unrewrite(1): %p -> %p, Dest: %p, Obj: %p - %p\n", Source, RealSrc, RealDest, RealObjStart, RealObjEnd);
        fflush (stderr);
      }

      return(RealDest);
    }
  }

  /*
   * At this point, we have that the RealDest pointer is out of range,
   * and that it was not computed from a re-written OOB source pointer.
   *
   * If we indexed off the beginning or end of a valid object, 
   * determine if we can rewrite the pointer into an OOB pointer.  
   * Whether we can or not depends upon the SAFECode configuration.
   */
  if ((!(ConfigData.StrictIndexing)) ||
      (((char *) RealDest) == (((char *)RealObjEnd)+1))) {
    void * ptr = rewrite_ptr (0, RealDest, RealObjStart, RealObjEnd, SourceFile, lineno);
    if (logregs) {
      fprintf (ReportLog,
               "exactcheck: rewrite(1): %p %p %p at pc=%p to %p: %s %d\n",
               RealObjStart, RealObjEnd, RealDest, (void*)__builtin_return_address(0), ptr,
               SourceFile, lineno);
      fflush (ReportLog);
    }

    return ptr;
  } else {
    //
    // Determine if this is a rewrite pointer that is being indexed.
    //
    if ((logregs) && (isRewritePtr ((void *)Dest))) {
      fprintf (stderr, "Was a rewrite: %p\n", Dest);
      fflush (stderr);
    }

    OutOfBoundsViolation v;
    v.type = ViolationInfo::FAULT_OUT_OF_BOUNDS,
      v.faultPC = __builtin_return_address(0),
      v.faultPtr = RealDest,
      v.CWE = CWEBufferOverflow,
      v.PoolHandle = 0,
      v.dbgMetaData = NULL,
      v.SourceFile = SourceFile,
      v.objStart = RealObjStart,
      v.objLen = (unsigned)((const char*)ObjEnd - (const char*)ObjStart + 1),
      v.lineNo = lineno;
    
    ReportMemoryViolation(&v);
  }

  return const_cast<void*>(Dest);

}

#if 0
/// UNUSED CODE

/*
 * Function: exactcheck()
 *
 * Description:
 *  Determine whether the index is within the specified bounds.
 *
 * Inputs:
 *  a      - The index given as an integer.
 *  b      - The index of one past the end of the array.
 *  result - The pointer that is being checked.
 *
 * Return value:
 *  If there is no bounds check violation, the result pointer is returned.
 *  This forces the call to exactcheck() to be considered live (previous
 *  optimizations dead-code eliminated it).
 */
void *
exactcheck (int a, int b, void * result) {
  if ((0 > a) || (a >= b)) {
    ReportExactCheck ((unsigned)0xbeefdeed,
                      (uintptr_t)result,
                      (uintptr_t)__builtin_return_address(0),
                      (unsigned)a,
                      (unsigned)0,
                      "<Unknown>",
                      0);
#if 0
    poolcheckfail ("exact check failed", (a), (void*)__builtin_return_address(0));
    poolcheckfail ("exact check failed", (b), (void*)__builtin_return_address(0));
#endif
  }
  return result;
}


void *
exactcheck3(signed char *base, signed char *result, signed char * end) {
  if ((result < base) || (result > end )) {
    ReportExactCheck ((unsigned)0xbeefbeef,
                      (uintptr_t)result,
                      (uintptr_t)__builtin_return_address(0),
                      (uintptr_t)base,
                      (unsigned)(end-base),
                      "<Unknown>",
                      0);
  }
  return result;
}


void *
exactcheck2a (signed char *base, signed char *result, unsigned size) {
  if (result >= base + size ) {
    ReportExactCheck ((unsigned)0xbeefdeed,
                      (uintptr_t)result,
                      (uintptr_t)__builtin_return_address(0),
                      (uintptr_t)base,
                      (unsigned)size,
                      "<Unknown>",
                      0);
  }
  return result;
}

#endif
