/**
* @file mmi_mmsrv_priv.h
*
* State Machine Service - MMSRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_MMSRV
*
*
* @version $Id: mmi_mmsrv_priv.h 41541 2009-09-28 03:11:36Z lih.wang $
*/
#ifndef __MMI_MMSRV_PRIV_H__
#define __MMI_MMSRV_PRIV_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_sm_defs.h"
#include "mmi_mmsrv.h"
#include "mmi_mmsrv_sm.h"
#include "mmi_mae_datamodel.h"
#include "mmi_mae_notifier.h"
#include "mmi_mae_vectormodel.h"
#include "mmi_mae_clock.h"
#include "mmi_simsrv.h"
#include "mmi_ccsrv.h"
#include "mmi_cfgsrv.h"
#ifdef __BLUETOOTH_MMI__
#include "mmi_btsrv.h"
#endif
#ifdef __WLAN_MMI__
#include "mmi_wlansrv.h"
#endif

#ifdef  __DUAL_SIM_MMI__
#define MMSRV_SIM_SLOT_NUM 2 //For support Dual SIM, Master/Slave
#define MMSRV_MASTER_SIM_INDEX 0
#define MMSRV_SLAVE_SIM_INDEX 1
#else
#define MMSRV_SIM_SLOT_NUM 1 //For support only One SIM
#define MMSRV_MASTER_SIM_INDEX 0
#endif

#define MMSRV_UPDATE_NONE 0
#define MMSRV_UPDATE_WGPRS_SIM1 1
#define MMSRV_UPDATE_WGPRS_SIM2 2


typedef enum
{
    MMSRV_REQUEST_TYPE_NONE = 0
,                //none
    MMSRV_REQUEST_TYPE_NET_SEARCH
,              //Netowrk searching request
    MMSRV_REQUEST_TYPE_NET_REG
,                 //Network registration request
    MMSRV_REQUEST_TYPE_PREFER_PLMN_UPDATE
,      //Band change request
    MMSRV_REQUEST_TYPE_PREFER_PLMN_QUE
,         //Band query request
    MMSRV_REQUEST_TYPE_BAND_CHANGE
,             //Band change request
    MMSRV_REQUEST_TYPE_BAND_QUE
,                //Band query request
    MMSRV_REQUEST_TYPE_LINE_CHANGE
,             //Line change request
    MMSRV_REQUEST_TYPE_LINE_QUE
,                //Line query request
    MMSRV_REQUEST_TYPE_ONLINE
,                  //Online request
    MMSRV_REQUEST_TYPE_OFFLINE
,                 //Offline reqeust
    MMSRV_REQUEST_TYPE_MSClass
,                 //MSClass reqeust
    MMSRV_REQUEST_TYPE_GPRS_PDP_ACTION
 ,  //GPRS PDP context action reqeust
    MMSRV_REQUEST_TYPE_GPRS_PDP_ADD
,     //GPRS PDP context add reqeust
    MMSRV_REQUEST_TYPE_GPRS_PDP_DEL
,     //GPRS PDP context delete reqeust
    MMSRV_REQUEST_TYPE_GPRS_QOS_SET
,     //GPRS QoS set reqeust
    MMSRV_REQUEST_TYPE_GPRS_QOS_QUE
,     //GPRS QoS query reqeust
    MMSRV_REQUEST_TYPE_CELL_INFO_QUE
,    //Cell info query reqeust
    MMSRV_REQUEST_TYPE_WGPRS_SET
,        //WGPRS set reqeust
    MMSRV_REQUEST_TYPE_WGPRS_QUE
,        //WGPRS query reqeust
    MMSRV_REQUEST_TYPE_NET_ACCESS_MODE_CHANGE
,       //Net access mode change reqeust
#ifdef __PROGRAM_TEMP_IMEI_MMI__
    MMSRV_REQUEST_TYPE_SET_IMEI
,       //Set IMEI reqeust
#endif
} MMSRV_REQUEST_TYPE_e;
#ifdef __GPRS_MMI__
typedef struct
{
    MMI_MMSRV_NetAccess_Mode_e NetAccessMode;
} MMSRV_NetAccessModeChangeReq_t;
#endif //__GPRS_MMI__

#ifdef __PROGRAM_TEMP_IMEI_MMI__
typedef struct
{
    u8 szIMEICode[MMI_MM_IMEI_LENGTH+1];
} MMSRV_SetIMEIReq_t;
#endif

typedef union
{
    MMSRV_NetworkRegReq_t NetworkRegReq;
    MMSRV_Online_t OnlineReq;
    MMSRV_ChangeLine_t ChangeLineReq;
#ifdef __GPRS_MMI__
    MMSRV_MSClassReq_t MSClassReq;
    MMSRV_GPRSPDPContextActReq_t GPRSPDPActionReq;
    MMSRV_GPRSPDPContextAddReq_t GPRSPDPAddReq;
    MMSRV_GPRSPDPContextDeleteReq_t GPRSPDPDeleteReq;
    MMSRV_GPRSQoSSetReq_t GPRSQoSSetReq;
    MMSRV_GPRSQoSQueReq_t GPRSQoSQueryReq;
#endif //__GPRS_MMI__
    MMSRV_CellInfoReq_t CellInfoReq;
#ifdef __GPRS_MMI__
    MMSRV_WGPRSReq_t WGPRSSetReq;
    MMSRV_QueryWGPRSReq_t WGPRSQueryReq;
    MMSRV_NetAccessModeChangeReq_t ChangeNetAccessModeReq;
#endif //__GPRS_MMI__
#ifdef __PROGRAM_TEMP_IMEI_MMI__
    MMSRV_SetIMEIReq_t SetIMEIReq;
#endif
} MMSRV_UNION_REQUEST_INFO_t;

typedef struct
{
    void *pOwner;           /*Record MMSRV point for free waiting queue function*/
    void *pCaller;      /*Record request caller*/
    MMSRV_REQUEST_TYPE_e eRequestType;  /*Record request type */
    MMSRV_UNION_REQUEST_INFO_t RequestInfo; /*Record request information */
    u8 DualMode;        /*Record request Dual ID*/
} MMSRV_REQUEST_t;

/**
 * Application structure
 */
typedef struct MMI_MMSRV_TAG
{
    DECLARE_FUNCTBL(IMMSRV);  // function table pointer
    u32 refCnt;     // reference count
    SM_Mao_t app;       // StateMachine Application data
    SM_ModeId_t _lastActiveMode[cMMSRV_ModeNumbers];    // Last child, current active child
    SM_ModeId_t _currentMode[1];
    /* Add custom fields below */
    MAE_Notifier_t *pNotifier;         //Notify the APP/Service who are interested to MM event
    IVectorModel *pWaitingQueue;      //to keep requests if MMSRV is busy to process it immediately
    MMI_MMSRV_Status_e ServiceStatus;       //Record MM Service Status

    //boolean                         bIsNetSearchTimerCreate[MMSRV_SIM_SLOT_NUM];  //Keep Network Search timer Status
    //boolean                         bIsNeedNetSearchTimer[MMSRV_SIM_SLOT_NUM];        //Keep wehther we need to create Network Search timer

    boolean bIsNetInfoQueryTimerCreate[MMSRV_SIM_SLOT_NUM]; //Keep Network info query timer Status
    u16 nNetInfoQueryRepeatTimes[MMSRV_SIM_SLOT_NUM];           //Keep Network info query repeat times

    MMSRV_NetworkRegInfo_t NetworkRegInfo[MMSRV_SIM_SLOT_NUM];      //Record current network service registration info
    MMSRV_NITZNetworkInfo_t NITZNetworkInfo[MMSRV_SIM_SLOT_NUM];      //Record current NITZ info
#ifdef __GPRS_MMI__
    MMSRV_GPRSRegInfo_t GPRSRegInfo[MMSRV_SIM_SLOT_NUM];        //Record current GPRS network service registration info
#endif //__GPRS_MMI__
    MMSRV_NetworkRegReq_t NetworkRegReq[MMSRV_SIM_SLOT_NUM];        //Record register network request data
    MMSRV_PreferredPLMNUpdateReq_t PreferredPLMNReq[MMSRV_SIM_SLOT_NUM];   //Record update preferred PLMN list request data
    MMI_MMSRV_RSSI_Status_e RSSIStatus[MMSRV_SIM_SLOT_NUM];         //Keep current RSSI status
    //MMSRV_SignalStrengthInd_t       RSSIInfo[MMSRV_SIM_SLOT_NUM];           //Keep current RSSI info
    MMI_MMSRV_Line_CFU_e DivertedCallStatus[MMSRV_SIM_SLOT_NUM]; //Keep current DivertedCall Line status
    MMI_MMSRV_Line_Service_e ActiveLine[MMSRV_SIM_SLOT_NUM];         //Keep current Line status
#ifdef __3G_RIL_MMI__
    MMSRV_BandSelectionInfo_t BandInfo[MMSRV_SIM_SLOT_NUM];         //Keep current band info
#ifdef __GPRS_MMI__
    MMI_MMSRV_WGPRS_StatusOnOff_e WGPRSStatus[MMSRV_SIM_SLOT_NUM];  // keep WGPRS status
    MMI_MMSRV_WGPRS_MultiSlotClass_e WGPRSMultiSlotClassInfo[MMSRV_SIM_SLOT_NUM]; // keep WGPRS multislotClass info
#endif //__GPRS_MMI__
    MMSRV_MuserModeCnf_t     MuserModeCnf;     // Keep modem info
#endif
    //MMI_MMSRV_NetAccess_Mode_e        NetAccessMode[MMSRV_SIM_SLOT_NUM];      //Keep current WGPRS attach parameter status

#ifdef __3G_RIL_MMI__
    MMSRV_BandSelectionInfo_t BandSelReq;
#endif
    //Add for queue feature
    //MMSRV_REQUEST_t           *PreferPlmnUpdateReqData;   //Record update prefer PLMN list request data
    MMSRV_REQUEST_t *PreferPlmnQueryReqData;        //Record query prefer PLMN list request data

    MMSRV_REQUEST_t *LineChangeReqData; //Record change line request data

    MMSRV_REQUEST_t *LineQueryReqData;  //Record query line request data
    MMSRV_REQUEST_t *BandQueryReqData;  //Record query line request data
    MMSRV_REQUEST_t *OnlineReqData;     //Record online request data
    MMSRV_REQUEST_t *OfflineReqData;        //Record offline request data

    MMSRV_REQUEST_t *pMSClassReqData;           //MSClass request data
#ifdef __GPRS_MMI__
    MMSRV_REQUEST_t *pGPRSPDPActionReqData;     //GPRS PDP context action request data
    MMSRV_REQUEST_t *pGPRSPDPAddReqData;        //GPRS PDP context add request data
    MMSRV_REQUEST_t *pGPRSPDPDeleteReqData;     //GPRS PDP context delete request data
    MMSRV_REQUEST_t *pGPRSQoSSetReqData;        //GPRS QoS set request data
    MMSRV_REQUEST_t *pGPRSQoSQueryReqData;      //GPRS QoS query request data
#endif //__GPRS_MMI__
    MMSRV_REQUEST_t *pCellInfoReqData;          //Get Cell info request data
#ifdef __GPRS_MMI__
    MMSRV_REQUEST_t *pWgprsSetReqData;          //Set WGPRS request data
    MMSRV_REQUEST_t *pWgprsQueryReqData;        //Query WGPRS request data
#endif //__GPRS_MMI__
    MMSRV_REQUEST_t *pNetAccessModeReqData;     //Change Net Access mode request data
    MMSRV_REQUEST_t *pCleanBAListReqData;     	//Change Net Access mode request data
#ifdef __PROGRAM_TEMP_IMEI_MMI__
    MMSRV_REQUEST_t *pSetIMEIReqData;     		//Set IMEI request data
#endif

    void *pCaller;      //Keep caller instance
    u8 DualMode;     //Kepp request Dual ID
    u8 IndDualMode;  //Kepp Indication Dual ID
    ISIMSRV *pSimSrv; //Keep SimSrv instance
    ICCSRV *pCCSrv; //Keep CCSrv instance
    ICFGSrv *pCFGSrv; //Keep CFGSrv instance
#ifdef __BLUETOOTH_MMI__
    IBTSRV *pBTSrv;
#endif
#ifdef __WLAN_MMI__
    IWLANSRV *pWLANSrv;
#endif
    u32 u32OffLineRespResult;
    u32 u32OffLineRespDualSimId;

    u32 currTimeSeconds;  //Keep current time in seconds
    u32 netTimeSeconds;   //Keep current network time in seconds
    MAE_TimeZone_e eTimeZone;        //Keep current network time zone
    boolean bWaitSyncTimeZoneFlag;

    boolean bSetNetAutoMode[MMSRV_SIM_SLOT_NUM];
    boolean bShowSearchingState[MMSRV_SIM_SLOT_NUM];
    boolean bNeedQueryCFUStatus[MMSRV_SIM_SLOT_NUM];
    boolean bNeedSendSSCFUReq[MMSRV_SIM_SLOT_NUM];
    boolean bIsQueryingLineStatus[MMSRV_SIM_SLOT_NUM];
    boolean bIsQueryingCFUStatus[MMSRV_SIM_SLOT_NUM];
    boolean bAllowEmergencycCall[MMSRV_SIM_SLOT_NUM];
    boolean bIsSearchingTimerCreated[MMSRV_SIM_SLOT_NUM];
    u16 nCFUQueryRepeatTimes[MMSRV_SIM_SLOT_NUM];  //Keep CFU status query repeat times
#ifdef __GPRS_MMI__
    boolean bGPRSAttachFlag;         //Keep need to attach GPRS.
    u32 u32UpdateWGPRSFlag;      //Keep update e2p status.
    boolean bRestoreStatusFlag;      //Keep need to restore GPRS status.
    boolean bReleaseGPRSFlag;        //Keep release GPRS token flag.
#endif //__GPRS_MMI__
    // master reset
    ModelListener_t tCFGSrvMdl;

    boolean bTerminate;
    boolean bWaitSlaveCnf;  //flag indicate that we need to wait slave module confirmation.
    boolean bCleanBAWaitSlaveCnf;
#if defined(__3G_RIL_MMI__)
    boolean bIsNetworkSettingInfoQueried[MMSRV_SIM_SLOT_NUM];
#endif // __3G_RIL_MMI__
    
} MMI_MMSRV;

/**
* mmi_AddItemIntoWaitingQueue
* @brief        Add request command into waiting queue and post event to process item.
*
* @param    pThis       The pointer of IMMSRV object.
* @param    pData       The pointer of request command data.
*
* @retval       MAE_Ret value
 */
MAE_Ret mmi_MMSRV_AddItemIntoWaitingQueue(MMI_MMSRV *pThis, void *pData);


/**
* mmi_CheckWaitingQueue
* @brief        Check if waiting queue empty and get the first item to process.
*
* @param    pThis       The pointer of IMMSRV object.
 */
static void mmi_MMSRV_CheckWaitingQueue(MMI_MMSRV *pThis);


/**
* mmi_WaitingQueueFree
* @brief        To free waiting queue.
*
* @param    pThis       The pointer of SIMSRV_SEC_REQ_t object.
 */
static void mmi_MMSRV_WaitingQueueFree(void *pData);

#endif /* __MMI_MMSRV_PRIV_H__ */
