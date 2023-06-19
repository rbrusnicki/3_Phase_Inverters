#ifndef RTW_HEADER_Three_Level_Inverter_h_
#define RTW_HEADER_Three_Level_Inverter_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef Three_Level_Inverter_COMMON_INCLUDES_
#define Three_Level_Inverter_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "Three_Level_Inverter_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME Three_Level_Inverter
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (20) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T kpvcg2livq ; real_T g4gix24ltw ; real_T ng1u4u31jv ;
real_T mggvnssrjp [ 4 ] ; real_T i2jwrzmiww ; real_T h4v4uhqjpn [ 4 ] ;
real_T dlcsyhrugj ; real_T kue0mfqq14 [ 4 ] ; boolean_T lkb1hwvu24 ;
boolean_T gmyffav5en ; boolean_T htnkn4r2ij ; boolean_T oh5kuff3qk ;
boolean_T opnaairama ; boolean_T mvm05334ry ; boolean_T f2kblflu05 ;
boolean_T bfkweff2jd ; boolean_T dknfxbmma2 ; boolean_T bl3oiefdou ;
boolean_T gqgeoel2ld ; boolean_T ane3mwsg13 ; } B ; typedef struct { struct {
void * LoggedData [ 6 ] ; } jg01x4lfds ; struct { void * LoggedData [ 4 ] ; }
nbnsl1ab2x ; boolean_T cninge1sea ; boolean_T owfgbizw04 ; boolean_T
heqsunz4yl ; boolean_T c2pqkrnhwd ; boolean_T n1jcafjbat ; boolean_T
oqxsbhtc4o ; } DW ; typedef struct { real_T jyujulbmzl ; real_T mdjqumi44b ;
real_T aqsqy0fedy ; real_T kjn1ogt1jn ; real_T k4kvplvi0i ; real_T n1zkjrr4rf
; } ZCV ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T TriangularWave1_rep_seq_y [ 3 ] ; real_T
TriangularWave2_rep_seq_y [ 3 ] ; real_T LookUpTable1_bp01Data [ 3 ] ; real_T
APhaseRef_Amp ; real_T APhaseRef_Bias ; real_T APhaseRef_Freq ; real_T
APhaseRef_Phase ; real_T LookUpTable1_bp01Data_gmm2er1ewv [ 3 ] ; real_T
Gain3_Gain ; real_T BPhaseRef_Amp ; real_T BPhaseRef_Bias ; real_T
BPhaseRef_Freq ; real_T BPhaseRef_Phase ; real_T Gain1_Gain ; real_T
CPhaseRef_Amp ; real_T CPhaseRef_Bias ; real_T CPhaseRef_Freq ; real_T
CPhaseRef_Phase ; real_T Gain2_Gain ; real_T Constant_Value ; real_T
Constant_Value_hgjkweesvu ; real_T Constant_Value_gsjvaoguds ; } ; extern
const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern DW rtDW ;
extern P rtP ; extern const rtwCAPI_ModelMappingStaticInfo *
Three_Level_Inverter_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS
; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
