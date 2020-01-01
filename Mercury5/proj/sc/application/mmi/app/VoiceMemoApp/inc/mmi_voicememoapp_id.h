#ifndef __MMI_VOICEMEMOAPP_ID_H__
#define __MMI_VOICEMEMOAPP_ID_H__

typedef enum
{
    VOICEMEMO_WND_RECORDER_INIT_VIEW = WND_ID_APP_BASE,
    VOICEMEMO_WND_RECORDER_INIT_OPTION_VIEW,
    VOICEMEMO_WND_RECORDER_PLAYER_VIEW,
    VOICEMEMO_WND_RECORDER_PLAYER_OPTION_VIEW,
    VOICEMEMO_WND_RECORDER_SET_RECORD_TYPE_VIEW
} VoiceMemoWndId_e;

typedef enum
{
    eVOICEMEMOAPP_RECORDER_STATUS_TEXTWIDGET = APP_WDG_START,
    eVOICEMEMOAPP_RECORDER_TIME_TEXTWIDGET,
    eVOICEMEMOAPP_RECORDER_PROGRESS_PROGRESSWIDGET,
#ifdef __IFONE_STYLE_MMI_VOICEMEMO__
    eVOICEMEMOAPP_RECORDER_START_BUTTONWIDGET,
    eVOICEMEMOAPP_RECORDER_SAVE_BUTTONWIDGET,
    eVOICEMEMOAPP_RECORDER_BUTTONCONTAINER_IMGWIDGET,
    eVOICEMEMOAPP_RECORDER_NEEDLECONTAINER_IMGWIDGET,
    eVOICEMEMOAPP_RECORDER_BITMAP_WIDGET,
    eVOICEMEMOAPP_RECORDER_BG_WIDGET,
    eVOICEMEMOAPP_RECORDER_SETTINGS_BUTTONWIDGET,
#endif
} VOICEMEMOAPP_RECORDER_VIEWID_e;

typedef enum
{
    eVOICEMEMOAPP_PLAYER_INFO_TEXTWIDGET = APP_WDG_START,
    eVOICEMEMOAPP_PLAYER_ELAPSEDTIME_TEXTWIDGET,
    eVOICEMEMOAPP_PLAYER_TOTALTIME_TEXTWIDGET,
    eVOICEMEMOAPP_PLAYER_PROGRESS_PROGRESSWIDGET
} VOICEMEMOAPP_PLAYER_VIEWID_e;

typedef enum
{
    VOICEMEMO_RECORD_TYPE_AMR=0,
    VOICEMEMO_RECORD_TYPE_AWB,
    VOICEMEMO_RECORD_TYPE_MP3,
    VOICEMEMO_RECORD_TYPE_WAV,
    VOICEMEMO_RECORD_TYPE_NUM_QUALITY
}VOICEMEMO_RECORD_Type_e;

typedef enum
{
    MNU_VOICEMEMO_RECORDER_OPTION = 0,
    MNU_VOICEMEMO_RECORDER_PLAY,
    MNU_VOICEMEMO_RECORDER_NEW,
    MNU_VOICEMEMO_RECORDER_DELETE,
    MNU_VOICEMEMO_RECORDER_RENAME,
    MNU_VOICEMEMO_RECORDER_SEND,
    MNU_VOICEMEMO_RECORDER_SET_AS,
    MNU_VOICEMEMO_RECORDER_VIEW_FILES,
    MNU_VOICEMEMO_RECORDER_STORAGE,
    MNU_VOICEMEMO_STORAGE_PHONE,
    MNU_VOICEMEMO_STORAGE_CARD,
    MNU_VOICEMEMO_RECORDER_SETTINGS,
    MNU_VOICEMEMO_RECORDER_RECORD,
    MNU_VOICEMEMO_VIEW_FILES_OPTION,
    MNU_VOICEMEMO_VIEW_FILES_PLAY,
    MNU_VOICEMEMO_VIEW_FILES_SEND,
    MNU_VOICEMEMO_VIEW_FILES_SET_AS,
    MNU_VOICEMEMO_VIEW_FILES_RENAME,
    MNU_VOICEMEMO_VIEW_FILES_DELETE,
    MNU_VOICEMEMO_VIEW_FILES_DELETE_ALL,
    MNU_VOICEMEMO_VIEW_FILES_RECORDER,
    MNU_VOICEMEMO_VIEW_FILES_DETAILS,
    MNU_VOICEMEMO_SET_AS,
    MNU_VOICEMEMO_SET_AS_INCOMING_CALL,
    MNU_VOICEMEMO_SET_AS_CONTACT,
    MNU_VOICEMEMO_SET_AS_POWER_ON,
    MNU_VOICEMEMO_SET_AS_POWER_OFF,
    MNU_VOICEMEMO_SET_AS_ALARM,
    MNU_VOICEMEMO_RECORDER_TYPES,
} VoiceMemoMenuId_e;


#endif //__MMI_VOICEMEMOAPP_ID_H__

