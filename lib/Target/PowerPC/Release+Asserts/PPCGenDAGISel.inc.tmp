/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the PPC target                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*105 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::MEMBARRIER),// ->80
/*40*/      OPC_RecordNode,   // #0 = 'membarrier' chained node
/*41*/      OPC_MoveChild, 1,
/*43*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*46*/      OPC_CheckType, MVT::i32,
/*48*/      OPC_MoveParent,
/*49*/      OPC_MoveChild, 2,
/*51*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*54*/      OPC_MoveParent,
/*55*/      OPC_MoveChild, 3,
/*57*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*60*/      OPC_MoveParent,
/*61*/      OPC_MoveChild, 4,
/*63*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*66*/      OPC_MoveParent,
/*67*/      OPC_MoveChild, 5,
/*69*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*72*/      OPC_MoveParent,
/*73*/      OPC_EmitMergeInputChains1_0,
/*74*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (SYNC)
          /*SwitchOpcode*/ 73|128,4/*585*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->669
/*84*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*85*/      OPC_MoveChild, 1,
/*87*/      OPC_Scope, 17, /*->106*/ // 21 children in Scope
/*89*/        OPC_CheckInteger, 65|128,12/*1601*/, 
/*92*/        OPC_MoveParent,
/*93*/        OPC_RecordChild2, // #1 = $dst
/*94*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*97*/        OPC_EmitMergeInputChains1_0,
/*98*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1601:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*106*/     /*Scope*/ 17, /*->124*/
/*107*/       OPC_CheckInteger, 66|128,12/*1602*/, 
/*110*/       OPC_MoveParent,
/*111*/       OPC_RecordChild2, // #1 = $dst
/*112*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*115*/       OPC_EmitMergeInputChains1_0,
/*116*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1602:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*124*/     /*Scope*/ 17, /*->142*/
/*125*/       OPC_CheckInteger, 67|128,12/*1603*/, 
/*128*/       OPC_MoveParent,
/*129*/       OPC_RecordChild2, // #1 = $dst
/*130*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*133*/       OPC_EmitMergeInputChains1_0,
/*134*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1603:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*142*/     /*Scope*/ 17, /*->160*/
/*143*/       OPC_CheckInteger, 68|128,12/*1604*/, 
/*146*/       OPC_MoveParent,
/*147*/       OPC_RecordChild2, // #1 = $dst
/*148*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*151*/       OPC_EmitMergeInputChains1_0,
/*152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1604:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*160*/     /*Scope*/ 17, /*->178*/
/*161*/       OPC_CheckInteger, 69|128,12/*1605*/, 
/*164*/       OPC_MoveParent,
/*165*/       OPC_RecordChild2, // #1 = $dst
/*166*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*169*/       OPC_EmitMergeInputChains1_0,
/*170*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1605:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*178*/     /*Scope*/ 17, /*->196*/
/*179*/       OPC_CheckInteger, 70|128,12/*1606*/, 
/*182*/       OPC_MoveParent,
/*183*/       OPC_RecordChild2, // #1 = $dst
/*184*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*187*/       OPC_EmitMergeInputChains1_0,
/*188*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1606:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*196*/     /*Scope*/ 17, /*->214*/
/*197*/       OPC_CheckInteger, 71|128,12/*1607*/, 
/*200*/       OPC_MoveParent,
/*201*/       OPC_RecordChild2, // #1 = $dst
/*202*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*205*/       OPC_EmitMergeInputChains1_0,
/*206*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1607:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*214*/     /*Scope*/ 17, /*->232*/
/*215*/       OPC_CheckInteger, 72|128,12/*1608*/, 
/*218*/       OPC_MoveParent,
/*219*/       OPC_RecordChild2, // #1 = $dst
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1608:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*232*/     /*Scope*/ 19, /*->252*/
/*233*/       OPC_CheckInteger, 61|128,11/*1469*/, 
/*236*/       OPC_MoveParent,
/*237*/       OPC_RecordChild2, // #1 = $rS
/*238*/       OPC_RecordChild3, // #2 = $dst
/*239*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*242*/       OPC_EmitMergeInputChains1_0,
/*243*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1469:iPTR, VRRC:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
/*252*/     /*Scope*/ 19, /*->272*/
/*253*/       OPC_CheckInteger, 62|128,11/*1470*/, 
/*256*/       OPC_MoveParent,
/*257*/       OPC_RecordChild2, // #1 = $rS
/*258*/       OPC_RecordChild3, // #2 = $dst
/*259*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*262*/       OPC_EmitMergeInputChains1_0,
/*263*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1470:iPTR, VRRC:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
/*272*/     /*Scope*/ 19, /*->292*/
/*273*/       OPC_CheckInteger, 63|128,11/*1471*/, 
/*276*/       OPC_MoveParent,
/*277*/       OPC_RecordChild2, // #1 = $rS
/*278*/       OPC_RecordChild3, // #2 = $dst
/*279*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*282*/       OPC_EmitMergeInputChains1_0,
/*283*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1471:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*292*/     /*Scope*/ 19, /*->312*/
/*293*/       OPC_CheckInteger, 64|128,11/*1472*/, 
/*296*/       OPC_MoveParent,
/*297*/       OPC_RecordChild2, // #1 = $rS
/*298*/       OPC_RecordChild3, // #2 = $dst
/*299*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*302*/       OPC_EmitMergeInputChains1_0,
/*303*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1472:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*312*/     /*Scope*/ 19, /*->332*/
/*313*/       OPC_CheckInteger, 65|128,11/*1473*/, 
/*316*/       OPC_MoveParent,
/*317*/       OPC_RecordChild2, // #1 = $rS
/*318*/       OPC_RecordChild3, // #2 = $dst
/*319*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*322*/       OPC_EmitMergeInputChains1_0,
/*323*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1473:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*332*/     /*Scope*/ 33, /*->366*/
/*333*/       OPC_CheckInteger, 46|128,11/*1454*/, 
/*336*/       OPC_MoveParent,
/*337*/       OPC_RecordChild2, // #1 = $STRM
/*338*/       OPC_MoveChild, 2,
/*340*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*343*/       OPC_MoveParent,
/*344*/       OPC_EmitMergeInputChains1_0,
/*345*/       OPC_EmitInteger, MVT::i32, 0, 
/*348*/       OPC_EmitConvertToTarget, 1,
/*350*/       OPC_EmitInteger, MVT::i32, 0, 
/*353*/       OPC_EmitInteger, MVT::i32, 0, 
/*356*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1454:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*366*/     /*Scope*/ 61, /*->428*/
/*367*/       OPC_CheckInteger, 48|128,11/*1456*/, 
/*370*/       OPC_MoveParent,
/*371*/       OPC_RecordChild2, // #1 = $rA
/*372*/       OPC_Scope, 26, /*->400*/ // 2 children in Scope
/*374*/         OPC_CheckChild2Type, MVT::i32,
/*376*/         OPC_RecordChild3, // #2 = $rB
/*377*/         OPC_RecordChild4, // #3 = $STRM
/*378*/         OPC_MoveChild, 4,
/*380*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*383*/         OPC_MoveParent,
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1456:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*400*/       /*Scope*/ 26, /*->427*/
/*401*/         OPC_CheckChild2Type, MVT::i64,
/*403*/         OPC_RecordChild3, // #2 = $rB
/*404*/         OPC_RecordChild4, // #3 = $STRM
/*405*/         OPC_MoveChild, 4,
/*407*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*410*/         OPC_MoveParent,
/*411*/         OPC_EmitMergeInputChains1_0,
/*412*/         OPC_EmitInteger, MVT::i32, 0, 
/*415*/         OPC_EmitConvertToTarget, 3,
/*417*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1456:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*427*/       0, /*End of Scope*/
/*428*/     /*Scope*/ 61, /*->490*/
/*429*/       OPC_CheckInteger, 51|128,11/*1459*/, 
/*432*/       OPC_MoveParent,
/*433*/       OPC_RecordChild2, // #1 = $rA
/*434*/       OPC_Scope, 26, /*->462*/ // 2 children in Scope
/*436*/         OPC_CheckChild2Type, MVT::i32,
/*438*/         OPC_RecordChild3, // #2 = $rB
/*439*/         OPC_RecordChild4, // #3 = $STRM
/*440*/         OPC_MoveChild, 4,
/*442*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*445*/         OPC_MoveParent,
/*446*/         OPC_EmitMergeInputChains1_0,
/*447*/         OPC_EmitInteger, MVT::i32, 1, 
/*450*/         OPC_EmitConvertToTarget, 3,
/*452*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1459:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*462*/       /*Scope*/ 26, /*->489*/
/*463*/         OPC_CheckChild2Type, MVT::i64,
/*465*/         OPC_RecordChild3, // #2 = $rB
/*466*/         OPC_RecordChild4, // #3 = $STRM
/*467*/         OPC_MoveChild, 4,
/*469*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*472*/         OPC_MoveParent,
/*473*/         OPC_EmitMergeInputChains1_0,
/*474*/         OPC_EmitInteger, MVT::i32, 1, 
/*477*/         OPC_EmitConvertToTarget, 3,
/*479*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1459:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*489*/       0, /*End of Scope*/
/*490*/     /*Scope*/ 61, /*->552*/
/*491*/       OPC_CheckInteger, 49|128,11/*1457*/, 
/*494*/       OPC_MoveParent,
/*495*/       OPC_RecordChild2, // #1 = $rA
/*496*/       OPC_Scope, 26, /*->524*/ // 2 children in Scope
/*498*/         OPC_CheckChild2Type, MVT::i32,
/*500*/         OPC_RecordChild3, // #2 = $rB
/*501*/         OPC_RecordChild4, // #3 = $STRM
/*502*/         OPC_MoveChild, 4,
/*504*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*507*/         OPC_MoveParent,
/*508*/         OPC_EmitMergeInputChains1_0,
/*509*/         OPC_EmitInteger, MVT::i32, 0, 
/*512*/         OPC_EmitConvertToTarget, 3,
/*514*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1457:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*524*/       /*Scope*/ 26, /*->551*/
/*525*/         OPC_CheckChild2Type, MVT::i64,
/*527*/         OPC_RecordChild3, // #2 = $rB
/*528*/         OPC_RecordChild4, // #3 = $STRM
/*529*/         OPC_MoveChild, 4,
/*531*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*534*/         OPC_MoveParent,
/*535*/         OPC_EmitMergeInputChains1_0,
/*536*/         OPC_EmitInteger, MVT::i32, 0, 
/*539*/         OPC_EmitConvertToTarget, 3,
/*541*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1457:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*551*/       0, /*End of Scope*/
/*552*/     /*Scope*/ 61, /*->614*/
/*553*/       OPC_CheckInteger, 50|128,11/*1458*/, 
/*556*/       OPC_MoveParent,
/*557*/       OPC_RecordChild2, // #1 = $rA
/*558*/       OPC_Scope, 26, /*->586*/ // 2 children in Scope
/*560*/         OPC_CheckChild2Type, MVT::i32,
/*562*/         OPC_RecordChild3, // #2 = $rB
/*563*/         OPC_RecordChild4, // #3 = $STRM
/*564*/         OPC_MoveChild, 4,
/*566*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/         OPC_MoveParent,
/*570*/         OPC_EmitMergeInputChains1_0,
/*571*/         OPC_EmitInteger, MVT::i32, 1, 
/*574*/         OPC_EmitConvertToTarget, 3,
/*576*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1458:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*586*/       /*Scope*/ 26, /*->613*/
/*587*/         OPC_CheckChild2Type, MVT::i64,
/*589*/         OPC_RecordChild3, // #2 = $rB
/*590*/         OPC_RecordChild4, // #3 = $STRM
/*591*/         OPC_MoveChild, 4,
/*593*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*596*/         OPC_MoveParent,
/*597*/         OPC_EmitMergeInputChains1_0,
/*598*/         OPC_EmitInteger, MVT::i32, 1, 
/*601*/         OPC_EmitConvertToTarget, 3,
/*603*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1458:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*613*/       0, /*End of Scope*/
/*614*/     /*Scope*/ 11, /*->626*/
/*615*/       OPC_CheckInteger, 73|128,12/*1609*/, 
/*618*/       OPC_MoveParent,
/*619*/       OPC_EmitMergeInputChains1_0,
/*620*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1609:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*626*/     /*Scope*/ 13, /*->640*/
/*627*/       OPC_CheckInteger, 60|128,11/*1468*/, 
/*630*/       OPC_MoveParent,
/*631*/       OPC_RecordChild2, // #1 = $vB
/*632*/       OPC_EmitMergeInputChains1_0,
/*633*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1468:iPTR, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR VRRC:v4i32:$vB)
/*640*/     /*Scope*/ 27, /*->668*/
/*641*/       OPC_CheckInteger, 47|128,11/*1455*/, 
/*644*/       OPC_MoveParent,
/*645*/       OPC_EmitMergeInputChains1_0,
/*646*/       OPC_EmitInteger, MVT::i32, 1, 
/*649*/       OPC_EmitInteger, MVT::i32, 0, 
/*652*/       OPC_EmitInteger, MVT::i32, 0, 
/*655*/       OPC_EmitInteger, MVT::i32, 0, 
/*658*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1455:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*668*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 59|128,4/*571*/,  TARGET_VAL(ISD::ADD),// ->1244
/*673*/     OPC_Scope, 49|128,1/*177*/, /*->853*/ // 3 children in Scope
/*676*/       OPC_RecordChild0, // #0 = $rA
/*677*/       OPC_MoveChild, 1,
/*679*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->707
/*683*/         OPC_RecordChild0, // #1 = $sym
/*684*/         OPC_MoveChild, 0,
/*686*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*689*/         OPC_MoveParent,
/*690*/         OPC_MoveChild, 1,
/*692*/         OPC_CheckInteger, 0, 
/*694*/         OPC_MoveParent,
/*695*/         OPC_MoveParent,
/*696*/         OPC_CheckType, MVT::i32,
/*698*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->852
/*711*/         OPC_RecordChild0, // #1 = $g
/*712*/         OPC_MoveChild, 0,
/*714*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->749
/*718*/           OPC_MoveParent,
/*719*/           OPC_MoveChild, 1,
/*721*/           OPC_CheckInteger, 0, 
/*723*/           OPC_MoveParent,
/*724*/           OPC_MoveParent,
/*725*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->737
/*728*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->748
/*739*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->783
/*752*/           OPC_MoveParent,
/*753*/           OPC_MoveChild, 1,
/*755*/           OPC_CheckInteger, 0, 
/*757*/           OPC_MoveParent,
/*758*/           OPC_MoveParent,
/*759*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->771
/*762*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->782
/*773*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->817
/*786*/           OPC_MoveParent,
/*787*/           OPC_MoveChild, 1,
/*789*/           OPC_CheckInteger, 0, 
/*791*/           OPC_MoveParent,
/*792*/           OPC_MoveParent,
/*793*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->805
/*796*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->816
/*807*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->851
/*820*/           OPC_MoveParent,
/*821*/           OPC_MoveChild, 1,
/*823*/           OPC_CheckInteger, 0, 
/*825*/           OPC_MoveParent,
/*826*/           OPC_MoveParent,
/*827*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->839
/*830*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->850
/*841*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*853*/     /*Scope*/ 53|128,1/*181*/, /*->1036*/
/*855*/       OPC_MoveChild, 0,
/*857*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->886
/*861*/         OPC_RecordChild0, // #0 = $sym
/*862*/         OPC_MoveChild, 0,
/*864*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*867*/         OPC_MoveParent,
/*868*/         OPC_MoveChild, 1,
/*870*/         OPC_CheckInteger, 0, 
/*872*/         OPC_MoveParent,
/*873*/         OPC_MoveParent,
/*874*/         OPC_RecordChild1, // #1 = $rA
/*875*/         OPC_CheckType, MVT::i32,
/*877*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), GPRC:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1035
/*890*/         OPC_RecordChild0, // #0 = $g
/*891*/         OPC_MoveChild, 0,
/*893*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->929
/*897*/           OPC_MoveParent,
/*898*/           OPC_MoveChild, 1,
/*900*/           OPC_CheckInteger, 0, 
/*902*/           OPC_MoveParent,
/*903*/           OPC_MoveParent,
/*904*/           OPC_RecordChild1, // #1 = $in
/*905*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->917
/*908*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->928
/*919*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->964
/*932*/           OPC_MoveParent,
/*933*/           OPC_MoveChild, 1,
/*935*/           OPC_CheckInteger, 0, 
/*937*/           OPC_MoveParent,
/*938*/           OPC_MoveParent,
/*939*/           OPC_RecordChild1, // #1 = $in
/*940*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->952
/*943*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->963
/*954*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->999
/*967*/           OPC_MoveParent,
/*968*/           OPC_MoveChild, 1,
/*970*/           OPC_CheckInteger, 0, 
/*972*/           OPC_MoveParent,
/*973*/           OPC_MoveParent,
/*974*/           OPC_RecordChild1, // #1 = $in
/*975*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->987
/*978*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->998
/*989*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1034
/*1002*/          OPC_MoveParent,
/*1003*/          OPC_MoveChild, 1,
/*1005*/          OPC_CheckInteger, 0, 
/*1007*/          OPC_MoveParent,
/*1008*/          OPC_MoveParent,
/*1009*/          OPC_RecordChild1, // #1 = $in
/*1010*/          OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1022
/*1013*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1033
/*1024*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1036*/    /*Scope*/ 77|128,1/*205*/, /*->1243*/
/*1038*/      OPC_RecordChild0, // #0 = $rA
/*1039*/      OPC_RecordChild1, // #1 = $imm
/*1040*/      OPC_Scope, 11|128,1/*139*/, /*->1182*/ // 6 children in Scope
/*1043*/        OPC_MoveChild, 1,
/*1045*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1048*/        OPC_Scope, 29, /*->1079*/ // 5 children in Scope
/*1050*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1052*/          OPC_MoveParent,
/*1053*/          OPC_CheckType, MVT::i32,
/*1055*/          OPC_EmitConvertToTarget, 1,
/*1057*/          OPC_Scope, 9, /*->1068*/ // 2 children in Scope
/*1059*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1068*/          /*Scope*/ 9, /*->1078*/
/*1069*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIL), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDIL:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1078*/          0, /*End of Scope*/
/*1079*/        /*Scope*/ 19, /*->1099*/
/*1080*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1082*/          OPC_MoveParent,
/*1083*/          OPC_CheckType, MVT::i32,
/*1085*/          OPC_EmitConvertToTarget, 1,
/*1087*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1090*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS:i32 GPRC:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1099*/        /*Scope*/ 29, /*->1129*/
/*1100*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1102*/          OPC_MoveParent,
/*1103*/          OPC_CheckType, MVT::i64,
/*1105*/          OPC_EmitConvertToTarget, 1,
/*1107*/          OPC_Scope, 9, /*->1118*/ // 2 children in Scope
/*1109*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1118*/          /*Scope*/ 9, /*->1128*/
/*1119*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8L), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8L:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1128*/          0, /*End of Scope*/
/*1129*/        /*Scope*/ 19, /*->1149*/
/*1130*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1132*/          OPC_MoveParent,
/*1133*/          OPC_CheckType, MVT::i64,
/*1135*/          OPC_EmitConvertToTarget, 1,
/*1137*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1140*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS8:i64 G8RC:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1149*/        /*Scope*/ 31, /*->1181*/
/*1150*/          OPC_MoveParent,
/*1151*/          OPC_CheckType, MVT::i32,
/*1153*/          OPC_EmitConvertToTarget, 1,
/*1155*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1158*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1167*/          OPC_EmitConvertToTarget, 1,
/*1169*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1172*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1181*/        0, /*End of Scope*/
/*1182*/      /*Scope*/ 11, /*->1194*/
/*1183*/        OPC_CheckType, MVT::i32,
/*1185*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADD4:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*1194*/      /*Scope*/ 11, /*->1206*/
/*1195*/        OPC_CheckType, MVT::i64,
/*1197*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADD8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*1206*/      /*Scope*/ 11, /*->1218*/
/*1207*/        OPC_CheckType, MVT::v16i8,
/*1209*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                // Dst: (VADDUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*1218*/      /*Scope*/ 11, /*->1230*/
/*1219*/        OPC_CheckType, MVT::v8i16,
/*1221*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                // Dst: (VADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*1230*/      /*Scope*/ 11, /*->1242*/
/*1231*/        OPC_CheckType, MVT::v4i32,
/*1233*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VADDUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*1242*/      0, /*End of Scope*/
/*1243*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 72|128,6/*840*/,  TARGET_VAL(ISD::LOAD),// ->2088
/*1248*/    OPC_RecordMemRef,
/*1249*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1250*/    OPC_RecordChild1, // #1 = $src
/*1251*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1253*/    OPC_Scope, 19, /*->1274*/ // 18 children in Scope
/*1255*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1257*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1259*/      OPC_CheckType, MVT::i32,
/*1261*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1264*/      OPC_EmitMergeInputChains1_0,
/*1265*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1274*/    /*Scope*/ 19, /*->1294*/
/*1275*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1277*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1279*/      OPC_CheckType, MVT::i32,
/*1281*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1284*/      OPC_EmitMergeInputChains1_0,
/*1285*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1294*/    /*Scope*/ 19, /*->1314*/
/*1295*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1297*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1299*/      OPC_CheckType, MVT::i32,
/*1301*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1304*/      OPC_EmitMergeInputChains1_0,
/*1305*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1314*/    /*Scope*/ 17, /*->1332*/
/*1315*/      OPC_CheckPredicate, 8, // Predicate_load
/*1317*/      OPC_CheckType, MVT::i32,
/*1319*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1322*/      OPC_EmitMergeInputChains1_0,
/*1323*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1332*/    /*Scope*/ 19, /*->1352*/
/*1333*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1335*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1337*/      OPC_CheckType, MVT::i32,
/*1339*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1342*/      OPC_EmitMergeInputChains1_0,
/*1343*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1352*/    /*Scope*/ 19, /*->1372*/
/*1353*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1355*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1357*/      OPC_CheckType, MVT::i32,
/*1359*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1362*/      OPC_EmitMergeInputChains1_0,
/*1363*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1372*/    /*Scope*/ 19, /*->1392*/
/*1373*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1375*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1377*/      OPC_CheckType, MVT::i32,
/*1379*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1382*/      OPC_EmitMergeInputChains1_0,
/*1383*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1392*/    /*Scope*/ 17, /*->1410*/
/*1393*/      OPC_CheckPredicate, 8, // Predicate_load
/*1395*/      OPC_CheckType, MVT::i32,
/*1397*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1400*/      OPC_EmitMergeInputChains1_0,
/*1401*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1410*/    /*Scope*/ 36, /*->1447*/
/*1411*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1413*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1415*/      OPC_CheckType, MVT::i32,
/*1417*/      OPC_Scope, 13, /*->1432*/ // 2 children in Scope
/*1419*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1422*/        OPC_EmitMergeInputChains1_0,
/*1423*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1432*/      /*Scope*/ 13, /*->1446*/
/*1433*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1436*/        OPC_EmitMergeInputChains1_0,
/*1437*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1446*/      0, /*End of Scope*/
/*1447*/    /*Scope*/ 105, /*->1553*/
/*1448*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1450*/      OPC_CheckType, MVT::i32,
/*1452*/      OPC_Scope, 32, /*->1486*/ // 3 children in Scope
/*1454*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1456*/        OPC_Scope, 13, /*->1471*/ // 2 children in Scope
/*1458*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1461*/          OPC_EmitMergeInputChains1_0,
/*1462*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1471*/        /*Scope*/ 13, /*->1485*/
/*1472*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1475*/          OPC_EmitMergeInputChains1_0,
/*1476*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1485*/        0, /*End of Scope*/
/*1486*/      /*Scope*/ 32, /*->1519*/
/*1487*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1489*/        OPC_Scope, 13, /*->1504*/ // 2 children in Scope
/*1491*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1494*/          OPC_EmitMergeInputChains1_0,
/*1495*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1504*/        /*Scope*/ 13, /*->1518*/
/*1505*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1508*/          OPC_EmitMergeInputChains1_0,
/*1509*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1518*/        0, /*End of Scope*/
/*1519*/      /*Scope*/ 32, /*->1552*/
/*1520*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1522*/        OPC_Scope, 13, /*->1537*/ // 2 children in Scope
/*1524*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1527*/          OPC_EmitMergeInputChains1_0,
/*1528*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1537*/        /*Scope*/ 13, /*->1551*/
/*1538*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1541*/          OPC_EmitMergeInputChains1_0,
/*1542*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1551*/        0, /*End of Scope*/
/*1552*/      0, /*End of Scope*/
/*1553*/    /*Scope*/ 70, /*->1624*/
/*1554*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1556*/      OPC_CheckType, MVT::i64,
/*1558*/      OPC_Scope, 15, /*->1575*/ // 4 children in Scope
/*1560*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1562*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1565*/        OPC_EmitMergeInputChains1_0,
/*1566*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1575*/      /*Scope*/ 15, /*->1591*/
/*1576*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1578*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1581*/        OPC_EmitMergeInputChains1_0,
/*1582*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1591*/      /*Scope*/ 15, /*->1607*/
/*1592*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1594*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1597*/        OPC_EmitMergeInputChains1_0,
/*1598*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1607*/      /*Scope*/ 15, /*->1623*/
/*1608*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1610*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1613*/        OPC_EmitMergeInputChains1_0,
/*1614*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1623*/      0, /*End of Scope*/
/*1624*/    /*Scope*/ 102, /*->1727*/
/*1625*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1627*/      OPC_CheckType, MVT::i64,
/*1629*/      OPC_Scope, 15, /*->1646*/ // 6 children in Scope
/*1631*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1633*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1636*/        OPC_EmitMergeInputChains1_0,
/*1637*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1646*/      /*Scope*/ 15, /*->1662*/
/*1647*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1649*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1652*/        OPC_EmitMergeInputChains1_0,
/*1653*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1662*/      /*Scope*/ 15, /*->1678*/
/*1663*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1665*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1668*/        OPC_EmitMergeInputChains1_0,
/*1669*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1678*/      /*Scope*/ 15, /*->1694*/
/*1679*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1681*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1684*/        OPC_EmitMergeInputChains1_0,
/*1685*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1694*/      /*Scope*/ 15, /*->1710*/
/*1695*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1697*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1700*/        OPC_EmitMergeInputChains1_0,
/*1701*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1710*/      /*Scope*/ 15, /*->1726*/
/*1711*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1713*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1716*/        OPC_EmitMergeInputChains1_0,
/*1717*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1726*/      0, /*End of Scope*/
/*1727*/    /*Scope*/ 34, /*->1762*/
/*1728*/      OPC_CheckPredicate, 8, // Predicate_load
/*1730*/      OPC_CheckType, MVT::i64,
/*1732*/      OPC_Scope, 13, /*->1747*/ // 2 children in Scope
/*1734*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1737*/        OPC_EmitMergeInputChains1_0,
/*1738*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1747*/      /*Scope*/ 13, /*->1761*/
/*1748*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1751*/        OPC_EmitMergeInputChains1_0,
/*1752*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1761*/      0, /*End of Scope*/
/*1762*/    /*Scope*/ 36, /*->1799*/
/*1763*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1765*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1767*/      OPC_CheckType, MVT::i64,
/*1769*/      OPC_Scope, 13, /*->1784*/ // 2 children in Scope
/*1771*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1774*/        OPC_EmitMergeInputChains1_0,
/*1775*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1784*/      /*Scope*/ 13, /*->1798*/
/*1785*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1788*/        OPC_EmitMergeInputChains1_0,
/*1789*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1798*/      0, /*End of Scope*/
/*1799*/    /*Scope*/ 10|128,1/*138*/, /*->1939*/
/*1801*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1803*/      OPC_CheckType, MVT::i64,
/*1805*/      OPC_Scope, 32, /*->1839*/ // 4 children in Scope
/*1807*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1809*/        OPC_Scope, 13, /*->1824*/ // 2 children in Scope
/*1811*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1814*/          OPC_EmitMergeInputChains1_0,
/*1815*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1824*/        /*Scope*/ 13, /*->1838*/
/*1825*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1828*/          OPC_EmitMergeInputChains1_0,
/*1829*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1838*/        0, /*End of Scope*/
/*1839*/      /*Scope*/ 32, /*->1872*/
/*1840*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1842*/        OPC_Scope, 13, /*->1857*/ // 2 children in Scope
/*1844*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1847*/          OPC_EmitMergeInputChains1_0,
/*1848*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1857*/        /*Scope*/ 13, /*->1871*/
/*1858*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1861*/          OPC_EmitMergeInputChains1_0,
/*1862*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1871*/        0, /*End of Scope*/
/*1872*/      /*Scope*/ 32, /*->1905*/
/*1873*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1875*/        OPC_Scope, 13, /*->1890*/ // 2 children in Scope
/*1877*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1880*/          OPC_EmitMergeInputChains1_0,
/*1881*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1890*/        /*Scope*/ 13, /*->1904*/
/*1891*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1894*/          OPC_EmitMergeInputChains1_0,
/*1895*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1904*/        0, /*End of Scope*/
/*1905*/      /*Scope*/ 32, /*->1938*/
/*1906*/        OPC_CheckPredicate, 16, // Predicate_extloadi32
/*1908*/        OPC_Scope, 13, /*->1923*/ // 2 children in Scope
/*1910*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1913*/          OPC_EmitMergeInputChains1_0,
/*1914*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1923*/        /*Scope*/ 13, /*->1937*/
/*1924*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1927*/          OPC_EmitMergeInputChains1_0,
/*1928*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1937*/        0, /*End of Scope*/
/*1938*/      0, /*End of Scope*/
/*1939*/    /*Scope*/ 68, /*->2008*/
/*1940*/      OPC_CheckPredicate, 8, // Predicate_load
/*1942*/      OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->1975
/*1945*/        OPC_Scope, 13, /*->1960*/ // 2 children in Scope
/*1947*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1950*/          OPC_EmitMergeInputChains1_0,
/*1951*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*1960*/        /*Scope*/ 13, /*->1974*/
/*1961*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1964*/          OPC_EmitMergeInputChains1_0,
/*1965*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*1974*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2007
/*1977*/        OPC_Scope, 13, /*->1992*/ // 2 children in Scope
/*1979*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1982*/          OPC_EmitMergeInputChains1_0,
/*1983*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*1992*/        /*Scope*/ 13, /*->2006*/
/*1993*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1996*/          OPC_EmitMergeInputChains1_0,
/*1997*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2006*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2008*/    /*Scope*/ 60, /*->2069*/
/*2009*/      OPC_CheckPredicate, 10, // Predicate_extload
/*2011*/      OPC_CheckPredicate, 17, // Predicate_extloadf32
/*2013*/      OPC_CheckType, MVT::f64,
/*2015*/      OPC_Scope, 25, /*->2042*/ // 2 children in Scope
/*2017*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2020*/        OPC_EmitMergeInputChains1_0,
/*2021*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2030*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2033*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:f64)
/*2042*/      /*Scope*/ 25, /*->2068*/
/*2043*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2046*/        OPC_EmitMergeInputChains1_0,
/*2047*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2056*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2059*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:f64)
/*2068*/      0, /*End of Scope*/
/*2069*/    /*Scope*/ 17, /*->2087*/
/*2070*/      OPC_CheckPredicate, 8, // Predicate_load
/*2072*/      OPC_CheckType, MVT::v4i32,
/*2074*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2077*/      OPC_EmitMergeInputChains1_0,
/*2078*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2087*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,5/*732*/,  TARGET_VAL(ISD::STORE),// ->2824
/*2092*/    OPC_RecordMemRef,
/*2093*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2094*/    OPC_RecordChild1, // #1 = $rS
/*2095*/    OPC_Scope, 112|128,1/*240*/, /*->2338*/ // 5 children in Scope
/*2098*/      OPC_CheckChild1Type, MVT::i32,
/*2100*/      OPC_RecordChild2, // #2 = $src
/*2101*/      OPC_Scope, 110, /*->2213*/ // 2 children in Scope
/*2103*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2105*/        OPC_Scope, 36, /*->2143*/ // 4 children in Scope
/*2107*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2109*/          OPC_Scope, 15, /*->2126*/ // 2 children in Scope
/*2111*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2113*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2116*/            OPC_EmitMergeInputChains1_0,
/*2117*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB GPRC:i32:$rS, iaddr:iPTR:$src)
/*2126*/          /*Scope*/ 15, /*->2142*/
/*2127*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2129*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2132*/            OPC_EmitMergeInputChains1_0,
/*2133*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH GPRC:i32:$rS, iaddr:iPTR:$src)
/*2142*/          0, /*End of Scope*/
/*2143*/        /*Scope*/ 15, /*->2159*/
/*2144*/          OPC_CheckPredicate, 22, // Predicate_store
/*2146*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2149*/          OPC_EmitMergeInputChains1_0,
/*2150*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW GPRC:i32:$rS, iaddr:iPTR:$src)
/*2159*/        /*Scope*/ 36, /*->2196*/
/*2160*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2162*/          OPC_Scope, 15, /*->2179*/ // 2 children in Scope
/*2164*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2166*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2169*/            OPC_EmitMergeInputChains1_0,
/*2170*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2179*/          /*Scope*/ 15, /*->2195*/
/*2180*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2182*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2185*/            OPC_EmitMergeInputChains1_0,
/*2186*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2195*/          0, /*End of Scope*/
/*2196*/        /*Scope*/ 15, /*->2212*/
/*2197*/          OPC_CheckPredicate, 22, // Predicate_store
/*2199*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2202*/          OPC_EmitMergeInputChains1_0,
/*2203*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2212*/        0, /*End of Scope*/
/*2213*/      /*Scope*/ 123, /*->2337*/
/*2214*/        OPC_RecordChild3, // #3 = $ptroff
/*2215*/        OPC_Scope, 40, /*->2257*/ // 4 children in Scope
/*2217*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2219*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2221*/          OPC_Scope, 16, /*->2239*/ // 2 children in Scope
/*2223*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2225*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2228*/            OPC_EmitMergeInputChains1_0,
/*2229*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2239*/          /*Scope*/ 16, /*->2256*/
/*2240*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2242*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2245*/            OPC_EmitMergeInputChains1_0,
/*2246*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2256*/          0, /*End of Scope*/
/*2257*/        /*Scope*/ 18, /*->2276*/
/*2258*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2260*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2262*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2265*/          OPC_EmitMergeInputChains1_0,
/*2266*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2276*/        /*Scope*/ 40, /*->2317*/
/*2277*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2279*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2281*/          OPC_Scope, 16, /*->2299*/ // 2 children in Scope
/*2283*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2285*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2288*/            OPC_EmitMergeInputChains1_0,
/*2289*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2299*/          /*Scope*/ 16, /*->2316*/
/*2300*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2302*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2305*/            OPC_EmitMergeInputChains1_0,
/*2306*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2316*/          0, /*End of Scope*/
/*2317*/        /*Scope*/ 18, /*->2336*/
/*2318*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2320*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2322*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2325*/          OPC_EmitMergeInputChains1_0,
/*2326*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWUX:iPTR GPRC:i32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2336*/        0, /*End of Scope*/
/*2337*/      0, /*End of Scope*/
/*2338*/    /*Scope*/ 78, /*->2417*/
/*2339*/      OPC_CheckChild1Type, MVT::f32,
/*2341*/      OPC_RecordChild2, // #2 = $dst
/*2342*/      OPC_Scope, 34, /*->2378*/ // 2 children in Scope
/*2344*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2346*/        OPC_CheckPredicate, 22, // Predicate_store
/*2348*/        OPC_Scope, 13, /*->2363*/ // 2 children in Scope
/*2350*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2353*/          OPC_EmitMergeInputChains1_0,
/*2354*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS F4RC:f32:$rS, iaddr:iPTR:$dst)
/*2363*/        /*Scope*/ 13, /*->2377*/
/*2364*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2367*/          OPC_EmitMergeInputChains1_0,
/*2368*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX F4RC:f32:$frS, xaddr:iPTR:$dst)
/*2377*/        0, /*End of Scope*/
/*2378*/      /*Scope*/ 37, /*->2416*/
/*2379*/        OPC_RecordChild3, // #3 = $ptroff
/*2380*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2382*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2384*/        OPC_Scope, 14, /*->2400*/ // 2 children in Scope
/*2386*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2389*/          OPC_EmitMergeInputChains1_0,
/*2390*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR F4RC:f32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2400*/        /*Scope*/ 14, /*->2415*/
/*2401*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2404*/          OPC_EmitMergeInputChains1_0,
/*2405*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSUX:iPTR F4RC:f32:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2415*/        0, /*End of Scope*/
/*2416*/      0, /*End of Scope*/
/*2417*/    /*Scope*/ 78, /*->2496*/
/*2418*/      OPC_CheckChild1Type, MVT::f64,
/*2420*/      OPC_RecordChild2, // #2 = $dst
/*2421*/      OPC_Scope, 34, /*->2457*/ // 2 children in Scope
/*2423*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2425*/        OPC_CheckPredicate, 22, // Predicate_store
/*2427*/        OPC_Scope, 13, /*->2442*/ // 2 children in Scope
/*2429*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2432*/          OPC_EmitMergeInputChains1_0,
/*2433*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD F8RC:f64:$rS, iaddr:iPTR:$dst)
/*2442*/        /*Scope*/ 13, /*->2456*/
/*2443*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2446*/          OPC_EmitMergeInputChains1_0,
/*2447*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX F8RC:f64:$frS, xaddr:iPTR:$dst)
/*2456*/        0, /*End of Scope*/
/*2457*/      /*Scope*/ 37, /*->2495*/
/*2458*/        OPC_RecordChild3, // #3 = $ptroff
/*2459*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2461*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2463*/        OPC_Scope, 14, /*->2479*/ // 2 children in Scope
/*2465*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2468*/          OPC_EmitMergeInputChains1_0,
/*2469*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR F8RC:f64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2479*/        /*Scope*/ 14, /*->2494*/
/*2480*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2483*/          OPC_EmitMergeInputChains1_0,
/*2484*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDUX:iPTR F8RC:f64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2494*/        0, /*End of Scope*/
/*2495*/      0, /*End of Scope*/
/*2496*/    /*Scope*/ 20, /*->2517*/
/*2497*/      OPC_CheckChild1Type, MVT::v4i32,
/*2499*/      OPC_RecordChild2, // #2 = $dst
/*2500*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2502*/      OPC_CheckPredicate, 22, // Predicate_store
/*2504*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2507*/      OPC_EmitMergeInputChains1_0,
/*2508*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st VRRC:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*2517*/    /*Scope*/ 48|128,2/*304*/, /*->2823*/
/*2519*/      OPC_CheckChild1Type, MVT::i64,
/*2521*/      OPC_RecordChild2, // #2 = $src
/*2522*/      OPC_Scope, 10|128,1/*138*/, /*->2663*/ // 2 children in Scope
/*2525*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2527*/        OPC_Scope, 100, /*->2629*/ // 2 children in Scope
/*2529*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2531*/          OPC_Scope, 15, /*->2548*/ // 6 children in Scope
/*2533*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2535*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2538*/            OPC_EmitMergeInputChains1_0,
/*2539*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2548*/          /*Scope*/ 15, /*->2564*/
/*2549*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2551*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2554*/            OPC_EmitMergeInputChains1_0,
/*2555*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2564*/          /*Scope*/ 15, /*->2580*/
/*2565*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2567*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2570*/            OPC_EmitMergeInputChains1_0,
/*2571*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2580*/          /*Scope*/ 15, /*->2596*/
/*2581*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2583*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2586*/            OPC_EmitMergeInputChains1_0,
/*2587*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2596*/          /*Scope*/ 15, /*->2612*/
/*2597*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2599*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2602*/            OPC_EmitMergeInputChains1_0,
/*2603*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2612*/          /*Scope*/ 15, /*->2628*/
/*2613*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2615*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2618*/            OPC_EmitMergeInputChains1_0,
/*2619*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2628*/          0, /*End of Scope*/
/*2629*/        /*Scope*/ 32, /*->2662*/
/*2630*/          OPC_CheckPredicate, 22, // Predicate_store
/*2632*/          OPC_Scope, 13, /*->2647*/ // 2 children in Scope
/*2634*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2637*/            OPC_EmitMergeInputChains1_0,
/*2638*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STD G8RC:i64:$rS, ixaddr:iPTR:$dst)
/*2647*/          /*Scope*/ 13, /*->2661*/
/*2648*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2651*/            OPC_EmitMergeInputChains1_0,
/*2652*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2661*/          0, /*End of Scope*/
/*2662*/        0, /*End of Scope*/
/*2663*/      /*Scope*/ 29|128,1/*157*/, /*->2822*/
/*2665*/        OPC_RecordChild3, // #3 = $ptroff
/*2666*/        OPC_Scope, 57, /*->2725*/ // 4 children in Scope
/*2668*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2670*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2672*/          OPC_Scope, 16, /*->2690*/ // 3 children in Scope
/*2674*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2676*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2679*/            OPC_EmitMergeInputChains1_0,
/*2680*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2690*/          /*Scope*/ 16, /*->2707*/
/*2691*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2693*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2696*/            OPC_EmitMergeInputChains1_0,
/*2697*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2707*/          /*Scope*/ 16, /*->2724*/
/*2708*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti32
/*2710*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2713*/            OPC_EmitMergeInputChains1_0,
/*2714*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2724*/          0, /*End of Scope*/
/*2725*/        /*Scope*/ 18, /*->2744*/
/*2726*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2728*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2730*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2733*/          OPC_EmitMergeInputChains1_0,
/*2734*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2744*/        /*Scope*/ 57, /*->2802*/
/*2745*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2747*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2749*/          OPC_Scope, 16, /*->2767*/ // 3 children in Scope
/*2751*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2753*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2756*/            OPC_EmitMergeInputChains1_0,
/*2757*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2767*/          /*Scope*/ 16, /*->2784*/
/*2768*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2770*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2773*/            OPC_EmitMergeInputChains1_0,
/*2774*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2784*/          /*Scope*/ 16, /*->2801*/
/*2785*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti32
/*2787*/            OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2790*/            OPC_EmitMergeInputChains1_0,
/*2791*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWUX8:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2801*/          0, /*End of Scope*/
/*2802*/        /*Scope*/ 18, /*->2821*/
/*2803*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2805*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2807*/          OPC_CheckComplexPat, /*CP*/5, /*#*/3, // SelectAddrIdxOffs:$ptroff #4
/*2810*/          OPC_EmitMergeInputChains1_0,
/*2811*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, xaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDUX:iPTR G8RC:i64:$rS, xaddroff:iPTR:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2821*/        0, /*End of Scope*/
/*2822*/      0, /*End of Scope*/
/*2823*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2910
/*2827*/    OPC_RecordMemRef,
/*2828*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2829*/    OPC_RecordChild1, // #1 = $ptr
/*2830*/    OPC_RecordChild2, // #2 = $incr
/*2831*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2890
/*2834*/      OPC_Scope, 17, /*->2853*/ // 3 children in Scope
/*2836*/        OPC_CheckPredicate, 31, // Predicate_atomic_load_add_8
/*2838*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2841*/        OPC_EmitMergeInputChains1_0,
/*2842*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2853*/      /*Scope*/ 17, /*->2871*/
/*2854*/        OPC_CheckPredicate, 32, // Predicate_atomic_load_add_16
/*2856*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2859*/        OPC_EmitMergeInputChains1_0,
/*2860*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2871*/      /*Scope*/ 17, /*->2889*/
/*2872*/        OPC_CheckPredicate, 33, // Predicate_atomic_load_add_32
/*2874*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2877*/        OPC_EmitMergeInputChains1_0,
/*2878*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2889*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2909
/*2892*/      OPC_CheckPredicate, 34, // Predicate_atomic_load_add_64
/*2894*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2897*/      OPC_EmitMergeInputChains1_0,
/*2898*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->2996
/*2913*/    OPC_RecordMemRef,
/*2914*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2915*/    OPC_RecordChild1, // #1 = $ptr
/*2916*/    OPC_RecordChild2, // #2 = $incr
/*2917*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2976
/*2920*/      OPC_Scope, 17, /*->2939*/ // 3 children in Scope
/*2922*/        OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_8
/*2924*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2927*/        OPC_EmitMergeInputChains1_0,
/*2928*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2939*/      /*Scope*/ 17, /*->2957*/
/*2940*/        OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_16
/*2942*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2945*/        OPC_EmitMergeInputChains1_0,
/*2946*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2957*/      /*Scope*/ 17, /*->2975*/
/*2958*/        OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_32
/*2960*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2963*/        OPC_EmitMergeInputChains1_0,
/*2964*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2975*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2995
/*2978*/      OPC_CheckPredicate, 38, // Predicate_atomic_load_sub_64
/*2980*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2983*/      OPC_EmitMergeInputChains1_0,
/*2984*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3082
/*2999*/    OPC_RecordMemRef,
/*3000*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3001*/    OPC_RecordChild1, // #1 = $ptr
/*3002*/    OPC_RecordChild2, // #2 = $incr
/*3003*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3062
/*3006*/      OPC_Scope, 17, /*->3025*/ // 3 children in Scope
/*3008*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_and_8
/*3010*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3013*/        OPC_EmitMergeInputChains1_0,
/*3014*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3025*/      /*Scope*/ 17, /*->3043*/
/*3026*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_and_16
/*3028*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3031*/        OPC_EmitMergeInputChains1_0,
/*3032*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3043*/      /*Scope*/ 17, /*->3061*/
/*3044*/        OPC_CheckPredicate, 41, // Predicate_atomic_load_and_32
/*3046*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3049*/        OPC_EmitMergeInputChains1_0,
/*3050*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3061*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3081
/*3064*/      OPC_CheckPredicate, 42, // Predicate_atomic_load_and_64
/*3066*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3069*/      OPC_EmitMergeInputChains1_0,
/*3070*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3168
/*3085*/    OPC_RecordMemRef,
/*3086*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3087*/    OPC_RecordChild1, // #1 = $ptr
/*3088*/    OPC_RecordChild2, // #2 = $incr
/*3089*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3148
/*3092*/      OPC_Scope, 17, /*->3111*/ // 3 children in Scope
/*3094*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_or_8
/*3096*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3099*/        OPC_EmitMergeInputChains1_0,
/*3100*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3111*/      /*Scope*/ 17, /*->3129*/
/*3112*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_or_16
/*3114*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3117*/        OPC_EmitMergeInputChains1_0,
/*3118*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3129*/      /*Scope*/ 17, /*->3147*/
/*3130*/        OPC_CheckPredicate, 45, // Predicate_atomic_load_or_32
/*3132*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3135*/        OPC_EmitMergeInputChains1_0,
/*3136*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3147*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3167
/*3150*/      OPC_CheckPredicate, 46, // Predicate_atomic_load_or_64
/*3152*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3155*/      OPC_EmitMergeInputChains1_0,
/*3156*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3254
/*3171*/    OPC_RecordMemRef,
/*3172*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3173*/    OPC_RecordChild1, // #1 = $ptr
/*3174*/    OPC_RecordChild2, // #2 = $incr
/*3175*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3234
/*3178*/      OPC_Scope, 17, /*->3197*/ // 3 children in Scope
/*3180*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_8
/*3182*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3185*/        OPC_EmitMergeInputChains1_0,
/*3186*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3197*/      /*Scope*/ 17, /*->3215*/
/*3198*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_16
/*3200*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3203*/        OPC_EmitMergeInputChains1_0,
/*3204*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3215*/      /*Scope*/ 17, /*->3233*/
/*3216*/        OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_32
/*3218*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3221*/        OPC_EmitMergeInputChains1_0,
/*3222*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3233*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3253
/*3236*/      OPC_CheckPredicate, 50, // Predicate_atomic_load_xor_64
/*3238*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3241*/      OPC_EmitMergeInputChains1_0,
/*3242*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3340
/*3257*/    OPC_RecordMemRef,
/*3258*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3259*/    OPC_RecordChild1, // #1 = $ptr
/*3260*/    OPC_RecordChild2, // #2 = $incr
/*3261*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3320
/*3264*/      OPC_Scope, 17, /*->3283*/ // 3 children in Scope
/*3266*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_8
/*3268*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3271*/        OPC_EmitMergeInputChains1_0,
/*3272*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3283*/      /*Scope*/ 17, /*->3301*/
/*3284*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_16
/*3286*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3289*/        OPC_EmitMergeInputChains1_0,
/*3290*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3301*/      /*Scope*/ 17, /*->3319*/
/*3302*/        OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_32
/*3304*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3307*/        OPC_EmitMergeInputChains1_0,
/*3308*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3319*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3339
/*3322*/      OPC_CheckPredicate, 54, // Predicate_atomic_load_nand_64
/*3324*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3327*/      OPC_EmitMergeInputChains1_0,
/*3328*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3431
/*3343*/    OPC_RecordMemRef,
/*3344*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3345*/    OPC_RecordChild1, // #1 = $ptr
/*3346*/    OPC_RecordChild2, // #2 = $old
/*3347*/    OPC_RecordChild3, // #3 = $new
/*3348*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3410
/*3351*/      OPC_Scope, 18, /*->3371*/ // 3 children in Scope
/*3353*/        OPC_CheckPredicate, 55, // Predicate_atomic_cmp_swap_8
/*3355*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3358*/        OPC_EmitMergeInputChains1_0,
/*3359*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3371*/      /*Scope*/ 18, /*->3390*/
/*3372*/        OPC_CheckPredicate, 56, // Predicate_atomic_cmp_swap_16
/*3374*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3377*/        OPC_EmitMergeInputChains1_0,
/*3378*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3390*/      /*Scope*/ 18, /*->3409*/
/*3391*/        OPC_CheckPredicate, 57, // Predicate_atomic_cmp_swap_32
/*3393*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3396*/        OPC_EmitMergeInputChains1_0,
/*3397*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3409*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3430
/*3412*/      OPC_CheckPredicate, 58, // Predicate_atomic_cmp_swap_64
/*3414*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3417*/      OPC_EmitMergeInputChains1_0,
/*3418*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3517
/*3434*/    OPC_RecordMemRef,
/*3435*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3436*/    OPC_RecordChild1, // #1 = $ptr
/*3437*/    OPC_RecordChild2, // #2 = $new
/*3438*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3497
/*3441*/      OPC_Scope, 17, /*->3460*/ // 3 children in Scope
/*3443*/        OPC_CheckPredicate, 59, // Predicate_atomic_swap_8
/*3445*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3448*/        OPC_EmitMergeInputChains1_0,
/*3449*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3460*/      /*Scope*/ 17, /*->3478*/
/*3461*/        OPC_CheckPredicate, 60, // Predicate_atomic_swap_16
/*3463*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3466*/        OPC_EmitMergeInputChains1_0,
/*3467*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3478*/      /*Scope*/ 17, /*->3496*/
/*3479*/        OPC_CheckPredicate, 61, // Predicate_atomic_swap_32
/*3481*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3484*/        OPC_EmitMergeInputChains1_0,
/*3485*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3496*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3516
/*3499*/      OPC_CheckPredicate, 62, // Predicate_atomic_swap_64
/*3501*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3504*/      OPC_EmitMergeInputChains1_0,
/*3505*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3568
/*3520*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3521*/    OPC_RecordChild1, // #1 = $negsize
/*3522*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3545
/*3525*/      OPC_CheckChild1Type, MVT::i32,
/*3527*/      OPC_RecordChild2, // #2 = $fpsi
/*3528*/      OPC_CheckChild2Type, MVT::iPTR,
/*3530*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3533*/      OPC_EmitMergeInputChains1_0,
/*3534*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3567
/*3547*/      OPC_CheckChild1Type, MVT::i64,
/*3549*/      OPC_RecordChild2, // #2 = $fpsi
/*3550*/      OPC_CheckChild2Type, MVT::iPTR,
/*3552*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3555*/      OPC_EmitMergeInputChains1_0,
/*3556*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3605
/*3571*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3572*/    OPC_RecordChild1, // #1 = $src
/*3573*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3589
/*3576*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3579*/      OPC_EmitMergeInputChains1_0,
/*3580*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3604
/*3591*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3594*/      OPC_EmitMergeInputChains1_0,
/*3595*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->3648
/*3608*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*3609*/    OPC_RecordChild1, // #1 = $rS
/*3610*/    OPC_Scope, 17, /*->3629*/ // 2 children in Scope
/*3612*/      OPC_CheckChild1Type, MVT::i32,
/*3614*/      OPC_RecordChild2, // #2 = $dst
/*3615*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3618*/      OPC_EmitMergeInputChains1_0,
/*3619*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx GPRC:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3629*/    /*Scope*/ 17, /*->3647*/
/*3630*/      OPC_CheckChild1Type, MVT::i64,
/*3632*/      OPC_RecordChild2, // #2 = $dst
/*3633*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3636*/      OPC_EmitMergeInputChains1_0,
/*3637*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx G8RC:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 G8RC:i64:$rS, xoaddr:iPTR:$dst)
/*3647*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::LBRX),// ->3691
/*3651*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3652*/    OPC_RecordChild1, // #1 = $src
/*3653*/    OPC_MoveChild, 2,
/*3655*/    OPC_Scope, 16, /*->3673*/ // 2 children in Scope
/*3657*/      OPC_CheckValueType, MVT::i16,
/*3659*/      OPC_MoveParent,
/*3660*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3663*/      OPC_EmitMergeInputChains1_0,
/*3664*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3673*/    /*Scope*/ 16, /*->3690*/
/*3674*/      OPC_CheckValueType, MVT::i32,
/*3676*/      OPC_MoveParent,
/*3677*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3680*/      OPC_EmitMergeInputChains1_0,
/*3681*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3690*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(PPCISD::STBRX),// ->3735
/*3694*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*3695*/    OPC_RecordChild1, // #1 = $rS
/*3696*/    OPC_RecordChild2, // #2 = $dst
/*3697*/    OPC_MoveChild, 3,
/*3699*/    OPC_Scope, 16, /*->3717*/ // 2 children in Scope
/*3701*/      OPC_CheckValueType, MVT::i16,
/*3703*/      OPC_MoveParent,
/*3704*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3707*/      OPC_EmitMergeInputChains1_0,
/*3708*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
              // Dst: (STHBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3717*/    /*Scope*/ 16, /*->3734*/
/*3718*/      OPC_CheckValueType, MVT::i32,
/*3720*/      OPC_MoveParent,
/*3721*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3724*/      OPC_EmitMergeInputChains1_0,
/*3725*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
              // Dst: (STWBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3734*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->3754
/*3738*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*3739*/    OPC_RecordChild1, // #1 = $frS
/*3740*/    OPC_RecordChild2, // #2 = $dst
/*3741*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3744*/    OPC_EmitMergeInputChains1_0,
/*3745*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx F8RC:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX F8RC:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3794
/*3757*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3758*/    OPC_CaptureGlueInput,
/*3759*/    OPC_RecordChild1, // #1 = $src
/*3760*/    OPC_CheckChild1Type, MVT::iPTR,
/*3762*/    OPC_CheckType, MVT::i64,
/*3764*/    OPC_Scope, 13, /*->3779*/ // 2 children in Scope
/*3766*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3769*/      OPC_EmitMergeInputChains1_0,
/*3770*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3779*/    /*Scope*/ 13, /*->3793*/
/*3780*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3783*/      OPC_EmitMergeInputChains1_0,
/*3784*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3793*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::STD_32),// ->3832
/*3797*/    OPC_RecordNode,   // #0 = 'PPCstd_32' chained node
/*3798*/    OPC_RecordChild1, // #1 = $rT
/*3799*/    OPC_CheckChild1Type, MVT::i32,
/*3801*/    OPC_RecordChild2, // #2 = $dst
/*3802*/    OPC_Scope, 13, /*->3817*/ // 2 children in Scope
/*3804*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*3807*/      OPC_EmitMergeInputChains1_0,
/*3808*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STD_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, ixaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STD_32 GPRC:i32:$rT, ixaddr:iPTR:$dst)
/*3817*/    /*Scope*/ 13, /*->3831*/
/*3818*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*3821*/      OPC_EmitMergeInputChains1_0,
/*3822*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDX_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, xaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDX_32 GPRC:i32:$rT, xaddr:iPTR:$dst)
/*3831*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,4/*596*/,  TARGET_VAL(ISD::XOR),// ->4432
/*3836*/    OPC_Scope, 39|128,1/*167*/, /*->4006*/ // 8 children in Scope
/*3839*/      OPC_MoveChild, 0,
/*3841*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3886
/*3845*/        OPC_RecordChild0, // #0 = $rS
/*3846*/        OPC_RecordChild1, // #1 = $rB
/*3847*/        OPC_MoveParent,
/*3848*/        OPC_MoveChild, 1,
/*3850*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3861*/        OPC_MoveParent,
/*3862*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3874
/*3865*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3885
/*3876*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3930
/*3889*/        OPC_RecordChild0, // #0 = $rS
/*3890*/        OPC_RecordChild1, // #1 = $rB
/*3891*/        OPC_MoveParent,
/*3892*/        OPC_MoveChild, 1,
/*3894*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3905*/        OPC_MoveParent,
/*3906*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3918
/*3909*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3929
/*3920*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->4005
/*3933*/        OPC_RecordChild0, // #0 = $rS
/*3934*/        OPC_Scope, 40, /*->3976*/ // 2 children in Scope
/*3936*/          OPC_RecordChild1, // #1 = $rB
/*3937*/          OPC_MoveParent,
/*3938*/          OPC_MoveChild, 1,
/*3940*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3951*/          OPC_MoveParent,
/*3952*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3964
/*3955*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3975
/*3966*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                  0, // EndSwitchType
/*3976*/        /*Scope*/ 27, /*->4004*/
/*3977*/          OPC_MoveChild, 1,
/*3979*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3990*/          OPC_MoveParent,
/*3991*/          OPC_MoveParent,
/*3992*/          OPC_RecordChild1, // #1 = $rB
/*3993*/          OPC_CheckType, MVT::i32,
/*3995*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, -1:i32), GPRC:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4004*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*4006*/    /*Scope*/ 33, /*->4040*/
/*4007*/      OPC_RecordChild0, // #0 = $rB
/*4008*/      OPC_MoveChild, 1,
/*4010*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4013*/      OPC_RecordChild0, // #1 = $rS
/*4014*/      OPC_MoveChild, 1,
/*4016*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4027*/      OPC_MoveParent,
/*4028*/      OPC_MoveParent,
/*4029*/      OPC_CheckType, MVT::i32,
/*4031*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 GPRC:i32:$rB, (xor:i32 GPRC:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4040*/    /*Scope*/ 33, /*->4074*/
/*4041*/      OPC_MoveChild, 0,
/*4043*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4046*/      OPC_RecordChild0, // #0 = $rS
/*4047*/      OPC_MoveChild, 1,
/*4049*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4060*/      OPC_MoveParent,
/*4061*/      OPC_MoveParent,
/*4062*/      OPC_RecordChild1, // #1 = $rB
/*4063*/      OPC_CheckType, MVT::i64,
/*4065*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, -1:i64), G8RC:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4074*/    /*Scope*/ 84|128,1/*212*/, /*->4288*/
/*4076*/      OPC_RecordChild0, // #0 = $rB
/*4077*/      OPC_Scope, 59, /*->4138*/ // 2 children in Scope
/*4079*/        OPC_MoveChild, 1,
/*4081*/        OPC_Scope, 30, /*->4113*/ // 2 children in Scope
/*4083*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4086*/          OPC_RecordChild0, // #1 = $rS
/*4087*/          OPC_MoveChild, 1,
/*4089*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4100*/          OPC_MoveParent,
/*4101*/          OPC_MoveParent,
/*4102*/          OPC_CheckType, MVT::i64,
/*4104*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 G8RC:i64:$rB, (xor:i64 G8RC:i64:$rS, -1:i64)) - Complexity = 11
                  // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4113*/        /*Scope*/ 23, /*->4137*/
/*4114*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4125*/          OPC_MoveParent,
/*4126*/          OPC_CheckType, MVT::i32,
/*4128*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (xor:i32 GPRC:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 GPRC:i32:$in, GPRC:i32:$in)
/*4137*/        0, /*End of Scope*/
/*4138*/      /*Scope*/ 19|128,1/*147*/, /*->4287*/
/*4140*/        OPC_RecordChild1, // #1 = $src2
/*4141*/        OPC_Scope, 119, /*->4262*/ // 3 children in Scope
/*4143*/          OPC_MoveChild, 1,
/*4145*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4148*/          OPC_Scope, 19, /*->4169*/ // 5 children in Scope
/*4150*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4152*/            OPC_MoveParent,
/*4153*/            OPC_CheckType, MVT::i32,
/*4155*/            OPC_EmitConvertToTarget, 1,
/*4157*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4160*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4169*/          /*Scope*/ 19, /*->4189*/
/*4170*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4172*/            OPC_MoveParent,
/*4173*/            OPC_CheckType, MVT::i32,
/*4175*/            OPC_EmitConvertToTarget, 1,
/*4177*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4180*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4189*/          /*Scope*/ 19, /*->4209*/
/*4190*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4192*/            OPC_MoveParent,
/*4193*/            OPC_CheckType, MVT::i64,
/*4195*/            OPC_EmitConvertToTarget, 1,
/*4197*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4200*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4209*/          /*Scope*/ 19, /*->4229*/
/*4210*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4212*/            OPC_MoveParent,
/*4213*/            OPC_CheckType, MVT::i64,
/*4215*/            OPC_EmitConvertToTarget, 1,
/*4217*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4220*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4229*/          /*Scope*/ 31, /*->4261*/
/*4230*/            OPC_MoveParent,
/*4231*/            OPC_CheckType, MVT::i32,
/*4233*/            OPC_EmitConvertToTarget, 1,
/*4235*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4238*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4247*/            OPC_EmitConvertToTarget, 1,
/*4249*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4252*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4261*/          0, /*End of Scope*/
/*4262*/        /*Scope*/ 11, /*->4274*/
/*4263*/          OPC_CheckType, MVT::i32,
/*4265*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4274*/        /*Scope*/ 11, /*->4286*/
/*4275*/          OPC_CheckType, MVT::i64,
/*4277*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4286*/        0, /*End of Scope*/
/*4287*/      0, /*End of Scope*/
/*4288*/    /*Scope*/ 70, /*->4359*/
/*4289*/      OPC_MoveChild, 0,
/*4291*/      OPC_SwitchOpcode /*2 cases */, 30,  TARGET_VAL(ISD::OR),// ->4325
/*4295*/        OPC_RecordChild0, // #0 = $vA
/*4296*/        OPC_RecordChild1, // #1 = $vB
/*4297*/        OPC_MoveParent,
/*4298*/        OPC_MoveChild, 1,
/*4300*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4303*/        OPC_MoveChild, 0,
/*4305*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4308*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4310*/        OPC_CheckType, MVT::v16i8,
/*4312*/        OPC_MoveParent,
/*4313*/        OPC_MoveParent,
/*4314*/        OPC_CheckType, MVT::v4i32,
/*4316*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BITCAST),// ->4358
/*4328*/        OPC_MoveChild, 0,
/*4330*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4333*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4335*/        OPC_CheckType, MVT::v16i8,
/*4337*/        OPC_MoveParent,
/*4338*/        OPC_MoveParent,
/*4339*/        OPC_MoveChild, 1,
/*4341*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4344*/        OPC_RecordChild0, // #0 = $vA
/*4345*/        OPC_RecordChild1, // #1 = $vB
/*4346*/        OPC_MoveParent,
/*4347*/        OPC_CheckType, MVT::v4i32,
/*4349*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              0, // EndSwitchOpcode
/*4359*/    /*Scope*/ 28, /*->4388*/
/*4360*/      OPC_RecordChild0, // #0 = $vA
/*4361*/      OPC_MoveChild, 1,
/*4363*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4366*/      OPC_MoveChild, 0,
/*4368*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4371*/      OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4373*/      OPC_CheckType, MVT::v16i8,
/*4375*/      OPC_MoveParent,
/*4376*/      OPC_MoveParent,
/*4377*/      OPC_CheckType, MVT::v4i32,
/*4379*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4388*/    /*Scope*/ 28, /*->4417*/
/*4389*/      OPC_MoveChild, 0,
/*4391*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4394*/      OPC_MoveChild, 0,
/*4396*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4399*/      OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4401*/      OPC_CheckType, MVT::v16i8,
/*4403*/      OPC_MoveParent,
/*4404*/      OPC_MoveParent,
/*4405*/      OPC_RecordChild1, // #0 = $vA
/*4406*/      OPC_CheckType, MVT::v4i32,
/*4408*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4417*/    /*Scope*/ 13, /*->4431*/
/*4418*/      OPC_RecordChild0, // #0 = $vA
/*4419*/      OPC_RecordChild1, // #1 = $vB
/*4420*/      OPC_CheckType, MVT::v4i32,
/*4422*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VXOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4431*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31|128,3/*415*/,  TARGET_VAL(ISD::AND),// ->4851
/*4436*/    OPC_Scope, 46, /*->4484*/ // 5 children in Scope
/*4438*/      OPC_RecordChild0, // #0 = $rS
/*4439*/      OPC_MoveChild, 1,
/*4441*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4444*/      OPC_RecordChild0, // #1 = $rB
/*4445*/      OPC_MoveChild, 1,
/*4447*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4458*/      OPC_MoveParent,
/*4459*/      OPC_MoveParent,
/*4460*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4472
/*4463*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4483
/*4474*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4484*/    /*Scope*/ 88, /*->4573*/
/*4485*/      OPC_MoveChild, 0,
/*4487*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4532
/*4491*/        OPC_RecordChild0, // #0 = $rB
/*4492*/        OPC_MoveChild, 1,
/*4494*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4505*/        OPC_MoveParent,
/*4506*/        OPC_MoveParent,
/*4507*/        OPC_RecordChild1, // #1 = $rS
/*4508*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4520
/*4511*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4531
/*4522*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4572
/*4535*/        OPC_RecordChild0, // #0 = $in
/*4536*/        OPC_RecordChild1, // #1 = $sh
/*4537*/        OPC_CheckChild1Type, MVT::i32,
/*4539*/        OPC_MoveParent,
/*4540*/        OPC_RecordChild1, // #2 = $imm
/*4541*/        OPC_MoveChild, 1,
/*4543*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4546*/        OPC_CheckPredicate, 66, // Predicate_maskimm32
/*4548*/        OPC_MoveParent,
/*4549*/        OPC_CheckType, MVT::i32,
/*4551*/        OPC_EmitConvertToTarget, 2,
/*4553*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4556*/        OPC_EmitConvertToTarget, 2,
/*4558*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4561*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4573*/    /*Scope*/ 63|128,1/*191*/, /*->4766*/
/*4575*/      OPC_RecordChild0, // #0 = $src1
/*4576*/      OPC_Scope, 119, /*->4697*/ // 2 children in Scope
/*4578*/        OPC_RecordChild1, // #1 = $src2
/*4579*/        OPC_Scope, 91, /*->4672*/ // 3 children in Scope
/*4581*/          OPC_MoveChild, 1,
/*4583*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4586*/          OPC_Scope, 20, /*->4608*/ // 4 children in Scope
/*4588*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4590*/            OPC_MoveParent,
/*4591*/            OPC_CheckType, MVT::i32,
/*4593*/            OPC_EmitConvertToTarget, 1,
/*4595*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4598*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo:i32:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4608*/          /*Scope*/ 20, /*->4629*/
/*4609*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4611*/            OPC_MoveParent,
/*4612*/            OPC_CheckType, MVT::i32,
/*4614*/            OPC_EmitConvertToTarget, 1,
/*4616*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4619*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo:i32:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4629*/          /*Scope*/ 20, /*->4650*/
/*4630*/            OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4632*/            OPC_MoveParent,
/*4633*/            OPC_CheckType, MVT::i64,
/*4635*/            OPC_EmitConvertToTarget, 1,
/*4637*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4640*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo8:i64:i32 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4650*/          /*Scope*/ 20, /*->4671*/
/*4651*/            OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4653*/            OPC_MoveParent,
/*4654*/            OPC_CheckType, MVT::i64,
/*4656*/            OPC_EmitConvertToTarget, 1,
/*4658*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4661*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo8:i64:i32 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4671*/          0, /*End of Scope*/
/*4672*/        /*Scope*/ 11, /*->4684*/
/*4673*/          OPC_CheckType, MVT::i32,
/*4675*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (AND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4684*/        /*Scope*/ 11, /*->4696*/
/*4685*/          OPC_CheckType, MVT::i64,
/*4687*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (AND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4696*/        0, /*End of Scope*/
/*4697*/      /*Scope*/ 67, /*->4765*/
/*4698*/        OPC_MoveChild, 1,
/*4700*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4703*/        OPC_Scope, 29, /*->4734*/ // 2 children in Scope
/*4705*/          OPC_RecordChild0, // #1 = $vB
/*4706*/          OPC_MoveChild, 1,
/*4708*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4711*/          OPC_MoveChild, 0,
/*4713*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4716*/          OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4718*/          OPC_CheckType, MVT::v16i8,
/*4720*/          OPC_MoveParent,
/*4721*/          OPC_MoveParent,
/*4722*/          OPC_MoveParent,
/*4723*/          OPC_CheckType, MVT::v4i32,
/*4725*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4734*/        /*Scope*/ 29, /*->4764*/
/*4735*/          OPC_MoveChild, 0,
/*4737*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4740*/          OPC_MoveChild, 0,
/*4742*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4745*/          OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4747*/          OPC_CheckType, MVT::v16i8,
/*4749*/          OPC_MoveParent,
/*4750*/          OPC_MoveParent,
/*4751*/          OPC_RecordChild1, // #1 = $vB
/*4752*/          OPC_MoveParent,
/*4753*/          OPC_CheckType, MVT::v4i32,
/*4755*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB)) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4764*/        0, /*End of Scope*/
/*4765*/      0, /*End of Scope*/
/*4766*/    /*Scope*/ 69, /*->4836*/
/*4767*/      OPC_MoveChild, 0,
/*4769*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4772*/      OPC_Scope, 30, /*->4804*/ // 2 children in Scope
/*4774*/        OPC_RecordChild0, // #0 = $vB
/*4775*/        OPC_MoveChild, 1,
/*4777*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4780*/        OPC_MoveChild, 0,
/*4782*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4785*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4787*/        OPC_CheckType, MVT::v16i8,
/*4789*/        OPC_MoveParent,
/*4790*/        OPC_MoveParent,
/*4791*/        OPC_MoveParent,
/*4792*/        OPC_RecordChild1, // #1 = $vA
/*4793*/        OPC_CheckType, MVT::v4i32,
/*4795*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4804*/      /*Scope*/ 30, /*->4835*/
/*4805*/        OPC_MoveChild, 0,
/*4807*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4810*/        OPC_MoveChild, 0,
/*4812*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4815*/        OPC_CheckPredicate, 65, // Predicate_immAllOnesV
/*4817*/        OPC_CheckType, MVT::v16i8,
/*4819*/        OPC_MoveParent,
/*4820*/        OPC_MoveParent,
/*4821*/        OPC_RecordChild1, // #0 = $vB
/*4822*/        OPC_MoveParent,
/*4823*/        OPC_RecordChild1, // #1 = $vA
/*4824*/        OPC_CheckType, MVT::v4i32,
/*4826*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4835*/      0, /*End of Scope*/
/*4836*/    /*Scope*/ 13, /*->4850*/
/*4837*/      OPC_RecordChild0, // #0 = $vA
/*4838*/      OPC_RecordChild1, // #1 = $vB
/*4839*/      OPC_CheckType, MVT::v4i32,
/*4841*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VAND:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4850*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 2|128,2/*258*/,  TARGET_VAL(ISD::OR),// ->5113
/*4855*/    OPC_Scope, 46, /*->4903*/ // 3 children in Scope
/*4857*/      OPC_RecordChild0, // #0 = $rS
/*4858*/      OPC_MoveChild, 1,
/*4860*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4863*/      OPC_RecordChild0, // #1 = $rB
/*4864*/      OPC_MoveChild, 1,
/*4866*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4877*/      OPC_MoveParent,
/*4878*/      OPC_MoveParent,
/*4879*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4891
/*4882*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4902
/*4893*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4903*/    /*Scope*/ 46, /*->4950*/
/*4904*/      OPC_MoveChild, 0,
/*4906*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4909*/      OPC_RecordChild0, // #0 = $rB
/*4910*/      OPC_MoveChild, 1,
/*4912*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4923*/      OPC_MoveParent,
/*4924*/      OPC_MoveParent,
/*4925*/      OPC_RecordChild1, // #1 = $rS
/*4926*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4938
/*4929*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4949
/*4940*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4950*/    /*Scope*/ 32|128,1/*160*/, /*->5112*/
/*4952*/      OPC_RecordChild0, // #0 = $src1
/*4953*/      OPC_RecordChild1, // #1 = $src2
/*4954*/      OPC_Scope, 119, /*->5075*/ // 4 children in Scope
/*4956*/        OPC_MoveChild, 1,
/*4958*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4961*/        OPC_Scope, 19, /*->4982*/ // 5 children in Scope
/*4963*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*4965*/          OPC_MoveParent,
/*4966*/          OPC_CheckType, MVT::i32,
/*4968*/          OPC_EmitConvertToTarget, 1,
/*4970*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4973*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4982*/        /*Scope*/ 19, /*->5002*/
/*4983*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*4985*/          OPC_MoveParent,
/*4986*/          OPC_CheckType, MVT::i32,
/*4988*/          OPC_EmitConvertToTarget, 1,
/*4990*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4993*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*5002*/        /*Scope*/ 19, /*->5022*/
/*5003*/          OPC_CheckPredicate, 63, // Predicate_immZExt16
/*5005*/          OPC_MoveParent,
/*5006*/          OPC_CheckType, MVT::i64,
/*5008*/          OPC_EmitConvertToTarget, 1,
/*5010*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5013*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*5022*/        /*Scope*/ 19, /*->5042*/
/*5023*/          OPC_CheckPredicate, 64, // Predicate_imm16ShiftedZExt
/*5025*/          OPC_MoveParent,
/*5026*/          OPC_CheckType, MVT::i64,
/*5028*/          OPC_EmitConvertToTarget, 1,
/*5030*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*5033*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*5042*/        /*Scope*/ 31, /*->5074*/
/*5043*/          OPC_MoveParent,
/*5044*/          OPC_CheckType, MVT::i32,
/*5046*/          OPC_EmitConvertToTarget, 1,
/*5048*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5051*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5060*/          OPC_EmitConvertToTarget, 1,
/*5062*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5065*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5074*/        0, /*End of Scope*/
/*5075*/      /*Scope*/ 11, /*->5087*/
/*5076*/        OPC_CheckType, MVT::i32,
/*5078*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*5087*/      /*Scope*/ 11, /*->5099*/
/*5088*/        OPC_CheckType, MVT::i64,
/*5090*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*5099*/      /*Scope*/ 11, /*->5111*/
/*5100*/        OPC_CheckType, MVT::v4i32,
/*5102*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5111*/      0, /*End of Scope*/
/*5112*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5275
/*5117*/    OPC_RecordChild0, // #0 = $in
/*5118*/    OPC_MoveChild, 0,
/*5120*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5152
/*5124*/      OPC_MoveParent,
/*5125*/      OPC_MoveChild, 1,
/*5127*/      OPC_CheckInteger, 0, 
/*5129*/      OPC_MoveParent,
/*5130*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5141
/*5133*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5151
/*5143*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5183
/*5155*/      OPC_MoveParent,
/*5156*/      OPC_MoveChild, 1,
/*5158*/      OPC_CheckInteger, 0, 
/*5160*/      OPC_MoveParent,
/*5161*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5172
/*5164*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5182
/*5174*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5214
/*5186*/      OPC_MoveParent,
/*5187*/      OPC_MoveChild, 1,
/*5189*/      OPC_CheckInteger, 0, 
/*5191*/      OPC_MoveParent,
/*5192*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5203
/*5195*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5213
/*5205*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5245
/*5217*/      OPC_MoveParent,
/*5218*/      OPC_MoveChild, 1,
/*5220*/      OPC_CheckInteger, 0, 
/*5222*/      OPC_MoveParent,
/*5223*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5234
/*5226*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5244
/*5236*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5274
/*5248*/      OPC_MoveParent,
/*5249*/      OPC_RecordChild1, // #1 = $in
/*5250*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5262
/*5253*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, GPRC:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5273
/*5264*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, G8RC:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5437
/*5279*/    OPC_RecordChild0, // #0 = $in
/*5280*/    OPC_MoveChild, 0,
/*5282*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5314
/*5286*/      OPC_MoveParent,
/*5287*/      OPC_MoveChild, 1,
/*5289*/      OPC_CheckInteger, 0, 
/*5291*/      OPC_MoveParent,
/*5292*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5303
/*5295*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5313
/*5305*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5345
/*5317*/      OPC_MoveParent,
/*5318*/      OPC_MoveChild, 1,
/*5320*/      OPC_CheckInteger, 0, 
/*5322*/      OPC_MoveParent,
/*5323*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5334
/*5326*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5344
/*5336*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5376
/*5348*/      OPC_MoveParent,
/*5349*/      OPC_MoveChild, 1,
/*5351*/      OPC_CheckInteger, 0, 
/*5353*/      OPC_MoveParent,
/*5354*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5365
/*5357*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5375
/*5367*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5407
/*5379*/      OPC_MoveParent,
/*5380*/      OPC_MoveChild, 1,
/*5382*/      OPC_CheckInteger, 0, 
/*5384*/      OPC_MoveParent,
/*5385*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5396
/*5388*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5406
/*5398*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5436
/*5410*/      OPC_MoveParent,
/*5411*/      OPC_RecordChild1, // #1 = $in
/*5412*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5424
/*5415*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, GPRC:i32:$in) - Complexity = 6
                // Dst: (ADDIL:i32 GPRC:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5435
/*5426*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8L), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, G8RC:i64:$in) - Complexity = 6
                // Dst: (ADDI8L:i64 G8RC:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->5466
/*5440*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*5441*/    OPC_CaptureGlueInput,
/*5442*/    OPC_RecordChild1, // #1 = $amt1
/*5443*/    OPC_MoveChild, 1,
/*5445*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*5448*/    OPC_MoveParent,
/*5449*/    OPC_RecordChild2, // #2 = $amt2
/*5450*/    OPC_MoveChild, 2,
/*5452*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*5455*/    OPC_MoveParent,
/*5456*/    OPC_EmitMergeInputChains1_0,
/*5457*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->5668
/*5470*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*5471*/    OPC_CaptureGlueInput,
/*5472*/    OPC_RecordChild1, // #1 = $func
/*5473*/    OPC_Scope, 21|128,1/*149*/, /*->5625*/ // 3 children in Scope
/*5476*/      OPC_MoveChild, 1,
/*5478*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->5530
/*5482*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->5506
/*5485*/          OPC_MoveParent,
/*5486*/          OPC_RecordChild2, // #2 = $offset
/*5487*/          OPC_MoveChild, 2,
/*5489*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5492*/          OPC_MoveParent,
/*5493*/          OPC_EmitMergeInputChains1_0,
/*5494*/          OPC_EmitConvertToTarget, 1,
/*5496*/          OPC_EmitConvertToTarget, 2,
/*5498*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->5529
/*5508*/          OPC_MoveParent,
/*5509*/          OPC_RecordChild2, // #2 = $offset
/*5510*/          OPC_MoveChild, 2,
/*5512*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5515*/          OPC_MoveParent,
/*5516*/          OPC_EmitMergeInputChains1_0,
/*5517*/          OPC_EmitConvertToTarget, 1,
/*5519*/          OPC_EmitConvertToTarget, 2,
/*5521*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5577
/*5533*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->5555
/*5536*/          OPC_MoveParent,
/*5537*/          OPC_RecordChild2, // #2 = $imm
/*5538*/          OPC_MoveChild, 2,
/*5540*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5543*/          OPC_MoveParent,
/*5544*/          OPC_EmitMergeInputChains1_0,
/*5545*/          OPC_EmitConvertToTarget, 2,
/*5547*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->5576
/*5557*/          OPC_MoveParent,
/*5558*/          OPC_RecordChild2, // #2 = $imm
/*5559*/          OPC_MoveChild, 2,
/*5561*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5564*/          OPC_MoveParent,
/*5565*/          OPC_EmitMergeInputChains1_0,
/*5566*/          OPC_EmitConvertToTarget, 2,
/*5568*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->5624
/*5580*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->5602
/*5583*/          OPC_MoveParent,
/*5584*/          OPC_RecordChild2, // #2 = $imm
/*5585*/          OPC_MoveChild, 2,
/*5587*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5590*/          OPC_MoveParent,
/*5591*/          OPC_EmitMergeInputChains1_0,
/*5592*/          OPC_EmitConvertToTarget, 2,
/*5594*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->5623
/*5604*/          OPC_MoveParent,
/*5605*/          OPC_RecordChild2, // #2 = $imm
/*5606*/          OPC_MoveChild, 2,
/*5608*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5611*/          OPC_MoveParent,
/*5612*/          OPC_EmitMergeInputChains1_0,
/*5613*/          OPC_EmitConvertToTarget, 2,
/*5615*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*5625*/    /*Scope*/ 20, /*->5646*/
/*5626*/      OPC_CheckChild1Type, MVT::i32,
/*5628*/      OPC_RecordChild2, // #2 = $imm
/*5629*/      OPC_MoveChild, 2,
/*5631*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5634*/      OPC_MoveParent,
/*5635*/      OPC_EmitMergeInputChains1_0,
/*5636*/      OPC_EmitConvertToTarget, 2,
/*5638*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*5646*/    /*Scope*/ 20, /*->5667*/
/*5647*/      OPC_CheckChild1Type, MVT::i64,
/*5649*/      OPC_RecordChild2, // #2 = $imm
/*5650*/      OPC_MoveChild, 2,
/*5652*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5655*/      OPC_MoveParent,
/*5656*/      OPC_EmitMergeInputChains1_0,
/*5657*/      OPC_EmitConvertToTarget, 2,
/*5659*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*5667*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->5691
/*5671*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*5672*/    OPC_MoveChild, 1,
/*5674*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5677*/    OPC_MoveParent,
/*5678*/    OPC_MoveChild, 2,
/*5680*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5683*/    OPC_MoveParent,
/*5684*/    OPC_EmitMergeInputChains1_0,
/*5685*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 118,  TARGET_VAL(ISD::SUB),// ->5812
/*5694*/    OPC_Scope, 28, /*->5724*/ // 2 children in Scope
/*5696*/      OPC_MoveChild, 0,
/*5698*/      OPC_CheckInteger, 0, 
/*5700*/      OPC_MoveParent,
/*5701*/      OPC_RecordChild1, // #0 = $rA
/*5702*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5713
/*5705*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 GPRC:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->5723
/*5715*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 G8RC:i64:$rA)
              0, // EndSwitchType
/*5724*/    /*Scope*/ 86, /*->5811*/
/*5725*/      OPC_RecordChild0, // #0 = $imm
/*5726*/      OPC_Scope, 23, /*->5751*/ // 2 children in Scope
/*5728*/        OPC_MoveChild, 0,
/*5730*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5733*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5735*/        OPC_MoveParent,
/*5736*/        OPC_RecordChild1, // #1 = $in
/*5737*/        OPC_CheckType, MVT::i32,
/*5739*/        OPC_EmitConvertToTarget, 0,
/*5741*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$in, (imm:i32):$imm)
/*5751*/      /*Scope*/ 58, /*->5810*/
/*5752*/        OPC_RecordChild1, // #1 = $rA
/*5753*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->5765
/*5756*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 GPRC:i32:$rA, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->5776
/*5767*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
                /*SwitchType*/ 9,  MVT::v16i8,// ->5787
/*5778*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
                /*SwitchType*/ 9,  MVT::v8i16,// ->5798
/*5789*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
                /*SwitchType*/ 9,  MVT::v4i32,// ->5809
/*5800*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
                0, // EndSwitchType
/*5810*/      0, /*End of Scope*/
/*5811*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->5917
/*5815*/    OPC_CaptureGlueInput,
/*5816*/    OPC_RecordChild0, // #0 = $rA
/*5817*/    OPC_Scope, 69, /*->5888*/ // 2 children in Scope
/*5819*/      OPC_MoveChild, 1,
/*5821*/      OPC_Scope, 36, /*->5859*/ // 2 children in Scope
/*5823*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5834*/        OPC_MoveParent,
/*5835*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5847
/*5838*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5858
/*5849*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5859*/      /*Scope*/ 27, /*->5887*/
/*5860*/        OPC_CheckInteger, 0, 
/*5862*/        OPC_MoveParent,
/*5863*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5875
/*5866*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5886
/*5877*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5887*/      0, /*End of Scope*/
/*5888*/    /*Scope*/ 27, /*->5916*/
/*5889*/      OPC_RecordChild1, // #1 = $rB
/*5890*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5903
/*5893*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5915
/*5905*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5916*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->6024
/*5920*/    OPC_CaptureGlueInput,
/*5921*/    OPC_Scope, 71, /*->5994*/ // 2 children in Scope
/*5923*/      OPC_MoveChild, 0,
/*5925*/      OPC_Scope, 37, /*->5964*/ // 2 children in Scope
/*5927*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5938*/        OPC_MoveParent,
/*5939*/        OPC_RecordChild1, // #0 = $rA
/*5940*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5952
/*5943*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5963
/*5954*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5964*/      /*Scope*/ 28, /*->5993*/
/*5965*/        OPC_CheckInteger, 0, 
/*5967*/        OPC_MoveParent,
/*5968*/        OPC_RecordChild1, // #0 = $rA
/*5969*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5981
/*5972*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5992
/*5983*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5993*/      0, /*End of Scope*/
/*5994*/    /*Scope*/ 28, /*->6023*/
/*5995*/      OPC_RecordChild0, // #0 = $rB
/*5996*/      OPC_RecordChild1, // #1 = $rA
/*5997*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6010
/*6000*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6022
/*6012*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*6023*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->6096
/*6027*/    OPC_RecordChild0, // #0 = $rA
/*6028*/    OPC_RecordChild1, // #1 = $imm
/*6029*/    OPC_Scope, 38, /*->6069*/ // 3 children in Scope
/*6031*/      OPC_MoveChild, 1,
/*6033*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6036*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6038*/      OPC_MoveParent,
/*6039*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6054
/*6042*/        OPC_EmitConvertToTarget, 1,
/*6044*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->6068
/*6056*/        OPC_EmitConvertToTarget, 1,
/*6058*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*6069*/    /*Scope*/ 12, /*->6082*/
/*6070*/      OPC_CheckType, MVT::i32,
/*6072*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*6082*/    /*Scope*/ 12, /*->6095*/
/*6083*/      OPC_CheckType, MVT::i64,
/*6085*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
/*6095*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->6149
/*6099*/    OPC_RecordChild0, // #0 = $rA
/*6100*/    OPC_RecordChild1, // #1 = $imm
/*6101*/    OPC_Scope, 21, /*->6124*/ // 3 children in Scope
/*6103*/      OPC_MoveChild, 1,
/*6105*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6108*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6110*/      OPC_MoveParent,
/*6111*/      OPC_CheckType, MVT::i32,
/*6113*/      OPC_EmitConvertToTarget, 1,
/*6115*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*6124*/    /*Scope*/ 11, /*->6136*/
/*6125*/      OPC_CheckType, MVT::i32,
/*6127*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*6136*/    /*Scope*/ 11, /*->6148*/
/*6137*/      OPC_CheckType, MVT::i64,
/*6139*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*6148*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->6223
/*6152*/    OPC_RecordChild0, // #0 = $imm
/*6153*/    OPC_Scope, 39, /*->6194*/ // 2 children in Scope
/*6155*/      OPC_MoveChild, 0,
/*6157*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6160*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6162*/      OPC_MoveParent,
/*6163*/      OPC_RecordChild1, // #1 = $rA
/*6164*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6179
/*6167*/        OPC_EmitConvertToTarget, 0,
/*6169*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->6193
/*6181*/        OPC_EmitConvertToTarget, 0,
/*6183*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, G8RC:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*6194*/    /*Scope*/ 27, /*->6222*/
/*6195*/      OPC_RecordChild1, // #1 = $rA
/*6196*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6209
/*6199*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6221
/*6211*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*6222*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::SRA),// ->6340
/*6226*/    OPC_RecordChild0, // #0 = $rS
/*6227*/    OPC_RecordChild1, // #1 = $SH
/*6228*/    OPC_Scope, 38, /*->6268*/ // 5 children in Scope
/*6230*/      OPC_MoveChild, 1,
/*6232*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6235*/      OPC_CheckType, MVT::i32,
/*6237*/      OPC_MoveParent,
/*6238*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->6253
/*6241*/        OPC_EmitConvertToTarget, 1,
/*6243*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPRC:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 GPRC:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->6267
/*6255*/        OPC_EmitConvertToTarget, 1,
/*6257*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 G8RC:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 G8RC:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*6268*/    /*Scope*/ 28, /*->6297*/
/*6269*/      OPC_CheckChild1Type, MVT::i32,
/*6271*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6284
/*6274*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->6296
/*6286*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6297*/    /*Scope*/ 13, /*->6311*/
/*6298*/      OPC_CheckChild1Type, MVT::v16i8,
/*6300*/      OPC_CheckType, MVT::v16i8,
/*6302*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6311*/    /*Scope*/ 13, /*->6325*/
/*6312*/      OPC_CheckChild1Type, MVT::v8i16,
/*6314*/      OPC_CheckType, MVT::v8i16,
/*6316*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6325*/    /*Scope*/ 13, /*->6339*/
/*6326*/      OPC_CheckChild1Type, MVT::v4i32,
/*6328*/      OPC_CheckType, MVT::v4i32,
/*6330*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6339*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SHL),// ->6469
/*6343*/    OPC_RecordChild0, // #0 = $in
/*6344*/    OPC_RecordChild1, // #1 = $imm
/*6345*/    OPC_Scope, 52, /*->6399*/ // 5 children in Scope
/*6347*/      OPC_MoveChild, 1,
/*6349*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6352*/      OPC_CheckType, MVT::i32,
/*6354*/      OPC_MoveParent,
/*6355*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6379
/*6358*/        OPC_EmitConvertToTarget, 1,
/*6360*/        OPC_EmitInteger, MVT::i32, 0, 
/*6363*/        OPC_EmitConvertToTarget, 1,
/*6365*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*6368*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->6398
/*6381*/        OPC_EmitConvertToTarget, 1,
/*6383*/        OPC_EmitConvertToTarget, 1,
/*6385*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*6388*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 G8RC:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*6399*/    /*Scope*/ 26, /*->6426*/
/*6400*/      OPC_CheckChild1Type, MVT::i32,
/*6402*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6414
/*6405*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6425
/*6416*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6426*/    /*Scope*/ 13, /*->6440*/
/*6427*/      OPC_CheckChild1Type, MVT::v16i8,
/*6429*/      OPC_CheckType, MVT::v16i8,
/*6431*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6440*/    /*Scope*/ 13, /*->6454*/
/*6441*/      OPC_CheckChild1Type, MVT::v8i16,
/*6443*/      OPC_CheckType, MVT::v8i16,
/*6445*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6454*/    /*Scope*/ 13, /*->6468*/
/*6455*/      OPC_CheckChild1Type, MVT::v4i32,
/*6457*/      OPC_CheckType, MVT::v4i32,
/*6459*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6468*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SRL),// ->6598
/*6472*/    OPC_RecordChild0, // #0 = $in
/*6473*/    OPC_RecordChild1, // #1 = $imm
/*6474*/    OPC_Scope, 52, /*->6528*/ // 5 children in Scope
/*6476*/      OPC_MoveChild, 1,
/*6478*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6481*/      OPC_CheckType, MVT::i32,
/*6483*/      OPC_MoveParent,
/*6484*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6508
/*6487*/        OPC_EmitConvertToTarget, 1,
/*6489*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*6492*/        OPC_EmitConvertToTarget, 1,
/*6494*/        OPC_EmitInteger, MVT::i32, 31, 
/*6497*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->6527
/*6510*/        OPC_EmitConvertToTarget, 1,
/*6512*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*6515*/        OPC_EmitConvertToTarget, 1,
/*6517*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*6528*/    /*Scope*/ 26, /*->6555*/
/*6529*/      OPC_CheckChild1Type, MVT::i32,
/*6531*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6543
/*6534*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6554
/*6545*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6555*/    /*Scope*/ 13, /*->6569*/
/*6556*/      OPC_CheckChild1Type, MVT::v16i8,
/*6558*/      OPC_CheckType, MVT::v16i8,
/*6560*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6569*/    /*Scope*/ 13, /*->6583*/
/*6570*/      OPC_CheckChild1Type, MVT::v8i16,
/*6572*/      OPC_CheckType, MVT::v8i16,
/*6574*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6583*/    /*Scope*/ 13, /*->6597*/
/*6584*/      OPC_CheckChild1Type, MVT::v4i32,
/*6586*/      OPC_CheckType, MVT::v4i32,
/*6588*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6597*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->6693
/*6601*/    OPC_RecordChild0, // #0 = $in
/*6602*/    OPC_RecordChild1, // #1 = $imm
/*6603*/    OPC_Scope, 48, /*->6653*/ // 2 children in Scope
/*6605*/      OPC_MoveChild, 1,
/*6607*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6610*/      OPC_CheckType, MVT::i32,
/*6612*/      OPC_MoveParent,
/*6613*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->6635
/*6616*/        OPC_EmitConvertToTarget, 1,
/*6618*/        OPC_EmitInteger, MVT::i32, 0, 
/*6621*/        OPC_EmitInteger, MVT::i32, 31, 
/*6624*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->6652
/*6637*/        OPC_EmitConvertToTarget, 1,
/*6639*/        OPC_EmitInteger, MVT::i32, 0, 
/*6642*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*6653*/    /*Scope*/ 38, /*->6692*/
/*6654*/      OPC_CheckChild1Type, MVT::i32,
/*6656*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->6676
/*6659*/        OPC_EmitInteger, MVT::i32, 0, 
/*6662*/        OPC_EmitInteger, MVT::i32, 31, 
/*6665*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->6691
/*6678*/        OPC_EmitInteger, MVT::i32, 0, 
/*6681*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 G8RC:i64:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 G8RC:i64:$in, GPRC:i32:$sh, 0:i32)
              0, // EndSwitchType
/*6692*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->6749
/*6696*/    OPC_RecordChild0, // #0 = $disp
/*6697*/    OPC_MoveChild, 0,
/*6699*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->6716
/*6703*/      OPC_MoveParent,
/*6704*/      OPC_RecordChild1, // #1 = $reg
/*6705*/      OPC_CheckType, MVT::i64,
/*6707*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->6732
/*6719*/      OPC_MoveParent,
/*6720*/      OPC_RecordChild1, // #1 = $reg
/*6721*/      OPC_CheckType, MVT::i64,
/*6723*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, G8RC:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->6748
/*6735*/      OPC_MoveParent,
/*6736*/      OPC_RecordChild1, // #1 = $reg
/*6737*/      OPC_CheckType, MVT::i64,
/*6739*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, G8RC:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, G8RC:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->6849
/*6752*/    OPC_RecordNode,   // #0 = $imm
/*6753*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->6815
/*6756*/      OPC_Scope, 12, /*->6770*/ // 3 children in Scope
/*6758*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6760*/        OPC_EmitConvertToTarget, 0,
/*6762*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*6770*/      /*Scope*/ 15, /*->6786*/
/*6771*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6773*/        OPC_EmitConvertToTarget, 0,
/*6775*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6778*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*6786*/      /*Scope*/ 27, /*->6814*/
/*6787*/        OPC_EmitConvertToTarget, 0,
/*6789*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6792*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*6800*/        OPC_EmitConvertToTarget, 0,
/*6802*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*6805*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*6814*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->6848
/*6817*/      OPC_Scope, 12, /*->6831*/ // 2 children in Scope
/*6819*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6821*/        OPC_EmitConvertToTarget, 0,
/*6823*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*6831*/      /*Scope*/ 15, /*->6847*/
/*6832*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6834*/        OPC_EmitConvertToTarget, 0,
/*6836*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6839*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*6847*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->6880
/*6852*/    OPC_RecordChild0, // #0 = $rS
/*6853*/    OPC_RecordChild1, // #1 = $rB
/*6854*/    OPC_CheckChild1Type, MVT::i32,
/*6856*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6868
/*6859*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6879
/*6870*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->6911
/*6883*/    OPC_RecordChild0, // #0 = $rS
/*6884*/    OPC_RecordChild1, // #1 = $rB
/*6885*/    OPC_CheckChild1Type, MVT::i32,
/*6887*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6899
/*6890*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6910
/*6901*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->6944
/*6914*/    OPC_RecordChild0, // #0 = $rS
/*6915*/    OPC_RecordChild1, // #1 = $rB
/*6916*/    OPC_CheckChild1Type, MVT::i32,
/*6918*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6931
/*6921*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->6943
/*6933*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->6970
/*6947*/    OPC_RecordChild0, // #0 = $rS
/*6948*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6959
/*6951*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPRC:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 GPRC:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->6969
/*6961*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 G8RC:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 G8RC:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->7042
/*6973*/    OPC_RecordChild0, // #0 = $rS
/*6974*/    OPC_MoveChild, 1,
/*6976*/    OPC_Scope, 25, /*->7003*/ // 3 children in Scope
/*6978*/      OPC_CheckValueType, MVT::i8,
/*6980*/      OPC_MoveParent,
/*6981*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6992
/*6984*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7002
/*6994*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*7003*/    /*Scope*/ 25, /*->7029*/
/*7004*/      OPC_CheckValueType, MVT::i16,
/*7006*/      OPC_MoveParent,
/*7007*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->7018
/*7010*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->7028
/*7020*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*7029*/    /*Scope*/ 11, /*->7041*/
/*7030*/      OPC_CheckValueType, MVT::i32,
/*7032*/      OPC_MoveParent,
/*7033*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 G8RC:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 G8RC:i64:$rS)
/*7041*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->7071
/*7045*/    OPC_RecordChild0, // #0 = $rA
/*7046*/    OPC_RecordChild1, // #1 = $rB
/*7047*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7059
/*7050*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7070
/*7061*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->7100
/*7074*/    OPC_RecordChild0, // #0 = $rA
/*7075*/    OPC_RecordChild1, // #1 = $rB
/*7076*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7088
/*7079*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7099
/*7090*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->7129
/*7103*/    OPC_RecordChild0, // #0 = $rA
/*7104*/    OPC_RecordChild1, // #1 = $rB
/*7105*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7117
/*7108*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7128
/*7119*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->7158
/*7132*/    OPC_RecordChild0, // #0 = $rA
/*7133*/    OPC_RecordChild1, // #1 = $rB
/*7134*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->7146
/*7137*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->7157
/*7148*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->7172
/*7161*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*7162*/    OPC_CheckType, MVT::i64,
/*7164*/    OPC_EmitMergeInputChains1_0,
/*7165*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::EXTSW_32),// ->7186
/*7175*/    OPC_RecordChild0, // #0 = $rS
/*7176*/    OPC_CheckType, MVT::i32,
/*7178*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (PPCextsw_32:i32 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32:i32 GPRC:i32:$rS)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->7202
/*7189*/    OPC_RecordChild0, // #0 = $rS
/*7190*/    OPC_CheckChild0Type, MVT::i32,
/*7192*/    OPC_CheckType, MVT::i64,
/*7194*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 GPRC:i32:$rS)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->7220
/*7205*/    OPC_RecordChild0, // #0 = $in
/*7206*/    OPC_CheckType, MVT::i32,
/*7208*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7211*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 G8RC:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 G8RC:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->7248
/*7223*/    OPC_RecordChild0, // #0 = $in
/*7224*/    OPC_CheckChild0Type, MVT::i32,
/*7226*/    OPC_CheckType, MVT::i64,
/*7228*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7235*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7238*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GPRC:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->7292
/*7251*/    OPC_RecordChild0, // #0 = $in
/*7252*/    OPC_CheckChild0Type, MVT::i32,
/*7254*/    OPC_CheckType, MVT::i64,
/*7256*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*7263*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*7266*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*7276*/    OPC_EmitInteger, MVT::i32, 0, 
/*7279*/    OPC_EmitInteger, MVT::i32, 32, 
/*7282*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GPRC:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::FNEG),// ->7453
/*7296*/    OPC_Scope, 102, /*->7400*/ // 3 children in Scope
/*7298*/      OPC_MoveChild, 0,
/*7300*/      OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->7372
/*7304*/        OPC_RecordChild0, // #0 = $FRA
/*7305*/        OPC_RecordChild1, // #1 = $FRC
/*7306*/        OPC_Scope, 34, /*->7342*/ // 2 children in Scope
/*7308*/          OPC_MoveChild, 2,
/*7310*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7313*/          OPC_RecordChild0, // #2 = $FRB
/*7314*/          OPC_MoveParent,
/*7315*/          OPC_MoveParent,
/*7316*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7329
/*7319*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, (fneg:f64 F8RC:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7341
/*7331*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, (fneg:f32 F4RC:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*7342*/        /*Scope*/ 28, /*->7371*/
/*7343*/          OPC_RecordChild2, // #2 = $FRB
/*7344*/          OPC_MoveParent,
/*7345*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7358
/*7348*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->7370
/*7360*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*7371*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->7399
/*7375*/        OPC_RecordChild0, // #0 = $frB
/*7376*/        OPC_MoveParent,
/*7377*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7388
/*7380*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 F4RC:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 F4RC:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->7398
/*7390*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 F8RC:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 F8RC:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7400*/    /*Scope*/ 23, /*->7424*/
/*7401*/      OPC_RecordChild0, // #0 = $frB
/*7402*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7413
/*7405*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 F4RC:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 F4RC:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->7423
/*7415*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 F8RC:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 F8RC:f64:$frB)
              0, // EndSwitchType
/*7424*/    /*Scope*/ 27, /*->7452*/
/*7425*/      OPC_MoveChild, 0,
/*7427*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*7430*/      OPC_RecordChild0, // #0 = $vA
/*7431*/      OPC_RecordChild1, // #1 = $vC
/*7432*/      OPC_MoveChild, 2,
/*7434*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7437*/      OPC_RecordChild0, // #2 = $vB
/*7438*/      OPC_MoveParent,
/*7439*/      OPC_MoveParent,
/*7440*/      OPC_CheckType, MVT::v4f32,
/*7442*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, (fneg:v4f32 VRRC:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7452*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::MTFSF),// ->7480
/*7456*/    OPC_CaptureGlueInput,
/*7457*/    OPC_RecordChild0, // #0 = $FM
/*7458*/    OPC_MoveChild, 0,
/*7460*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7463*/    OPC_CheckType, MVT::i32,
/*7465*/    OPC_MoveParent,
/*7466*/    OPC_RecordChild1, // #1 = $rT
/*7467*/    OPC_RecordChild2, // #2 = $FRB
/*7468*/    OPC_EmitConvertToTarget, 0,
/*7470*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSF), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 1, 2, 
            // Src: (PPCmtfsf:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB) - Complexity = 6
            // Dst: (MTFSF:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::FMA),// ->7561
/*7483*/    OPC_RecordChild0, // #0 = $FRA
/*7484*/    OPC_RecordChild1, // #1 = $FRC
/*7485*/    OPC_Scope, 33, /*->7520*/ // 2 children in Scope
/*7487*/      OPC_MoveChild, 2,
/*7489*/      OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*7492*/      OPC_RecordChild0, // #2 = $FRB
/*7493*/      OPC_MoveParent,
/*7494*/      OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7507
/*7497*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, (fneg:f64 F8RC:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->7519
/*7509*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, (fneg:f32 F4RC:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*7520*/    /*Scope*/ 39, /*->7560*/
/*7521*/      OPC_RecordChild2, // #2 = $FRB
/*7522*/      OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->7535
/*7525*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
                // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->7547
/*7537*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
                // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              /*SwitchType*/ 10,  MVT::v4f32,// ->7559
/*7549*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB) - Complexity = 3
                // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
              0, // EndSwitchType
/*7560*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->7575
/*7564*/    OPC_RecordChild0, // #0 = $frB
/*7565*/    OPC_CheckType, MVT::f64,
/*7567*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->7587
/*7578*/    OPC_RecordChild0, // #0 = $frB
/*7579*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 F8RC:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->7613
/*7590*/    OPC_RecordChild0, // #0 = $frB
/*7591*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->7602
/*7594*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 F8RC:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->7612
/*7604*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 F4RC:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->7639
/*7616*/    OPC_RecordChild0, // #0 = $frB
/*7617*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7628
/*7620*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 F4RC:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->7638
/*7630*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 F8RC:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->7649
/*7642*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 14,  TARGET_VAL(PPCISD::FADDRTZ),// ->7666
/*7652*/    OPC_CaptureGlueInput,
/*7653*/    OPC_RecordChild0, // #0 = $FRA
/*7654*/    OPC_RecordChild1, // #1 = $FRB
/*7655*/    OPC_CheckType, MVT::f64,
/*7657*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->7698
/*7669*/    OPC_RecordChild0, // #0 = $FRA
/*7670*/    OPC_RecordChild1, // #1 = $FRC
/*7671*/    OPC_RecordChild2, // #2 = $FRB
/*7672*/    OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7685
/*7675*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->7697
/*7687*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FADD),// ->7738
/*7701*/    OPC_RecordChild0, // #0 = $FRA
/*7702*/    OPC_RecordChild1, // #1 = $FRB
/*7703*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7715
/*7706*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7726
/*7717*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 9,  MVT::v4f32,// ->7737
/*7728*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->7767
/*7741*/    OPC_RecordChild0, // #0 = $FRA
/*7742*/    OPC_RecordChild1, // #1 = $FRB
/*7743*/    OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7755
/*7746*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7766
/*7757*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->7815
/*7770*/    OPC_RecordChild0, // #0 = $FRA
/*7771*/    OPC_RecordChild1, // #1 = $FRC
/*7772*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7784
/*7775*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 F8RC:f64:$FRA, F8RC:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->7795
/*7786*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC)
            /*SwitchType*/ 17,  MVT::v4f32,// ->7814
/*7797*/      OPC_EmitNode, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #2
/*7804*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, (V_SET0:v4i32))
            0, // EndSwitchType
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::FSUB),// ->7855
/*7818*/    OPC_RecordChild0, // #0 = $FRA
/*7819*/    OPC_RecordChild1, // #1 = $FRB
/*7820*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7832
/*7823*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7843
/*7834*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 9,  MVT::v4f32,// ->7854
/*7845*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->7871
/*7858*/    OPC_RecordChild0, // #0 = $src
/*7859*/    OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*7862*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 F4RC:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 F4RC:f32:$src, F8RC:f64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->7885
/*7874*/    OPC_RecordChild0, // #0 = $frB
/*7875*/    OPC_CheckType, MVT::f64,
/*7877*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->7899
/*7888*/    OPC_RecordChild0, // #0 = $frB
/*7889*/    OPC_CheckType, MVT::f64,
/*7891*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->8015
/*7902*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*7903*/    OPC_MoveChild, 1,
/*7905*/    OPC_Scope, 18, /*->7925*/ // 6 children in Scope
/*7907*/      OPC_CheckInteger, 52|128,11/*1460*/, 
/*7910*/      OPC_MoveParent,
/*7911*/      OPC_RecordChild2, // #1 = $src
/*7912*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7915*/      OPC_EmitMergeInputChains1_0,
/*7916*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1460:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*7925*/    /*Scope*/ 18, /*->7944*/
/*7926*/      OPC_CheckInteger, 53|128,11/*1461*/, 
/*7929*/      OPC_MoveParent,
/*7930*/      OPC_RecordChild2, // #1 = $src
/*7931*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7934*/      OPC_EmitMergeInputChains1_0,
/*7935*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1461:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*7944*/    /*Scope*/ 18, /*->7963*/
/*7945*/      OPC_CheckInteger, 54|128,11/*1462*/, 
/*7948*/      OPC_MoveParent,
/*7949*/      OPC_RecordChild2, // #1 = $src
/*7950*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7953*/      OPC_EmitMergeInputChains1_0,
/*7954*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1462:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*7963*/    /*Scope*/ 18, /*->7982*/
/*7964*/      OPC_CheckInteger, 57|128,11/*1465*/, 
/*7967*/      OPC_MoveParent,
/*7968*/      OPC_RecordChild2, // #1 = $src
/*7969*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7972*/      OPC_EmitMergeInputChains1_0,
/*7973*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1465:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*7982*/    /*Scope*/ 18, /*->8001*/
/*7983*/      OPC_CheckInteger, 58|128,11/*1466*/, 
/*7986*/      OPC_MoveParent,
/*7987*/      OPC_RecordChild2, // #1 = $src
/*7988*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7991*/      OPC_EmitMergeInputChains1_0,
/*7992*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1466:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*8001*/    /*Scope*/ 12, /*->8014*/
/*8002*/      OPC_CheckInteger, 59|128,11/*1467*/, 
/*8005*/      OPC_MoveParent,
/*8006*/      OPC_EmitMergeInputChains1_0,
/*8007*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1467:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*8014*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,13/*1754*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->9773
/*8019*/    OPC_MoveChild, 0,
/*8021*/    OPC_Scope, 17, /*->8040*/ // 103 children in Scope
/*8023*/      OPC_CheckInteger, 55|128,11/*1463*/, 
/*8026*/      OPC_MoveParent,
/*8027*/      OPC_RecordChild1, // #0 = $src
/*8028*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*8031*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1463:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*8040*/    /*Scope*/ 17, /*->8058*/
/*8041*/      OPC_CheckInteger, 56|128,11/*1464*/, 
/*8044*/      OPC_MoveParent,
/*8045*/      OPC_RecordChild1, // #0 = $src
/*8046*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*8049*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1464:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*8058*/    /*Scope*/ 40, /*->8099*/
/*8059*/      OPC_CheckInteger, 108|128,11/*1516*/, 
/*8062*/      OPC_MoveParent,
/*8063*/      OPC_RecordChild1, // #0 = $vB
/*8064*/      OPC_Scope, 13, /*->8079*/ // 2 children in Scope
/*8066*/        OPC_MoveChild, 2,
/*8068*/        OPC_CheckInteger, 0, 
/*8070*/        OPC_MoveParent,
/*8071*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1516:iPTR, VRRC:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 VRRC:v4f32:$vB)
/*8079*/      /*Scope*/ 18, /*->8098*/
/*8080*/        OPC_RecordChild2, // #1 = $UIMM
/*8081*/        OPC_MoveChild, 2,
/*8083*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8086*/        OPC_MoveParent,
/*8087*/        OPC_EmitConvertToTarget, 1,
/*8089*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1516:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*8098*/      0, /*End of Scope*/
/*8099*/    /*Scope*/ 40, /*->8140*/
/*8100*/      OPC_CheckInteger, 107|128,11/*1515*/, 
/*8103*/      OPC_MoveParent,
/*8104*/      OPC_RecordChild1, // #0 = $vB
/*8105*/      OPC_Scope, 13, /*->8120*/ // 2 children in Scope
/*8107*/        OPC_MoveChild, 2,
/*8109*/        OPC_CheckInteger, 0, 
/*8111*/        OPC_MoveParent,
/*8112*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1515:iPTR, VRRC:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 VRRC:v4f32:$vB)
/*8120*/      /*Scope*/ 18, /*->8139*/
/*8121*/        OPC_RecordChild2, // #1 = $UIMM
/*8122*/        OPC_MoveChild, 2,
/*8124*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8127*/        OPC_MoveParent,
/*8128*/        OPC_EmitConvertToTarget, 1,
/*8130*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1515:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*8139*/      0, /*End of Scope*/
/*8140*/    /*Scope*/ 17, /*->8158*/
/*8141*/      OPC_CheckInteger, 119|128,11/*1527*/, 
/*8144*/      OPC_MoveParent,
/*8145*/      OPC_RecordChild1, // #0 = $vA
/*8146*/      OPC_RecordChild2, // #1 = $vB
/*8147*/      OPC_RecordChild3, // #2 = $vC
/*8148*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1527:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*8158*/    /*Scope*/ 17, /*->8176*/
/*8159*/      OPC_CheckInteger, 120|128,11/*1528*/, 
/*8162*/      OPC_MoveParent,
/*8163*/      OPC_RecordChild1, // #0 = $vA
/*8164*/      OPC_RecordChild2, // #1 = $vB
/*8165*/      OPC_RecordChild3, // #2 = $vC
/*8166*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1528:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*8176*/    /*Scope*/ 17, /*->8194*/
/*8177*/      OPC_CheckInteger, 0|128,12/*1536*/, 
/*8180*/      OPC_MoveParent,
/*8181*/      OPC_RecordChild1, // #0 = $vA
/*8182*/      OPC_RecordChild2, // #1 = $vB
/*8183*/      OPC_RecordChild3, // #2 = $vC
/*8184*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1536:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*8194*/    /*Scope*/ 17, /*->8212*/
/*8195*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*8198*/      OPC_MoveParent,
/*8199*/      OPC_RecordChild1, // #0 = $vA
/*8200*/      OPC_RecordChild2, // #1 = $vB
/*8201*/      OPC_RecordChild3, // #2 = $vC
/*8202*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1552:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
/*8212*/    /*Scope*/ 17, /*->8230*/
/*8213*/      OPC_CheckInteger, 33|128,12/*1569*/, 
/*8216*/      OPC_MoveParent,
/*8217*/      OPC_RecordChild1, // #0 = $vA
/*8218*/      OPC_RecordChild2, // #1 = $vB
/*8219*/      OPC_RecordChild3, // #2 = $vC
/*8220*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1569:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
/*8230*/    /*Scope*/ 15, /*->8246*/
/*8231*/      OPC_CheckInteger, 66|128,11/*1474*/, 
/*8234*/      OPC_MoveParent,
/*8235*/      OPC_RecordChild1, // #0 = $vA
/*8236*/      OPC_RecordChild2, // #1 = $vB
/*8237*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1474:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8246*/    /*Scope*/ 15, /*->8262*/
/*8247*/      OPC_CheckInteger, 67|128,11/*1475*/, 
/*8250*/      OPC_MoveParent,
/*8251*/      OPC_RecordChild1, // #0 = $vA
/*8252*/      OPC_RecordChild2, // #1 = $vB
/*8253*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1475:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8262*/    /*Scope*/ 15, /*->8278*/
/*8263*/      OPC_CheckInteger, 68|128,11/*1476*/, 
/*8266*/      OPC_MoveParent,
/*8267*/      OPC_RecordChild1, // #0 = $vA
/*8268*/      OPC_RecordChild2, // #1 = $vB
/*8269*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1476:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8278*/    /*Scope*/ 15, /*->8294*/
/*8279*/      OPC_CheckInteger, 69|128,11/*1477*/, 
/*8282*/      OPC_MoveParent,
/*8283*/      OPC_RecordChild1, // #0 = $vA
/*8284*/      OPC_RecordChild2, // #1 = $vB
/*8285*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1477:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8294*/    /*Scope*/ 15, /*->8310*/
/*8295*/      OPC_CheckInteger, 70|128,11/*1478*/, 
/*8298*/      OPC_MoveParent,
/*8299*/      OPC_RecordChild1, // #0 = $vA
/*8300*/      OPC_RecordChild2, // #1 = $vB
/*8301*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1478:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8310*/    /*Scope*/ 15, /*->8326*/
/*8311*/      OPC_CheckInteger, 71|128,11/*1479*/, 
/*8314*/      OPC_MoveParent,
/*8315*/      OPC_RecordChild1, // #0 = $vA
/*8316*/      OPC_RecordChild2, // #1 = $vB
/*8317*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1479:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8326*/    /*Scope*/ 15, /*->8342*/
/*8327*/      OPC_CheckInteger, 72|128,11/*1480*/, 
/*8330*/      OPC_MoveParent,
/*8331*/      OPC_RecordChild1, // #0 = $vA
/*8332*/      OPC_RecordChild2, // #1 = $vB
/*8333*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1480:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8342*/    /*Scope*/ 15, /*->8358*/
/*8343*/      OPC_CheckInteger, 73|128,11/*1481*/, 
/*8346*/      OPC_MoveParent,
/*8347*/      OPC_RecordChild1, // #0 = $vA
/*8348*/      OPC_RecordChild2, // #1 = $vB
/*8349*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1481:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8358*/    /*Scope*/ 15, /*->8374*/
/*8359*/      OPC_CheckInteger, 74|128,11/*1482*/, 
/*8362*/      OPC_MoveParent,
/*8363*/      OPC_RecordChild1, // #0 = $vA
/*8364*/      OPC_RecordChild2, // #1 = $vB
/*8365*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1482:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8374*/    /*Scope*/ 15, /*->8390*/
/*8375*/      OPC_CheckInteger, 75|128,11/*1483*/, 
/*8378*/      OPC_MoveParent,
/*8379*/      OPC_RecordChild1, // #0 = $vA
/*8380*/      OPC_RecordChild2, // #1 = $vB
/*8381*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1483:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8390*/    /*Scope*/ 15, /*->8406*/
/*8391*/      OPC_CheckInteger, 76|128,11/*1484*/, 
/*8394*/      OPC_MoveParent,
/*8395*/      OPC_RecordChild1, // #0 = $vA
/*8396*/      OPC_RecordChild2, // #1 = $vB
/*8397*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1484:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8406*/    /*Scope*/ 15, /*->8422*/
/*8407*/      OPC_CheckInteger, 77|128,11/*1485*/, 
/*8410*/      OPC_MoveParent,
/*8411*/      OPC_RecordChild1, // #0 = $vA
/*8412*/      OPC_RecordChild2, // #1 = $vB
/*8413*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1485:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8422*/    /*Scope*/ 15, /*->8438*/
/*8423*/      OPC_CheckInteger, 78|128,11/*1486*/, 
/*8426*/      OPC_MoveParent,
/*8427*/      OPC_RecordChild1, // #0 = $vA
/*8428*/      OPC_RecordChild2, // #1 = $vB
/*8429*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1486:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8438*/    /*Scope*/ 15, /*->8454*/
/*8439*/      OPC_CheckInteger, 113|128,11/*1521*/, 
/*8442*/      OPC_MoveParent,
/*8443*/      OPC_RecordChild1, // #0 = $vA
/*8444*/      OPC_RecordChild2, // #1 = $vB
/*8445*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1521:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8454*/    /*Scope*/ 15, /*->8470*/
/*8455*/      OPC_CheckInteger, 114|128,11/*1522*/, 
/*8458*/      OPC_MoveParent,
/*8459*/      OPC_RecordChild1, // #0 = $vA
/*8460*/      OPC_RecordChild2, // #1 = $vB
/*8461*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1522:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8470*/    /*Scope*/ 15, /*->8486*/
/*8471*/      OPC_CheckInteger, 115|128,11/*1523*/, 
/*8474*/      OPC_MoveParent,
/*8475*/      OPC_RecordChild1, // #0 = $vA
/*8476*/      OPC_RecordChild2, // #1 = $vB
/*8477*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1523:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8486*/    /*Scope*/ 15, /*->8502*/
/*8487*/      OPC_CheckInteger, 116|128,11/*1524*/, 
/*8490*/      OPC_MoveParent,
/*8491*/      OPC_RecordChild1, // #0 = $vA
/*8492*/      OPC_RecordChild2, // #1 = $vB
/*8493*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1524:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8502*/    /*Scope*/ 15, /*->8518*/
/*8503*/      OPC_CheckInteger, 117|128,11/*1525*/, 
/*8506*/      OPC_MoveParent,
/*8507*/      OPC_RecordChild1, // #0 = $vA
/*8508*/      OPC_RecordChild2, // #1 = $vB
/*8509*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1525:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8518*/    /*Scope*/ 15, /*->8534*/
/*8519*/      OPC_CheckInteger, 118|128,11/*1526*/, 
/*8522*/      OPC_MoveParent,
/*8523*/      OPC_RecordChild1, // #0 = $vA
/*8524*/      OPC_RecordChild2, // #1 = $vB
/*8525*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1526:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8534*/    /*Scope*/ 15, /*->8550*/
/*8535*/      OPC_CheckInteger, 122|128,11/*1530*/, 
/*8538*/      OPC_MoveParent,
/*8539*/      OPC_RecordChild1, // #0 = $vA
/*8540*/      OPC_RecordChild2, // #1 = $vB
/*8541*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1530:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8550*/    /*Scope*/ 15, /*->8566*/
/*8551*/      OPC_CheckInteger, 123|128,11/*1531*/, 
/*8554*/      OPC_MoveParent,
/*8555*/      OPC_RecordChild1, // #0 = $vA
/*8556*/      OPC_RecordChild2, // #1 = $vB
/*8557*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1531:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8566*/    /*Scope*/ 15, /*->8582*/
/*8567*/      OPC_CheckInteger, 124|128,11/*1532*/, 
/*8570*/      OPC_MoveParent,
/*8571*/      OPC_RecordChild1, // #0 = $vA
/*8572*/      OPC_RecordChild2, // #1 = $vB
/*8573*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1532:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8582*/    /*Scope*/ 15, /*->8598*/
/*8583*/      OPC_CheckInteger, 125|128,11/*1533*/, 
/*8586*/      OPC_MoveParent,
/*8587*/      OPC_RecordChild1, // #0 = $vA
/*8588*/      OPC_RecordChild2, // #1 = $vB
/*8589*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1533:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8598*/    /*Scope*/ 15, /*->8614*/
/*8599*/      OPC_CheckInteger, 126|128,11/*1534*/, 
/*8602*/      OPC_MoveParent,
/*8603*/      OPC_RecordChild1, // #0 = $vA
/*8604*/      OPC_RecordChild2, // #1 = $vB
/*8605*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1534:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8614*/    /*Scope*/ 15, /*->8630*/
/*8615*/      OPC_CheckInteger, 127|128,11/*1535*/, 
/*8618*/      OPC_MoveParent,
/*8619*/      OPC_RecordChild1, // #0 = $vA
/*8620*/      OPC_RecordChild2, // #1 = $vB
/*8621*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1535:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8630*/    /*Scope*/ 17, /*->8648*/
/*8631*/      OPC_CheckInteger, 1|128,12/*1537*/, 
/*8634*/      OPC_MoveParent,
/*8635*/      OPC_RecordChild1, // #0 = $vA
/*8636*/      OPC_RecordChild2, // #1 = $vB
/*8637*/      OPC_RecordChild3, // #2 = $vC
/*8638*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1537:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8648*/    /*Scope*/ 17, /*->8666*/
/*8649*/      OPC_CheckInteger, 2|128,12/*1538*/, 
/*8652*/      OPC_MoveParent,
/*8653*/      OPC_RecordChild1, // #0 = $vA
/*8654*/      OPC_RecordChild2, // #1 = $vB
/*8655*/      OPC_RecordChild3, // #2 = $vC
/*8656*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1538:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8666*/    /*Scope*/ 17, /*->8684*/
/*8667*/      OPC_CheckInteger, 3|128,12/*1539*/, 
/*8670*/      OPC_MoveParent,
/*8671*/      OPC_RecordChild1, // #0 = $vA
/*8672*/      OPC_RecordChild2, // #1 = $vB
/*8673*/      OPC_RecordChild3, // #2 = $vC
/*8674*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1539:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8684*/    /*Scope*/ 17, /*->8702*/
/*8685*/      OPC_CheckInteger, 4|128,12/*1540*/, 
/*8688*/      OPC_MoveParent,
/*8689*/      OPC_RecordChild1, // #0 = $vA
/*8690*/      OPC_RecordChild2, // #1 = $vB
/*8691*/      OPC_RecordChild3, // #2 = $vC
/*8692*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1540:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8702*/    /*Scope*/ 17, /*->8720*/
/*8703*/      OPC_CheckInteger, 5|128,12/*1541*/, 
/*8706*/      OPC_MoveParent,
/*8707*/      OPC_RecordChild1, // #0 = $vA
/*8708*/      OPC_RecordChild2, // #1 = $vB
/*8709*/      OPC_RecordChild3, // #2 = $vC
/*8710*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1541:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8720*/    /*Scope*/ 17, /*->8738*/
/*8721*/      OPC_CheckInteger, 6|128,12/*1542*/, 
/*8724*/      OPC_MoveParent,
/*8725*/      OPC_RecordChild1, // #0 = $vA
/*8726*/      OPC_RecordChild2, // #1 = $vB
/*8727*/      OPC_RecordChild3, // #2 = $vC
/*8728*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1542:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8738*/    /*Scope*/ 15, /*->8754*/
/*8739*/      OPC_CheckInteger, 7|128,12/*1543*/, 
/*8742*/      OPC_MoveParent,
/*8743*/      OPC_RecordChild1, // #0 = $vA
/*8744*/      OPC_RecordChild2, // #1 = $vB
/*8745*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1543:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8754*/    /*Scope*/ 15, /*->8770*/
/*8755*/      OPC_CheckInteger, 8|128,12/*1544*/, 
/*8758*/      OPC_MoveParent,
/*8759*/      OPC_RecordChild1, // #0 = $vA
/*8760*/      OPC_RecordChild2, // #1 = $vB
/*8761*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1544:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8770*/    /*Scope*/ 15, /*->8786*/
/*8771*/      OPC_CheckInteger, 9|128,12/*1545*/, 
/*8774*/      OPC_MoveParent,
/*8775*/      OPC_RecordChild1, // #0 = $vA
/*8776*/      OPC_RecordChild2, // #1 = $vB
/*8777*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1545:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8786*/    /*Scope*/ 15, /*->8802*/
/*8787*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*8790*/      OPC_MoveParent,
/*8791*/      OPC_RecordChild1, // #0 = $vA
/*8792*/      OPC_RecordChild2, // #1 = $vB
/*8793*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8802*/    /*Scope*/ 15, /*->8818*/
/*8803*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*8806*/      OPC_MoveParent,
/*8807*/      OPC_RecordChild1, // #0 = $vA
/*8808*/      OPC_RecordChild2, // #1 = $vB
/*8809*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1547:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8818*/    /*Scope*/ 15, /*->8834*/
/*8819*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*8822*/      OPC_MoveParent,
/*8823*/      OPC_RecordChild1, // #0 = $vA
/*8824*/      OPC_RecordChild2, // #1 = $vB
/*8825*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1548:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8834*/    /*Scope*/ 15, /*->8850*/
/*8835*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*8838*/      OPC_MoveParent,
/*8839*/      OPC_RecordChild1, // #0 = $vA
/*8840*/      OPC_RecordChild2, // #1 = $vB
/*8841*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1549:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8850*/    /*Scope*/ 15, /*->8866*/
/*8851*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*8854*/      OPC_MoveParent,
/*8855*/      OPC_RecordChild1, // #0 = $vA
/*8856*/      OPC_RecordChild2, // #1 = $vB
/*8857*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1550:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8866*/    /*Scope*/ 15, /*->8882*/
/*8867*/      OPC_CheckInteger, 47|128,12/*1583*/, 
/*8870*/      OPC_MoveParent,
/*8871*/      OPC_RecordChild1, // #0 = $vA
/*8872*/      OPC_RecordChild2, // #1 = $vB
/*8873*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1583:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8882*/    /*Scope*/ 15, /*->8898*/
/*8883*/      OPC_CheckInteger, 48|128,12/*1584*/, 
/*8886*/      OPC_MoveParent,
/*8887*/      OPC_RecordChild1, // #0 = $vA
/*8888*/      OPC_RecordChild2, // #1 = $vB
/*8889*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1584:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8898*/    /*Scope*/ 15, /*->8914*/
/*8899*/      OPC_CheckInteger, 49|128,12/*1585*/, 
/*8902*/      OPC_MoveParent,
/*8903*/      OPC_RecordChild1, // #0 = $vA
/*8904*/      OPC_RecordChild2, // #1 = $vB
/*8905*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1585:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8914*/    /*Scope*/ 15, /*->8930*/
/*8915*/      OPC_CheckInteger, 50|128,12/*1586*/, 
/*8918*/      OPC_MoveParent,
/*8919*/      OPC_RecordChild1, // #0 = $vA
/*8920*/      OPC_RecordChild2, // #1 = $vB
/*8921*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1586:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8930*/    /*Scope*/ 15, /*->8946*/
/*8931*/      OPC_CheckInteger, 51|128,12/*1587*/, 
/*8934*/      OPC_MoveParent,
/*8935*/      OPC_RecordChild1, // #0 = $vA
/*8936*/      OPC_RecordChild2, // #1 = $vB
/*8937*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1587:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8946*/    /*Scope*/ 15, /*->8962*/
/*8947*/      OPC_CheckInteger, 52|128,12/*1588*/, 
/*8950*/      OPC_MoveParent,
/*8951*/      OPC_RecordChild1, // #0 = $vA
/*8952*/      OPC_RecordChild2, // #1 = $vB
/*8953*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1588:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8962*/    /*Scope*/ 15, /*->8978*/
/*8963*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*8966*/      OPC_MoveParent,
/*8967*/      OPC_RecordChild1, // #0 = $vA
/*8968*/      OPC_RecordChild2, // #1 = $vB
/*8969*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1589:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8978*/    /*Scope*/ 15, /*->8994*/
/*8979*/      OPC_CheckInteger, 58|128,12/*1594*/, 
/*8982*/      OPC_MoveParent,
/*8983*/      OPC_RecordChild1, // #0 = $vA
/*8984*/      OPC_RecordChild2, // #1 = $vB
/*8985*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1594:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8994*/    /*Scope*/ 15, /*->9010*/
/*8995*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*8998*/      OPC_MoveParent,
/*8999*/      OPC_RecordChild1, // #0 = $vA
/*9000*/      OPC_RecordChild2, // #1 = $vB
/*9001*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1590:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9010*/    /*Scope*/ 15, /*->9026*/
/*9011*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*9014*/      OPC_MoveParent,
/*9015*/      OPC_RecordChild1, // #0 = $vA
/*9016*/      OPC_RecordChild2, // #1 = $vB
/*9017*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1591:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*9026*/    /*Scope*/ 15, /*->9042*/
/*9027*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*9030*/      OPC_MoveParent,
/*9031*/      OPC_RecordChild1, // #0 = $vA
/*9032*/      OPC_RecordChild2, // #1 = $vB
/*9033*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1592:iPTR, VRRC:v8i16:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 VRRC:v8i16:$vA, VRRC:v4i32:$vB)
/*9042*/    /*Scope*/ 15, /*->9058*/
/*9043*/      OPC_CheckInteger, 57|128,12/*1593*/, 
/*9046*/      OPC_MoveParent,
/*9047*/      OPC_RecordChild1, // #0 = $vA
/*9048*/      OPC_RecordChild2, // #1 = $vB
/*9049*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1593:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*9058*/    /*Scope*/ 15, /*->9074*/
/*9059*/      OPC_CheckInteger, 29|128,12/*1565*/, 
/*9062*/      OPC_MoveParent,
/*9063*/      OPC_RecordChild1, // #0 = $vA
/*9064*/      OPC_RecordChild2, // #1 = $vB
/*9065*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1565:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9074*/    /*Scope*/ 15, /*->9090*/
/*9075*/      OPC_CheckInteger, 30|128,12/*1566*/, 
/*9078*/      OPC_MoveParent,
/*9079*/      OPC_RecordChild1, // #0 = $vA
/*9080*/      OPC_RecordChild2, // #1 = $vB
/*9081*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1566:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9090*/    /*Scope*/ 15, /*->9106*/
/*9091*/      OPC_CheckInteger, 31|128,12/*1567*/, 
/*9094*/      OPC_MoveParent,
/*9095*/      OPC_RecordChild1, // #0 = $vA
/*9096*/      OPC_RecordChild2, // #1 = $vB
/*9097*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1567:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9106*/    /*Scope*/ 15, /*->9122*/
/*9107*/      OPC_CheckInteger, 34|128,12/*1570*/, 
/*9110*/      OPC_MoveParent,
/*9111*/      OPC_RecordChild1, // #0 = $vA
/*9112*/      OPC_RecordChild2, // #1 = $vB
/*9113*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1570:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9122*/    /*Scope*/ 15, /*->9138*/
/*9123*/      OPC_CheckInteger, 37|128,12/*1573*/, 
/*9126*/      OPC_MoveParent,
/*9127*/      OPC_RecordChild1, // #0 = $vA
/*9128*/      OPC_RecordChild2, // #1 = $vB
/*9129*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1573:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9138*/    /*Scope*/ 15, /*->9154*/
/*9139*/      OPC_CheckInteger, 35|128,12/*1571*/, 
/*9142*/      OPC_MoveParent,
/*9143*/      OPC_RecordChild1, // #0 = $vA
/*9144*/      OPC_RecordChild2, // #1 = $vB
/*9145*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1571:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9154*/    /*Scope*/ 15, /*->9170*/
/*9155*/      OPC_CheckInteger, 36|128,12/*1572*/, 
/*9158*/      OPC_MoveParent,
/*9159*/      OPC_RecordChild1, // #0 = $vA
/*9160*/      OPC_RecordChild2, // #1 = $vB
/*9161*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1572:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9170*/    /*Scope*/ 15, /*->9186*/
/*9171*/      OPC_CheckInteger, 38|128,12/*1574*/, 
/*9174*/      OPC_MoveParent,
/*9175*/      OPC_RecordChild1, // #0 = $vA
/*9176*/      OPC_RecordChild2, // #1 = $vB
/*9177*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1574:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9186*/    /*Scope*/ 15, /*->9202*/
/*9187*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*9190*/      OPC_MoveParent,
/*9191*/      OPC_RecordChild1, // #0 = $vA
/*9192*/      OPC_RecordChild2, // #1 = $vB
/*9193*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9202*/    /*Scope*/ 15, /*->9218*/
/*9203*/      OPC_CheckInteger, 45|128,12/*1581*/, 
/*9206*/      OPC_MoveParent,
/*9207*/      OPC_RecordChild1, // #0 = $vA
/*9208*/      OPC_RecordChild2, // #1 = $vB
/*9209*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1581:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9218*/    /*Scope*/ 15, /*->9234*/
/*9219*/      OPC_CheckInteger, 40|128,12/*1576*/, 
/*9222*/      OPC_MoveParent,
/*9223*/      OPC_RecordChild1, // #0 = $vA
/*9224*/      OPC_RecordChild2, // #1 = $vB
/*9225*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1576:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9234*/    /*Scope*/ 15, /*->9250*/
/*9235*/      OPC_CheckInteger, 41|128,12/*1577*/, 
/*9238*/      OPC_MoveParent,
/*9239*/      OPC_RecordChild1, // #0 = $vA
/*9240*/      OPC_RecordChild2, // #1 = $vB
/*9241*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1577:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9250*/    /*Scope*/ 15, /*->9266*/
/*9251*/      OPC_CheckInteger, 42|128,12/*1578*/, 
/*9254*/      OPC_MoveParent,
/*9255*/      OPC_RecordChild1, // #0 = $vA
/*9256*/      OPC_RecordChild2, // #1 = $vB
/*9257*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1578:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9266*/    /*Scope*/ 15, /*->9282*/
/*9267*/      OPC_CheckInteger, 43|128,12/*1579*/, 
/*9270*/      OPC_MoveParent,
/*9271*/      OPC_RecordChild1, // #0 = $vA
/*9272*/      OPC_RecordChild2, // #1 = $vB
/*9273*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1579:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9282*/    /*Scope*/ 15, /*->9298*/
/*9283*/      OPC_CheckInteger, 44|128,12/*1580*/, 
/*9286*/      OPC_MoveParent,
/*9287*/      OPC_RecordChild1, // #0 = $vA
/*9288*/      OPC_RecordChild2, // #1 = $vB
/*9289*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1580:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9298*/    /*Scope*/ 15, /*->9314*/
/*9299*/      OPC_CheckInteger, 46|128,12/*1582*/, 
/*9302*/      OPC_MoveParent,
/*9303*/      OPC_RecordChild1, // #0 = $vA
/*9304*/      OPC_RecordChild2, // #1 = $vB
/*9305*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1582:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9314*/    /*Scope*/ 15, /*->9330*/
/*9315*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*9318*/      OPC_MoveParent,
/*9319*/      OPC_RecordChild1, // #0 = $vA
/*9320*/      OPC_RecordChild2, // #1 = $vB
/*9321*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1553:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9330*/    /*Scope*/ 15, /*->9346*/
/*9331*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*9334*/      OPC_MoveParent,
/*9335*/      OPC_RecordChild1, // #0 = $vA
/*9336*/      OPC_RecordChild2, // #1 = $vB
/*9337*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1554:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9346*/    /*Scope*/ 15, /*->9362*/
/*9347*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*9350*/      OPC_MoveParent,
/*9351*/      OPC_RecordChild1, // #0 = $vA
/*9352*/      OPC_RecordChild2, // #1 = $vB
/*9353*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1555:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9362*/    /*Scope*/ 15, /*->9378*/
/*9363*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*9366*/      OPC_MoveParent,
/*9367*/      OPC_RecordChild1, // #0 = $vA
/*9368*/      OPC_RecordChild2, // #1 = $vB
/*9369*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1556:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9378*/    /*Scope*/ 15, /*->9394*/
/*9379*/      OPC_CheckInteger, 21|128,12/*1557*/, 
/*9382*/      OPC_MoveParent,
/*9383*/      OPC_RecordChild1, // #0 = $vA
/*9384*/      OPC_RecordChild2, // #1 = $vB
/*9385*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1557:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9394*/    /*Scope*/ 15, /*->9410*/
/*9395*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*9398*/      OPC_MoveParent,
/*9399*/      OPC_RecordChild1, // #0 = $vA
/*9400*/      OPC_RecordChild2, // #1 = $vB
/*9401*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1558:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9410*/    /*Scope*/ 15, /*->9426*/
/*9411*/      OPC_CheckInteger, 23|128,12/*1559*/, 
/*9414*/      OPC_MoveParent,
/*9415*/      OPC_RecordChild1, // #0 = $vA
/*9416*/      OPC_RecordChild2, // #1 = $vB
/*9417*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9426*/    /*Scope*/ 13, /*->9440*/
/*9427*/      OPC_CheckInteger, 59|128,12/*1595*/, 
/*9430*/      OPC_MoveParent,
/*9431*/      OPC_RecordChild1, // #0 = $vB
/*9432*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1595:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 VRRC:v8i16:$vB)
/*9440*/    /*Scope*/ 13, /*->9454*/
/*9441*/      OPC_CheckInteger, 60|128,12/*1596*/, 
/*9444*/      OPC_MoveParent,
/*9445*/      OPC_RecordChild1, // #0 = $vB
/*9446*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1596:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 VRRC:v16i8:$vB)
/*9454*/    /*Scope*/ 13, /*->9468*/
/*9455*/      OPC_CheckInteger, 61|128,12/*1597*/, 
/*9458*/      OPC_MoveParent,
/*9459*/      OPC_RecordChild1, // #0 = $vB
/*9460*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1597:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 VRRC:v8i16:$vB)
/*9468*/    /*Scope*/ 13, /*->9482*/
/*9469*/      OPC_CheckInteger, 62|128,12/*1598*/, 
/*9472*/      OPC_MoveParent,
/*9473*/      OPC_RecordChild1, // #0 = $vB
/*9474*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1598:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 VRRC:v8i16:$vB)
/*9482*/    /*Scope*/ 13, /*->9496*/
/*9483*/      OPC_CheckInteger, 63|128,12/*1599*/, 
/*9486*/      OPC_MoveParent,
/*9487*/      OPC_RecordChild1, // #0 = $vB
/*9488*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1599:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 VRRC:v16i8:$vB)
/*9496*/    /*Scope*/ 13, /*->9510*/
/*9497*/      OPC_CheckInteger, 64|128,12/*1600*/, 
/*9500*/      OPC_MoveParent,
/*9501*/      OPC_RecordChild1, // #0 = $vB
/*9502*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 VRRC:v8i16:$vB)
/*9510*/    /*Scope*/ 40, /*->9551*/
/*9511*/      OPC_CheckInteger, 79|128,11/*1487*/, 
/*9514*/      OPC_MoveParent,
/*9515*/      OPC_RecordChild1, // #0 = $vB
/*9516*/      OPC_Scope, 13, /*->9531*/ // 2 children in Scope
/*9518*/        OPC_MoveChild, 2,
/*9520*/        OPC_CheckInteger, 0, 
/*9522*/        OPC_MoveParent,
/*9523*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1487:iPTR, VRRC:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 VRRC:v4i32:$vB)
/*9531*/      /*Scope*/ 18, /*->9550*/
/*9532*/        OPC_RecordChild2, // #1 = $UIMM
/*9533*/        OPC_MoveChild, 2,
/*9535*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9538*/        OPC_MoveParent,
/*9539*/        OPC_EmitConvertToTarget, 1,
/*9541*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1487:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9550*/      0, /*End of Scope*/
/*9551*/    /*Scope*/ 40, /*->9592*/
/*9552*/      OPC_CheckInteger, 80|128,11/*1488*/, 
/*9555*/      OPC_MoveParent,
/*9556*/      OPC_RecordChild1, // #0 = $vB
/*9557*/      OPC_Scope, 13, /*->9572*/ // 2 children in Scope
/*9559*/        OPC_MoveChild, 2,
/*9561*/        OPC_CheckInteger, 0, 
/*9563*/        OPC_MoveParent,
/*9564*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1488:iPTR, VRRC:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 VRRC:v4i32:$vB)
/*9572*/      /*Scope*/ 18, /*->9591*/
/*9573*/        OPC_RecordChild2, // #1 = $UIMM
/*9574*/        OPC_MoveChild, 2,
/*9576*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9579*/        OPC_MoveParent,
/*9580*/        OPC_EmitConvertToTarget, 1,
/*9582*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1488:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9591*/      0, /*End of Scope*/
/*9592*/    /*Scope*/ 13, /*->9606*/
/*9593*/      OPC_CheckInteger, 109|128,11/*1517*/, 
/*9596*/      OPC_MoveParent,
/*9597*/      OPC_RecordChild1, // #0 = $vB
/*9598*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1517:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 VRRC:v4f32:$vB)
/*9606*/    /*Scope*/ 13, /*->9620*/
/*9607*/      OPC_CheckInteger, 110|128,11/*1518*/, 
/*9610*/      OPC_MoveParent,
/*9611*/      OPC_RecordChild1, // #0 = $vB
/*9612*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1518:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 VRRC:v4f32:$vB)
/*9620*/    /*Scope*/ 15, /*->9636*/
/*9621*/      OPC_CheckInteger, 112|128,11/*1520*/, 
/*9624*/      OPC_MoveParent,
/*9625*/      OPC_RecordChild1, // #0 = $vA
/*9626*/      OPC_RecordChild2, // #1 = $vB
/*9627*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1520:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9636*/    /*Scope*/ 15, /*->9652*/
/*9637*/      OPC_CheckInteger, 121|128,11/*1529*/, 
/*9640*/      OPC_MoveParent,
/*9641*/      OPC_RecordChild1, // #0 = $vA
/*9642*/      OPC_RecordChild2, // #1 = $vB
/*9643*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1529:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9652*/    /*Scope*/ 13, /*->9666*/
/*9653*/      OPC_CheckInteger, 24|128,12/*1560*/, 
/*9656*/      OPC_MoveParent,
/*9657*/      OPC_RecordChild1, // #0 = $vB
/*9658*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1560:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 VRRC:v4f32:$vB)
/*9666*/    /*Scope*/ 13, /*->9680*/
/*9667*/      OPC_CheckInteger, 25|128,12/*1561*/, 
/*9670*/      OPC_MoveParent,
/*9671*/      OPC_RecordChild1, // #0 = $vB
/*9672*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1561:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 VRRC:v4f32:$vB)
/*9680*/    /*Scope*/ 13, /*->9694*/
/*9681*/      OPC_CheckInteger, 26|128,12/*1562*/, 
/*9684*/      OPC_MoveParent,
/*9685*/      OPC_RecordChild1, // #0 = $vB
/*9686*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1562:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 VRRC:v4f32:$vB)
/*9694*/    /*Scope*/ 13, /*->9708*/
/*9695*/      OPC_CheckInteger, 27|128,12/*1563*/, 
/*9698*/      OPC_MoveParent,
/*9699*/      OPC_RecordChild1, // #0 = $vB
/*9700*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1563:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 VRRC:v4f32:$vB)
/*9708*/    /*Scope*/ 13, /*->9722*/
/*9709*/      OPC_CheckInteger, 28|128,12/*1564*/, 
/*9712*/      OPC_MoveParent,
/*9713*/      OPC_RecordChild1, // #0 = $vB
/*9714*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1564:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 VRRC:v4f32:$vB)
/*9722*/    /*Scope*/ 13, /*->9736*/
/*9723*/      OPC_CheckInteger, 32|128,12/*1568*/, 
/*9726*/      OPC_MoveParent,
/*9727*/      OPC_RecordChild1, // #0 = $vB
/*9728*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1568:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 VRRC:v4f32:$vB)
/*9736*/    /*Scope*/ 17, /*->9754*/
/*9737*/      OPC_CheckInteger, 111|128,11/*1519*/, 
/*9740*/      OPC_MoveParent,
/*9741*/      OPC_RecordChild1, // #0 = $A
/*9742*/      OPC_RecordChild2, // #1 = $B
/*9743*/      OPC_RecordChild3, // #2 = $C
/*9744*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1519:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9754*/    /*Scope*/ 17, /*->9772*/
/*9755*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*9758*/      OPC_MoveParent,
/*9759*/      OPC_RecordChild1, // #0 = $A
/*9760*/      OPC_RecordChild2, // #1 = $B
/*9761*/      OPC_RecordChild3, // #2 = $C
/*9762*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1551:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9772*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,1/*212*/,  TARGET_VAL(PPCISD::VCMP),// ->9989
/*9777*/    OPC_RecordChild0, // #0 = $vA
/*9778*/    OPC_RecordChild1, // #1 = $vB
/*9779*/    OPC_MoveChild, 2,
/*9781*/    OPC_Scope, 14, /*->9797*/ // 13 children in Scope
/*9783*/      OPC_CheckInteger, 6, 
/*9785*/      OPC_MoveParent,
/*9786*/      OPC_CheckType, MVT::v16i8,
/*9788*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9797*/    /*Scope*/ 15, /*->9813*/
/*9798*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*9801*/      OPC_MoveParent,
/*9802*/      OPC_CheckType, MVT::v16i8,
/*9804*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9813*/    /*Scope*/ 15, /*->9829*/
/*9814*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*9817*/      OPC_MoveParent,
/*9818*/      OPC_CheckType, MVT::v16i8,
/*9820*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9829*/    /*Scope*/ 14, /*->9844*/
/*9830*/      OPC_CheckInteger, 70, 
/*9832*/      OPC_MoveParent,
/*9833*/      OPC_CheckType, MVT::v8i16,
/*9835*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9844*/    /*Scope*/ 15, /*->9860*/
/*9845*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*9848*/      OPC_MoveParent,
/*9849*/      OPC_CheckType, MVT::v8i16,
/*9851*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9860*/    /*Scope*/ 15, /*->9876*/
/*9861*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*9864*/      OPC_MoveParent,
/*9865*/      OPC_CheckType, MVT::v8i16,
/*9867*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9876*/    /*Scope*/ 15, /*->9892*/
/*9877*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*9880*/      OPC_MoveParent,
/*9881*/      OPC_CheckType, MVT::v4i32,
/*9883*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9892*/    /*Scope*/ 15, /*->9908*/
/*9893*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*9896*/      OPC_MoveParent,
/*9897*/      OPC_CheckType, MVT::v4i32,
/*9899*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9908*/    /*Scope*/ 15, /*->9924*/
/*9909*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*9912*/      OPC_MoveParent,
/*9913*/      OPC_CheckType, MVT::v4i32,
/*9915*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9924*/    /*Scope*/ 15, /*->9940*/
/*9925*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*9928*/      OPC_MoveParent,
/*9929*/      OPC_CheckType, MVT::v4f32,
/*9931*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9940*/    /*Scope*/ 15, /*->9956*/
/*9941*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*9944*/      OPC_MoveParent,
/*9945*/      OPC_CheckType, MVT::v4f32,
/*9947*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9956*/    /*Scope*/ 15, /*->9972*/
/*9957*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*9960*/      OPC_MoveParent,
/*9961*/      OPC_CheckType, MVT::v4f32,
/*9963*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9972*/    /*Scope*/ 15, /*->9988*/
/*9973*/      OPC_CheckInteger, 70|128,5/*710*/, 
/*9976*/      OPC_MoveParent,
/*9977*/      OPC_CheckType, MVT::v4f32,
/*9979*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9988*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(PPCISD::VCMPo),// ->10218
/*9993*/    OPC_RecordChild0, // #0 = $vA
/*9994*/    OPC_RecordChild1, // #1 = $vB
/*9995*/    OPC_MoveChild, 2,
/*9997*/    OPC_Scope, 15, /*->10014*/ // 13 children in Scope
/*9999*/      OPC_CheckInteger, 6, 
/*10001*/     OPC_MoveParent,
/*10002*/     OPC_CheckType, MVT::v16i8,
/*10004*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10014*/   /*Scope*/ 16, /*->10031*/
/*10015*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*10018*/     OPC_MoveParent,
/*10019*/     OPC_CheckType, MVT::v16i8,
/*10021*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10031*/   /*Scope*/ 16, /*->10048*/
/*10032*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*10035*/     OPC_MoveParent,
/*10036*/     OPC_CheckType, MVT::v16i8,
/*10038*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10048*/   /*Scope*/ 15, /*->10064*/
/*10049*/     OPC_CheckInteger, 70, 
/*10051*/     OPC_MoveParent,
/*10052*/     OPC_CheckType, MVT::v8i16,
/*10054*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10064*/   /*Scope*/ 16, /*->10081*/
/*10065*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*10068*/     OPC_MoveParent,
/*10069*/     OPC_CheckType, MVT::v8i16,
/*10071*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10081*/   /*Scope*/ 16, /*->10098*/
/*10082*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*10085*/     OPC_MoveParent,
/*10086*/     OPC_CheckType, MVT::v8i16,
/*10088*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*10098*/   /*Scope*/ 16, /*->10115*/
/*10099*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*10102*/     OPC_MoveParent,
/*10103*/     OPC_CheckType, MVT::v4i32,
/*10105*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10115*/   /*Scope*/ 16, /*->10132*/
/*10116*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*10119*/     OPC_MoveParent,
/*10120*/     OPC_CheckType, MVT::v4i32,
/*10122*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10132*/   /*Scope*/ 16, /*->10149*/
/*10133*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*10136*/     OPC_MoveParent,
/*10137*/     OPC_CheckType, MVT::v4i32,
/*10139*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*10149*/   /*Scope*/ 16, /*->10166*/
/*10150*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*10153*/     OPC_MoveParent,
/*10154*/     OPC_CheckType, MVT::v4f32,
/*10156*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10166*/   /*Scope*/ 16, /*->10183*/
/*10167*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*10170*/     OPC_MoveParent,
/*10171*/     OPC_CheckType, MVT::v4f32,
/*10173*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10183*/   /*Scope*/ 16, /*->10200*/
/*10184*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*10187*/     OPC_MoveParent,
/*10188*/     OPC_CheckType, MVT::v4f32,
/*10190*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10200*/   /*Scope*/ 16, /*->10217*/
/*10201*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*10204*/     OPC_MoveParent,
/*10205*/     OPC_CheckType, MVT::v4f32,
/*10207*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10217*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->10530
/*10222*/   OPC_Scope, 73, /*->10297*/ // 4 children in Scope
/*10224*/     OPC_RecordNode, // #0 = $UIMM
/*10225*/     OPC_RecordChild0, // #1 = $vB
/*10226*/     OPC_MoveChild, 1,
/*10228*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10231*/     OPC_MoveParent,
/*10232*/     OPC_CheckType, MVT::v16i8,
/*10234*/     OPC_Scope, 14, /*->10250*/ // 4 children in Scope
/*10236*/       OPC_CheckPredicate, 67, // Predicate_vspltb_shuffle
/*10238*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*10241*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10250*/     /*Scope*/ 14, /*->10265*/
/*10251*/       OPC_CheckPredicate, 68, // Predicate_vsplth_shuffle
/*10253*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*10256*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10265*/     /*Scope*/ 14, /*->10280*/
/*10266*/       OPC_CheckPredicate, 69, // Predicate_vspltw_shuffle
/*10268*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*10271*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10280*/     /*Scope*/ 15, /*->10296*/
/*10281*/       OPC_CheckPredicate, 70, // Predicate_vsldoi_unary_shuffle
/*10283*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*10286*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA, (VSLDOI_unary_get_imm:i32 VRRC:v16i8:$in))
/*10296*/     0, /*End of Scope*/
/*10297*/   /*Scope*/ 107, /*->10405*/
/*10298*/     OPC_RecordChild0, // #0 = $vA
/*10299*/     OPC_MoveChild, 1,
/*10301*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10304*/     OPC_MoveParent,
/*10305*/     OPC_CheckType, MVT::v16i8,
/*10307*/     OPC_Scope, 11, /*->10320*/ // 8 children in Scope
/*10309*/       OPC_CheckPredicate, 71, // Predicate_vpkuwum_unary_shuffle
/*10311*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10320*/     /*Scope*/ 11, /*->10332*/
/*10321*/       OPC_CheckPredicate, 72, // Predicate_vpkuhum_unary_shuffle
/*10323*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10332*/     /*Scope*/ 11, /*->10344*/
/*10333*/       OPC_CheckPredicate, 73, // Predicate_vmrglb_unary_shuffle
/*10335*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10344*/     /*Scope*/ 11, /*->10356*/
/*10345*/       OPC_CheckPredicate, 74, // Predicate_vmrglh_unary_shuffle
/*10347*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10356*/     /*Scope*/ 11, /*->10368*/
/*10357*/       OPC_CheckPredicate, 75, // Predicate_vmrglw_unary_shuffle
/*10359*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10368*/     /*Scope*/ 11, /*->10380*/
/*10369*/       OPC_CheckPredicate, 76, // Predicate_vmrghb_unary_shuffle
/*10371*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10380*/     /*Scope*/ 11, /*->10392*/
/*10381*/       OPC_CheckPredicate, 77, // Predicate_vmrghh_unary_shuffle
/*10383*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10392*/     /*Scope*/ 11, /*->10404*/
/*10393*/       OPC_CheckPredicate, 78, // Predicate_vmrghw_unary_shuffle
/*10395*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10404*/     0, /*End of Scope*/
/*10405*/   /*Scope*/ 20, /*->10426*/
/*10406*/     OPC_RecordNode, // #0 = $SH
/*10407*/     OPC_RecordChild0, // #1 = $vA
/*10408*/     OPC_RecordChild1, // #2 = $vB
/*10409*/     OPC_CheckPredicate, 79, // Predicate_vsldoi_shuffle
/*10411*/     OPC_CheckType, MVT::v16i8,
/*10413*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*10416*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB):$SH))
/*10426*/   /*Scope*/ 102, /*->10529*/
/*10427*/     OPC_RecordChild0, // #0 = $vA
/*10428*/     OPC_RecordChild1, // #1 = $vB
/*10429*/     OPC_CheckType, MVT::v16i8,
/*10431*/     OPC_Scope, 11, /*->10444*/ // 8 children in Scope
/*10433*/       OPC_CheckPredicate, 80, // Predicate_vmrghb_shuffle
/*10435*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10444*/     /*Scope*/ 11, /*->10456*/
/*10445*/       OPC_CheckPredicate, 81, // Predicate_vmrghh_shuffle
/*10447*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10456*/     /*Scope*/ 11, /*->10468*/
/*10457*/       OPC_CheckPredicate, 82, // Predicate_vmrghw_shuffle
/*10459*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10468*/     /*Scope*/ 11, /*->10480*/
/*10469*/       OPC_CheckPredicate, 83, // Predicate_vmrglb_shuffle
/*10471*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10480*/     /*Scope*/ 11, /*->10492*/
/*10481*/       OPC_CheckPredicate, 84, // Predicate_vmrglh_shuffle
/*10483*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10492*/     /*Scope*/ 11, /*->10504*/
/*10493*/       OPC_CheckPredicate, 85, // Predicate_vmrglw_shuffle
/*10495*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10504*/     /*Scope*/ 11, /*->10516*/
/*10505*/       OPC_CheckPredicate, 86, // Predicate_vpkuhum_shuffle
/*10507*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10516*/     /*Scope*/ 11, /*->10528*/
/*10517*/       OPC_CheckPredicate, 87, // Predicate_vpkuwum_shuffle
/*10519*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10528*/     0, /*End of Scope*/
/*10529*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->10550
/*10533*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*10534*/   OPC_RecordChild1, // #1 = $amt
/*10535*/   OPC_MoveChild, 1,
/*10537*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*10540*/   OPC_MoveParent,
/*10541*/   OPC_EmitMergeInputChains1_0,
/*10542*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_Darwin),// ->10651
/*10553*/   OPC_RecordNode,   // #0 = 'PPCcall_Darwin' chained node
/*10554*/   OPC_CaptureGlueInput,
/*10555*/   OPC_RecordChild1, // #1 = $func
/*10556*/   OPC_MoveChild, 1,
/*10558*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->10592
/*10562*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->10577
/*10565*/       OPC_MoveParent,
/*10566*/       OPC_EmitMergeInputChains1_0,
/*10567*/       OPC_EmitConvertToTarget, 1,
/*10569*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_Darwin:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->10591
/*10579*/       OPC_MoveParent,
/*10580*/       OPC_EmitMergeInputChains1_0,
/*10581*/       OPC_EmitConvertToTarget, 1,
/*10583*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_Darwin:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10621
/*10595*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10608
/*10598*/       OPC_MoveParent,
/*10599*/       OPC_EmitMergeInputChains1_0,
/*10600*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10620
/*10610*/       OPC_MoveParent,
/*10611*/       OPC_EmitMergeInputChains1_0,
/*10612*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10650
/*10624*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10637
/*10627*/       OPC_MoveParent,
/*10628*/       OPC_EmitMergeInputChains1_0,
/*10629*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10649
/*10639*/       OPC_MoveParent,
/*10640*/       OPC_EmitMergeInputChains1_0,
/*10641*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_SVR4),// ->10752
/*10654*/   OPC_RecordNode,   // #0 = 'PPCcall_SVR4' chained node
/*10655*/   OPC_CaptureGlueInput,
/*10656*/   OPC_RecordChild1, // #1 = $func
/*10657*/   OPC_MoveChild, 1,
/*10659*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->10693
/*10663*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->10678
/*10666*/       OPC_MoveParent,
/*10667*/       OPC_EmitMergeInputChains1_0,
/*10668*/       OPC_EmitConvertToTarget, 1,
/*10670*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_SVR4:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->10692
/*10680*/       OPC_MoveParent,
/*10681*/       OPC_EmitMergeInputChains1_0,
/*10682*/       OPC_EmitConvertToTarget, 1,
/*10684*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_ELF:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10722
/*10696*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10709
/*10699*/       OPC_MoveParent,
/*10700*/       OPC_EmitMergeInputChains1_0,
/*10701*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10721
/*10711*/       OPC_MoveParent,
/*10712*/       OPC_EmitMergeInputChains1_0,
/*10713*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10751
/*10725*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10738
/*10728*/       OPC_MoveParent,
/*10729*/       OPC_EmitMergeInputChains1_0,
/*10730*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10750
/*10740*/       OPC_MoveParent,
/*10741*/       OPC_EmitMergeInputChains1_0,
/*10742*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB0),// ->10774
/*10755*/   OPC_CaptureGlueInput,
/*10756*/   OPC_RecordChild0, // #0 = $FM
/*10757*/   OPC_MoveChild, 0,
/*10759*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10762*/   OPC_CheckType, MVT::i32,
/*10764*/   OPC_MoveParent,
/*10765*/   OPC_EmitConvertToTarget, 0,
/*10767*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB0), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb0 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB0 (imm:i32):$FM)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB1),// ->10796
/*10777*/   OPC_CaptureGlueInput,
/*10778*/   OPC_RecordChild0, // #0 = $FM
/*10779*/   OPC_MoveChild, 0,
/*10781*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10784*/   OPC_CheckType, MVT::i32,
/*10786*/   OPC_MoveParent,
/*10787*/   OPC_EmitConvertToTarget, 0,
/*10789*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB1), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb1 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB1 (imm:i32):$FM)
          /*SwitchOpcode*/ 54,  TARGET_VAL(PPCISD::CALL_NOP_SVR4),// ->10853
/*10799*/   OPC_RecordNode,   // #0 = 'PPCcall_nop_SVR4' chained node
/*10800*/   OPC_CaptureGlueInput,
/*10801*/   OPC_RecordChild1, // #1 = $func
/*10802*/   OPC_MoveChild, 1,
/*10804*/   OPC_SwitchOpcode /*3 cases */, 14,  TARGET_VAL(ISD::Constant),// ->10822
/*10808*/     OPC_CheckType, MVT::i64,
/*10810*/     OPC_MoveParent,
/*10811*/     OPC_EmitMergeInputChains1_0,
/*10812*/     OPC_EmitConvertToTarget, 1,
/*10814*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop_SVR4 (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP_ELF:i64 (imm:i64):$func)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10837
/*10825*/     OPC_CheckType, MVT::i64,
/*10827*/     OPC_MoveParent,
/*10828*/     OPC_EmitMergeInputChains1_0,
/*10829*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10852
/*10840*/     OPC_CheckType, MVT::i64,
/*10842*/     OPC_MoveParent,
/*10843*/     OPC_EmitMergeInputChains1_0,
/*10844*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop_SVR4 (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP_ELF:i64 (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::BUILD_VECTOR),// ->10919
/*10856*/   OPC_Scope, 48, /*->10906*/ // 2 children in Scope
/*10858*/     OPC_RecordNode, // #0 = $SIMM
/*10859*/     OPC_SwitchType /*3 cases */, 13,  MVT::v16i8,// ->10875
/*10862*/       OPC_CheckPredicate, 88, // Predicate_vecspltisb
/*10864*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*10867*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 13,  MVT::v8i16,// ->10890
/*10877*/       OPC_CheckPredicate, 89, // Predicate_vecspltish
/*10879*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*10882*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 13,  MVT::v4i32,// ->10905
/*10892*/       OPC_CheckPredicate, 90, // Predicate_vecspltisw
/*10894*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*10897*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*10906*/   /*Scope*/ 11, /*->10918*/
/*10907*/     OPC_CheckPredicate, 91, // Predicate_immAllZerosV
/*10909*/     OPC_CheckType, MVT::v4i32,
/*10911*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*10918*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::BITCAST),// ->11005
/*10922*/   OPC_RecordChild0, // #0 = $src
/*10923*/   OPC_Scope, 19, /*->10944*/ // 4 children in Scope
/*10925*/     OPC_CheckChild0Type, MVT::v8i16,
/*10927*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10933
/*10930*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10938
/*10935*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10943
/*10940*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10944*/   /*Scope*/ 19, /*->10964*/
/*10945*/     OPC_CheckChild0Type, MVT::v4i32,
/*10947*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10953
/*10950*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10958
/*10955*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10963
/*10960*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10964*/   /*Scope*/ 19, /*->10984*/
/*10965*/     OPC_CheckChild0Type, MVT::v4f32,
/*10967*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10973
/*10970*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10978
/*10975*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10983
/*10980*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*10984*/   /*Scope*/ 19, /*->11004*/
/*10985*/     OPC_CheckChild0Type, MVT::v16i8,
/*10987*/     OPC_SwitchType /*3 cases */, 3,  MVT::v8i16,// ->10993
/*10990*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10998
/*10995*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->11003
/*11000*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*11004*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::RET_FLAG),// ->11025
/*11008*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*11009*/   OPC_CaptureGlueInput,
/*11010*/   OPC_EmitMergeInputChains1_0,
/*11011*/   OPC_EmitInteger, MVT::i32, 20, 
/*11014*/   OPC_EmitRegister, MVT::i32, 0 /*zero_reg*/,
/*11017*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->11044
/*11028*/   OPC_RecordNode,   // #0 = 'br' chained node
/*11029*/   OPC_RecordChild1, // #1 = $dst
/*11030*/   OPC_MoveChild, 1,
/*11032*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*11035*/   OPC_MoveParent,
/*11036*/   OPC_EmitMergeInputChains1_0,
/*11037*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_Darwin),// ->11073
/*11047*/   OPC_RecordNode,   // #0 = 'PPCbctrl_Darwin' chained node
/*11048*/   OPC_CaptureGlueInput,
/*11049*/   OPC_Scope, 10, /*->11061*/ // 2 children in Scope
/*11051*/     OPC_CheckPatternPredicate, 0, // (!PPCSubTarget.isPPC64())
/*11053*/     OPC_EmitMergeInputChains1_0,
/*11054*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL_Darwin:i32)
/*11061*/   /*Scope*/ 10, /*->11072*/
/*11062*/     OPC_CheckPatternPredicate, 1, // (PPCSubTarget.isPPC64())
/*11064*/     OPC_EmitMergeInputChains1_0,
/*11065*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL8_Darwin:i64)
/*11072*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_SVR4),// ->11102
/*11076*/   OPC_RecordNode,   // #0 = 'PPCbctrl_SVR4' chained node
/*11077*/   OPC_CaptureGlueInput,
/*11078*/   OPC_Scope, 10, /*->11090*/ // 2 children in Scope
/*11080*/     OPC_CheckPatternPredicate, 0, // (!PPCSubTarget.isPPC64())
/*11082*/     OPC_EmitMergeInputChains1_0,
/*11083*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL_SVR4:i32)
/*11090*/   /*Scope*/ 10, /*->11101*/
/*11091*/     OPC_CheckPatternPredicate, 1, // (PPCSubTarget.isPPC64())
/*11093*/     OPC_EmitMergeInputChains1_0,
/*11094*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL8_ELF:i64)
/*11101*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->11113
/*11105*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*11106*/   OPC_EmitMergeInputChains1_0,
/*11107*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->11126
/*11116*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*11117*/   OPC_CaptureGlueInput,
/*11118*/   OPC_EmitMergeInputChains1_0,
/*11119*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->11139
/*11129*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*11130*/   OPC_CaptureGlueInput,
/*11131*/   OPC_EmitMergeInputChains1_0,
/*11132*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->11171
/*11142*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*11143*/   OPC_CaptureGlueInput,
/*11144*/   OPC_RecordChild1, // #1 = $rS
/*11145*/   OPC_Scope, 11, /*->11158*/ // 2 children in Scope
/*11147*/     OPC_CheckChild1Type, MVT::i32,
/*11149*/     OPC_EmitMergeInputChains1_0,
/*11150*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr GPRC:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 GPRC:i32:$rS)
/*11158*/   /*Scope*/ 11, /*->11170*/
/*11159*/     OPC_CheckChild1Type, MVT::i64,
/*11161*/     OPC_EmitMergeInputChains1_0,
/*11162*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr G8RC:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 G8RC:i64:$rS)
/*11170*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VPERM),// ->11189
/*11174*/   OPC_RecordChild0, // #0 = $vA
/*11175*/   OPC_RecordChild1, // #1 = $vB
/*11176*/   OPC_RecordChild2, // #2 = $vC
/*11177*/   OPC_CheckType, MVT::v16i8,
/*11179*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_TO_SINT),// ->11205
/*11192*/   OPC_RecordChild0, // #0 = $vA
/*11193*/   OPC_CheckChild0Type, MVT::v4f32,
/*11195*/   OPC_CheckType, MVT::v4i32,
/*11197*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_TO_UINT),// ->11221
/*11208*/   OPC_RecordChild0, // #0 = $vA
/*11209*/   OPC_CheckChild0Type, MVT::v4f32,
/*11211*/   OPC_CheckType, MVT::v4i32,
/*11213*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 VRRC:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 VRRC:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VMADDFP),// ->11239
/*11224*/   OPC_RecordChild0, // #0 = $A
/*11225*/   OPC_RecordChild1, // #1 = $B
/*11226*/   OPC_RecordChild2, // #2 = $C
/*11227*/   OPC_CheckType, MVT::v4f32,
/*11229*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VNMSUBFP),// ->11257
/*11242*/   OPC_RecordChild0, // #0 = $A
/*11243*/   OPC_RecordChild1, // #1 = $B
/*11244*/   OPC_RecordChild2, // #2 = $C
/*11245*/   OPC_CheckType, MVT::v4f32,
/*11247*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SINT_TO_FP),// ->11273
/*11260*/   OPC_RecordChild0, // #0 = $vA
/*11261*/   OPC_CheckChild0Type, MVT::v4i32,
/*11263*/   OPC_CheckType, MVT::v4f32,
/*11265*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 VRRC:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 VRRC:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::UINT_TO_FP),// ->11289
/*11276*/   OPC_RecordChild0, // #0 = $vA
/*11277*/   OPC_CheckChild0Type, MVT::v4i32,
/*11279*/   OPC_CheckType, MVT::v4f32,
/*11281*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 VRRC:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 VRRC:v4i32:$vA)
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::NOP),// ->11299
/*11292*/   OPC_CaptureGlueInput,
/*11293*/   OPC_MorphNodeTo, TARGET_VAL(PPC::NOP), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCnop) - Complexity = 3
            // Dst: (NOP)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->11315
/*11302*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*11303*/   OPC_CaptureGlueInput,
/*11304*/   OPC_RecordChild1, // #1 = $reg
/*11305*/   OPC_CheckChild1Type, MVT::i64,
/*11307*/   OPC_EmitMergeInputChains1_0,
/*11308*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc G8RC:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc G8RC:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->11327
/*11318*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*11319*/   OPC_CaptureGlueInput,
/*11320*/   OPC_EmitMergeInputChains1_0,
/*11321*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 11329 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 114
  // #OPC_RecordNode                     = 44
  // #OPC_RecordChild                    = 483
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 21
  // #OPC_MoveChild                      = 142
  // #OPC_MoveParent                     = 365
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 4
  // #OPC_CheckPredicate                 = 189
  // #OPC_CheckOpcode                    = 81
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 154
  // #OPC_SwitchType                     = 93
  // #OPC_CheckChildType                 = 54
  // #OPC_CheckInteger                   = 197
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 7
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 26
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 1
  // #OPC_EmitConvertToTarget            = 79
  // #OPC_EmitMergeInputChains           = 202
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 10
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 600

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!PPCSubTarget.isPPC64());
  case 1: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 18: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 19: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 20: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 21: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 22: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 23: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 25: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 31: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 32: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 33: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 34: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 35: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 36: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 37: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 38: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 39: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 40: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 41: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 44: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 45: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 56: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 57: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 58: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 59: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 64: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 65: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 66: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 67: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 68: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 69: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 70: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 71: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 72: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 73: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 74: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 75: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 76: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 77: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 78: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 79: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 80: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 81: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 82: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 83: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 84: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 85: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 86: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 87: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 88: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 89: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 90: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 91: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddrIdxOffs(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

