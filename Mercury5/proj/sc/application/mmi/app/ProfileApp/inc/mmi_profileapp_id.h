#ifndef __MMI_PROFILEAPP_ID_H__
#define __MMI_PROFILEAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __PROFILEAPP_SMALLROM__
#endif

typedef enum
{
    PROFILEAPP_WND_MAINLIST = WND_ID_APP_BASE,
    PROFILEAPP_WND_MAINLIST_HEADSETSILENT,
    PROFILEAPP_WND_MAINLIST_NORMALSILENT,
    PROFILEAPP_WND_OPTION,
    PROFILEAPP_WND_EDITLIST,
    PROFILEAPP_WND_POWERON_RINGTONE,
    PROFILEAPP_WND_POWEROFF_RINGTONE,
    PROFILEAPP_WND_RESTOREPROFILE,
    PROFILEAPP_WND_VOLUME,
    PROFILEAPP_WND_VIBRATETYPE,
    PROFILEAPP_WND_VOICECALLSRINGINGTYPE,
    PROFILEAPP_WND_MESSAGETONE,
    PROFILEAPP_WND_CALENDARTONE,
    PROFILEAPP_WND_ALARMTONE,
    PROFILEAPP_WND_VOICECALLS,
    PROFILEAPP_WND_MESSAGING,
    PROFILEAPP_WND_CALENDAR,
    PROFILEAPP_WND_ALARM,
    PROFILEAPP_WND_FILEMGR,
    PROFILEAPP_WND_POWER_SAVE_INFO, // __POWER_SAVING_PROFILE_MMI__

} ProfileAppWndId_e;

typedef enum
{
    PROFILEAPP_VOLUME_VIEW_BEGIN = APP_WDG_START,
    PROFILEAPP_VOLUME_WIDGET,
#ifdef __PROFILEAPP_SMALLROM__
    PROFILEAPP_VOLUME_BGIMAGE_WIDGET,
    PROFILEAPP_VOLUME_TOPIMAGE_WIDGET,
    PROFILEAPP_VOLUME_TOP2IMAGE_WIDGET,
#endif
}ProfileVolumeWdgId_e;

typedef enum
{
	MNU_PROFILE_PROFILE_ITEM = 0,
	MNU_PROFILE_GENERAL,
	MNU_PROFILE_MEETING,
	MNU_PROFILE_OUTDOOR,
	MNU_PROFILE_CAR_KIT,
	MNU_PROFILE_HEADSET,
	MNU_PROFILE_PERSONAL,
	MNU_PROFILE_SILENT,
	MNU_PROFILE_PROFILE_SETTINGS,
	MNU_PROFILE_VOICE_CALLS,
	MNU_PROFILE_VOICE_CALLS_MELODY,
	MNU_PROFILE_PROFILE_OPTION,
	MNU_PROFILE_ACTIVATE,
	MNU_PROFILE_PERSONALIZE,
	MNU_PROFILE_RESTORE,

	MNU_PROFILE_POWER_SAVING,   // __POWER_SAVING_PROFILE_MMI__
	MNU_PROFILE_POWER_SAVING_INFO,  // __POWER_SAVING_PROFILE_MMI__

    MNU_PROFILE_BLUETOOTH,  // __BLUETOOTH_MMI__
}ProfileMenuId_e;

#define PROFILEAPP_WND_EDITLIST_MENU_CNT        14

#endif //__MMI_PROFILEAPP_ID_H__

