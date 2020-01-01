#ifndef __MMI_SECAPP_ID_H__
#define __MMI_SECAPP_ID_H__

typedef enum
{
    WINID_SECAPP_START = WND_ID_APP_BASE,
    WINID_SECAPP_EMERGENCYCALL_LIST, //VT_NORMAL
    WINID_SECAPP_SECURITY_MENU,//VT_NORMAL
    WINID_SECAPP_PIN_CODE_MENU,//VT_NORMAL
    WINID_SECAPP_PHONE_LOCK_MENU,//VT_NORMAL
    WINID_SECAPP_SIM_LOCK_MENU,//VT_NORMAL
    WINID_SECAPP_PIN_STATUS_MENU,//VT_NORMAL
    WINID_SECAPP_PHONE_LOCK_STATUS_MENU,//VT_NORMAL
    WINID_SECAPP_SIM_LOCK_STATUS_MENU,//VT_NORMAL
    WINID_SECAPP_AUTO_KEYPAD_LOCK_MENU, // VT_OPT_MENU
    WINID_SECAPP_VERIFY_LOCK,//VT_NORMAL
    WINID_SECAPP_VERIFY_PIN,// VT_OPT_MENU
    WINID_SECAPP_VERIFY_PIN2,// VT_OPT_MENU
    WINID_SECAPP_VERIFY_SIM,// VT_OPT_MENU
    WINID_SECAPP_VERIFY_PHONE,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_PIN,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_SIM,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_PHONE,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_MASTER_CODE,//VT_NORMAL
    WINID_SECAPP_POWERON_VERIFY_NETWORK,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_NETWORK_SUBSET,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_SP,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_CORPORATE,// VT_OPT_MENU
    WINID_SECAPP_POWERON_VERIFY_SIMUSIM,// VT_OPT_MENU
    WINID_SECAPP_CHANGE_PASSWROD, // VT_OPT_MENU
    WINID_SECAPP_CHANGE_PIN,// VT_OPT_MENU
    WINID_SECAPP_CHANGE_PIN2,// VT_OPT_MENU
    WINID_SECAPP_CHANGE_SIM,// VT_OPT_MENU
    WINID_SECAPP_CHANGE_PHONE,// VT_OPT_MENU
    WINID_SECAPP_CONFIRM_PIN,// VT_OPT_MENU
    WINID_SECAPP_CONFIRM_PIN2,// VT_OPT_MENU
    WINID_SECAPP_CONFIRM_SIM,// VT_OPT_MENU
    WINID_SECAPP_CONFIRM_PHONE,// VT_OPT_MENU
    WINID_SECAPP_UNBLOCK_LOCK,// VT_OPT_MENU
    WINID_SECAPP_UNBLOCK_PIN,// VT_OPT_MENU
    WINID_SECAPP_UNBLOCK_PIN2,// VT_OPT_MENU
    WINID_SECAPP_UNBLOCK_CHANGE_PIN,// VT_OPT_MENU
    WINID_SECAPP_UNBLOCK_CHANGE_PIN2,// VT_OPT_MENU
    WINID_SECAPP_UNBLOCK_CONFIRM_PIN,// VT_OPT_MENU
    WINID_SECAPP_UNBLOCK_CONFIRM_PIN2,// VT_OPT_MENU
    WINID_SECAPP_ON_OFF_VIEW,//VT_NORMAL
    WINID_SECAPP_ALL_CHAMGE_CONFIRM,
    WINID_SECAPP_ALL_VERIFY_POWERON,
    WINID_SECAPP_POWERON_VERIFY_PIN_ONESIM,
    WINID_SECAPP_POWERON_VERIFY_PIN_TWOSIM_MASTER,
    WINID_SECAPP_POWERON_VERIFY_PIN_TWOSIM_SLAVE,
    WINID_SECAPP_POWERON_VERIFY_SIM_ONESIM,
    WINID_SECAPP_POWERON_VERIFY_SIM_TWOSIM_MASTER,
    WINID_SECAPP_POWERON_VERIFY_SIM_TWOSIM_SLAVE,
    WINID_SECAPP_ANTI_STEAL,
	WINID_SECAPP_UNBLOCK_PIN_ONESIM,
	WINID_SECAPP_UNBLOCK_PIN_TWOSIM_MASTER,
	WINID_SECAPP_UNBLOCK_PIN_TWOSIM_SLAVE,
	MCA_WND_SETTINGMENU_BLACKLIST,
	MCA_WND_SETTINGMENU_BLACKLIST_NUMBER,
	MCA_WND_OPTMENU_BLACKLIST_NUMBER,
	MCA_WND_OPTMENU_BLACKLIST_ADD_NEW,
	MCA_WND_SETTINGMENU_BLACKLIST_KEYWORD,
	MCA_WND_OPTMENU_BLACKLIST_KEYWORD,
	MCA_WND_OPTMENU_BLACKLIST_KEYWORD_ADD_NEW,
    WINID_SECAPP_END,
} SecWndId_e ;

typedef enum
{
    eWID_SECAPP_ABSCONTAINER=APP_WDG_START,
    eWID_SECAPP_TEXT_INPUT_WIDGET_MASTERKEY_VERIFY,
    eWID_SECAPP_TEXT_INPUT_WIDGET_VERIFY,
} SecPowerOnVerifyMasterCode_e;

typedef enum
{
	MNU_SEC_PIN_ONOFF_STATUS = 0,
	MNU_SEC_PIN_STATUS_ON,
	MNU_SEC_PIN_STATUS_OFF,
	MNU_SEC_SIM_LOCK_ONOFF_STATUS,
	MNU_SEC_SIM_LOCK_STATUS_ON,
	MNU_SEC_SIM_LOCK_STATUS_OFF,
	MNU_SEC_PHONE_LOCK_ONOFF_STATUS,
	MNU_SEC_PHONE_LOCK_STATUS_ON,
	MNU_SEC_PHONE_LOCK_STATUS_OFF,
	MNU_SEC_AUTO_KEYPAD_LOCK_STATUS,
	MNU_SEC_AUTO_KEYPAD_LOCK_OFF,
	MNU_SEC_AUTO_KEYPAD_LOCK_ONEMIN,
	MNU_SEC_AUTO_KEYPAD_LOCK_THREEMINS,
	MNU_SEC_AUTO_KEYPAD_LOCK_FIVEMINS,
	MNU_SEC_ITEM,
	MNU_SEC_ITEM_MASTER_PIN_CODE,
	MNU_SEC_ITEM_SLAVE_PIN_CODE,
	MNU_SEC_ITEM_PIN_CODE,
	MNU_SEC_ITEM_PHONE_LOCK,
	MNU_SEC_ITEM_SIM_LOCK,
	MNU_SEC_ITEM_PIN_STATUS,
	MNU_SEC_ITEM_CHANGE_PIN,
	MNU_SEC_ITEM_CHANGE_PIN2,
	MNU_SEC_ITEM_CHANGE_PHONE_CODE,
	MNU_SEC_ITEM_CHANGE_SIM_CODE,
	MNU_SEC_ITEM_OFF,
	MNU_SEC_ITEM_5_SECS,
	MNU_SEC_ITEM_15_SECS,
	MNU_SEC_ITEM_30_SECS,
	MNU_SEC_ITEM_1_MIN,
	MNU_SEC_ITEM_3_MINS,
	MNU_SEC_ITEM_5_MINS,
	MNU_SEC_ITEM_PIN_STATUS_ON,
	MNU_SEC_ITEM_PIN_STATUS_OFF,
	MNU_SEC_ITEM_SIM_STATUS_ON,
	MNU_SEC_ITEM_SIM_STATUS_OFF,
	MNU_SEC_ITEM_PHONE_STATUS_ON,
	MNU_SEC_ITEM_PHONE_STATUS_OFF,
    MNU_SEC_ANTI_STEAL,
    MNU_SEC_PRIVATEPROTECT,
	MNU_MSG_SET_BLACKLIST,
	MNU_MSG_SET_STATUS,
	MNU_MSG_SET_NUMBER,
	MNU_MSG_SET_KEYWORD,
	MNU_MSG_SET_BLACKLIST_ADD_NEW,
	MNU_MSG_SET_BLACKLIST_ADD_FROM_PHB,
	MNU_MSG_SET_BLACKLIST_EDIT,
	MNU_MSG_SET_BLACKLIST_REMOVE,
	MNU_MSG_SET_BLACKLIST_REMOVE_ALL,
	MNU_SEC_ITEM_ANTISTEAL,
}SECMenuId_e;

#endif //__MMI_SECAPP_ID_H__

