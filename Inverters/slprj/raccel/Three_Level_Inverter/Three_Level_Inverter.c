#include "rt_logging_mmi.h"
#include "Three_Level_Inverter_capi.h"
#include <math.h>
#include "Three_Level_Inverter.h"
#include "Three_Level_Inverter_private.h"
#include "Three_Level_Inverter_dt.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "9.4 (R2020b) 29-Jul-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; } B rtB
; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = & model_S ;
real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table
[ ] , uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ; uint32_T bpIdx ;
uint32_T iLeft ; uint32_T iRght ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac
= ( u0 - bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [
maxIndex ] ) { bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while
( iRght - iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else {
iLeft = bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [
iLeft ] ) / ( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft =
maxIndex - 1U ; frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] -
bp0 [ maxIndex - 1U ] ) ; } yL_0d0 = table [ iLeft ] ; return ( table [ iLeft
+ 1U ] - yL_0d0 ) * frac + yL_0d0 ; } void MdlStart ( void ) { { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} } void MdlOutputs ( int_T tid ) { rtB . kpvcg2livq = look1_binlxpw (
muDoubleScalarRem ( ssGetT ( rtS ) - 0.0 , rtP . Constant_Value_hgjkweesvu )
, rtP . LookUpTable1_bp01Data , rtP . TriangularWave1_rep_seq_y , 2U ) ; rtB
. g4gix24ltw = ( muDoubleScalarSin ( rtP . APhaseRef_Freq * ssGetTaskTime (
rtS , 0 ) + rtP . APhaseRef_Phase ) * rtP . APhaseRef_Amp + rtP .
APhaseRef_Bias ) * rtP . Constant_Value ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . cninge1sea = ( rtB . kpvcg2livq
< rtB . g4gix24ltw ) ; } rtB . lkb1hwvu24 = rtDW . cninge1sea ; } rtB .
ng1u4u31jv = look1_binlxpw ( muDoubleScalarRem ( ssGetT ( rtS ) - 0.0 , rtP .
Constant_Value_gsjvaoguds ) , rtP . LookUpTable1_bp01Data_gmm2er1ewv , rtP .
TriangularWave2_rep_seq_y , 2U ) ; rtB . i2jwrzmiww = ( muDoubleScalarSin (
rtP . BPhaseRef_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . BPhaseRef_Phase ) *
rtP . BPhaseRef_Amp + rtP . BPhaseRef_Bias ) * rtP . Constant_Value ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
owfgbizw04 = ( rtB . ng1u4u31jv < rtB . g4gix24ltw ) ; } rtB . gmyffav5en =
rtDW . owfgbizw04 ; rtB . htnkn4r2ij = ! rtB . lkb1hwvu24 ; rtB . oh5kuff3qk
= ! rtB . gmyffav5en ; rtB . mggvnssrjp [ 0 ] = rtP . Gain3_Gain * ( real_T )
rtB . lkb1hwvu24 ; rtB . mggvnssrjp [ 1 ] = rtP . Gain3_Gain * ( real_T ) rtB
. gmyffav5en ; rtB . mggvnssrjp [ 2 ] = rtP . Gain3_Gain * ( real_T ) rtB .
htnkn4r2ij ; rtB . mggvnssrjp [ 3 ] = rtP . Gain3_Gain * ( real_T ) rtB .
oh5kuff3qk ; } rtB . dlcsyhrugj = ( muDoubleScalarSin ( rtP . CPhaseRef_Freq
* ssGetTaskTime ( rtS , 0 ) + rtP . CPhaseRef_Phase ) * rtP . CPhaseRef_Amp +
rtP . CPhaseRef_Bias ) * rtP . Constant_Value ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . heqsunz4yl = ( rtB .
kpvcg2livq < rtB . i2jwrzmiww ) ; rtDW . c2pqkrnhwd = ( rtB . ng1u4u31jv <
rtB . i2jwrzmiww ) ; } rtB . opnaairama = rtDW . heqsunz4yl ; rtB .
mvm05334ry = rtDW . c2pqkrnhwd ; rtB . f2kblflu05 = ! rtB . opnaairama ; rtB
. bfkweff2jd = ! rtB . mvm05334ry ; rtB . h4v4uhqjpn [ 0 ] = rtP . Gain1_Gain
* ( real_T ) rtB . opnaairama ; rtB . h4v4uhqjpn [ 1 ] = rtP . Gain1_Gain * (
real_T ) rtB . mvm05334ry ; rtB . h4v4uhqjpn [ 2 ] = rtP . Gain1_Gain * (
real_T ) rtB . f2kblflu05 ; rtB . h4v4uhqjpn [ 3 ] = rtP . Gain1_Gain * (
real_T ) rtB . bfkweff2jd ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
n1jcafjbat = ( rtB . kpvcg2livq < rtB . dlcsyhrugj ) ; rtDW . oqxsbhtc4o = (
rtB . ng1u4u31jv < rtB . dlcsyhrugj ) ; } rtB . dknfxbmma2 = rtDW .
n1jcafjbat ; rtB . bl3oiefdou = rtDW . oqxsbhtc4o ; rtB . gqgeoel2ld = ! rtB
. dknfxbmma2 ; rtB . ane3mwsg13 = ! rtB . bl3oiefdou ; rtB . kue0mfqq14 [ 0 ]
= rtP . Gain2_Gain * ( real_T ) rtB . dknfxbmma2 ; rtB . kue0mfqq14 [ 1 ] =
rtP . Gain2_Gain * ( real_T ) rtB . bl3oiefdou ; rtB . kue0mfqq14 [ 2 ] = rtP
. Gain2_Gain * ( real_T ) rtB . gqgeoel2ld ; rtB . kue0mfqq14 [ 3 ] = rtP .
Gain2_Gain * ( real_T ) rtB . ane3mwsg13 ; } UNUSED_PARAMETER ( tid ) ; }
void MdlOutputsTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlZeroCrossings ( void ) {
ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
_rtZCSV -> jyujulbmzl = rtB . kpvcg2livq - rtB . g4gix24ltw ; _rtZCSV ->
mdjqumi44b = rtB . ng1u4u31jv - rtB . g4gix24ltw ; _rtZCSV -> aqsqy0fedy =
rtB . kpvcg2livq - rtB . i2jwrzmiww ; _rtZCSV -> kjn1ogt1jn = rtB .
ng1u4u31jv - rtB . i2jwrzmiww ; _rtZCSV -> k4kvplvi0i = rtB . kpvcg2livq -
rtB . dlcsyhrugj ; _rtZCSV -> n1zkjrr4rf = rtB . ng1u4u31jv - rtB .
dlcsyhrugj ; } void MdlTerminate ( void ) { } void MdlInitializeSizes ( void
) { ssSetNumContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS
, 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 3 )
; ssSetNumBlocks ( rtS , 41 ) ; ssSetNumBlockIO ( rtS , 20 ) ;
ssSetNumBlockParams ( rtS , 30 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 5.0E-6 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 111207102U ) ;
ssSetChecksumVal ( rtS , 1 , 1576877543U ) ; ssSetChecksumVal ( rtS , 2 ,
1646576327U ) ; ssSetChecksumVal ( rtS , 3 , 3709386535U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( rtB ) ,
"BlockIO" ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; }
{ void * dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ;
ssSetWorkSizeInBytes ( rtS , sizeof ( rtDW ) , "DWork" ) ; ( void ) memset (
dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void )
memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 14 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } Three_Level_Inverter_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"Three_Level_Inverter" ) ; ssSetPath ( rtS , "Three_Level_Inverter" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 0.02 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; static uint8_T zcAttributes [ 6 ] = { ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) } ; ssSetStepSize ( rtS , 5.0E-6 ) ; ssSetMinStepSize (
rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError (
rtS , 0 ) ; ssSetMaxStepSize ( rtS , 5.0E-6 ) ; ssSetSolverMaxOrder ( rtS , -
1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL )
) ; ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 0 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
0 ) ; ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS ,
& slvrInfo ) ; ssSetSolverName ( rtS , "VariableStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetSolverZcSignalAttrib ( rtS ,
zcAttributes ) ; ssSetSolverNumZcSignals ( rtS , 6 ) ;
ssSetModelZeroCrossings ( rtS , MdlZeroCrossings ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 1 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 6 ) ; } ssSetChecksumVal ( rtS , 0 , 111207102U
) ; ssSetChecksumVal ( rtS , 1 , 1576877543U ) ; ssSetChecksumVal ( rtS , 2 ,
1646576327U ) ; ssSetChecksumVal ( rtS , 3 , 3709386535U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
