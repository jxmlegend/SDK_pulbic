#ifndef __MMI_MAINMENUAPP_ID_H__
#define __MMI_MAINMENUAPP_ID_H__
typedef enum
{
    WND_GRID = WND_ID_APP_BASE,
    WND_LIST,
    WND_SPIN,
#ifdef __MAINMENUIFONE_PRELOAD_ANIMBMP__
    WND_IFONE_INITIAL,
#endif
    WND_IFONE,
    WND_IFONE_EDITFOLDERNAME,
    WND_SPIN3D,
    WND_SUB,
    WND_SUB_SUB,
}MainmenuWnd_e;
enum
{
	eWID_MAINMENU_MENUWIDGET1=0x1100,
	eWID_MAINMENU_MENUWIDGET5,
	eWID_MAINMENU_ANIMATEDWIDGET,
};


#ifdef __USER_DEFINE_MAINMENU_VIDEO__
enum
{
	eWID_MAINMENU_GRIDABSCONTAINER=APP_WDG_START,
};
#endif

enum //VID_MAINMENU_SPINVIEW_enum
{
    eWID_MAINMENU_MAINSPIN_ABS0=APP_WDG_START,
    eWID_MAINMENU_IMAGEWIDGET_BG,
    eWID_MAINMENU_TEXTWIDGET_TITLE3,
    eWID_MAINMENU_IMAGEWIDGET_STATIC_MIDDLE6,
    eWID_MAINMENU_MENUWIDGET,
}; //VID_MAINMENU_SPINVIEW_enum
#if defined (__UI_STYLE_MMI_IFONE__) || defined (__UI_STYLE_MMI_STYLE_SWITCH__)
enum //VID_MAINMENU_IFONEVIEW_enum
{
    eWID_MAINMENU_MAINIFONE_ABS0=APP_WDG_START,
    eWID_MAINMENU_TRANSITIONWIDGET1,
    eWID_MAINMENU_PAGEINFO_LISTWIDGET2,
    eWID_MAINMENU_SHORTCUT_ITEMICON_MENUWIDGET3,
    eWID_MAINMENU_SHORTCUT_ITEMTEXT_LISTWIDGET4,
    eWID_MAINMENU_MISSCALL_TEXTWIDGET5,
    eWID_MAINMENU_NEWMSG_TEXTWIDGET6,
    eWID_MAINMENU_IMAGEWIDGET_BG7,
    eWID_MAINMENU_CONTAINER_ISC8,
    eWID_MAINMENU_IMAGEWIDGET_FOCUE_BG9,
    eWID_MAINMENU_IMAGEWIDGET_BREAK_GLASS_BG10,
    eWID_MAINMENU_GLASS_IMAGEWIDGET11,
    eWID_MAINMENU_CONTAINER_TRANS_ABS12,
    eWID_MAINMENU_CONTAINER_TRANS_LEFT_ABS13,
    eWID_MAINMENU_CONTAINER_TRANS_RIGHT_ABS14,
    eWID_MAINMENU_BG_IMAGE_WIDGET,
    eWID_MAINMENU_DARKBG_FADOUT_WIDGET,
    eWID_MAINMENU_HIGHTLIGHTBG_IMAGE_WIDGET,
    eWID_MAINMENU_ANIM_IMG_WIDGET,
    eWID_MAINMENU_STATU_TEXT_WIDGET,
    eWID_MAINMENU_STATUSBAR_WIDGET,
}; //VID_MAINMENU_IFONEVIEW_enum
#endif /* __UI_STYLE_MMI_IFONE__*/
#ifdef __UI_STYLE_MMI_MAIN_MENU_3D_SPIN__
enum
{
    ROTATION_MAINMENU_VIEW_BEGIN = APP_WDG_START,
    ROTATION_MAINMENU_GL_ROTATION_MENU_WIDGET,
    ROTATION_MAINMENU_VIEW_END,
};
#endif /* __UI_STYLE_MMI_MAIN_MENU_3D_SPIN__*/
typedef enum
{
	MNU_MAIN_MAIN = 0,
	MNU_MAIN_MESSAGES,
	MNU_MAIN_CALL_HISTORY,
	MNU_MAIN_FILE_MANAGER,
	MNU_MAIN_MULTIMEDIA,
	MNU_MAIN_CAMERA_SELECT,
	MNU_MAIN_CAMERA,
	MNU_MAIN_VIDEO_RECORDER,
	MNU_MAIN_MUSIC_PLAYER,
	MNU_MAIN_VIDEO_PLAYER,
	MNU_MAIN_PHOTO_VIEWER,
	MNU_MAIN_FM_RADIO,
	MNU_MAIN_FM_SCHEDULE_RECORD,
	MNU_MAIN_FM_SCHEDULE_PLAY,
	MNU_MAIN_VOICE_MEMO,
	MNU_MAIN_ATV,
	MNU_MAIN_ISDBT,
	MNU_MAIN_ORGANIZER,
	MNU_MAIN_CALENDAR,
	MNU_MAIN_ALARM,
	MNU_MAIN_NOTEPAD,
	MNU_MAIN_SNOTE,
	MNU_MAIN_GAMES,
	MNU_MAIN_EMU,
	MNU_MAIN_GOGOBOX,
	MNU_MAIN_DOGSTAR,
	MNU_MAIN_FROG,
	MNU_MAIN_STARCRASH, //hf.wang_20100712
	MNU_MAIN_PINGPONG,
	MNU_MAIN_FISHING,
	MNU_MAIN_TOOLS,
	MNU_MAIN_CALCULATOR,
	MNU_MAIN_UNIT_CONVERTER,
	MNU_MAIN_STOPWATCH,
	MNU_MAIN_COUNTDOWN_TIMER,
	MNU_MAIN_WORLD_CLOCK,
	MNU_MAIN_BMI,
	MNU_MAIN_LICENSEMGR,
	MNU_MAIN_PCSYNCTOOL,
	MNU_MAIN_FILEMGR,
	MNU_MAIN_UNITTESTAPP,
	MNU_MAIN_APPLICATIONS,
	MNU_MAIN_MAP,
#if defined(__SRE__)	
	MNU_MAIN_SRE,
#endif /// __SRE__	
	MNU_MAIN_E_BOOK,
	MNU_MAIN_DICT,
	MNU_MAIN_SEARCH,
	MNU_MAIN_JAVAAMS,
	MNU_MAIN_QQ,
	MNU_MAIN_VENDOR_GAMES,
#if defined(__ZYUE_ENGINE__)
    MNU_MAIN_ZHANGYUE_EBOOK,
#endif
#ifdef __ZMOL__
	MNU_MAIN_ZMOL_APP,
#endif
	MNU_MAIN_MORE,
	MNU_MAIN_SERVICES,
	MNU_MAIN_WAP_EXPLORER,
	MNU_MAIN_BLUETOOTH,
	MNU_MAIN_SIM_SERVICE_1,
	MNU_MAIN_SIM_SERVICE_2,
	MNU_MAIN_EVENT_CENTER,
	MNU_MAIN_SXM_VIDEO_CHAT,
	MNU_MAIN_SXM_LIBRARY,
	MNU_MAIN_SXM_GAMES,
	MNU_MAIN_KINGMOVIE,
#if defined (__MMI_KING_MOVIE_3D__) && (__MMI_KING_MOVIE_3D_APP_INDIE__)
	MNU_MAIN_2DKINGMOVIE,
	MNU_MAIN_3DKINGMOVIE,
#endif
	MNU_MAIN_PHONE_BOOK,
	MNU_MSG_MCA_MESSAGE_CENTER,
#ifdef __CALLER_LOCATION__
    MNU_MAIN_CALLERLOCATION,
#endif
#ifdef __APP_MMI_NTP__
	MNU_MAIN_NTP,
#endif
#ifdef __EMAIL_MMI__
    MNU_MAIN_EMAIL,
#endif
	MNU_MAIN_BIG2,
	MNU_MAIN_PACMAN,
	MNU_MAIN_FRUIT,
#ifdef __RFID_MMI__
	MNU_MAIN_RFID_FUNC,
#endif
	MNU_MAIN_TODO,
#ifdef __TENCENT_MCARE__
	MNU_MAIN_MCARE,
#endif
        MNU_MAIN_AZAN,
        MNU_MAIN_PUZZLE,
        MNU_MAIN_HAMSTERFIGHT,
	MNU_MAIN_LINKUP,
	MNU_MAIN_GOBANG,
        MNU_MAIN_SOKOBAN,
	MNU_MAIN_SUDOKU,
#ifdef __MMI_GTSBOX__
	MNU_MAIN_GTSBOX,
#endif
#ifdef __APP_MMI_TUDOU__
    MNU_MAIN_TUDOU,
#endif
#ifdef __MMI_KMX_TT__
  MNU_MAIN_KMX_TT_APP,
#endif
#ifdef __YOUTUBE_MMI_CDWAP__
    MNU_MAIN_YOUTUBE,
#endif

#ifdef __YOUKU_MMI_CDWAP__
	MNU_MAIN_YOUKU,
#endif

#ifdef __VUCLIP_MMI_CDWAP__
	MNU_MAIN_VUCLIP,
#endif

#ifdef __BAIDU_MMI_CDWAP__
	MNU_MAIN_BAIDU,
#endif

}MainMenuId_e;
#endif //__MMI_MAINMENUAPP_ID_H__
