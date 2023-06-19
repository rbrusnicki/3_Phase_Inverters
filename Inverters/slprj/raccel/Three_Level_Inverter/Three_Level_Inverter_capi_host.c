#include "Three_Level_Inverter_capi_host.h"
static Three_Level_Inverter_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Three_Level_Inverter_host_InitializeDataMapInfo(&(root), "Three_Level_Inverter");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
