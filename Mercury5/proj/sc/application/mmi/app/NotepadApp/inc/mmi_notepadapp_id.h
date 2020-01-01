#ifndef __MMI_NOTEPADAPP_ID_H__
#define __MMI_NOTEPADAPP_ID_H__

typedef enum
{
    NOTEPAD_WND_NOTELIST = WND_ID_APP_BASE,
    NOTEPAD_WND_EDITNOTE,
    NOTEPAD_WND_VIEWNOTE,
    NOTEPAD_WND_LOADOPTIONMENU,
    NOTEPAD_WND_EDITNOTE_LOADOPTIONMENU
} NotepadWndId_e;

typedef enum
{
    NOTEPADAPP_NOTELIST_VIEW_BEGIN = APP_WDG_START,
}NotepadListWdgId_e;

typedef enum
{
    NOTEPADAPP_EDITNOTE_VIEW_BEGIN = APP_WDG_START,
}NotepadEditWdgId_e;

typedef enum
{
    NOTEPADAPP_VIEWNOTE_VIEW_BEGIN = APP_WDG_START,
}NotepadViewWdgId_e;

typedef enum
{
    NOTEPADAPP_LOADOPTIONMENU_VIEW_BEGIN = APP_WDG_START,
}NotepadOptionMenuWdgId_e;

typedef enum
{
    NOTEPADAPP_EDITNOTELOADOPTIONMENU_VIEW_BEGIN = APP_WDG_START,
}NotepadEditOptionMenuWdgId_e;

typedef enum
{
	MNU_NOTEPADAPP_LIST_OPTION = 0,
	MNU_NOTEPADAPP_LO_VIEW,
	MNU_NOTEPADAPP_LO_EDIT,
	MNU_NOTEPADAPP_LO_ADD,
	MNU_NOTEPADAPP_LO_DELETE,
	MNU_NOTEPADAPP_LO_DELETEALL,
}NotepadMenuId_e;

#endif //__MMI_NOTEPADAPP_ID_H__

