#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "untitled_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "untitled.h"
#include "untitled_capi.h"
#include "untitled_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"untitled/High Level Carrier/Output" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 0 } , { 1 , 0 , TARGET_STRING ( "untitled/Low Level Carrier1/startTime" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 2 , TARGET_STRING ( "untitled/High Level Carrier"
) , TARGET_STRING ( "rep_seq_y" ) , 0 , 1 , 0 } , { 3 , TARGET_STRING (
"untitled/High Level Carrier/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0
, 0 } , { 4 , TARGET_STRING ( "untitled/High Level Carrier/Look-Up Table1" )
, TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 1 , 0 } , { 0 , ( NULL )
, ( NULL ) , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] =
{ { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] =
{ { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . iw15ldy4xv , & rtB . oqgz5lif2u ,
& rtP . HighLevelCarrier_rep_seq_y [ 0 ] , & rtP . Constant_Value , & rtP .
LookUpTable1_bp01Data [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 1 , 2 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static
const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 0 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 2 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 3 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 1114578795U , 1532431470U , 1002958183U , 3849484620U } , ( NULL ) , 0 ,
0 } ; const rtwCAPI_ModelMappingStaticInfo * untitled_GetCAPIStaticMap ( void
) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void untitled_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void untitled_host_InitializeDataMapInfo ( untitled_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
