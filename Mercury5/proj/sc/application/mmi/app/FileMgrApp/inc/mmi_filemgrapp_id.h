#ifndef __MMI_FILEMGRAPP_ID_H__
#define __MMI_FILEMGRAPP_ID_H__

typedef enum FileMgrAppWndId_e_
{
	FILEMGRAPP_WND_BEGIN = WND_ID_APP_BASE,

	FILEMGRAPP_WND_MEDIALIST_STORAGE_AND_CONTENT = FILEMGRAPP_WND_BEGIN,	// File Explorer App

	FILEMGRAPP_WND_MULTISEL_CONTENT,				// Mark Mode

	FILEMGRAPP_WND_PREDEFINEDDATA_LIST,			// Predefined data selection

    FILEMGRAPP_WND_LISTER_VIRTUALROOT,				// Virtual root
    FILEMGRAPP_WND_LISTER_VIRTUALROOT_OPTMENU,		// Virtual root - option

	FILEMGRAPP_WND_LISTER,					// List dir, Single pick, Multi pick

	FILEMGRAPP_WND_OPTION_MENU,					// Option menu

	FILEMGRAPP_WND_RENAME,

	FILEMGRAPP_WND_MEMORY_STATUS,

	FILEMGRAPP_WND_FILEINFO,

    FILEMGRAPP_WND_SORTBY,

	FILEMGRAPP_WND_SELECT_STORAGE,
	FILEMGRAPP_WND_CPMV,

	FILEMGRAPP_WND_MAX,							//Not window id for checking boundary using

}FileMgrAppWndId_e;

typedef enum
{
    eFILEMGRAPP_MEDIALST_CONTENT_LIST = APP_WDG_START,
}FileMgrMedialstWdgId_e;

typedef enum
{
    eFILEMGRAPP_CNTGRID_THUMB_TITLE_BGIMG_1 = APP_WDG_START,
    eFILEMGRAPP_CNTGRID_THUMB_LIST_1,
}FileMgrCntgrid1WdgId_e;

typedef enum
{
    eFILEMGRAPP_CNTGRID_THUMB_TITLE_BGIMG_2 = APP_WDG_START,
    eFILEMGRAPP_CNTGRID_THUMB_LIST_2,
}FileMgrCntgrid2WdgId_e;

typedef enum
{
    eFILEMGRAPP_PICKER_ROOT_LIST_1 = APP_WDG_START,
}FileMgrLister1WdgId_e;

typedef enum
{
    eFILEMGRAPP_PICKER_ROOT_LIST_2 = APP_WDG_START,
}FileMgrLister2WdgId_e;

typedef enum
{
    eFILEMGRAPP_PICKER_CONTENT_LIST = APP_WDG_START,
}FileMgrLister3WdgId_e;

typedef enum
{
    eFILEMGRAPP_EMPTY_FOLDER_TITLE_BGIMG = APP_WDG_START,
    eFILEMGRAPP_EMPTY_FOLDER_TITLE,
    eFILEMGRAPP_EMPTY_FOLDER_TITLE2,
    eFILEMGRAPP_EMPTY_FOLDER_TEXT,
}FileMgrEmptyWdgId_e;

typedef enum
{
    eFILEMGRAPP_MULTISEL_CONTENT_LIST = APP_WDG_START,
}FileMgrMultiselWdgId_e;

typedef enum
{
    eFILEMGRAPP_MULTISEL_THUMB_TITLE_BGIMG = APP_WDG_START,
    eFILEMGRAPP_MULTISEL_THUMB_LIST,
}FileMgrMultiselThumbWdgId_e;

typedef enum
{
    eFILEMGRAPP_SORTBYSEL_LIST = APP_WDG_START,
}FileMgrSortbyselWdgId_e;

typedef enum
{
    eFILEMGRAPP_CPMV_STORAGESEL_LIST = APP_WDG_START,
}FileMgrCpmvStorageselWdgId_e;

typedef enum
{
    eFILEMGRAPP_CPMV_DESTSEL_LIST = APP_WDG_START,
}FileMgrCpmvDestselWdgId_e;

typedef enum
{
    eFILEMGRAPP_CPMV_EMPTY_FOLDER_TEXT = APP_WDG_START,
}FileMgrCpmvEmptyWdgId_e;

typedef enum
{
	MNU_COMMON_INPUT_MENU = 0,
	MNU_COMMON_CHINESE_INPUT_METHOD1,
	MNU_COMMON_LATIN_PREFIX_CAPTIAL,
	MNU_COMMON_LATIN_ALL_CAPITIAL,
	MNU_COMMON_LATIN_ALL_LOWER_CASE,
	MNU_COMMON_CHINESE_INPUT_METHOD2,
	MNU_COMMON_NUMERIC,
	MNU_COMMON_MARK_FOR_CUT,
	MNU_COMMON_TEXT_ENTRY_OPTION,
}FilemgrMenuId_e;

#endif //__MMI_FILEMGRAPP_ID_H__

