#ifndef __MMI_DIALERAPP_ID_H__
#define __MMI_DIALERAPP_ID_H__
#define CCSRV_MAX_CALL_NUMBER_RS   40


#ifdef __APP_MMI_SMALLROM__
#define __DIALAPP_SMALLROM__
#endif	// __APP_MMI_SMALLROM__


typedef enum
{
    DIALER_WND_DIALING = WND_ID_APP_BASE,
    DIALER_WND_SEND,
    DIALER_WND_OPTION,
#ifdef __SMART_DIALER__
    DIALER_WND_SEARCH_SETTING,
    DIALER_WND_SEARCH_SETTING_OPTION,
#endif
} DialerWndId_e;

typedef enum
{
    DIALER_DIALING_VIEW_BEGIN=APP_WDG_START,
    DIALER_DIALING_MAINCONTAINER,
    DIALER_DIALING_INPUT,
    DIALER_DIALING_SHORTCUT,
#ifdef __SMART_DIALER__
    DIALER_DIALING_CONTACT_INFO,
    DIALER_DIALING_CONTACT_MENU,
    DIALER_DIALING_CONTACT_NUMBER,
    DIALER_DIALING_CONTACT_ICO_SMALL,
#endif
#ifdef __TOUCH_SCREEN_MMI__
    DIALER_DIALING_GRID1, // 0~9, *, #
    DIALER_DIALING_BUTTON1,
    DIALER_DIALING_GRID2, // Call, Clear, Add to Contact
    DIALER_DIALING_BUTTON2,
#ifdef __DIALAPP_SMALLROM__    
    DIAL_BUTTON_ABSCONTAINER,
    DIAL_BUTTON_BG_IMAGEWIDGET,
#endif	// __DIALAPP_SMALLROM__
#endif
#ifndef __DIALAPP_SMALLROM__
	DIALER_DIALING_GRID3,
#endif
    DIALER_DIALING_VIEW_END
}DialerDialingView_e;

typedef enum
{
	MNU_DIALERAPP_DIALING_VIEW_OPTION = 0,
	MNU_DIALERAPP_OPTION_CALL,
	MNU_DIALERAPP_OPTION_VIDEOCALL,
	MNU_DIALERAPP_OPTION_IPCALL,
	MNU_DIALERAPP_OPTION_SAVE,
	MNU_DIALERAPP_OPTION_LAUNCH_SHORTCUT,
	MNU_DIALERAPP_OPTION_SILENT_MODE,
	MNU_DIALERAPP_OPTION_KEYPAD_LOCK,
	MNU_DIALERAPP_OPTION_CHANGE_SHORTCUT,
	MNU_DIALERAPP_OPTION_INSERT_WILDCARD,
	MNU_DIALERAPP_OPTION_INSERT_PAUSE,
	MNU_DIALERAPP_OPTION_SMS,
	MNU_DIALERAPP_SEND_MENU,
	MNU_DIALERAPP_SEND_VIA_SMS,
	MNU_DIALERAPP_SEND_VIA_MMS,
#ifdef __SMART_DIALER__
	MNU_DIALERAPP_OPTION_VIEW_CONTACT,
	MNU_DIALERAPP_OPTION_SEARCH_SETTING,
	MNU_DIALERAPP_SEARCH_NUMBER,
	MNU_DIALERAPP_SEARCH_LETTER,
	MNU_DIALERAPP_SEARCH_PINYIN_FIRST,
	MNU_DIALERAPP_SEARCH_STROKES
#endif
}DialerMenuId_e;

#endif //__MMI_DIALERAPP_ID_H__
