/**
* @file mmi_cbs.h
*
* State Machine Service - CBS
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_CBS
*
*
* @version $Id: mmi_cbs.h 39985 2009-09-11 07:24:33Z miya.chien $
*/
#ifndef __MMI_CBS_H__
#define __MMI_CBS_H__

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"
#include "mmi_mae_datamodel.h"
#include "mmi_messagecontentsrv.h"
#include "mmi_messageorganizationsrv.h"



typedef enum
{
    CBS_Notify_Mask_Ready = 0x0001
   ,/*for CB service ready notify*/
    CBS_Notify_Mask_Status = 0x0002
   ,/*for CB service status/count notify*/
}CBS_Notify_Mask_e;


enum
{
    CBS_UnSlide = 0
   ,CBS_Sliding
   ,CBS_SlideDone
};
typedef u8 CBS_SLIDE_STATUS_e;

typedef struct
{
    u8 nID ;
    CBS_SLIDE_STATUS_e eStatus;
    u32 nlen ;
    MAE_WChar *pContent;
} CBS_MsgInfo_t;
typedef void (*pfn_cbs_receive_CB)(u32 nPort, u8 nSIMModule, u32 nDataLen, MAE_WChar *pData, u32 encoding, u32 userData, u32 CallerID);

/**
 * External Events
 */
#define CBS_EVT_READY               (CLSID_CBS << 16 | 1)
#define CBS_EVT_NEW_CBMSG               (CLSID_CBS << 16 | 2)
#define CBS_EVT_UPDATE_CBNUM                (CLSID_CBS << 16 | 3)
#define CBS_EVT_DEL_CBMSG               (CLSID_CBS << 16 | 4)


/**
 * ICBS Interfaces
 */
#define INHERIT_ICBS(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*isReady)      ( IName * , boolean *bReady);  \
    MAE_Ret     (*Register_Notification)        ( IName * , void *instance, CBS_Notify_Mask_e mask);  \
    MAE_Ret     (*Deregister_Notification)      ( IName * , void *instance, CBS_Notify_Mask_e mask);  \
    MAE_Ret     (*Get_CBModel)      ( IName * , IModel **pCBModel, IBase* pOwner);  \
    MAE_Ret     (*Get_NextUnSlidedCBMsg)        ( IName * , CBS_MsgInfo_t **pCBMsg);  \
    MAE_Ret     (*Get_CBMsgByIdx)       ( IName * , CBS_MsgInfo_t **pCBMsg, u32 nIdx);  \
    MAE_Ret     (*Set_CBStatusByID)     ( IName * , CBS_SLIDE_STATUS_e eStatus, u32 nID);  \
    MAE_Ret     (*Get_TotalCBMsgCount)      ( IName * , u32 *nCount);  \
    MAE_Ret     (*Get_CBAreaCode)      ( IName * , u16** ppCBAreaCode, u8 nSIMModule);  \
    MAE_Ret     (*Add_CBListModelListener)      ( IName * , ModelListener_t* pMdlLsn);  \
    MAE_Ret     (*Cancel_CBListModelListener)       ( IName * , ModelListener_t* pMdlLsn);  \
    MAE_Ret     (*Del_CBMsgByID)        ( IName * , u32 nID);  \
    MAE_Ret     (*CBS_RegisterPort)     ( IName * , u32 nPort, u8 nSIMModule, pfn_cbs_receive_CB pReceiveCB, u32 userData, u32 CallerID);  \
    MAE_Ret     (*CBS_DeRegisterPort)       ( IName * , u32 nPort, u8 nSIMModule, u32 CallerID);  \
    MAE_Ret     (*CBS_DeRegisterAllPort)        ( IName * , u32 CallerID)

DEFINE_INTERFACE(ICBS);


#define ICBS_QueryInterface(pICntlr, id, pp, po)            GET_FUNCTBL((pICntlr), ICBS)->QueryInterface(pICntlr, id, pp, po)
#define ICBS_HandleEvent(pICntlr, e, p1, p2)                GET_FUNCTBL((pICntlr), ICBS)->HandleEvent(pICntlr, e, p1, p2)
/**
  *  cbs_isReady
 *  @ brief   Get current cbs srv status
 *  @ param  *bReady       Pointer to an boolean returning cbs status
 *                          if *byteRead = 1, it means cbs is ready
 *  @retval MAE_RET_SUCCESS     Success
 *  @retval MAE_RET_BAD_PARAM  Failed, bad cbs instance

 */
#define ICBS_isReady(pICntlr, p1)   GET_FUNCTBL((pICntlr), ICBS)->isReady( pICntlr, p1)
/**
  *  cbs_Register_Notification
 *  @ brief   register the notification
 *  @ param  *instance    Pointer to an object
 *  @ param  mask    event mask defined as CBS_Notify_Mask_e
 *
 *  @retval MAE_RET_SUCCESS     Success
 *  @retval MAE_RET_BAD_PARAM  Failed, NULL cbs instance or NULL resigter instance
 *  @retval MAE_RET_OUT_OF_MEMORY Failed, no memory to register
 */
#define ICBS_Register_Notification(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), ICBS)->Register_Notification( pICntlr, p1, p2)
/**
  *  cbs_DeRegister_Notification
 *  @ brief   deregister the notification
 *  @ param  *instance    Pointer to an object
 *  @ param  mask    event mask defined as CBS_Notify_Mask_e
 *
 *  @retval MAE_RET_SUCCESS     Success
 *  @retval MAE_RET_BAD_PARAM  Failed, NULL cbs instance or NULL resigter instance
 *  @retval MAE_RET_NOT_FOUND Failed, No such register instance or mask
 */
#define ICBS_Deregister_Notification(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ICBS)->Deregister_Notification( pICntlr, p1, p2)
/**
  *  cbs_get_cbmodel
 *  @ brief  get the cb message data model
 *  @ param  **pCBModel,  return pointer of new cb message data model
 *  @ param  *pOwner,  pointer to request instance
 *
 *  @retval MAE_RET_SUCCESS     Success
 *  @retval MAE_RET_FAILED Failed, NULL cbs instance or NULL cb data model or NULL request instance
 */
#define ICBS_Get_CBModel(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ICBS)->Get_CBModel( pICntlr, p1, p2)
/**
  *  cbs_get_NextUnslidedCBMsg
 *  @brief  get next unslidedCBInfo
 *  @ param  **pCBMsgl,  return pointer of new cb message info
 *
 *  @retval MAE_RET_SUCCESS     Success
 *  @retvalMAE_RET_NOT_FOUND Failed,no unslided CB msg
 */
#define ICBS_Get_NextUnSlidedCBMsg(pICntlr, p1) GET_FUNCTBL((pICntlr), ICBS)->Get_NextUnSlidedCBMsg( pICntlr, p1)
/**
  *  cbs_Get_CBMsgByIdx
 *  @ brief  get cb Msg info by index
 *  @ param  **pCBMsgl,  return pointer of new cb message info
 *  @ param nIdx,  idx of CBS

 *  @retval MAE_RET_SUCCESS     Success
 *  @retvalMAE_RET_NOT_FOUND Failed,no CB msg
 */
#define ICBS_Get_CBMsgByIdx(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), ICBS)->Get_CBMsgByIdx( pICntlr, p1, p2)
/**
  *  cbs_Set_CBStatusByID
 *  @brief set cb slide status
 *  @ param eStatus, the unslide, sliding, slide done
 *  @ param nID,CB msg ID

 *  @retval MAE_RET_SUCCESS     Success
 *  @retvalMAE_RET_NOT_FOUND Failed,no CB msg
 */
#define ICBS_Set_CBStatusByID(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ICBS)->Set_CBStatusByID( pICntlr, p1, p2)
/**
  *  cbs_Get_TotalCBMsgCount
 *  @ brief get current CB msg total number
 *  @ param nCount, return count of cb msg

 *  @retval MAE_RET_SUCCESS     Success
 *  @retval MAE_RET_FAILED/MAE_RET_BAD_PARAM Failed
 */
#define ICBS_Get_TotalCBMsgCount(pICntlr, p1)   GET_FUNCTBL((pICntlr), ICBS)->Get_TotalCBMsgCount( pICntlr, p1)

/**
  *  ICBS_Get_CBAreaCode
 *  @ brief get current CBM Area code
 *  @ param 

 *  @retval MAE_RET_SUCCESS     Success
 *  @retval MAE_RET_FAILED/MAE_RET_BAD_PARAM Failed
 */
#define ICBS_Get_CBAreaCode(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ICBS)->Get_CBAreaCode( pICntlr, p1, p2)

/**
  *  cbs_Add_CBListModelListener
 *  @ brief add cb list modellistener to listen the cb queue change
 *  @ param pMdLsn, the pointer of listener

 *  @retval MAE_RET_SUCCESS Success
 *  @retval MAE_RET_BAD_PARAM Failed, Null pMdlLsn or NULL cbs
 */
#define ICBS_Add_CBListModelListener(pICntlr, p1)   GET_FUNCTBL((pICntlr), ICBS)->Add_CBListModelListener( pICntlr, p1)
/**
  *  cbs_Cancel_CBListModelListener
 *  @ brief Cancel cb list modellistener to listen the cb queue change
 *  @ param pMdLsn, the pointer of listener

 *  @retval MAE_RET_SUCCESS Success
 *  @retval MAE_RET_BAD_PARAM Failed, Null pMdlLsn or NULL cbs
 */
#define ICBS_Cancel_CBListModelListener(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICBS)->Cancel_CBListModelListener( pICntlr, p1)
/**
  *  cbs_Del_CBMsgByID
 *  @ brief delete CB msg by MsgID
 *  @ param nID, CB msgID

 *  @retval MAE_RET_SUCCESS Success
 *  @retval MAE_RET_NOT_FOUND Failed, no CBMsg
 */
#define ICBS_Del_CBMsgByID(pICntlr, p1) GET_FUNCTBL((pICntlr), ICBS)->Del_CBMsgByID( pICntlr, p1)
/**
  *  CBS_RegisterPort
 *  @ brief register certain CB channel to receive CB
 *  @ param nPort, CB channel to register
 *  @ param nSIMModule, register which SIM, DUAL_MASTER or DUAL_SLAVE
 *  @ param pReceiveCB, receive callback function to notify new MT registed CB
 *  @ param userData/CallerID, for register, It will be brought at pReceiveCB()
                                                    and distinguish by different userdata and caller ID


 *  @retval MAE_RET_SUCCESS Success
 *  @retval MAE_RET_FAILED Failed, there is existed the same one
 *  @retval MAE_RET_OUT_OF_MEMORY Failed
 */
#define ICBS_CBS_RegisterPort(pICntlr, p1, p2, p3, p4, p5)  GET_FUNCTBL((pICntlr), ICBS)->CBS_RegisterPort( pICntlr, p1, p2, p3, p4, p5)
/**
  *  CBS_DeRegisterPort
 *  @ brief deregister certain CB channel to receive CB
 *  @ param nPort, CB channel to deregister
 *  @ param nSIMModule,de register which SIM, DUAL_MASTER or DUAL_SLAVE
 *  @ param CallerID, the register one.


 *  @retval MAE_RET_SUCCESS Success
 *  @retval MAE_RET_NOT_FOUND Failed, there is no such register
 */
#define ICBS_CBS_DeRegisterPort(pICntlr, p1, p2, p3)    GET_FUNCTBL((pICntlr), ICBS)->CBS_DeRegisterPort( pICntlr, p1, p2, p3)
/**
  *  CBS_DeRegisterAllPort
 *  @ brief deregister all  CB channel to receive CB for center caller
 *  @ param CallerID, the register


 *  @retval MAE_RET_SUCCESS Success
 */
#define ICBS_CBS_DeRegisterAllPort(pICntlr, p1) GET_FUNCTBL((pICntlr), ICBS)->CBS_DeRegisterAllPort( pICntlr, p1)



/**
 * Functions
 */

void CBS_Init(void);

__SLDPM_FREE__ MAE_Ret CBS_New(MAE_ClsId id, void **ppObj);

#endif /* __MMI_CBS_H__ */
