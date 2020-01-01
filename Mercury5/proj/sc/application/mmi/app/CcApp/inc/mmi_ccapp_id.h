#ifndef __MMI_CCAPP_ID_H__
#define __MMI_CCAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __CCAPP_SMALLROM__
#endif	// __APP_MMI_SMALLROM__

#define CCAPP_DIALER_MAX_INPUT_BYTE       (160) //Maximum allowable input bytes (80 characters)
#define CCAPP_IPCALL_MAX_NUM_LEN (5 * sizeof(MAE_WChar))


typedef enum CCWndId_e_
{
    CC_WND_DUALMENU = WND_ID_APP_BASE,
    CC_WND_OUTGOINGCALL,
    CC_WND_IPNUMBERLIST,
    CC_WND_IPNUMBEREDITOR,
    CC_WND_INCALLSCREEN,
	CC_WND_INCALLSCREENOPTIONMENU,
    CC_WND_INCALLEDITOR,
	CC_WND_INCALLEDITOROPTIONMENU,
	CC_WND_MULTIPARTYLIST,
	CC_WND_MULTIPARTYOPTIONMENU,
	CC_WND_DTMFNUMBERINPUT,
	CC_WND_CBS_OPTION_LIST,
	CC_WND_CBS_SETTING_MAIN,
	CC_WND_CBS_SETTING_PLAY_TYPE,
	CC_WND_CBS_SETTING_INTERVAL_INPUT_POPUP,
	CC_WND_CBS_SETTING_EFFECT_SOUND,
	CC_WND_CBS_SETTING_VOLUME,
	CC_WDG_CBS_VOLUME,
	CC_WND_CUS,
    CC_WND_DISTORTEDEFFECTLIST,
    CC_WND_ANSWERINGMACHINESCREEN,
    CC_WND_RECORDINGSCREEN
}CCWndId_e;

#ifdef __UI_STYLE_MMI_IFONE__
typedef enum //CcAppOutgoingCallView_e
{
    CCAPP_OUTGOINGCALL_VIEW_DarkWdg,
    CCAPP_OUTGOINGCALL_VIEW_CallInfoCntr,
	CCAPP_OUTGOINGCALL_VIEW_OutgoingCallImgWdg,
    CCAPP_OUTGOINGCALL_VIEW_CallInfoTextWdg,
    CCAPP_OUTGOINGCALL_VIEW_DuoStateImgWdg,
	CCAPP_OUTGOINGCALL_VIEW_InputWdg,
	CCAPP_OUTGOINGCALL_VIEW_GridWdg,
	CCAPP_OUTGOINGCALL_VIEW_HideKeypadBtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_BtnCntr,
    CCAPP_OUTGOINGCALL_VIEW_MuteBtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_KeypadBtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_SpeakerBtnWdg,
	CCAPP_OUTGOINGCALL_VIEW_VolumeBtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_Op1BtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_Op2BtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_ContactBtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_OpCntr,
    CCAPP_OUTGOINGCALL_VIEW_EndCallBtnWdg,
    CCAPP_OUTGOINGCALL_VIEW_CALLSTATE_TEXT,
} CcAppOutgoingCallView_e;

#else
typedef enum //CcAppOutgoingCallView_e
{
    CCAPP_OUTGOINGCALL_VIEW_BEGIN=APP_WDG_START,
    CCAPP_OUTGOINGCALL_VIEW_CALLSCREEN_BG,
    CCAPP_OUTGOINGCALL_VIEW_MAINCONTAINER,
    CCAPP_OUTGOINGCALL_VIEW_IMGAREA_CONTAINER,
    CCAPP_OUTGOINGCALL_VIEW_OUTGOINGCALL_IMAGE,
    CCAPP_OUTGOINGCALL_VIEW_OUTGOINGCALL_TEXTAREA_IMAGE,
    CCAPP_OUTGOINGCALL_VIEW_TEXTAREA_CONTAINER,
    CCAPP_OUTGOINGCALL_VIEW_CALLSTATE_TEXT,
    CCAPP_OUTGOINGCALL_VIEW_CALLINFO_TEXT,
    CCAPP_OUTGOINGCALL_VIEW_DUOSTATE_TEXT,
#ifdef __CALLER_LOCATION__	
    CCAPP_OUTGOINGCALL_VIEW_CALLLOCATION_TEXT,
#endif	
    CCAPP_OUTGOINGCALL_VIEW_END
} CcAppOutgoingCallView_e;
#endif

typedef enum
{
	CCAPP_DIALING_MAINCONTAINER=APP_WDG_START,
	CCAPP_DIALING_INPUT,
    CCAPP_DIALING_SHORTCUT,
#ifdef __TOUCH_SCREEN_MMI__
    CCAPP_DIALING_GRID1, // 0~9, *, #
    CCAPP_DIALING_BUTTON1,
    CCAPP_DIALING_GRID2, // Call, Clear, Add to Contact
    CCAPP_DIALING_BUTTON2,
    CCAPP_DIALING_GRID3, // Send1 & Send2
    CCAPP_DIALING_BUTTON3,
#ifdef __CCAPP_SMALLROM__
	BUTTON_ABSCONTAINER,
	BUTTON_BG_IMAGEWIDGET,
#endif	// !__CCAPP_SMALLROM__	
#endif
} CcAppDialingView_e;

#ifdef __UI_STYLE_MMI_IFONE__
typedef enum //CCAPP_TALK_VIEW_e
{
    CCAPP_TALK_VIEW_BEGIN=APP_WDG_START,
    CCAPP_TALK_VIEW_DarkWdg,
    CCAPP_TALK_VIEW_CallInfoCntr,
    CCAPP_TALK_VIEW_InCallInfoTextWdg,
    CCAPP_TALK_VIEW_HoldCallInfoTextWdg,
    CCAPP_TALK_VIEW_HoldTextWdg,
    CCAPP_TALK_VIEW_TimerWdg,
    CCAPP_TALK_VIEW_CallImgWdg,
    CCAPP_TALK_VIEW_MptyBtnWdg,
    CCAPP_TALK_VIEW_InputWdg,
    CCAPP_TALK_VIEW_BtnCntr,
    CCAPP_TALK_VIEW_MuteBtnWdg,
    CCAPP_TALK_VIEW_KeypadBtnWdg,
    CCAPP_TALK_VIEW_SpeakerBtnWdg,
	CCAPP_TALK_VIEW_VolumeBtnWdg,
    CCAPP_TALK_VIEW_Op1BtnWdg,
    CCAPP_TALK_VIEW_Op2BtnWdg,
    CCAPP_TALK_VIEW_ContactBtnWdg,
    CCAPP_TALK_VIEW_GridWdg,
    CCAPP_TALK_VIEW_TransitionWdg,
    CCAPP_TALK_VIEW_OpCntr,
    CCAPP_TALK_VIEW_EndCallBtnWdg,
    CCAPP_TALK_VIEW_HideKeypadBtnWdg,
	CCAPP_TALK_VIEW_END
} CcAppTalkView_e;
#else
typedef enum //CCAPP_TALK_VIEW_e
{
    CCAPP_TALK_VIEW_BEGIN=APP_WDG_START,
    CCAPP_TALK_VIEW_CALLSCREEN_BG,
    CCAPP_TALK_VIEW_MAINCONTAINER,
    CCAPP_TALK_VIEW_IMGAREA_CONTAINER,
    CCAPP_TALK_VIEW_MPTY_IMAGE1,
    CCAPP_TALK_VIEW_MPTY_IMAGE2,
    CCAPP_TALK_VIEW_MPTY_IMAGE3,
    CCAPP_TALK_VIEW_MPTY_IMAGE4,
    CCAPP_TALK_VIEW_MPTY_IMAGE5,
    CCAPP_TALK_VIEW_TIMEAREA_CONTAINER,
    CCAPP_TALK_VIEW_DUO_IMAGE,
    CCAPP_TALK_VIEW_RECORD_IMAGE,
    CCAPP_TALK_VIEW_TIMER_WIDGET,
    CCAPP_TALK_VIEW_MUTE_IMAGE,
    CCAPP_TALK_VIEW_TEXTAREA_CONTAINER,
    CCAPP_TALK_VIEW_TEXTAREA_BG,
    CCAPP_TALK_VIEW_CALLINFO_IMAGE1,
    CCAPP_TALK_VIEW_CALLINFO_TEXT1,
    CCAPP_TALK_VIEW_CALLINFO_MPTY_LISTWIDGET,
    CCAPP_TALK_VIEW_CALLINFO_MPTY_IMAGES,
    CCAPP_TALK_VIEW_CALLINFO_IMAGE2,
    CCAPP_TALK_VIEW_CALLINFO_TEXT2,
	CCAPP_TALK_VIEW_END
} CcAppTalkView_e;
#endif

typedef enum //CcAppIpNumEditorView_e
{
    CCAPP_IP_NUM_VIEW_BEGIN=APP_WDG_START,
    CCAPP_IP_NUM_VIEW_INPUT,
    CCAPP_IP_NUM_VIEW_END
} CcAppIpNumEditorView_e;

typedef enum
{
	MNU_CC_DUAL_MENU = 0,
	MNU_CC_OPT_INCALL_OPTION,
	MNU_CC_OPT_SPEAKER,
	MNU_CC_OPT_HANDSET,
	MNU_CC_OPT_BT_HEADSET,
	MNU_CC_OPT_MUTE,
	MNU_CC_OPT_UNMUTE,
	MNU_CC_OPT_HOLD,
	MNU_CC_OPT_RETRIEVE,
	MNU_CC_OPT_SWAP,
	MNU_CC_OPT_VIEW,
	MNU_CC_OPT_END_ACTIVE,
	MNU_CC_OPT_END_HOLD,
	MNU_CC_OPT_MULTIPARTY,
	MNU_CC_OPT_TRANSFER,
	MNU_CC_OPT_VOLUME,
	MNU_CC_OPT_DTMF,
	MNU_CC_OPT_DTMF_ON,
	MNU_CC_OPT_DTMF_OFF,
	MNU_CC_OPT_RECORD,
	MNU_CC_OPT_STOP_RECORD,
	MNU_CC_OPT_PHONEBOOK,
	MNU_CC_OPT_MESSAGE,
	MNU_CC_OPT_REPLACE_CALL_OPTION,
	MNU_CC_OPT_MULTIPARTY_OPTION,
	MNU_CC_OPT_SPLIT,
	MNU_CC_OPT_END_SELECTED_,
	MNU_CC_OPT_INCALLEDITOR_OPTION,
	MNU_CC_OPT_CALL,
	MNU_CC_OPT_IPCALL,
	MNU_CC_OPT_ADD,
	MNU_CC_OPT_SEND,
	MNU_CC_OPT_DISTORTED_VOICE,
	MNU_CC_OPT_SMS,
	MNU_CC_OPT_MMS,
	MNU_CC_DISTORTED_EFFECT_OFF,
	MNU_CC_DISTORTED_EFFECT_KID,
	MNU_CC_DISTORTED_EFFECT_GIRL,
	MNU_CC_DISTORTED_EFFECT_WOMAN,
	MNU_CC_DISTORTED_EFFECT_YOUNGMAN,
	MNU_CC_DISTORTED_EFFECT_MAN,
	MNU_CC_DISTORTED_EFFECT_BASS,
	MNU_CC_OPT_CALL_BACKGROUND_SOUND,
	MNU_CC_CBS_STATUS,
	MNU_CC_CBS_PLAY_TYPE,
	MNU_CC_CBS_EFFECT_SOUND,
	MNU_CC_CBS_VOLUME,
	MNU_CC_CBS_PLAY_ONCE,
	MNU_CC_CBS_PLAY_REPEAT,
	MNU_CC_CBS_PLAY_INTERVAL,
}CcMenuId_e;

typedef enum //CCAPP_RECORDING_VIEW_e
{
    CCAPP_FULL_RECORDING_VIEW_BEGIN=APP_WDG_START,
    CCAPP_FULL_RECORDING_VIEW_CALLSCREEN_BG,
    CCAPP_FULL_RECORDING_VIEW_REOCRDING_BG,
    CCAPP_FULL_RECORDING_VIEW_REOCRDING,
    CCAPP_FULL_RECORDING_VIEW_MAINCONTAINER,
    CCAPP_FULL_RECORDING_VIEW_CALLINFO_TEXT,
    CCAPP_FULL_RECORDING_VIEW_INFO_TEXT,
    CCAPP_FULL_RECORDING_VIEW_DURATION_TEXT,
    CCAPP_FULL_RECORDING_VIEW_END
} CcAppFullRecordingView_e;

#ifdef __APP_MMI_ANSWERING_MACHINE__
typedef enum
{
    CCAPP_FULL_AM_VIEW_BEGIN=APP_WDG_START,
    CCAPP_FULL_AM_VIEW_CALLSCREEN_BG,
    CCAPP_FULL_AM_VIEW_CALLSCREEN_RECORD,    
    CCAPP_FULL_AM_VIEW_MAINCONTAINER,
    CCAPP_FULL_AM_VIEW_CALLINFO_TEXT,
    CCAPP_FULL_AM_VIEW_INFO_TEXT,
    CCAPP_FULL_AM_VIEW_WAITING_TEXT,
    CCAPP_FULL_AM_VIEW_END
} CcAppAnsweringMachineView_e;
#endif

#endif //__MMI_CCAPP_ID_H__

