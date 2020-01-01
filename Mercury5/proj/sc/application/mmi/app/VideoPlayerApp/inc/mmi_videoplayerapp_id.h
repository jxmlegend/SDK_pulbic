#ifndef __MMI_VIDEOPLAYERAPP_ID_H__
#define __MMI_VIDEOPLAYERAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __VIDEOPLAYERAPP_SMALLROM__
#endif

#define VP_PROGRESS_IND_START	0
#define VP_PROGRESS_IND_END	1
#define VP_PROGRESS_IND_POS	0

typedef enum
{
    VIDEOPLAYER_WND_NORMAL_SCREEN = WND_ID_APP_BASE,
    VIDEOPLAYER_WND_FULL_SCREEN,
    VIDEOPLAYER_WND_OPTION_MENU,
    VIDEOPLAYER_WND_DETAILS,
    VIDEOPLAYER_WND_SIM_SELECTION,
    VIDEOPLAYER_WND_PASSWORD_INPUT,
#ifdef __MMI_STEREO_VIDEO__
    VIDEOPLAYER_WND_NORMAL_SCREEN_STEREO_CUS,
    VIDEOPLAYER_WND_FULL_SCREEN_STEREO_CUS,
#endif
    VIDEOPLAYER_WND_INVALID
} VideoPlayerWndId_e;

typedef enum
{
    VP_NORMALSCREEN_VIDEO_OSDWIDGET = APP_WDG_START,
    VP_NORMALSCREEN_BG_IMAGEWIDGET,
    VP_NORMALSCREEN_TITLEBAR_BG_IMAGEWIDGET,
    VP_NORMALSCREEN_VOLUME_BUTTONWIDGET,
    VP_NORMALSCREEN_VOLUME_LEVEL_BG_IMAGEWIDGET,
    VP_NORMALSCREEN_VOLUME_DECREASE_BUTTONWIDGET,
    VP_NORMALSCREEN_VOLUME_INCREASE_BUTTONWIDGET,
    VP_NORMALSCREEN_VOLUME_INDICATORWIDGET,
    VP_NORMALSCREEN_FULLSCREEN_BUTTONWIDGET,
    VP_NORMALSCREEN_VIDEO_IMAGEWIDGET,
#ifdef __VIDEOPLAYERAPP_SMALLROM__
    VP_NORMALSCREEN_AUDIOONLY_TEXTWIDGET,
#endif
#if defined(__MMI_BATTERY_ICON_DISPLAY__)
    VP_NORMALSCREEN_BATTERY_BG_IMAGEWIDGET,
    VP_NORMALSCREEN_BATTERY_STATUS_IMAGEWIDGET,
#endif
#ifndef __SLIM_MMI__
    VP_NORMALSCREEN_VIDEO_QUALITY_IMAGEWIDGET,
#endif
    VP_NORMALSCREEN_DURATION_TEXTWIDGET,
    VP_NORMALSCREEN_SLASH_TEXTWIDGET,
    VP_NORMALSCREEN_DURATION_TOTAL_TEXTWIDGET,
    VP_NORMALSCREEN_INFO_TEXTWIDGET,
    VP_NORMALSCREEN_PROGRESS_INDICATORWIDGET,
    VP_NORMALSCREEN_REWIND_BUTTONWIDGET,
    VP_NORMALSCREEN_PLAYBACK_BUTTONWIDGET,
    VP_NORMALSCREEN_FORWARD_BUTTONWIDGET,
#ifdef __MMI_STEREO_VIDEO__
    VP_NORMALSCREEN_DEPTH_BUTTONWIDGET,
    VP_NORMALSCREEN_DEPTH_LEVEL_BG_IMAGEWIDGET,
    VP_NORMALSCREEN_DEPTH_DECREASE_BUTTONWIDGET,
    VP_NORMALSCREEN_DEPTH_INCREASE_BUTTONWIDGET,
    VP_NORMALSCREEN_DEPTH_INDICATORWIDGET,
    VP_NORMALSCREEN_2D_BUTTUONWIDGET,
    VP_NORMALSCREEN_3D_BUTTUONWIDGET,
#endif
} VideoPlayerNormalScreenWdgId_e;

typedef enum
{
    VP_FULLSCREEN_VIDEO_OSDWIDGET = APP_WDG_START,
    VP_FULLSCREEN_VIDEO_IMAGEWIDGET,
#ifdef __VIDEOPLAYERAPP_SMALLROM__
    VP_FULLSCREEN_AUDIOONLY_TEXTWIDGET,
#endif
    VP_FULLSCREEN_BG_IMAGEWIDGET,
    VP_FULLSCREEN_TITLEBAR_BG_IMAGEWIDGET,
#ifndef __SLIM_MMI__
    VP_FULLSCREEN_QUALITY_IMAGEWIDGET,
#endif
#if defined(__MMI_BATTERY_ICON_DISPLAY__)
    VP_FULLSCREEN_BATTERY_BG_IMAGEWIDGET,
    VP_FULLSCREEN_BATTERY_STATUS_IMAGEWIDGET,
#endif
    VP_FULLSCREEN_DURATION_TEXTWIDGET,
    VP_FULLSCREEN_DURATION_TOTAL_TEXTWIDGET,
    VP_FULLSCREEN_INFO_TEXTWIDGET,
    VP_FULLSCREEN_PROGRESS_BG_IMAGEWIDGET,
    VP_FULLSCREEN_PROGRESS_INDICATORWIDGET,
    VP_FULLSCREEN_BACK_TO_PANEL_BUTTONWIDGET,
    VP_FULLSCREEN_GOTO_FULLSCREEN_BUTTONWIDGET,
    VP_FULLSCREEN_GOTO_RATIO_BUTTONWIDGET,
    VP_FULLSCREEN_RETURN_BUTTONWIDGET,
    VP_FULLSCREEN_REWIND_BUTTONWIDGET,
    VP_FULLSCREEN_STOP_BUTTONWIDGET,
    VP_FULLSCREEN_PLAYBACK_BUTTONWIDGET,
    VP_FULLSCREEN_FORWARD_BUTTONWIDGET,
    VP_FULLSCREEN_VOLUME_BUTTONWIDGET,
    VP_FULLSCREEN_VOLUME_LEVEL_BG_IMAGEWIDGET,
    VP_FULLSCREEN_VOLUME_DECREASE_BUTTONWIDGET,
    VP_FULLSCREEN_VOLUME_INCREASE_BUTTONWIDGET,
    VP_FULLSCREEN_VOLUME_INDICATORWIDGET,
#ifdef __MMI_STEREO_VIDEO__
#ifdef __TOUCH_SCREEN_MMI__
    VP_FULLSCREEN_DEPTH_BUTTONWIDGET,
    VP_FULLSCREEN_DEPTH_LEVEL_BG_IMAGEWIDGET,
    VP_FULLSCREEN_DEPTH_DECREASE_BUTTONWIDGET,
    VP_FULLSCREEN_DEPTH_INCREASE_BUTTONWIDGET,
    VP_FULLSCREEN_DEPTH_INDICATORWIDGET,
#endif
    VP_FULLSCREEN_2D_BUTTUONWIDGET,
    VP_FULLSCREEN_3D_BUTTUONWIDGET,
#endif
} VideoPlayerFullScreenWdgId_e;

typedef enum
{
    MNU_VIDEOPLAYER_DISPLAY_OPTION = 0,
    MNU_VIDEOPLAYER_DISPLAY_SEND,
    MNU_VIDEOPLAYER_DISPLAY_DELETE,
    MNU_VIDEOPLAYER_DISPLAY_DETAILS,
    MNU_VIDEOPLAYER_PANEL_OPTION,
    MNU_VIDEOPLAYER_PANEL_PLAY,
    MNU_VIDEOPLAYER_PANEL_PAUSE,
    MNU_VIDEOPLAYER_PANEL_STOP,
    MNU_VIDEOPLAYER_PANEL_FULL_SCREEN,
    MNU_VIDEOPLAYER_PANEL_INCREASE_RATE,
    MNU_VIDEOPLAYER_PANEL_DECREASE_RATE,
    MNU_VIDEOPLAYER_PANEL_SEND,
    MNU_VIDEOPLAYER_PANEL_DELETE,
    MNU_VIDEOPLAYER_PANEL_DETAILS,
    MNU_VIDEOPLAYER_PANEL_SWITCH_2D3D_EFFECT,
    MNU_VIDEOPLAYER_PANEL_3D_EFFECT_ON,
    MNU_VIDEOPLAYER_PANEL_3D_EFFECT_OFF,
    MNU_VIDEOPLAYER_PANEL_ADJUST_3D_DEPTH,
} VideoplayerMenuId_e;

typedef enum
{
    VIDEOPLAYER_L2_OPTION_3D_ON = 0,
    VIDEOPLAYER_L2_OPTION_3D_OFF,
} VideoplayerLayer2OptionMenuSelectId_e;
#endif //__MMI_VIDEOPLAYERAPP_ID_H__

