
#ifndef __MMI_SIMSRV_CFG__H__
#define __MMI_SIMSRV_CFG__H__
#if defined (__QUAD_SIM_DUAL_STANDBY__)
#include "mmi_simsrv_def.h"
#endif
// Not Allow Mater Reset

#define CONFIG_NAMR_SIMSRV_LAST_INSERTED_IMSI1 CONFIG_DEFINE(CFGIT_SIMSRV_LAST_INSERTED_IMSI1, u8, MAX_IMSI_LEN+1, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})
#define CONFIG_NAMR_SIMSRV_LAST_INSERTED_IMSI2 CONFIG_DEFINE(CFGIT_SIMSRV_LAST_INSERTED_IMSI2, u8, MAX_IMSI_LEN+1, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})
#define CONFIG_NAMR_SIMSRV_MASTER_IMSI CONFIG_DEFINE(CFGIT_SIMSRV_MASTER_IMSI, u8, MAX_IMSI_LEN+1, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})
#define CONFIG_NAMR_SIMSRV_SLAVE_IMSI CONFIG_DEFINE(CFGIT_SIMSRV_SLAVE_IMSI, u8, MAX_IMSI_LEN+1, {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0})
#ifdef __QUAD_SIM_DUAL_STANDBY__
#define CONFIG_NAMR_SIMSRV_MASTER_RACK CONFIG_DEFINE(CFGIT_SIMSRV_MASTER_RACK, SIMSRV_SIM_RACK_ID_e, 1, SIMSRV_SIMRACK_UNKNOW)
#define CONFIG_NAMR_SIMSRV_SLAVE_RACK CONFIG_DEFINE(CFGIT_SIMSRV_SLAVE_RACK, SIMSRV_SIM_RACK_ID_e, 1, SIMSRV_SIMRACK_UNKNOW)
#define SIMSRV_NAMR_ALL_CONFIG \
            CONFIG_NAMR_SIMSRV_LAST_INSERTED_IMSI1 \
            CONFIG_NAMR_SIMSRV_LAST_INSERTED_IMSI2 \
            CONFIG_NAMR_SIMSRV_MASTER_IMSI \
            CONFIG_NAMR_SIMSRV_SLAVE_IMSI \
            CONFIG_NAMR_SIMSRV_MASTER_RACK \
            CONFIG_NAMR_SIMSRV_SLAVE_RACK
#else
#define SIMSRV_NAMR_ALL_CONFIG \
            CONFIG_NAMR_SIMSRV_LAST_INSERTED_IMSI1 \
            CONFIG_NAMR_SIMSRV_LAST_INSERTED_IMSI2 \
            CONFIG_NAMR_SIMSRV_MASTER_IMSI \
            CONFIG_NAMR_SIMSRV_SLAVE_IMSI
#endif

#endif //__MMI_SIMSRV_CFG__H__



