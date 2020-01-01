/**
* @file mmi_messagecontentsrv.h
*
* Service without using State Machine - MCI
* Generated by XFSM v1.0, CodeVer=v0.24 
*
* Class Id: CLSID_MCI
* Interface Id: IID_MCI
*
* @version $Id: mmi_mci.h 40323 2009-09-15 13:56:53Z miya.chien $
*/
#ifndef __MMI_MESSAGECONTENTSRV_H__
#define __MMI_MESSAGECONTENTSRV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"
#include "mmi_messagemanagersrv.h"
#include "mmi_common_sms.h"
#include "mmi_mae_vectormodel.h"
#include "mmi_if_sms.h"

typedef enum
{
    SmNoError = 0
   ,SmOutOfMemory
   ,SmUnableToParseTagStream
   ,SmInvalidEncryptionMethod
   ,SmMissingFormattingCharacter
   ,SmInvalidDataType
   ,SmBadTextFormattingBlock
   ,SmBadPDU
   ,SmFileNotFound
   ,SmInvalidCharacters
   ,SmCriticalError
   ,SmNotSupported
   ,SmNotEnoughSpace
   ,SmFSCorrupt
   ,SmFSReadError
   ,SmFSWriteError
   ,SmStorageFull
   ,SmUnknownError
} MCI_SMStatus_e;

typedef enum
{
    MCI_StrType_SENDERRECIPIENT
   ,MCI_StrType_NUMBER
   ,MCI_StrType_URL
   ,MCI_StrType_EMAIL,
} MCI_SMCntObjType_e;


typedef struct
{
    MAE_WChar *Content;                         // the specific string
    MCI_SMCntObjType_e objType;               // number, email, url
    u32 nStartIdx;                              //the start location at the content
    u32 nEndIdx;                                //the end location at the content
}MCI_SMObjCnt_t;

typedef struct
{
    u16 u16MsgId;
    SMI_MsgLocation_e eLoc;
    u16 *pMsgCnt;
    SMI_SmEncoding_t encoding;
    SMI_MsgHdr_t tMsgHder;
    SMS_MsgRecipLst *pMsgRecipLst;
    u8 IMSI[MMI_MMS_FS_MAX_IMSI_LEN];
}MCI_BackupSMS_t;

typedef struct
{
	u32 CRCValue;
	u32 Size;
	MCI_BackupSMS_t *pData;
}MCI_VenBackupSMS_t;
/*-------------------------------------------------------------------------*/

/**
 * External Events
 */
#define MCI_EVT_RecvMsgSaveCnf              (CLSID_MCI << 16 | 1)


/**
 * IMCI Interfaces
 */
#define INHERIT_IMCI(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*OpenMessage)      ( IName * , u32 u32MsgId, u16 **ppMsgCnt, IVectorModel **ppObjCnt, IBase *pRequester, u8 **ppExtObjData);  \
    MAE_Ret     (*SaveEdtMessageSync)       ( IName * , u16 *pMsgCnt, u16 u16DataLen, SMI_MsgHdr_t *pSmHdr, SMI_SmEncoding_t encoding, u16 nPort, mmiGsmLockShiftTable_e tLockShift, mmiGsmSingleShiftTable_e tSingleShift, SMS_MsgRecipLst *pMsgRecipLst, u8 simModule);  \
    MAE_Ret     (*GetMessageSmscInfo)       ( IName * , SMI_MsgSmscInfo_t *pMsgSmscInfo, u8 simModule);  \
    MAE_Ret     (*GetMsgRecipAddr)      ( IName * , u16 u16MsgId, SMS_MsgRecipLst *pMsgRecipLst);  \
    MAE_Ret     (*GetMsgLstInfo)        ( IName * , u16 u16MsgId, SMS_MsgRecipAddr *pRecipAddr, boolean *pbMultiRecip, MAE_WChar **ppMemo, boolean *pbMoreMemo, u8 *pIMSI);  \
    MAE_Ret     (*ModifyMsgSimIndexInfo)        ( IName * , u16 u16MsgId, u8 *pSimIndexInfo);  \
    MAE_Ret     (*OpenMessageFromSimMsgBuf)     ( IName * , u16 **ppMsgCnt, IVectorModel **ppObjCnt, u8 *pSimMsgRowData, u32 nSimMsgRowDataLen, IBase *pRequester, u8 **ppExtObjData);  \
    MAE_Ret     (*ModifyMsgResentPduIdx)        ( IName * , u16 u16MsgId, u8 resentPduIdx);  \
    MAE_Ret     (*GetMsgResentPduIdx)       ( IName * , u16 u16MsgId, u8 *resentPduIdx);  \
    MAE_Ret     (*GetMsgPduNum)     ( IName * , u16 u16MsgId, u8 *pMsgTotalPduNum, u8 *pMsgPartNum);  \
    MAE_Ret     (*BackupMessage)        ( IName * , MCI_BackupSMS_t *pBackupData);  \
    MAE_Ret     (*StoreMessage)     ( IName * , SMS_StoreData_t *pStoreSMSData, u8 **ppMsgDataBuf, u32 *pMsgDataBufLen);  \
    MAE_Ret     (*BackupMessageFromSimMsgBuf)       ( IName * , MCI_BackupSMS_t *pBackupSIMData, u8 *pSimMsgRowData, u32 nSimMsgRowDataLen);  \
    MAE_Ret     (*OpenPortMessage)      ( IName * , u16 msgId, u16** ppMsgCnt, SMI_SmEncoding_t* pEncoding);  \
    MAE_Ret     (*SavePortMessageWithSenderPortSync)        ( IName * , u16 * pMsgCnt, u16 u16DataLen, SMI_MsgHdr_t* pSmHdr, SMI_SmEncoding_t encoding, SMS_MsgRecipLst* pMsgRecipLst, u16 nDesPort, u16 nSenderPort, u8 simModule);  \
    MAE_Ret     (*SaveMessageWithoutStatusReportInd)        ( IName * , u16 * pMsgCnt, u16 u16DataLen, SMI_MsgHdr_t* pSmHdr, SMI_SmEncoding_t encoding, SMS_MsgRecipLst* pMsgRecipLst, u8 simModule);  \
	MAE_Ret		(*ModifyIMSI)		( IName * , u16  u16MsgId, u8 *pIMSI, u16 nIMSILen);  \
	MAE_Ret		(*UpdateMessageByID)		( IName * , u16 *pMsgCnt, u16 u16DataLen, SMI_MsgHdr_t *pSmHdr, SMS_MsgRecipLst *pMsgRecipLst, u8 simModule, boolean bNoStatusRep, u32 msgID);  \
    MAE_Ret     (*SaveEdtMessageSyncEx)     ( IName * , u16 *pMsgCnt, u16 u16DataLen, SMI_MsgHdr_t *pSmHdr, SMI_SmEncoding_t encoding, u16 nPort, mmiGsmLockShiftTable_e tLockShift, mmiGsmSingleShiftTable_e tSingleShift, SMS_MsgRecipLst *pMsgRecipLst, u8 simModule, u8 **ppMsgDataBuf, u32 *pMsgDataBufLen);  \
	MAE_Ret		(*BackupPhoneSMS)		( IName * , MCI_VenBackupSMS_t *pBackupData); \
	MAE_Ret		(*BackupSIMSMS)		( IName * , MCI_VenBackupSMS_t *pBackupData, u8 *pSimMsgRowData, u32 nSimMsgRowDataLen); \
	MAE_Ret		(*RestoreSMS)		( IName * , MCI_VenBackupSMS_t *pBackupData)

DEFINE_INTERFACE(IMCI);


#define IMCI_QueryInterface(pICntlr, id, pp, po)            GET_FUNCTBL((pICntlr), IMCI)->QueryInterface(pICntlr, id, pp, po)
#define IMCI_HandleEvent(pICntlr, e, p1, p2)                GET_FUNCTBL((pICntlr), IMCI)->HandleEvent(pICntlr, e, p1, p2)
/**
 begin the message reading session                                                                                                                                  
 */
#define IMCI_OpenMessage(pICntlr, p1, p2, p3, p4, p5)   GET_FUNCTBL((pICntlr), IMCI)->OpenMessage( pICntlr, p1, p2, p3, p4, p5)
/**
 save edited msg, mci need to set default header's information																																
 */
#define IMCI_SaveEdtMessageSync(pICntlr, p1, p2, p3, p4, p5, p6, p7, p8, p9)    GET_FUNCTBL((pICntlr), IMCI)->SaveEdtMessageSync( pICntlr, p1, p2, p3, p4, p5, p6, p7, p8, p9)
/**
                                                                                                                                    
 */
#define IMCI_GetMessageSmscInfo(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), IMCI)->GetMessageSmscInfo( pICntlr, p1, p2)
/**
                                                                                                                                    
 */
#define IMCI_GetMsgRecipAddr(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), IMCI)->GetMsgRecipAddr( pICntlr, p1, p2)
/**
                                                                                                                                    
 */
#define IMCI_GetMsgLstInfo(pICntlr, p1, p2, p3, p4, p5, p6) GET_FUNCTBL((pICntlr), IMCI)->GetMsgLstInfo( pICntlr, p1, p2, p3, p4, p5, p6)
/**
                                                                                                                                    
 */
#define IMCI_ModifyMsgSimIndexInfo(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), IMCI)->ModifyMsgSimIndexInfo( pICntlr, p1, p2)
/**
 decode message raw data                                                                                                                            
 */
#define IMCI_OpenMessageFromSimMsgBuf(pICntlr, p1, p2, p3, p4, p5, p6)  GET_FUNCTBL((pICntlr), IMCI)->OpenMessageFromSimMsgBuf( pICntlr, p1, p2, p3, p4, p5, p6)
/**
                                                                                                                                    
 */
#define IMCI_ModifyMsgResentPduIdx(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), IMCI)->ModifyMsgResentPduIdx( pICntlr, p1, p2)
/**
                                                                                                                                    
 */
#define IMCI_GetMsgResentPduIdx(pICntlr, p1, p2)    GET_FUNCTBL((pICntlr), IMCI)->GetMsgResentPduIdx( pICntlr, p1, p2)
/**
                                                                                                                                    
 */
#define IMCI_GetMsgPduNum(pICntlr, p1, p2, p3)  GET_FUNCTBL((pICntlr), IMCI)->GetMsgPduNum( pICntlr, p1, p2, p3)
/**
                                                                                                                                    
 */
#define IMCI_BackupMessage(pICntlr, p1) GET_FUNCTBL((pICntlr), IMCI)->BackupMessage( pICntlr, p1)
/**
 Store message to phone for tool backup SMS                                                                                                                     
 */
#define IMCI_StoreMessage(pICntlr, p1, p2, p3)  GET_FUNCTBL((pICntlr), IMCI)->StoreMessage( pICntlr, p1, p2, p3)
/**
 Backup SIM message from SIM msg buf for PC backup                                  
 */
#define IMCI_BackupMessageFromSimMsgBuf(pICntlr, p1, p2, p3)    GET_FUNCTBL((pICntlr), IMCI)->BackupMessageFromSimMsgBuf( pICntlr, p1, p2, p3)
/**
 get the port SMS content                       
 */
#define IMCI_OpenPortMessage(pICntlr, p1, p2, p3)   GET_FUNCTBL((pICntlr), IMCI)->OpenPortMessage( pICntlr, p1, p2, p3)
/**
 save port SMS   with SenderPort                       
 */
#define IMCI_SavePortMessageWithSenderPortSync(pICntlr, p1, p2, p3, p4, p5, p6, p7, p8)   GET_FUNCTBL((pICntlr), IMCI)->SavePortMessageWithSenderPortSync( pICntlr, p1, p2, p3, p4, p5, p6, p7, p8)
/**

 */
#define IMCI_SaveMessageWithoutStatusReportInd(pICntlr, p1, p2, p3, p4, p5, p6) GET_FUNCTBL((pICntlr), IMCI)->SaveMessageWithoutStatusReportInd( pICntlr, p1, p2, p3, p4, p5, p6)
/**
 * ModifyIMSI
* @brief    modify IMSI for phone SMS
*
* @param[in]    pIMCI               The pointer of IMCI object.
* @param[in]    u16MsgId            The id of the message.
* @param[in]    pIMSI           The pointer of the imsi
* @param[in]    pIMSILen            The length of the imsi

* @retval       MAE_RET_SUCCESS             Accepts the request
* @retval       others                      Exception

 */
#define IMCI_ModifyIMSI(pICntlr, p1, p2, p3)    GET_FUNCTBL((pICntlr), IMCI)->ModifyIMSI( pICntlr, p1, p2, p3)
/**
 
 */
#define IMCI_UpdateMessageByID(pICntlr, p1, p2, p3, p4, p5, p6, p7)	GET_FUNCTBL((pICntlr), IMCI)->UpdateMessageByID( pICntlr, p1, p2, p3, p4, p5, p6, p7)
/**

 */
#define IMCI_SaveEdtMessageSyncEx(pICntlr, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)    GET_FUNCTBL((pICntlr), IMCI)->SaveEdtMessageSyncEx( pICntlr, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)

/**
 
 */
#define IMCI_BackupPhoneSMS(pICntlr, p1)	GET_FUNCTBL((pICntlr), IMCI)->BackupPhoneSMS( pICntlr, p1)

/**
 
 */
#define IMCI_BackupSIMSMS(pICntlr, p1, p2, p3)	GET_FUNCTBL((pICntlr), IMCI)->BackupSIMSMS( pICntlr, p1, p2, p3)

/**
 
 */
#define IMCI_RestoreSMS(pICntlr, p1)	GET_FUNCTBL((pICntlr), IMCI)->RestoreSMS( pICntlr, p1)
/**
 * Functions
 */

void MCI_Init(void);

__SLDPM_FREE__ MAE_Ret MCI_New(MAE_ClsId id, void **ppObj);

/*-------------------------------------------------------------------------*/
#endif /* __MMI_MESSAGECONTENTSRV_H__ */
