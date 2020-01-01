
#ifndef __MMI_MESSAGE_CFG__H__
#define __MMI_MESSAGE_CFG__H__

#include "mmi_mae_common_def.h"
#include "mae_textlabel.h"

#ifndef __APP_MMI_SMALLROM__
#define MSG_TEXT_TEMPLATE_MAX_CHAR (100)
#else
#define MSG_TEXT_TEMPLATE_MAX_CHAR (20)
#endif
#define MSG_TEXT_TEMPLATE_MAX_NUM (10)

typedef struct _Msg_TextTemplate_t
{
    u32 TextID;
    MAE_WChar Text[MSG_TEXT_TEMPLATE_MAX_CHAR+1];
} Msg_TextTemplate_t;

#ifdef __MMS_MMI_CDMMS__
enum
{
    MMS_TEXT_LOCATION_FIRST=1,
    MMS_TEXT_LOCATION_LAST=2
};
typedef u8 MSG_MMS_TEXT_LOCATION_e;

enum
{
    MSG_MMS_IMAGE_SIZE_LARGE=0,
    MSG_MMS_IMAGE_SIZE_SMALL=1,
    MSG_MMS_IMAGE_SIZE_ORIGINAL=2
};
typedef u8 MSG_MMS_IMAGE_SIZE_e;

enum
{
    Msg_MMS_Image_Size_Large=0,
    Msg_MMS_Image_Size_Small=1,
    Msg_MMS_Image_Size_Original=2
};
typedef u8 Msg_MMS_Setting_Image_Size_e;

enum
{
    Msg_MMS_Multimedia_Retrieval_Always_automatic=0,
    Msg_MMS_Multimedia_Retrieval_Auto_In_Home=1,
    Msg_MMS_Multimedia_Retrieval_Manual=2,
    Msg_MMS_Multimedia_Retrieval_Off=3
};
typedef u8 Msg_MMS_Setting_Multimedia_Retrieval_e;

enum
{
    Msg_MMS_Allow_Anonymous_Msgs_On=1,
    Msg_MMS_Allow_Anonymous_Msgs_Off=0
};
typedef u8 Msg_MMS_Setting_Allow_Anonymous_Msgs_e;

enum
{
    Msg_MMS_Receive_Adverts_On=1,
    Msg_MMS_Receive_Adverts_Off=0
};
typedef u8 Msg_MMS_Setting_Receive_Adverts_e;

enum
{
    Msg_MMS_Deny_Report_Sending_On=1,
    Msg_MMS_Deny_Report_Sending_Off=0
};
typedef u8 Msg_MMS_Setting_Deny_Report_Sending_e;

enum
{
    Msg_MMS_Status_Report_On=1,
    Msg_MMS_Status_Report_Off=0
};
typedef u8 Msg_MMS_Setting_Status_Report_e;
#ifdef __MMS_READ_REPORT__
enum
{
    Msg_MMS_Deny_Read_Report_Sending_On=1,
    Msg_MMS_Deny_Read_Report_Sending_Off=0
};
typedef u8 Msg_MMS_Setting_Deny_Read_Report_Sending_e;
enum
{
    Msg_MMS_Read_Report_On=1,
    Msg_MMS_Read_Report_Off=0
};
typedef u8 Msg_MMS_Setting_Read_Report_e;
#endif
enum
{
    Msg_MMS_Validity_Period_12Hours=0,
    Msg_MMS_Validity_Period_1Day=1,
    Msg_MMS_Validity_Period_3Days=2,
    Msg_MMS_Validity_Period_1Week=3,
    Msg_MMS_Validity_Period_Max=4
};
typedef u8 Msg_MMS_Setting_Validity_Period_e;

enum
{
    Msg_MMS_Backup_Sent_Off=0/*Msg_MMS_Backup_Sent_Off*/,
    Msg_MMS_Backup_Sent_On=1/*Msg_MMS_Backup_Sent_On*/
};
typedef u8 Msg_MMS_Setting_Backup_Sent_e;
#endif

#define MSG_SMS_SERVICE_CENTER_MAX_CHAR (21)
enum
{
    Msg_SMS_Direct_Reply_OFF=0,
    Msg_SMS_Direct_Reply_ON=1
};
typedef u8 Msg_SMS_Setting_Direct_Reply_e;

enum
{
    Msg_SMS_Staus_Report_OFF=0,
    Msg_SMS_Staus_Report_ON=1
};
typedef u8 Msg_SMS_Setting_Status_Report_e;

enum
{
	Msg_SMS_Trashbox_Mode_OFF=0,
	Msg_SMS_Trashbox_Mode_ON=1
};
typedef u8 Msg_SMS_Setting_Trashbox_Mode_e;

enum
{
    Msg_SMS_Type_Text=0,
    Msg_SMS_Type_Paging=1,
    Msg_SMS_Type_Email=2,
    Msg_SMS_Type_Fax=3
};
typedef u8 Msg_SMS_Setting_SMS_Type_e;

enum
{
    Msg_SMS_Validity_Period_12Hours=0,
    Msg_SMS_Validity_Period_1Day=1,
    Msg_SMS_Validity_Period_3Days=2,
    Msg_SMS_Validity_Period_1Week=3,
    Msg_SMS_Validity_Period_Max=4
};
typedef u8 Msg_SMS_Setting_Validity_Period_e;

enum
{
    Msg_SMS_Bearer_Mode_GPRS=0,
    Msg_SMS_Bearer_Mode_CSD=1
};
typedef u8 Msg_SMS_Setting_Bearer_Mode_e;

enum
{
    Msg_SMS_Inbox_Location_Phone=0,
    Msg_SMS_Inbox_Location_SIM=1
};
typedef u8 Msg_SMS_Setting_Inbox_Location_e;

enum
{
    Msg_SMS_Backup_Sent_Off=0,
    Msg_SMS_Backup_Sent_On=1
};
typedef u8 Msg_SMS_Setting_Backup_Sent_e;

typedef struct _Msg_SMS_Service_Center_t
{
    u8 charAddr[MSG_SMS_SERVICE_CENTER_MAX_CHAR+1];
} Msg_SMS_Service_Center_t;

#ifdef __MMS_MMI_CDMMS_TEMPLATE__
#define MSG_MMS_TEMPLATE_SUBJECT_MAX_CHAR (40)
#define MSG_MMS_TEMPLATE_TEXT_MAX_CHAR (100)
#define MSG_MMS_TEMPLATE_MAX_NUM (5)
#define MSG_MMS_TEMPLATE_MAX_URL_LEN (40)

typedef struct _Msg_MMS_Template_t
{
    u32 AudioID;
    u32 ImageID;
    MAE_WChar Subject[MSG_MMS_TEMPLATE_SUBJECT_MAX_CHAR+1];
    MAE_WChar AudioURL[MSG_MMS_TEMPLATE_MAX_URL_LEN+1];
    MAE_WChar ImageURL[MSG_MMS_TEMPLATE_MAX_URL_LEN+1];
    MAE_WChar Text[MSG_MMS_TEMPLATE_TEXT_MAX_CHAR+1];
    MSG_MMS_IMAGE_SIZE_e ImageSize;
    MSG_MMS_TEXT_LOCATION_e TextLoc;
    u8 Duration;
    u8 IsUserDefined;
} Msg_MmsTemplate_t;
#endif

#ifndef __APP_MMI_SMALLROM__
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT1 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT1, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_01, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT2 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT2, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_02, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT3 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT3, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_03, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT4 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT4, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_04, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT5 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT5, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_05, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT6 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT6, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_06, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT7 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT7, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_07, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT8 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT8, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_08, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT9 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT9, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_09, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT10 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT10, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_10, {L""}})
#else
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT1 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT1, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_01, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT2 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT2, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_02, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT3 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT3, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_03, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT4 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT4, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_04, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT5 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT5, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_05, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT6 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT6, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_06, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT7 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT7, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_07, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT8 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT8, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_08, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT9 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT9, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_09, {L""}})
#define CONFIG_AMR_MESSAGE_TEMPLATE_TEXT10 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_TEXT10, Msg_TextTemplate_t, 1, {TXT_LIL_N_TEXT_TEMPLATE_SHORT_10, {L""}})
#endif
#define CONFIG_AMR_MESSAGE_TEXT_TEMPLATE_ORDER CONFIG_DEFINE(CFGIT_MESSAGE_TEXT_TEMPLATE_ORDER, u8, MSG_TEXT_TEMPLATE_MAX_NUM, {1,2,3,4,5,6,7,8,9,10})
#define CONFIG_AMR_MESSAGE_MASTER_SMS_BEARER_MODE CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_BEARER_MODE, Msg_SMS_Setting_Bearer_Mode_e, 1, Msg_SMS_Bearer_Mode_GPRS)
#define CONFIG_AMR_MESSAGE_MASTER_SMS_VALIDITY_PERIOD CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_VALIDITY_PERIOD, Msg_SMS_Setting_Validity_Period_e, 1, Msg_SMS_Validity_Period_Max)
#define CONFIG_AMR_MESSAGE_MASTER_SMS_TYPE CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_TYPE, Msg_SMS_Setting_SMS_Type_e, 1, Msg_SMS_Type_Text)
#define CONFIG_AMR_MESSAGE_MASTER_SMS_STATUS_REPORT CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_STATUS_REPORT, Msg_SMS_Setting_Status_Report_e, 1, Msg_SMS_Staus_Report_OFF)
#define CONFIG_AMR_MESSAGE_MASTER_SMS_DIRECT_REPLY CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_DIRECT_REPLY, Msg_SMS_Setting_Direct_Reply_e, 1, Msg_SMS_Direct_Reply_OFF)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_BEARER_MODE CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_BEARER_MODE, Msg_SMS_Setting_Bearer_Mode_e, 1, Msg_SMS_Bearer_Mode_GPRS)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_VALIDITY_PERIOD CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_VALIDITY_PERIOD, Msg_SMS_Setting_Validity_Period_e, 1, Msg_SMS_Validity_Period_Max)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_TYPE CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_TYPE, Msg_SMS_Setting_SMS_Type_e, 1, Msg_SMS_Type_Text)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_STATUS_REPORT CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_STATUS_REPORT, Msg_SMS_Setting_Status_Report_e, 1, Msg_SMS_Staus_Report_OFF)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_DIRECT_REPLY CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_DIRECT_REPLY, Msg_SMS_Setting_Direct_Reply_e, 1, Msg_SMS_Direct_Reply_OFF)
#define CONFIG_AMR_MESSAGE_SMS_TRASHBOX_MODE CONFIG_DEFINE(CFGIT_MESSAGE_SMS_TRASHBOX_MODE, Msg_SMS_Setting_Trashbox_Mode_e, 1, Msg_SMS_Trashbox_Mode_OFF)
#define CONFIG_AMR_MESSAGE_MASTER_SMS_INBOX_LOCATION CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_INBOX_LOCATION, Msg_SMS_Setting_Inbox_Location_e, 1, Msg_SMS_Inbox_Location_Phone)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_INBOX_LOCATION CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_INBOX_LOCATION, Msg_SMS_Setting_Inbox_Location_e, 1, Msg_SMS_Inbox_Location_Phone)
#define CONFIG_AMR_MESSAGE_MASTER_SMS_BACKUP_SENT CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_BACKUP_SENT, Msg_SMS_Setting_Backup_Sent_e, 1, Msg_SMS_Backup_Sent_On)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_BACKUP_SENT CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_BACKUP_SENT, Msg_SMS_Setting_Backup_Sent_e, 1, Msg_SMS_Backup_Sent_On)

#ifdef __MMS_MMI_CDMMS__
#define CONFIG_AMR_MESSAGE_MASTER_MMS_IMAGE_SIZE CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_IMAGE_SIZE, Msg_MMS_Setting_Image_Size_e, 1, Msg_MMS_Image_Size_Large)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_MULTIMEDIA_RETRIEVAL CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_MULTIMEDIA_RETRIEVAL, Msg_MMS_Setting_Multimedia_Retrieval_e, 1, Msg_MMS_Multimedia_Retrieval_Always_automatic)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_ALLOW_ANON_MSGS CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_ALLOW_ANON_MSGS, Msg_MMS_Setting_Allow_Anonymous_Msgs_e, 1, Msg_MMS_Allow_Anonymous_Msgs_On)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_RECEIVE_ADVERTS CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_RECEIVE_ADVERTS, Msg_MMS_Setting_Receive_Adverts_e, 1, Msg_MMS_Receive_Adverts_Off)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_DENY_REPORT_SENDING CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_DENY_REPORT_SENDING, Msg_MMS_Setting_Deny_Report_Sending_e, 1, Msg_MMS_Deny_Report_Sending_Off)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_IMAGE_SIZE CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_IMAGE_SIZE, Msg_MMS_Setting_Image_Size_e, 1, Msg_MMS_Image_Size_Large)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_MULTIMEDIA_RETRIEVAL CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_MULTIMEDIA_RETRIEVAL, Msg_MMS_Setting_Multimedia_Retrieval_e, 1, Msg_MMS_Multimedia_Retrieval_Always_automatic)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_ALLOW_ANON_MSGS CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_ALLOW_ANON_MSGS, Msg_MMS_Setting_Allow_Anonymous_Msgs_e, 1, Msg_MMS_Allow_Anonymous_Msgs_On)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_RECEIVE_ADVERTS CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_RECEIVE_ADVERTS, Msg_MMS_Setting_Receive_Adverts_e, 1, Msg_MMS_Receive_Adverts_Off)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_DENY_REPORT_SENDING CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_DENY_REPORT_SENDING, Msg_MMS_Setting_Deny_Report_Sending_e, 1, Msg_MMS_Deny_Report_Sending_Off)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_STATUS_REPORT CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_STATUS_REPORT, Msg_MMS_Setting_Status_Report_e, 1, Msg_MMS_Status_Report_Off)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_STATUS_REPORT CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_STATUS_REPORT, Msg_MMS_Setting_Status_Report_e, 1, Msg_MMS_Status_Report_Off)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_VALIDITY_PERIOD CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_VALIDITY_PERIOD, Msg_MMS_Setting_Validity_Period_e, 1, Msg_MMS_Validity_Period_Max)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_VALIDITY_PERIOD CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_VALIDITY_PERIOD, Msg_MMS_Setting_Validity_Period_e, 1, Msg_MMS_Validity_Period_Max)
#define CONFIG_AMR_MESSAGE_MMS_SLIDE_DURATION CONFIG_DEFINE(CFGIT_MESSAGE_MMS_SLIDE_DURATION, u32, 1, 3000)
#define CONFIG_AMR_MESSAGE_MMS_SLIDE_IMAGE_SIZE CONFIG_DEFINE(CFGIT_MESSAGE_MMS_SLIDE_IMAGE_SIZE, MSG_MMS_IMAGE_SIZE_e, 1, MSG_MMS_IMAGE_SIZE_LARGE)
#define CONFIG_AMR_MESSAGE_MMS_SLIDE_TEXT_LOCATION CONFIG_DEFINE(CFGIT_MESSAGE_MMS_SLIDE_TEXT_LOCATION, MSG_MMS_TEXT_LOCATION_e, 1, MMS_TEXT_LOCATION_FIRST)
#define CONFIG_AMR_MESSAGE_MMS_SENDOMG_MAX_SIZE CONFIG_DEFINE(CFGIT_MESSAGE_MMS_SENDOMG_MAX_SIZE, u32, 1, 100*1024)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_BACKUP_SENT CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_BACKUP_SENT, Msg_MMS_Setting_Backup_Sent_e, 1, Msg_SMS_Backup_Sent_On)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_BACKUP_SENT CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_BACKUP_SENT, Msg_MMS_Setting_Backup_Sent_e, 1, Msg_SMS_Backup_Sent_On)
#else
#define CONFIG_AMR_MESSAGE_MASTER_MMS_IMAGE_SIZE
#define CONFIG_AMR_MESSAGE_MASTER_MMS_MULTIMEDIA_RETRIEVAL
#define CONFIG_AMR_MESSAGE_MASTER_MMS_ALLOW_ANON_MSGS
#define CONFIG_AMR_MESSAGE_MASTER_MMS_RECEIVE_ADVERTS
#define CONFIG_AMR_MESSAGE_MASTER_MMS_DENY_REPORT_SENDING
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_IMAGE_SIZE
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_MULTIMEDIA_RETRIEVAL
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_ALLOW_ANON_MSGS
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_RECEIVE_ADVERTS
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_DENY_REPORT_SENDING
#define CONFIG_AMR_MESSAGE_MASTER_MMS_STATUS_REPORT
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_STATUS_REPORT
#define CONFIG_AMR_MESSAGE_MASTER_MMS_VALIDITY_PERIOD
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_VALIDITY_PERIOD
#define CONFIG_AMR_MESSAGE_MMS_SLIDE_DURATION
#define CONFIG_AMR_MESSAGE_MMS_SLIDE_IMAGE_SIZE
#define CONFIG_AMR_MESSAGE_MMS_SLIDE_TEXT_LOCATION
#define CONFIG_AMR_MESSAGE_MMS_SENDOMG_MAX_SIZE
#define CONFIG_AMR_MESSAGE_MASTER_MMS_BACKUP_SENT
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_BACKUP_SENT
#endif

#ifdef __MMS_READ_REPORT__
#define CONFIG_AMR_MESSAGE_MASTER_MMS_READ_REPORT CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_READ_REPORT, Msg_MMS_Setting_Read_Report_e, 1, Msg_MMS_Read_Report_Off)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_READ_REPORT CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_READ_REPORT, Msg_MMS_Setting_Read_Report_e, 1, Msg_MMS_Read_Report_Off)
#define CONFIG_AMR_MESSAGE_MASTER_MMS_DENY_READ_REPORT_SENDING CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_MMS_DENY_READ_REPORT_SENDING, Msg_MMS_Setting_Deny_Read_Report_Sending_e, 1, Msg_MMS_Deny_Read_Report_Sending_Off)
#define CONFIG_AMR_MESSAGE_SLAVE_MMS_DENY_READ_REPORT_SENDING CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_MMS_DENY_READ_REPORT_SENDING, Msg_MMS_Setting_Deny_Read_Report_Sending_e, 1, Msg_MMS_Deny_Read_Report_Sending_Off)

#define MESSAGE_AMR_MMS_READ_REPORT_CONFIG \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_READ_REPORT \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_READ_REPORT \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_DENY_READ_REPORT_SENDING \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_DENY_READ_REPORT_SENDING
#else
#define MESSAGE_AMR_MMS_READ_REPORT_CONFIG
#endif

#ifdef __MMS_MMI_CDMMS_TEMPLATE__
#define CONFIG_AMR_MESSAGE_TEMPLATE_MMS1 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_MMS1, Msg_MmsTemplate_t, 1, \
 {MMS_MID_TEMPLATE_01/*AudioID*/, \
  MMS_IMG_TEMPLATE_01/*ImageID*/, \
  {0x751f,0x65e5,0x5feb,0x4e50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Subject*/, \
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*AudioURL*/, \
  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*ImageURL*/, \
  {0x751f,0x65e5,0x5feb,0x4e50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Text*/, \
  MSG_MMS_IMAGE_SIZE_LARGE/*ImageSize*/, \
  MMS_TEXT_LOCATION_FIRST/*TextLoc*/, \
  5/*Duration*/, \
  0/*IsUserDefined*/})
#define CONFIG_AMR_MESSAGE_TEMPLATE_MMS2 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_MMS2, Msg_MmsTemplate_t, 1, \
 { MMS_MID_TEMPLATE_02/*AudioID*/, \
   MMS_IMG_TEMPLATE_02/*ImageID*/, \
   {0x6253,0x7535,0x8bdd,0x7ed9,0x6211,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Subject*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*AudioURL*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*ImageURL*/, \
   {0x6253,0x7535,0x8bdd,0x7ed9,0x6211,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Text*/, \
   MSG_MMS_IMAGE_SIZE_LARGE/*ImageSize*/, \
   MMS_TEXT_LOCATION_FIRST/*TextLoc*/, \
   5/*Duration*/, \
   0/*IsUserDefined*/})
#define CONFIG_AMR_MESSAGE_TEMPLATE_MMS3 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_MMS3, Msg_MmsTemplate_t, 1, \
 { MMS_MID_TEMPLATE_03/*AudioID*/, \
   MMS_IMG_TEMPLATE_03/*ImageID*/, \
   {0x795d,0x8eab,0x4f53,0x5065,0x5eb7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Subject*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*AudioURL*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*ImageURL*/, \
   {0x795d,0x8eab,0x4f53,0x5065,0x5eb7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Text*/, \
   MSG_MMS_IMAGE_SIZE_LARGE/*ImageSize*/, \
   MMS_TEXT_LOCATION_FIRST/*TextLoc*/, \
   5/*Duration*/, \
   0/*IsUserDefined*/})
#define CONFIG_AMR_MESSAGE_TEMPLATE_MMS4 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_MMS4, Msg_MmsTemplate_t, 1, \
 { MMS_MID_TEMPLATE_04/*AudioID*/, \
   MMS_IMG_TEMPLATE_04/*ImageID*/, \
   {0x6211,0x73b0,0x5728,0x6ca1,0x7a7a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Subject*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*AudioURL*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*ImageURL*/, \
   {0x6211,0x73b0,0x5728,0x6ca1,0x7a7a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Text*/, \
   MSG_MMS_IMAGE_SIZE_LARGE/*ImageSize*/, \
   MMS_TEXT_LOCATION_FIRST/*TextLoc*/, \
   5/*Duration*/, \
   0/*IsUserDefined*/})
#define CONFIG_AMR_MESSAGE_TEMPLATE_MMS5 CONFIG_DEFINE(CFGIT_MESSAGE_TEMPLATE_MMS5, Msg_MmsTemplate_t, 1, \
 { MMS_MID_TEMPLATE_05/*AudioID*/, \
   MMS_IMG_TEMPLATE_05/*ImageID*/, \
   {0x6211,0x4f1a,0x665a,0x4e00,0x70b9,0x5230,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Subject*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*AudioURL*/, \
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}/*ImageURL*/, \
   {0x6211,0x4f1a,0x665a,0x4e00,0x70b9,0x5230,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}/*Text*/, \
   MSG_MMS_IMAGE_SIZE_LARGE/*ImageSize*/, \
   MMS_TEXT_LOCATION_FIRST/*TextLoc*/, \
   5/*Duration*/, \
   0/*IsUserDefined*/})
#define CONFIG_AMR_MESSAGE_MMS_TEMPLATE_ORDER CONFIG_DEFINE(CFGIT_MESSAGE_MMS_TEMPLATE_ORDER, u8, MSG_MMS_TEMPLATE_MAX_NUM, {1,2,3,4,5})
#define MESSAGE_AMR_MMS_TEMPLATE_CONFIG \
                          CONFIG_AMR_MESSAGE_TEMPLATE_MMS1 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_MMS2 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_MMS3 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_MMS4 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_MMS5 \
                          CONFIG_AMR_MESSAGE_MMS_TEMPLATE_ORDER
#else
#define MESSAGE_AMR_MMS_TEMPLATE_CONFIG
#endif

#define CONFIG_AMR_MESSAGE_MASTER_SMS_SHOW_PREVIEW CONFIG_DEFINE(CFGIT_MESSAGE_MASTER_SMS_SHOW_PREVIEW, Msg_SMS_Setting_Backup_Sent_e, 1, Msg_SMS_Backup_Sent_On)
#define CONFIG_AMR_MESSAGE_SLAVE_SMS_SHOW_PREVIEW CONFIG_DEFINE(CFGIT_MESSAGE_SLAVE_SMS_SHOW_PREVIEW, Msg_SMS_Setting_Backup_Sent_e, 1, Msg_SMS_Backup_Sent_On)

#define MESSAGE_AMR_ALL_CONFIG \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT1 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT2 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT3 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT4 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT5 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT6 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT7 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT8 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT9 \
                          CONFIG_AMR_MESSAGE_TEMPLATE_TEXT10 \
                          CONFIG_AMR_MESSAGE_TEXT_TEMPLATE_ORDER \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_BEARER_MODE \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_VALIDITY_PERIOD \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_TYPE \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_STATUS_REPORT \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_DIRECT_REPLY \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_BEARER_MODE \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_VALIDITY_PERIOD \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_TYPE \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_STATUS_REPORT \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_DIRECT_REPLY \
                          CONFIG_AMR_MESSAGE_SMS_TRASHBOX_MODE \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_IMAGE_SIZE \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_MULTIMEDIA_RETRIEVAL \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_ALLOW_ANON_MSGS \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_RECEIVE_ADVERTS \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_DENY_REPORT_SENDING \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_IMAGE_SIZE \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_MULTIMEDIA_RETRIEVAL \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_ALLOW_ANON_MSGS \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_RECEIVE_ADVERTS \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_DENY_REPORT_SENDING \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_STATUS_REPORT \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_STATUS_REPORT \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_VALIDITY_PERIOD \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_VALIDITY_PERIOD \
                          CONFIG_AMR_MESSAGE_MMS_SLIDE_DURATION \
                          CONFIG_AMR_MESSAGE_MMS_SLIDE_IMAGE_SIZE \
                          CONFIG_AMR_MESSAGE_MMS_SLIDE_TEXT_LOCATION \
                          CONFIG_AMR_MESSAGE_MMS_SENDOMG_MAX_SIZE \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_INBOX_LOCATION \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_INBOX_LOCATION \
                          CONFIG_AMR_MESSAGE_MASTER_MMS_BACKUP_SENT \
                          CONFIG_AMR_MESSAGE_SLAVE_MMS_BACKUP_SENT \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_BACKUP_SENT \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_BACKUP_SENT \
                          CONFIG_AMR_MESSAGE_MASTER_SMS_SHOW_PREVIEW \
                          CONFIG_AMR_MESSAGE_SLAVE_SMS_SHOW_PREVIEW \
                          MESSAGE_AMR_MMS_TEMPLATE_CONFIG \
                          MESSAGE_AMR_MMS_READ_REPORT_CONFIG

#endif  //__MMI_MESSAGE_CFG__H__
