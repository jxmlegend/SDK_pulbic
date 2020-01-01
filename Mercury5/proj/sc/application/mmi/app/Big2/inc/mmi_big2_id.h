#ifndef __MMI_BIG2_QVGAP_RS__
#define __MMI_BIG2_QVGAP_RS__

typedef enum 
{
    VID_BIG2_BITMAPWDG = WND_ID_APP_BASE,
    VID_BIG2_IMAGE,
	VID_BIG2_MAIN,
	BIG2_WND_MAIN_OPTIONMENU,
	BIG2_WND_SETTINGS,
	BIG2_WND_VOLUME,
	BIG2_WND_SOUND
}Big2WndId_e;

typedef enum
{
	WID_BIG2_TEXTWDG= APP_WDG_START,
	WID_BIG2_IMAGEWDG,
} Big2WdgId_e;


enum
{
	BIG2_OPTION_MENU_ITEM_SETTINGS,
	BIG2_OPTION_MENU_ITEM_NEW_GAME,
};

typedef enum
{	
	BIG2_SETTINGS_MENU = 0,
	BIG2_SETTINGS_SOUND,
	BIG2_SETTINGS_VOLUME
}SettingMenuId_e;

enum
{
    BIG2_VOLUME_VIEW_BEGIN = APP_WDG_START,
    BIG2_VOLUME_WIDGET,
};

typedef enum
{
	BIG2_SOUND_MENU = 0,
	BIG2_SOUND_ON,
	BIG2_SOUND_OFF
}Big2SoundMenuId_e;

#endif //__MMI_CALIBRATIONAPP_ID_H__
