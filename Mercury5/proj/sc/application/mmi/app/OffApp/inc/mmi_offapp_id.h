#ifndef __MMI_OFFAPP_ID_H__
#define __MMI_OFFAPP_ID_H__

#ifdef __APP_MMI_SMALLROM__
#define __OFFAPP_SMALLROM__
#endif

typedef enum
{
    OFF_WND_IFONE = WND_ID_APP_BASE,
    OFF_WND_OPTION,
    OFF_WND_ANIM,
    OFF_WND_VIDEO,
    SM_WND_MAIN,
#ifdef __DUAL_LCD__
    OFF_SUB_WND_ANIM = WND_ID_APP_SUB_BASE,
#endif
}OffAppWndId_e;

typedef enum
{
    MNU_OFFAPP_OFFOPTION = 0,
    MNU_OFFAPP_SWITCHOFF,
    MNU_OFFAPP_WITHOUTALARM,
    MNU_SWITCHMODE_SIM_SELECTION,
    MNU_SWITCHMODE_DUAL_MODE,
    MNU_SWITCHMODE_MASTER_MODE,
    MNU_SWITCHMODE_SLAVE_MODE,
    MNU_SWITCHMODE_DUAL_DISABLE,
    MNU_SWITCHMODE_SINGLE_ENABLE,
    MNU_SWITCHMODE_SINGLE_DISABLE,
    MNU_SWITCHMODE_AIRPLANE_MODE_ON,
    MNU_SWITCHMODE_AIRPLANE_MODE_OFF,
}OffMenuId_e;

typedef enum
{
    OFFAPP_VIDEO_OSDWIDGET = 0,
} OffAppWdgId_e;

#endif //__MMI_OFFAPP_ID_H__

