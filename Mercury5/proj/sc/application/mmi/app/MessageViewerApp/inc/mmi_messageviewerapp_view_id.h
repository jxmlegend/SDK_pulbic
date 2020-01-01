/**
 * @file mmi_messageviewerapp_view_id.h
 *
 * @version $Id$
 */
#ifndef __MMI_MESSAGEVIEWERAPP_VIEW_ID_H__
#define __MMI_MESSAGEVIEWERAPP_VIEW_ID_H__

#include "mmi_common_thmid.h"
#include "mmi_view_id_range.h"

enum
{
/* View ID start */

    SMS_VIEWER_VIEW = MMI_VIEW_ID_AP_BEGIN,
    CB_VIEWER_VIEW,
    MMS_VIEWER_VIEW, //for MMS
    MMS_PREVIEWER_VIEW,

    VIEWER_OPTION_VIEW,
    VIEWER_DETAIL_VIEW,
    SVA_OPTION_MENU_L1_MODEL,
    SVA_OPTION_MENU_MOVE_TO_L2_MODEL,
    SVA_OPTION_MENU_USE_NUMBER_L2_MODEL,
    SVA_OPTION_MENU_SAVE_URL_L2_MODEL,
    SVA_OPTION_MENU_REPLY_L2_MODEL,
    SVA_OPTION_MENU_COPY_TO_SIM_L2_MODEL,    
    SVA_OPTION_MENU_MMS_OBJECT_LIST_L1_MODEL,
    MMS_SLIDER_SELECTION_VIEW,
    SVA_PLAY_AUDIO_VIEW,
    SVA_CALL_OPTION_MENU_VIEW,
    MMS_VIEW_RECIPIENTS_VIEW,

/* View ID end */
};

enum
{
/* Widget ID start */
    //for SMS
    SMS_VIEWER_MAINCONTAINER = 1,
    SMS_VIEWER_TITLE_CONTAINER,
    SMS_VIEWER_TITLE_TXTWDG,
    SMS_VIEWER_MESSAGE_SWITCH_CONTNR,
    SMS_VIEWER_MESSAGE_SWITCH_LEFT_ARROW_BTNWDG,
    SMS_VIEWER_MESSAGE_SWITCH_INFO_TXTWDG,
    SMS_VIEWER_MESSAGE_SWITCH_RIGHT_ARROW_BTNWDG,
    SMS_VIEWER_AREA_SCROLLBARWDG,
    SMS_VIEWER_INPUTWIDGET,
#ifdef __TOUCH_SCREEN_MMI__
	SMS_VIEWER_AREA_VPTWDG,
#endif

    //for CB
    CB_VIEWER_MAINCONTAINER,
    CB_VIEWER_TITLE_CONTAINER,
    CB_VIEWER_TITLE_TXTWDG,
    CB_VIEWER_MESSAGE_SWITCH_CONTNR,
    CB_VIEWER_MESSAGE_SWITCH_LEFT_ARROW_BTNWDG,
    CB_VIEWER_MESSAGE_SWITCH_INFO_TXTWDG,
    CB_VIEWER_MESSAGE_SWITCH_RIGHT_ARROW_BTNWDG,
    CB_VIEWER_AREA_SCROLLBARWDG,        
    CB_VIEWER_INPUTWIDGET,

    //for MMS
    MMS_VIEWER_MAINCONTAINER,
    MMS_VIEWER_TITLE_CONTAINER, // abs container
    MMS_VIEWER_TITLE_TXTWDG,
    MMS_VIEWER_TITLEWIDGET,
    MMS_VIEWER_SUB_TITLE_TXTWDG,
    MMS_VIEWER_SENDER_WDG,
    MMS_VIEWER_SENDER_LABEL_TXTWDG,
    MMS_VIEWER_SENDER_NAME_TXTWDG,
    MMS_VIEWER_ATTACH_ICON_IMGWDG,
    MMS_VIEWER_AUDIO_ICON_IMGWDG,
    MMS_VIEWER_VIDEO_ICON_IMGWDG,
    MMS_VIEWER_SLIDE_IMAGE_CONTNR,
    MMS_VIEWER_SLIDE_IMAGE_IMGWDG,
    MMS_VIEWER_SLIDE_SWITCH_CONTNR,
    MMS_VIEWER_SLIDE_SWITCH_LEFT_ARROW_BTNWDG,
    MMS_VIEWER_SLIDE_SWITCH_RIGHT_ARROW_BTNWDG,
    MMS_VIEWER_SLIDE_SWITCH_INFO_TXTWDG,
    MMS_VIEWER_SLIDE_TEXT_TXTWDG,
    MMS_VIEWER_MESSAGE_SWITCH_CONTNR,
    MMS_VIEWER_MESSAGE_SWITCH_LEFT_ARROW_BTNWDG,
    MMS_VIEWER_MESSAGE_SWITCH_RIGHT_ARROW_BTNWDG,
    MMS_VIEWER_MESSAGE_SWITCH_INFO_TXTWDG,
    MMS_VIEWER_AREA_PROPCONTAINER,
    MMS_VIEWER_AREA_VPTWDG, 
    MMS_VIEWER_AREA_SCROLLBARWDG,

    MMS_VIEW_RECIPIENTS_IPTWDG,
    MMS_VIEW_RECIPIENTS_TITWDG,

    MMS_VIEWER_PROPCONTAINER_ICON_LIST,

    MMS_SLIDER_SELECTION_TITLEWIDGET,
    MMS_SLIDER_SELECTION_MENU,

    SVA_PLAY_AUDIO_TITLEWIDGET,
    SVA_CALL_OPTIONMENU_WIDGET,

    SVA_DETAIL_SCROLLBAR_WDG,
    SVA_DETAIL_VIEWPORT_WDG,
    SVA_DETAIL_CONTAINER,


/* Widget ID end */
};

#endif /* __MMI_MESSAGEVIEWERAPP_VIEW_ID_H__ */
