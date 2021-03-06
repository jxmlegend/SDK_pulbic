/**
* @file mmi_wlansrv_sm.h
*
* State Machine Service - WLANSRV
* Generated by XFSM v1.0, CodeVer=v0.24 
*
* Class Id: CLSID_WLANSRV
* 
*
* @version $Id$
*/
#ifndef __MMI_WLANSRV_SM_H__
#define __MMI_WLANSRV_SM_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_sm.h"
#include "mmi_class.h"
/* Foreword */
/* User Code Begin */

/* User Code End */

/**
 * Mode Tree Properties
 */
#define cWLANSRV_ModeNumbers				7
#define cWLANSRV_DependencyNumbers			32

/**
 * Modes (index should begin from 0 and increase continuously)
 */
#define cWLANSRV_MODE_WLANSrv				0
#define cWLANSRV_MODE_Off				1
#define cWLANSRV_MODE_Initialize				2
#define cWLANSRV_MODE_Active				3
#define cWLANSRV_MODE_Active_Idle				4
#define cWLANSRV_MODE_Active_Searching				5
#define cWLANSRV_MODE_Active_Connecting				6


/**
 * Internal Events
 */
#define WLANSRV_IEVT_PowerOnOffReq				(CLSID_WLANSRV << 16 | 10)
#define WLANSRV_IEVT_GotoActive				(CLSID_WLANSRV << 16 | 11)
#define WLANSRV_IEVT_GotoOff				(CLSID_WLANSRV << 16 | 12)
#define WLANSRV_IEVT_ConnectReq				(CLSID_WLANSRV << 16 | 13)
#define WLANSRV_IEVT_ScanReq				(CLSID_WLANSRV << 16 | 14)
#define WLANSRV_IEVT_BackToIdle				(CLSID_WLANSRV << 16 | 15)


/**
 * Macros for triggering internal events
 */
#define TRIGGER_EVT_WLANSRV_IEVT_PowerOnOffReq(pSM, p1, p2)	MAE_TriggerEvent(pSM, WLANSRV_IEVT_PowerOnOffReq, p1, p2)
#define TRIGGER_EVT_WLANSRV_IEVT_GotoActive(pSM, p1, p2)	MAE_TriggerEvent(pSM, WLANSRV_IEVT_GotoActive, p1, p2)
#define TRIGGER_EVT_WLANSRV_IEVT_GotoOff(pSM, p1, p2)	MAE_TriggerEvent(pSM, WLANSRV_IEVT_GotoOff, p1, p2)
#define TRIGGER_EVT_WLANSRV_IEVT_ConnectReq(pSM, p1, p2)	MAE_TriggerEvent(pSM, WLANSRV_IEVT_ConnectReq, p1, p2)
#define TRIGGER_EVT_WLANSRV_IEVT_ScanReq(pSM, p1, p2)	MAE_TriggerEvent(pSM, WLANSRV_IEVT_ScanReq, p1, p2)
#define TRIGGER_EVT_WLANSRV_IEVT_BackToIdle(pSM, p1, p2)	MAE_TriggerEvent(pSM, WLANSRV_IEVT_BackToIdle, p1, p2)


/*-------------------------------------------------------------------------*/
extern const SM_Mode_t WLANSRV_modeTree[];
extern const SM_Transition_t WLANSRV_transition[];
extern const SM_TransitionForEvent_t WLANSRV_transForEvent[];
extern const SM_EventDep_t WLANSRV_eventDependency[];

/* Epilogue */
/* User Code Begin */

/* User Code End */
#endif /* __MMI_WLANSRV_SM_H__ */
