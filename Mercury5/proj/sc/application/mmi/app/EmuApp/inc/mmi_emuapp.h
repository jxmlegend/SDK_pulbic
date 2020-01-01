/**
* @file mmi_emuapp.h
*
* State Machine Application - EMUAPP
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_EMUAPP
*
*
* @version $Id$
*/
#ifndef __MMI_EMUAPP_H__
#define __MMI_EMUAPP_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_common_emu.h" // public data type defintion

/**
 * Functions
 */
void EmuAppPreNew(void);
MAE_Ret EmuAppNew(MAE_ClsId id, void **ppObj);

/*-------------------------------------------------------------------------*/
#endif /* __MMI_EMUAPP_H__ */