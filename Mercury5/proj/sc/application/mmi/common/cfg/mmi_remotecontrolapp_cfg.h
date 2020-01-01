/**
* file mmi_remotecontrolapp_cfg.h
*
*
*/

#ifndef __MMI_REMOTECONTROLAPP_CFG_H__
#define __MMI_REMOTECONTROLAPP_CFG_H__

//#include"mmi_remotecontrolapp_priv.h"

/* Number Select Type */
#define CONFIG_AMR_REMOTECONTROL_SELECT_NUMBER_TYPE CONFIG_DEFINE(CFGIT_REMOTE_CONTROL_SELECT_NUMBER_TYPE, u32, 1, 0)
/* Control Function */
#define CONFIG_AMR_REMOTECONTROL_CONTROL_FUNCTION CONFIG_DEFINE(CFGIT_REMOTE_CONTROL_SELECT_CONTROL_FUNCTION, u32, 1, 0)
#define CONFIG_AMR_REMOTECONTROL_FUNCTION_ONOFF CONFIG_DEFINE(CFGIT_REMOTE_CONTROL_FUNCTION_ONOFF, u32, 1, 0)
#define CONFIG_AMR_REMOTECONTROL_IS_PHONEBLOCK CONFIG_DEFINE(CFGIT_REMOTE_CONTROL_IS_PHONEBLOCK, boolean, 1, 0)
/*
#define CONFIG_AMR_REMOTECONTROL_SMSTRANSFER_NUMBER CONFIG_DEFINE(CFGIT_REMOTE_CONTROL_SMSTRANSFER_NUMBER, MAE_WChar, 41, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00})
*/
#ifdef __ANTI_STEAL_REMOTE_CONTROL_MMI__
#define REMOTECONTROL_AMR_ALL_CONFIG \
                            CONFIG_AMR_REMOTECONTROL_SELECT_NUMBER_TYPE \
                            CONFIG_AMR_REMOTECONTROL_CONTROL_FUNCTION \
                            CONFIG_AMR_REMOTECONTROL_FUNCTION_ONOFF \
                            CONFIG_AMR_REMOTECONTROL_IS_PHONEBLOCK
#else
#define REMOTECONTROL_AMR_ALL_CONFIG
#endif // __ANTI_STEAL_REMOTE_CONTROL_MMI__

#endif	//__MMI_REMOTECONTROLAPP_CFG_H__


