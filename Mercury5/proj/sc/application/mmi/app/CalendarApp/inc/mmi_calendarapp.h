/**
* @file mmi_calendarapp.h
*
* State Machine Application - CALENDARAPP
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_CALENDARAPP
*
*
* @version $Id: mmi_calendarapp.h 39275 2009-09-03 06:03:05Z johnson.yeh $
*/
#ifndef __MMI_CALENDARAPP_H__
#define __MMI_CALENDARAPP_H__

/*-------------------------------------------------------------------------*/
#include "mmi_mae_common_def.h"
#include "mmi_base_util.h"
/*-------------------------------------------------------------------------*/
#include "mmi_wdg_event.h"
#include "mmi_srv_header.h"

#include "mmi_common_util.h"
#include "mmi_launcher_calendar.h"
#include "mmi_common_calendar.h"
#include "mmi_todolistapp_util.h"
#include "mmi_mae_taskdb_typedef.h"


/* Minmum limit date of monthly view if it is opened for picking a birthday. */
#define CALENDAR_MIN_DATE_LIMIT_MONTH   (1)
#define CALENDAR_MIN_DATE_LIMIT_DAY     (1)

#define CALENDAR_MONTH_MAX_DAYS 31
//(ISO 8601)
#define CALENDAR_MIDDLE_DAY_OF_WEEK 4 //Thu.

/* Default week start day - Sunday */
#define CALENDAR_DEFAULT_WEEK_START_DAY (CAL_WEEKDAY_SUN)
/* Default start time - 8 AM */
#define CALENDAR_DEFAULT_DAY_START_TIME    (8)
/* Default initial view - Month */
#define CALENDAR_DEFAULT_INITIAL_VIEW (CAL_INITIALVIEW_MONTHLY)


/* Type for calendar view of Calendar application. */
enum
{
    CALENDAR_VIEW_MONTHLY,
    CALENDAR_VIEW_WEEKLY,
    CALENDAR_VIEW_DAILY

};
typedef u8 CalendarViewType_e;

/* Months. */
enum
{
    CALENDAR_MONTH_JAN = 1,
    CALENDAR_MONTH_FEB,
    CALENDAR_MONTH_MAR,
    CALENDAR_MONTH_APR,
    CALENDAR_MONTH_MAY,
    CALENDAR_MONTH_JUN,
    CALENDAR_MONTH_JUL,
    CALENDAR_MONTH_AUG,
    CALENDAR_MONTH_SEP,
    CALENDAR_MONTH_OCT,
    CALENDAR_MONTH_NOV,
    CALENDAR_MONTH_DEC

};
typedef u8 CalendarMonth_e;

/* Type of date range for deleting events. */
enum
{
    //	CAL_DELEVTS_MONTH,
    //	CAL_DELEVTS_WEEK,
    //	CAL_DELEVTS_DAY,
    CALENDAR_DELEVTS_BEFORE,
    CALENDAR_DELEVTS_ALL

};
typedef u8 CalendarDelEvtsType_e;

/* Type of embedded mode for Calendar application. */
enum
{
    CALENDAR_EMBEDDEDMODE_EXPORT_EVENT,
    CALENDAR_EMBEDDEDMODE_NEW_EVENT,
    CALENDAR_EMBEDDEDMODE_EDIT_EVENT,
    CALENDAR_EMBEDDEDMODE_VIEW_EVENT,
    CALENDAR_EMBEDDEDMODE_IMPORT_EVENT

};
typedef u8 CalendarEmbeddedMode_e;

// TODO: To be removed after using AP decoulping
/* This data structure is used for passing the return data of Calendar application. */
typedef struct
{
    MAE_WChar *pReturnStr;
    MAE_Ret eResult;

} CalendarReturnInfo_t;

/* This data structure is used for passing the type of embedded mode and the return value of Calendar application. */
typedef struct
{
    u32 nUID;
    MAE_WChar pszFile[FILEMGR_MAX_FILEPATH_SIZE]; ///< filename in wide character format
    CalendarEmbeddedMode_e eEmbeddedMode;
    CalendarExportFormat_e eExportFormat;

} CalendarEmbedModeInfo_t;
/*-------------------------------------------------------------------------*/

/**
 * External Events
 */
#define CALENDARAPP_EVT_MonthlyView				(CLSID_CALENDARAPP << 16 | 1)
#define CALENDARAPP_EVT_WeeklyView				(CLSID_CALENDARAPP << 16 | 2)
#define CALENDARAPP_EVT_DailyView				(CLSID_CALENDARAPP << 16 | 3)
#define CALENDARAPP_EVT_EventList				(CLSID_CALENDARAPP << 16 | 4)
#define CALENDARAPP_EVT_NewEvent				(CLSID_CALENDARAPP << 16 | 5)
#define CALENDARAPP_EVT_EditEvent				(CLSID_CALENDARAPP << 16 | 6)
#define CALENDARAPP_EVT_TextEntry				(CLSID_CALENDARAPP << 16 | 7)
#define CALENDARAPP_EVT_RadioSelection				(CLSID_CALENDARAPP << 16 | 8)
#define CALENDARAPP_EVT_EditSelection				(CLSID_CALENDARAPP << 16 | 9)
#define CALENDARAPP_EVT_NewSelection				(CLSID_CALENDARAPP << 16 | 10)
#define CALENDARAPP_EVT_GoToDate				(CLSID_CALENDARAPP << 16 | 11)
#define CALENDARAPP_EVT_SendEvent				(CLSID_CALENDARAPP << 16 | 12)
#define CALENDARAPP_EVT_SearchEvent				(CLSID_CALENDARAPP << 16 | 13)
#define CALENDARAPP_EVT_Settings				(CLSID_CALENDARAPP << 16 | 14)
#define CALENDARAPP_EVT_Capacity				(CLSID_CALENDARAPP << 16 | 15)
#define CALENDARAPP_EVT_DeleteSelection				(CLSID_CALENDARAPP << 16 | 16)
#define CALENDARAPP_EVT_DeleteConfirmDialog				(CLSID_CALENDARAPP << 16 | 17)
#define CALENDARAPP_EVT_DeleteTill				(CLSID_CALENDARAPP << 16 | 18)
#define CALENDARAPP_EVT_DeleteEventsConfirmDialog				(CLSID_CALENDARAPP << 16 | 19)
#define CALENDARAPP_EVT_DeleteNext				(CLSID_CALENDARAPP << 16 | 20)
#define CALENDARAPP_EVT_DeleteDone				(CLSID_CALENDARAPP << 16 | 21)
#define CALENDARAPP_EVT_ImportvCalendar				(CLSID_CALENDARAPP << 16 | 22)
#define CALENDARAPP_EVT_OptionMenuSelect				(CLSID_CALENDARAPP << 16 | 23)
#define CALENDARAPP_EVT_OptionMenuSKCancel				(CLSID_CALENDARAPP << 16 | 24)



/**
 * Functions
 */

MAE_Ret CALENDARAPP_New(MAE_ClsId id, void **ppObj);

/*-------------------------------------------------------------------------*/
void CalendarPreNew(void);
void CalendarAppFreeStartData(IBase *pIssuer, u32 nParam);
/*-------------------------------------------------------------------------*/
#endif /* __MMI_CALENDARAPP_H__ */
