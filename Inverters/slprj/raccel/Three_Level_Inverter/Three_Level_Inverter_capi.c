#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "Three_Level_Inverter_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "Three_Level_Inverter.h"
#include "Three_Level_Inverter_capi.h"
#include "Three_Level_Inverter_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"Three_Level_Inverter/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 1 , 0 , TARGET_STRING ( "Three_Level_Inverter/Gain2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"Three_Level_Inverter/Gain3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 3 , 0 , TARGET_STRING ( "Three_Level_Inverter/Control of Switch/NOT4" ) ,
TARGET_STRING ( "av2" ) , 0 , 1 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/NOT5" ) , TARGET_STRING ( "av1" ) , 0
, 1 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/NOT6" ) , TARGET_STRING ( "bv2" ) , 0
, 1 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/NOT7" ) , TARGET_STRING ( "bv1" ) , 0
, 1 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/NOT8" ) , TARGET_STRING ( "cv2" ) , 0
, 1 , 1 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/NOT9" ) , TARGET_STRING ( "cv1" ) , 0
, 1 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Product" ) , TARGET_STRING ( "A" ) ,
0 , 0 , 1 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Product1" ) , TARGET_STRING ( "B" ) ,
0 , 0 , 1 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Product2" ) , TARGET_STRING ( "C" ) ,
0 , 0 , 1 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Relational Operator" ) ,
TARGET_STRING ( "a2" ) , 0 , 1 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Relational Operator1" ) ,
TARGET_STRING ( "b2" ) , 0 , 1 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Relational Operator2" ) ,
TARGET_STRING ( "b1" ) , 0 , 1 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Relational Operator3" ) ,
TARGET_STRING ( "a1" ) , 0 , 1 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Relational Operator4" ) ,
TARGET_STRING ( "c2" ) , 0 , 1 , 1 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Relational Operator5" ) ,
TARGET_STRING ( "c1" ) , 0 , 1 , 1 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave1/Output" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 19 , 0 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave2/Output" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 20 , TARGET_STRING ( "Three_Level_Inverter/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 21 , TARGET_STRING (
"Three_Level_Inverter/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , {
22 , TARGET_STRING ( "Three_Level_Inverter/Gain3" ) , TARGET_STRING ( "Gain"
) , 0 , 1 , 0 } , { 23 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave1" ) , TARGET_STRING (
"rep_seq_y" ) , 0 , 2 , 0 } , { 24 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave2" ) , TARGET_STRING (
"rep_seq_y" ) , 0 , 2 , 0 } , { 25 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Constant" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 26 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/A-Phase Ref" ) , TARGET_STRING (
"Amplitude" ) , 0 , 1 , 0 } , { 27 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/A-Phase Ref" ) , TARGET_STRING (
"Bias" ) , 0 , 1 , 0 } , { 28 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/A-Phase Ref" ) , TARGET_STRING (
"Frequency" ) , 0 , 1 , 0 } , { 29 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/A-Phase Ref" ) , TARGET_STRING (
"Phase" ) , 0 , 1 , 0 } , { 30 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/B-Phase Ref" ) , TARGET_STRING (
"Amplitude" ) , 0 , 1 , 0 } , { 31 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/B-Phase Ref" ) , TARGET_STRING (
"Bias" ) , 0 , 1 , 0 } , { 32 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/B-Phase Ref" ) , TARGET_STRING (
"Frequency" ) , 0 , 1 , 0 } , { 33 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/B-Phase Ref" ) , TARGET_STRING (
"Phase" ) , 0 , 1 , 0 } , { 34 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/C-Phase Ref" ) , TARGET_STRING (
"Amplitude" ) , 0 , 1 , 0 } , { 35 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/C-Phase Ref" ) , TARGET_STRING (
"Bias" ) , 0 , 1 , 0 } , { 36 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/C-Phase Ref" ) , TARGET_STRING (
"Frequency" ) , 0 , 1 , 0 } , { 37 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/C-Phase Ref" ) , TARGET_STRING (
"Phase" ) , 0 , 1 , 0 } , { 38 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 39 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave1/Look-Up Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 40 ,
TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 41 , TARGET_STRING (
"Three_Level_Inverter/Control of Switch/Triangular Wave2/Look-Up Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 0 , ( NULL ) ,
( NULL ) , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = {
{ 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] =
{ { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . h4v4uhqjpn [ 0 ] , & rtB .
kue0mfqq14 [ 0 ] , & rtB . mggvnssrjp [ 0 ] , & rtB . htnkn4r2ij , & rtB .
oh5kuff3qk , & rtB . f2kblflu05 , & rtB . bfkweff2jd , & rtB . gqgeoel2ld , &
rtB . ane3mwsg13 , & rtB . g4gix24ltw , & rtB . i2jwrzmiww , & rtB .
dlcsyhrugj , & rtB . lkb1hwvu24 , & rtB . opnaairama , & rtB . mvm05334ry , &
rtB . gmyffav5en , & rtB . dknfxbmma2 , & rtB . bl3oiefdou , & rtB .
kpvcg2livq , & rtB . ng1u4u31jv , & rtP . Gain1_Gain , & rtP . Gain2_Gain , &
rtP . Gain3_Gain , & rtP . TriangularWave1_rep_seq_y [ 0 ] , & rtP .
TriangularWave2_rep_seq_y [ 0 ] , & rtP . Constant_Value , & rtP .
APhaseRef_Amp , & rtP . APhaseRef_Bias , & rtP . APhaseRef_Freq , & rtP .
APhaseRef_Phase , & rtP . BPhaseRef_Amp , & rtP . BPhaseRef_Bias , & rtP .
BPhaseRef_Freq , & rtP . BPhaseRef_Phase , & rtP . CPhaseRef_Amp , & rtP .
CPhaseRef_Bias , & rtP . CPhaseRef_Freq , & rtP . CPhaseRef_Phase , & rtP .
Constant_Value_hgjkweesvu , & rtP . LookUpTable1_bp01Data [ 0 ] , & rtP .
Constant_Value_gsjvaoguds , & rtP . LookUpTable1_bp01Data_gmm2er1ewv [ 0 ] ,
} ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
4 , 1 , 1 , 1 , 1 , 3 } ; static const real_T rtcapiStoredFloats [ ] = { 0.0
, 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , (
NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 0 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 20 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 22 , rtModelParameters , 0 } , { ( NULL ) , 0 } , {
rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap
, rtDimensionArray } , "float" , { 111207102U , 1576877543U , 1646576327U ,
3709386535U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
Three_Level_Inverter_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void Three_Level_Inverter_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion
( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
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
void Three_Level_Inverter_host_InitializeDataMapInfo (
Three_Level_Inverter_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
