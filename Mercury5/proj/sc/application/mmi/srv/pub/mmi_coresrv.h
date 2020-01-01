/**
* @file mmi_coresrv.h
*
* Service without using State Machine - CORESRV
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_CORESRV
* Interface Id: IID_CORESRV
*
* @version $Id$
*/
#ifndef __MMI_CORESRV_H__
#define __MMI_CORESRV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_mae_applet.h"
#include "mmi_mae_class.h"

/*-------------------------------------------------------------------------*/
#include "mmi_common_cfg.h"
#include "mmi_mae_model.h"

#include "sys_rtk_ho.h" //for rtk_Envelop_t etc, required by sys_rtk_ht.h
#include "sys_rtk_ht.h" //for RTK_TASK_NAME_CHAR_LEN

typedef enum
{
    CORE_MASK_BACKLIGHT         = 1 << 0
   ,CORE_MASK_FLASH             = 1 << 1
   ,CORE_MASK_APP_LAUNCHED      = 1 << 2
   ,CORE_MASK_APP_CLOSED        = 1 << 3
   ,CORE_MASK_APP_MONITOR       = 1 << 4
#ifdef __PROXIMITY_SENSOR_MMI__
   ,CORE_MASK_INFRARED          = 1 << 5
#endif
   ,CORE_MASK_FIND_HIGH_SPEED_TASK = 1 << 6
   ,CORE_MASK_ALL               = (s32) 0xFFFFFFFF
} Core_Notify_Mask_e;


#define CORESRV_EVT_BACKLIGHT_ON     (CLSID_CORESRV <<16  | 1)
#define CORESRV_EVT_BACKLIGHT_OFF    (CLSID_CORESRV <<16  | 2)
#define CORESRV_EVT_FLASH_ON         (CLSID_CORESRV <<16  | 3)
#define CORESRV_EVT_FLASH_OFF        (CLSID_CORESRV <<16  | 4)
#define CORESRV_EVT_APP_LAUNCHED     (CLSID_CORESRV <<16  | 5)
#define CORESRV_EVT_BACKLIGHT_LEVEL_CHANGED     (CLSID_CORESRV <<16  | 6)
#define CORESRV_EVT_APP_CLOSED       (CLSID_CORESRV <<16  | 7)
#define CORESRV_MONITOR_APP_RESUMED       (CLSID_CORESRV <<16  | 8)
#ifdef __PROXIMITY_SENSOR_MMI__
#define CORESRV_EVT_INFRARED_INT     (CLSID_CORESRV <<16  | 9)
#endif
#define CORESRV_EVT_HIGH_SPEED_TASK  (CLSID_CORESRV <<16  | 10)

// one by one mapping with dev_acc.h //LEVEL0~MAX
enum
{
    CORESRV_BACKLIGHT_LEVEL_0 = 0
   ,CORESRV_BACKLIGHT_LEVEL_1
   ,CORESRV_BACKLIGHT_LEVEL_2
   ,CORESRV_BACKLIGHT_LEVEL_3
   ,CORESRV_BACKLIGHT_LEVEL_4
   ,CORESRV_BACKLIGHT_LEVEL_5
   ,CORESRV_BACKLIGHT_LEVEL_6
   ,CORESRV_BACKLIGHT_LEVEL_MAX = CORESRV_BACKLIGHT_LEVEL_6
   ,CORESRV_BACKLIGHT_LEVEL_DEFAULT
};
typedef u16 LCDSrv_BacklightLevel_e;

enum
{
    CORESRV_BACKLIGHT_DURATION_DEFAULT = 0xeeee
   ,CORESRV_BACKLIGHT_DURATION_FOREVER = BACKLIGHT_DURATION_ALWAYS_ON   //match with BKL_DURATION_ALWAYS_ON
};
typedef u16 LCDSrv_BacklightDuration_e;

enum
{
    CORESRV_LAUNCH_FUNC_FIRST = 0
   ,CORESRV_LAUNCH_FUNC_POWERMODE = CORESRV_LAUNCH_FUNC_FIRST
   ,CORESRV_LAUNCH_FUNC_CAMERA
   ,CORESRV_LAUNCH_FUNC_MP3
   ,CORESRV_LAUNCH_FUNC_FM
   ,CORESRV_LAUNCH_FUNC_MSG
   ,CORESRV_LAUNCH_FUNC_MAIL
   ,CORESRV_LAUNCH_FUNC_ATV
   ,CORESRV_LAUNCH_FUNC_AUTO_KEYGUARD
   ,CORESRV_LAUNCH_FUNC_SCREENSAVER

   ,CORESRV_LAUNCH_FUNC_LAST = CORESRV_LAUNCH_FUNC_SCREENSAVER
};
typedef u16 LaunchFuncType_e;

enum
{
    CORESRV_TOUCH_BEHAVIOR_ALWAYS = 0
,   //let touch behavior as always on/off
    CORESRV_TOUCH_BEHAVIOR_GOWITHBACKLIGHT
,   //let touch behavior go with backlight on/off
};
typedef u16 TouchBehavior_e;

enum
{
    CORESRV_LCM_CONTROL_ALWAYS_OFF = 0
,   //let LCM control as always off
    CORESRV_LCM_CONTROL_ALWAYS_ON
,   //let LCM control as always on
    CORESRV_LCM_CONTROL_GOWITHBACKLIGHT
,   //let LCM control go with backlight on/off
};

enum
{
    CORESRV_HIGH_SPEED_TASK_NONE = 0,
    CORESRV_HIGH_SPEED_TASK_FOUND_TASK,
    CORESRV_HIGH_SPEED_TASK_NORMAL_SPEED
};
typedef u8 HighSpeedTaskStatus_e;

typedef u16 LCMControlType_e;

typedef void (* BackLightCB )(void *pUserData, LCDSrv_BacklightLevel_e nBacklightLevel, LCDSrv_BacklightDuration_e nBackLightDuration);

typedef struct BKLSettings_TAG
{
    LCDSrv_BacklightLevel_e nBacklightLevel;
    LCDSrv_BacklightDuration_e nBackLightDuration;
    boolean bIsKeypadLightAutoOff;
}BKLSettings;

typedef struct BKL2LSettingsEx_TAG
{
    u16 nBacklightLevel;
    u16 nBackLightDuration;
    u16 nBacklightLevel_2;
    u16 nBackLightDuration_2;
    boolean bIsKeypadLightAutoOff;
}BKL2LSettings;

typedef struct BKMLSettings_TAG
{
    LCDSrv_BacklightLevel_e nBacklightLevel;
    LCDSrv_BacklightDuration_e nBackLightDuration;
    BackLightCB	pfnCB;
}BKMLSettings;

typedef struct BKLInfo_TAG
{
    boolean bIsBacklightOn;
    LCDSrv_BacklightLevel_e nActiveBKLLevel;            //Active Backlight level
    LCDSrv_BacklightDuration_e nActiveBKLDuration;      //Active Backlight duration
}BKLInfo;

//Flash related
#define CORESRV_FLASH_DURATION_FOREVER (0xFFFF)

enum
{
    FLASH_LEVEL_0 = 1
   ,FLASH_LEVEL_1
   ,FLASH_LEVEL_2
   ,FLASH_LEVEL_3
   ,FLASH_LEVEL_4
   ,FLASH_LEVEL_5
   ,FLASH_LEVEL_6
   ,FLASH_LEVEL_MAX = FLASH_LEVEL_6,
};
typedef u16 CoreSrvFlashLevel_et;

typedef struct FlashSetting_s
{
    u16 u16FlashOnTime;                         /**< Duration of the on status(Msec.) */
    u16 u16FlashOffTime;                        /**< Duration of the off status((Msec.) */
    CoreSrvFlashLevel_et eFlsahOnLevel;         /**< Flash level of the on status */
    CoreSrvFlashLevel_et eFlsahOffLevel;        /**< Flash level of the off status */
    u16 u16FlashDuration;                       /**< Duration of the total flash time (Msec.) */
}FlashSetting_st;

//Torch related
typedef enum
{
    FLASHLIGHT_MODE_OFF = 0,   /**< Turn off the device */
    FLASHLIGHT_MODE_ON,        /**< Turn on the device */
    FLASHLIGHT_MODE_MAX        /**< Invalid operation index */
} FlashlightMode_e;

//FillLight related
typedef enum
{
    FILLLIGHT_MODE_OFF = 0,   /**< Turn off the device */
    FILLLIGHT_MODE_ON,        /**< Turn on the device */
    FILLLIGHT_MODE_MAX        /**< Invalid operation index */
} FillLightMode_e;

typedef u16 Core_BacklightLayer_e;

enum
{
     CORESRV_BACKLIGHT_1LAYER = 1
    ,CORESRV_BACKLIGHT_2LAYER
    ,CORESRV_BACKLIGHT_3LAYER
    ,CORESRV_BACKLIGHT_4LAYER
    ,CORESRV_BACKLIGHT_5LAYER
    ,CORESRV_BACKLIGHT_6LAYER
    ,CORESRV_BACKLIGHT_LAYER_MAX = CORESRV_BACKLIGHT_6LAYER
};

typedef struct
{
    void *pUserData;
    Core_BacklightLayer_e eMultupleLayer;
    BKMLSettings tBKLSettings[CORESRV_BACKLIGHT_LAYER_MAX + 1];
    boolean bIsKeypadLightAutoOff;
} MultiBKLSetting;

typedef enum
{
	// Normal task stack
	CORESERV_SYS_STACK_TYPE_SYS,
	CORESERV_SYS_STACK_TYPE_CUS,
	CORESERV_SYS_STACK_TYPE_DYNA,
	// Specail task stack
	CORESERV_SYS_STACK_TYPE_FIQ,
	CORESERV_SYS_STACK_TYPE_IRQ,
	CORESERV_SYS_STACK_TYPE_MARKER,
} CoreSysStkType_e;

typedef struct
{
	u8					Id;
    char				TaskName[RTK_TASK_NAME_CHAR_LEN];
	CoreSysStkType_e	Type;
	void*				TopOfStack;
 	u16					StackSize;
	u32					MaxUsage;
} CoreSysTaskStkInfo_t;

typedef struct
{
    u32                     nMax;
    u32                     nTotalQueried;
    CoreSysTaskStkInfo_t     *pInfo;
} CoreSysTaskStkDebug_t;

typedef enum
{
	CORESERV_SYS_DEBUG_TYPE_STACK_PROFILE,
	CORESERV_SYS_DEBUG_TYPE_GET_SW_VERSION,
} CoreSysDbgType_e;

typedef struct
{
	union {
		CoreSysTaskStkDebug_t TaskStkDebug;
		char* pStrSwVer;
	} payload;
} CoreSysDbgInfo_t;
/*-------------------------------------------------------------------------*/

/**
 * External Events
 */


/**
 * ICORESRV Interfaces
 */
#define INHERIT_ICORESRV(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret     (*RequestBacklightON)       ( IName * , BKLSettings *pSettings);  \
    MAE_Ret     (*Request2LBacklightON)       ( IName * , BKL2LSettings *pSettings);  \
    MAE_Ret     (*RequestBacklightOFF)      ( IName * );  \
    MAE_Ret     (*Register_Notification)        ( IName * , void *pInst, Core_Notify_Mask_e mask);  \
    MAE_Ret     (*DeRegister_Notification)      ( IName * , void *pInst, Core_Notify_Mask_e mask);  \
    MAE_Ret     (*EnableKeyPressTone)       ( IName * , boolean bEnable);  \
    MAE_Ret     (*EnableKeyEvent)       ( IName * , boolean bEnable);  \
    MAE_Ret     (*SetTouchBehavior)     ( IName * , boolean bOnOff, TouchBehavior_e eTouchBehavior);  \
    MAE_Ret     (*SetDefaultBacklight)      ( IName * , BKLSettings Settings);  \
    MAE_Ret     (*SetActiveBacklight)      ( IName * , BKLSettings Settings);  \
    MAE_Ret     (*RequestDefaultBacklight)      ( IName * );  \
    boolean     (*IsBacklightOn)        ( IName * );  \
    boolean     (*IsKeyEnable)      ( IName * );  \
    boolean     (*IsTouchEnable)        ( IName * );  \
    boolean     (*IsLeavingSleepMode)        ( IName * );  \
    MAE_Ret     (*EnableLaunchFunc)     ( IName * , LaunchFuncType_e eFuncType, boolean bEnable);  \
    MAE_Ret     (*EnableLongPressedLaunchFunc)     ( IName * , LaunchFuncType_e eFuncType, boolean bEnable);  \
    void        (*IgnoreBacklightRequest)       ( IName * , boolean bIgnore);  \
    MAE_Ret     (*RequestFlashON)       ( IName * , FlashSetting_st *psFlashSetting);  \
    MAE_Ret     (*RequestFlashOFF)      ( IName * );  \
    void        (*FlushAPToIdleBase)        ( IName * );  \
    boolean     (*IsLaunchFuncEnable)       ( IName * , LaunchFuncType_e eFuncType);  \
    void        (*PlayKeyPressTone)     ( IName * , u32 u32KeyId);  \
    void        (*UpdateDisplayWithBackLight)       ( IName * , boolean bUpdate);  \
    MAE_Ret     (*SetBacklightByInfo)       ( IName * , BKLInfo stBKLInfo);  \
    MAE_Ret     (*GetCurrentBacklightInfo)      ( IName * , BKLInfo* pstBKLInfo);  \
    MAE_Ret     (*ResetBackLightTimerByTouchEvent)      ( IName * , boolean bEnable);  \
    MAE_Ret    (*ResetBacklight)        ( IName * ); \
    MAE_Ret     (*LCMControl)       ( IName * , LCMControlType_e eLCMControl); \
    MAE_Ret (*GetFlashlightMode)       ( IName * , FlashlightMode_e *eFlashlightMode); \
    MAE_Ret (*SetFlashlightMode)       ( IName * , FlashlightMode_e eFlashlightMode); \
    MAE_Ret (*GetFillLightMode)       ( IName * , FillLightMode_e *eFillLightMode); \
    MAE_Ret (*SetFillLightMode)       ( IName * , FillLightMode_e eFillLightMode); \
    boolean     (*IsFilllightSupport)       (IName*);       \
    MAE_Ret     (*GetSysDbgInfo)		( IName * , CoreSysDbgType_e type, CoreSysDbgInfo_t* pDbgInfo);\
    MAE_Ret (*RequestMuiltiBacklightON) ( IName * , MultiBKLSetting *pSettings); \
    MAE_Ret (*SetKpdLight)       ( IName * , boolean bIsOn);\
    MAE_Ret (*ClearLocalBacklightSetting)       ( IName *);\
    MAE_Ret (*ResetFindHighSpeedTask)       ( IName *);\
    MAE_Ret (*IsFindHighSpeedTask)       ( IName *, HighSpeedTaskStatus_e *peStatus);\
    MAE_Ret     (*EnableInfrared)		( IName * ); \
    MAE_Ret     (*DisableInfrared)	( IName * ); \
    void		(*EnableHallSwitchEffect)		( IName * , boolean isEanbleHallSwitch);\
    void		(*SetHallStatus)		( IName * , boolean bISHallClose);\
    boolean		(*GetHallStatus)		( IName * )
DEFINE_INTERFACE(ICORESRV);


#define ICORESRV_QueryInterface(pICntlr, id, pp, po)            GET_FUNCTBL((pICntlr), ICORESRV)->QueryInterface(pICntlr, id, pp, po)
#define ICORESRV_HandleEvent(pICntlr, e, p1, p2)                GET_FUNCTBL((pICntlr), ICORESRV)->HandleEvent(pICntlr, e, p1, p2)
/**
 ICORESRV_RequestBacklightON
@brief  The interface is use to turn on backlight to request level.

@param[in]   pICORESRV                        Pointer to the ICORESRV interface.
@param[in]   pSettings                               Setting value pointer about backlight brightness and duration.

@return MAE_RET_SUCCESS                   If successful.
@return MAE_RET_FAILED                      If an error happen.
@return MAE_RET_BAD_PARAM            If an parameter error.
@return MAE_RET_NOT_SUPPORTED    If MAE terminated event notified.
 */
#define ICORESRV_RequestBacklightON(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->RequestBacklightON( pICntlr, p1)


/**
 ICORESRV_Request2LBacklightON
@brief  The interface is use to turn on backlight to request 2 level backlight control.

@param[in]   pICORESRV                        Pointer to the ICORESRV interface.
@param[in]   pSettings                               Setting value pointer about 2 level backlight brightness and duration.

@return MAE_RET_SUCCESS                   If successful.
@return MAE_RET_FAILED                      If an error happen.
@return MAE_RET_BAD_PARAM            If an parameter error.
@return MAE_RET_NOT_SUPPORTED    If MAE terminated event notified.
 */
#define ICORESRV_Request2LBacklightON(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->Request2LBacklightON( pICntlr, p1)

/**
 ICORESRV_RequestBacklightOFF
@brief  The interface is use to turn off backlight.

@param[in]   pICORESRV            Pointer to the ICORESRV interface.


@return MAE_RET_SUCCESS                   If successful.
@return MAE_RET_FAILED                      If an error happen.
@return MAE_RET_BAD_PARAM            If an parameter error.
@return MAE_RET_NOT_SUPPORTED    If MAE terminated event notified.
 */
#define ICORESRV_RequestBacklightOFF(pICntlr)   GET_FUNCTBL((pICntlr), ICORESRV)->RequestBacklightOFF( pICntlr)
/**
 ICORESRV_Register_Notification
@brief  The interface is provided APPs to start listen events that he interested.

@param[in]   pICORESRV           Pointer to the ICORESRV interface.
@param[in]  instance                 Object pointer to the APP
@param[in]  mask                     Event mask


@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.
@return MAE_RET_BAD_PARAM    If an error happen.
@return MAE_RET_NOT_SUPPORTED    If MAE terminated event notified.
 */
#define ICORESRV_Register_Notification(pICntlr, p1, p2) GET_FUNCTBL((pICntlr), ICORESRV)->Register_Notification( pICntlr, p1, p2)
/**
 ICORESRV_DeRegister_Notification
@brief  The interface is provided APPs to stop listen events that he interested.

@param[in]   pICORESRV           Pointer to the ICORESRV interface.
@param[in]  instance                 Object pointer to the APP
@param[in]  mask                     Event mask


@return MAE_RET_SUCCESS          If successful.
@return MAE_RET_FAILED             If an error happen.
@return MAE_RET_BAD_PARAM    If an error happen.
@return MAE_RET_NOT_SUPPORTED    If MAE terminated event notified.
 */
#define ICORESRV_DeRegister_Notification(pICntlr, p1, p2)   GET_FUNCTBL((pICntlr), ICORESRV)->DeRegister_Notification( pICntlr, p1, p2)
/**
 Enable/Disable Key Press Tone
 */
#define ICORESRV_EnableKeyPressTone(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->EnableKeyPressTone( pICntlr, p1)
/**
 Enable/Disable Key Event
 */
#define ICORESRV_EnableKeyEvent(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->EnableKeyEvent( pICntlr, p1)
/**
 Set Touch Behavior (TouchBehavior_e type)
Currently has two behaviors: alway or go with backlight bahavior
 */
#define ICORESRV_SetTouchBehavior(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ICORESRV)->SetTouchBehavior( pICntlr, p1, p2)
/**
 Set default backlight settings to LCD service local variable
 */
#define ICORESRV_SetDefaultBacklight(pICntlr, p1)   GET_FUNCTBL((pICntlr), ICORESRV)->SetDefaultBacklight( pICntlr, p1)
/**
 Set active backlight settings to LCD service local variable
 */
#define ICORESRV_SetActiveBacklight(pICntlr, p1)   GET_FUNCTBL((pICntlr), ICORESRV)->SetActiveBacklight( pICntlr, p1)
/**
 Request LCD service to turn on backlight according to its local default backlight settings
 */
#define ICORESRV_RequestDefaultBacklight(pICntlr)   GET_FUNCTBL((pICntlr), ICORESRV)->RequestDefaultBacklight( pICntlr)
/**
 Ask LCD service is currently backlight on or off
 */
#define ICORESRV_IsBacklightOn(pICntlr) GET_FUNCTBL((pICntlr), ICORESRV)->IsBacklightOn( pICntlr)
/**
 Ask LCD service is currently key event enable or not
 */
#define ICORESRV_IsKeyEnable(pICntlr)   GET_FUNCTBL((pICntlr), ICORESRV)->IsKeyEnable( pICntlr)
/**
 Ask Core service is currently touch event enable or not
 */
#define ICORESRV_IsTouchEnable(pICntlr) GET_FUNCTBL((pICntlr), ICORESRV)->IsTouchEnable( pICntlr)
/**
 Ask Core service is system running leave-sleep-mode process or not
 */
#define ICORESRV_IsLeavingSleepMode(pICntlr) GET_FUNCTBL((pICntlr), ICORESRV)->IsLeavingSleepMode( pICntlr)
/**
 Enable/Disable Launch Function
 */
#define ICORESRV_EnableLaunchFunc(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ICORESRV)->EnableLaunchFunc( pICntlr, p1, p2)

/**
 Enable/Disable Long Pressed Launch Function
 */
#define ICORESRV_EnableLongPressedLaunchFunc(pICntlr, p1, p2)  GET_FUNCTBL((pICntlr), ICORESRV)->EnableLongPressedLaunchFunc( pICntlr, p1, p2)

/**
 Ignore backlight on/off request
 */
#define ICORESRV_IgnoreBacklightRequest(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->IgnoreBacklightRequest( pICntlr, p1)
/**

 */
#define ICORESRV_RequestFlashON(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->RequestFlashON( pICntlr, p1)
/**

 */
#define ICORESRV_RequestFlashOFF(pICntlr)   GET_FUNCTBL((pICntlr), ICORESRV)->RequestFlashOFF( pICntlr)
/**
 Flush all AP in stack and launch Idle / Main menu according to current main menu style
 */
#define ICORESRV_FlushAPToIdleBase(pICntlr) GET_FUNCTBL((pICntlr), ICORESRV)->FlushAPToIdleBase( pICntlr)
/**

 */
#define ICORESRV_IsLaunchFuncEnable(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->IsLaunchFuncEnable( pICntlr, p1)
/**

 */
#define ICORESRV_PlayKeyPressTone(pICntlr, p1)  GET_FUNCTBL((pICntlr), ICORESRV)->PlayKeyPressTone( pICntlr, p1)
/**

 */
#define ICORESRV_UpdateDisplayWithBackLight(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->UpdateDisplayWithBackLight( pICntlr, p1)
/**
 Set backlight by backlight information.
Other task like 3rd party task might change backlight setting that make backlight status is not correct.
Vendor Ap can restore backlight to previous status as long as stBKLInfo is the same as previous status.
 */
#define ICORESRV_SetBacklightByInfo(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->SetBacklightByInfo( pICntlr, p1)
/**
 Get current backlight info.
It is able to restore this backlight status by calling SetBacklightByInfo with stBKLInfo.
 */
#define ICORESRV_GetCurrentBacklightInfo(pICntlr, p1)   GET_FUNCTBL((pICntlr), ICORESRV)->GetCurrentBacklightInfo( pICntlr, p1)
/**
 Reset backlight timer when receiving touch event
 */
#define ICORESRV_ResetBackLightTimerByTouchEvent(pICntlr, p1)   GET_FUNCTBL((pICntlr), ICORESRV)->ResetBackLightTimerByTouchEvent( pICntlr, p1)
/**

 */
/**
 Reset turn on back light duration
 */
#define ICORESRV_ResetBacklight(pICntlr)    GET_FUNCTBL((pICntlr), ICORESRV)->ResetBacklight( pICntlr)
/**
  Set LCM Control mode
 */
#define ICORESRV_LCMControl(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->LCMControl( pICntlr, p1)
#ifdef __PROXIMITY_SENSOR_MMI__
/**
ICORESRV_EnableRed
@brief  The interface is use enable Infrared.

@param[in]   pICORESRV                        Pointer to the ICORESRV interface.

@return MAE_RET_SUCCESS                   If successful.
@return MAE_RET_FAILED                      If an error happen.
@return MAE_RET_BAD_PARAM            If an parameter error.
@return MAE_RET_NOT_SUPPORTED    If MAE terminated event notified.
*/
#define ICORESRV_EnableInfrared(pICntlr)    GET_FUNCTBL((pICntlr), ICORESRV)->EnableInfrared( pICntlr)

/**
ICORESRV_DisableRed
@brief  The interface is use enable Infrared.

@param[in]   pICORESRV                        Pointer to the ICORESRV interface.

@return MAE_RET_SUCCESS                   If successful.
@return MAE_RET_FAILED                      If an error happen.
@return MAE_RET_BAD_PARAM            If an parameter error.
@return MAE_RET_NOT_SUPPORTED    If MAE terminated event notified.
*/
#define ICORESRV_DisableInfrared(pICntlr)    GET_FUNCTBL((pICntlr), ICORESRV)->DisableInfrared( pICntlr)
#endif

#ifdef __HALL_SWITCH_MMI__
/**
param @ isEanbleHallSwitch
TRUE: Core Srv will close all ap and launch key guard while slide down the hall switch
FALSE: Core Srv will do nothing
 */
#define ICORESRV_EnableHallSwitchEffect(pICntlr, p1)	GET_FUNCTBL((pICntlr), ICORESRV)->EnableHallSwitchEffect( pICntlr, p1)
/**
param @ bISHallClose
TRUE: Set hall switch close
FALSE: Set hall switch open
 */
#define ICORESRV_SetHallStatus(pICntlr, p1)	GET_FUNCTBL((pICntlr), ICORESRV)->SetHallStatus( pICntlr, p1)
/**
Get hall switch status
 */
#define ICORESRV_GetHallStatus(pICntlr)	GET_FUNCTBL((pICntlr), ICORESRV)->GetHallStatus( pICntlr)
#endif

/**
Get system debug info
 */
#define ICORESRV_GetSysDbgInfo(pICntlr, id, p1)	GET_FUNCTBL((pICntlr), ICORESRV)->GetSysDbgInfo( pICntlr, id, p1)

/**
  Get Flashlight mode
 */
#define ICORESRV_GetFlashlightMode(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->GetFlashlightMode( pICntlr, p1)
/**
  Set Flashlight mode
 */
#define ICORESRV_SetFlashlightMode(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->SetFlashlightMode( pICntlr, p1)
/**
  Get FillLight mode
 */
#define ICORESRV_GetFillLightMode(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->GetFillLightMode( pICntlr, p1)
/**
  Set FillLight mode
 */
#define ICORESRV_SetFillLightMode(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->SetFillLightMode( pICntlr, p1)

/**
  Set FillLight mode
 */
#define ICORESRV_IsFilllightSupport(pICntlr)        GET_FUNCTBL((pICntlr), ICORESRV)->IsFilllightSupport(pICntlr)


/**
  Set Multi-level Backlight ON
 */
#define ICORESRV_RequestMuiltiBacklightON(pICntlr, p1)	GET_FUNCTBL((pICntlr), ICORESRV)->RequestMuiltiBacklightON( pICntlr, p1)


/**
Set KpdLight mode
*/
#define ICORESRV_SetKpdLight(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->SetKpdLight( pICntlr, p1)


//This is a temporary interface for vender app to clear it's local backlight setting
//This interface will be removed before 2011/06/30

#define ICORESRV_ClearLocalBacklightSetting(pICntlr)    GET_FUNCTBL((pICntlr), ICORESRV)->ClearLocalBacklightSetting( pICntlr)

#define ICORESRV_ResetFindHighSpeedTask(pICntlr)    GET_FUNCTBL((pICntlr), ICORESRV)->ResetFindHighSpeedTask( pICntlr)

#define ICORESRV_IsFindHighSpeedTask(pICntlr, p1)    GET_FUNCTBL((pICntlr), ICORESRV)->IsFindHighSpeedTask( pICntlr, p1)

/**
 * Functions
 */

void CORESRV_Init(void);

MAE_Ret CORESRV_New(MAE_ClsId id, void **ppObj);

/*-------------------------------------------------------------------------*/
#endif /* __MMI_CORESRV_H__ */
