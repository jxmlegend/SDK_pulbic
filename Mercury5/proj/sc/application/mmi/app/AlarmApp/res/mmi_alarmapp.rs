ApBegin(RS,CLSID_ALARMAPP)
    WndBegin(ALARM_WND_ALARMLIST)
        WdgBegin(CLSID_VTMMENU,AlarmVtm)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LTL_N_ALARM_CLOCK,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_IMAGETEXT_SPACETEXT,WDG_MENU_CHECK_STYLE_NONE,ALARM_RECORDS_MAX_NUM_RS,0,0})
        WdgEnd(CLSID_VTMMENU,AlarmVtm)
    WndEnd(ALARM_WND_ALARMLIST)
    WndBegin(ALARM_WND_SETALARM)
        WndSetAllSoftkeyRC({SK_SAVE, SK_OK, SK_CANCEL})
        WndSetTitleRC({IMG_NULL_ID,TXT_LTL_N_EDIT_ALARM})
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,TitleDoubleTextWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_TITLE,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,TitleDoubleTextWidget)
        WdgBegin(CLSID_TEXT_TIME_WIDGET,TimeTextTimeWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_TIME})
            WdgDoubleItemTextDateSetDataByIDRC({TXT_LIL_N_TIME,{0,0,0,0,0,0,0,0}})
        WdgEnd(CLSID_TEXT_TIME_WIDGET,TimeTextTimeWidget)
        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,StatusTextPickWidget)
            WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(2, {0,{IMG_NULL_ID,TXT_LIL_N_STATUS}},{ {IMG_NULL_ID,TXT_LIL_N_OFF},{IMG_NULL_ID,TXT_LIL_N_ON} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,StatusTextPickWidget)
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,FrequencyDoubleTextWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_FREQUENCY,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,FrequencyDoubleTextWidget)
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,RingToneDoubleTextWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_RINGTONE,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,RingToneDoubleTextWidget)
    WndEnd(ALARM_WND_SETALARM)
    WndBegin(ALARM_WND_SETTITLE)
        WdgBegin(CLSID_VTMINPUT,AlarmVtmInpput)
            VtmCreateInputRC({IMG_NULL_ID,TXT_LIL_N_TITLE,0,FALSE})
        WdgEnd(CLSID_VTMINPUT,AlarmVtmInpput)
    WndEnd(ALARM_WND_SETTITLE)
    WndBegin(ALARM_WND_SETTITLE_LOADOPTIONMENU)
        WdgBegin(CLSID_VTMOPTIONMENU,AlarmVtmOpt)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
            VtmCreateOptionMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_SAVE},TXT_OIL1_N_SAVE},{{MENUMODEL_ITEM_VISABLE|MENUMODEL_ITEM_HAS_CHILD,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_INPUT_MENU},TXT_OIL1_N_INPUT_MENU}})
        WdgEnd(CLSID_VTMOPTIONMENU,AlarmVtmOpt)
    WndEnd(ALARM_WND_SETTITLE_LOADOPTIONMENU)

    WndBegin(ALARM_WND_SETFREQUENCY)
        WdgBegin(CLSID_VTMPOPUPSELECT,AlarmVtmSelect)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_CHECK,0,0,0})
        WdgEnd(CLSID_VTMPOPUPSELECT,AlarmVtmSelect)
    WndEnd(ALARM_WND_SETFREQUENCY)

    WndBegin(ALARM_WND_VIEWALARM)
        WndSetAllSoftkeyRC({SK_NONE, SK_NONE, SK_CLOSE})
        WdgBegin(CLSID_VTMINPUT,AlarmViewInput)
            VtmCreateInputRC({IMG_NULL_ID,TXT_LTL_N_VIEW_DETAILS,0,TRUE})
            
         	VTMWdgBegin (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmViewInput)
				   WdgInputSetDisableSymbolTableRC(TRUE)
		    VTMWdgEnd (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmViewInput)
            
        WdgEnd(CLSID_VTMINPUT,AlarmViewInput)
    WndEnd(ALARM_WND_VIEWALARM)
    WndBegin(ALARM_WND_FILEMGR)
        WdgBegin(CLSID_VTMPOPUPSELECT,AlarmSelect)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0})
            VtmCreatePopUpSelectDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_SETTING_USE_SYSTEM_FILE},TXT_LIL_N_USE_SYSTEM_FILE},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},MNU_SETTING_SELECT_FILE},TXT_LIL_N_SELECT_FILE}})
        WdgEnd(CLSID_VTMPOPUPSELECT,AlarmSelect)
    WndEnd(ALARM_WND_FILEMGR)
ApEnd(RS,CLSID_ALARMAPP)


