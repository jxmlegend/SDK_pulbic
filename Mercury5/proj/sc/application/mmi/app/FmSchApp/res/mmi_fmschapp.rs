ApBegin(WWQvgaP,CLSID_FMSCHAPP)
    WndBegin(FMSCH_WND_SCH_PLAY_LIST)
        WdgBegin(CLSID_VTMMENU,SchPlayListVtm)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_FM_SCHEDULE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_IMAGETEXT_SPACETEXT,WDG_MENU_CHECK_STYLE_NONE,FMSCH_RECORDS_MAX_NUM_RS,0,0})
        WdgEnd(CLSID_VTMMENU,SchPlayListVtm)
    WndEnd(FMSCH_WND_SCH_PLAY_LIST)
    
    WndBegin(FMSCH_WND_SET_PLAY_SCHEDULE)
        WndSetAllSoftkeyRC({SK_SAVE, SK_OK, SK_CANCEL})
        WndSetTitleRC({IMG_NULL_ID,TXT_NULL_ID})
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,ChannelFrequencyDoubleTextWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_FMR_CHANNEL_FREQUENCY,TXT_NULL_ID})         
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,ChannelFrequencyDoubleTextWidget)
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
    WndEnd(FMSCH_WND_SET_PLAY_SCHEDULE)
    
	WndBegin(FMSCH_WND_SELECT_MENU)
		WdgBegin(CLSID_VTMMENU,tSelectMenu)
			VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_FMR_CHANNEL_FREQUENCY,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0})
			VtmCreateMenuDataRC(2, { {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},FMSCHAPP_SELECT_MY_CHANNEL  },TXT_OIL1_N_SELECT_MY_CHANNEL},
                                     {{MENUMODEL_ITEM_VISABLE,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},FMSCHAPP_MANUAL_INPUT },TXT_OIL1_N_FMR_MANUAL_INPUT} })
		WdgEnd(CLSID_VTMMENU,tSelectMenu)
	WndEnd(FMSCH_WND_SELECT_MENU)
	
    WndBegin(FMSCH_WND_SELECT_MY_CHANNEL)
        WndSetTitleRC(IMG_NULL_ID,TXT_OIL1_N_FMR_MY_CHANNEL)
        WdgBegin(CLSID_NUMERIC_MENUWIDGET,MyChannelMenuWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_SINGLE_LINE_MENU_ICON_HEIGHT*FMR_RS_HEIGHT_MUL},WDG_MENU_TYPE_NUMERIC})
        WdgEnd(CLSID_NUMERIC_MENUWIDGET,MyChannelMenuWdg)
        WdgBegin(CLSID_TEXTWIDGET,FreqThmTextWdg)
            WdgTextCreateForWndRC({{0,MAIN_TITLE_HEIGHT+MAIN_SINGLE_LINE_MENU_ICON_HEIGHT*FMR_RS_HEIGHT_MUL},{MAIN_LCD_WIDTH,MAIN_SINGLE_LINE_MENU_ICON_HEIGHT},TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_LIL_N_FREQUENCY)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER | ALIGN_V_MIDDLE)
        WdgEnd(CLSID_TEXTWIDGET,FreqThmTextWdg)
    WndEnd(FMSCH_WND_SELECT_MY_CHANNEL)
    
    WndBegin(FMSCH_WND_MANUAL_INPUT)
        WndSetAllSoftkeyRC({SK_NONE, SK_NONE, SK_CANCEL})
        WdgBegin(CLSID_VTMPOPUPPROMPT, VtmManualInput)
            VtmCreatePopUpPromptRC({IMG_NULL_ID, IMG_NULL_ID, TXT_LIL_N_FMR_CHANNEL_FREQUENCY, TXT_PML_N_FM_FREQUENCY_RANGE})
            WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_RATE)
            WdgInputSetDecimalPointEnableRC(TRUE)
            WdgInputSetMaxlenAfterExponentRC(FMR_FREQ_MAXLEN_AFTER_EXPONENT)
            WdgInputSetMaxByteLengthRC(FMR_FREQ_MAX_BYTE_SIZE_RS)
            WdgInputSetDisableSwitchInputModeRC(TRUE)
            WdgCommonSetFontCategoryRC(FONT_CAT_SUPERSMALL)
        WdgEnd(CLSID_VTMPOPUPPROMPT, VtmManualInput)
    WndEnd(FMSCH_WND_MANUAL_INPUT)
    
    WndBegin(FMSCH_WND_SET_FREQUENCY)
        WdgBegin(CLSID_VTMPOPUPSELECT,FrequencyVtmSelect)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_CHECK,0,0,0})
        WdgEnd(CLSID_VTMPOPUPSELECT,FrequencyVtmSelect)
    WndEnd(FMSCH_WND_SET_FREQUENCY)
    
    WndBegin(FMSCH_WND_SET_RECFILE)
        WdgBegin(CLSID_VTMPOPUPSELECT,RecFileVtmSelect)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0})
            VtmCreatePopUpSelectDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},0},TXT_LIL_N_FMSCHAPP_NEW_FILE},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},1},TXT_LIL_N_FMSCHAPP_APPEND_FILE}})
        WdgEnd(CLSID_VTMPOPUPSELECT,RecFileVtmSelect)
    WndEnd(FMSCH_WND_SET_RECFILE)
    
    WndBegin(FMSCH_WND_SET_RECFILETYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,RecFileTypeVtmSelect)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,4,0,0})
            VtmCreatePopUpSelectDataRC(4,{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},0},TXT_LIL_N_FMSCHAPP_AMR_LOW_QUALITY},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},1},TXT_LIL_N_FMSCHAPP_AWB_NORMAL_QUALITY},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},2},TXT_LIL_N_FMSCHAPP_MP3_HIGH_QUALITY},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},3},TXT_LIL_N_FMSCHAPP_WAV_HIGHEST_QUALITY}})
        WdgEnd(CLSID_VTMPOPUPSELECT,RecFileTypeVtmSelect)
    WndEnd(FMSCH_WND_SET_RECFILETYPE)
    
    WndBegin(FMSCH_WND_SET_STORAGETYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,StorageTypeVtmSelect)
            VtmCreatePopUpSelectRC({NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0})
            VtmCreatePopUpSelectDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},0},TXT_LIL_N_FMSCHAPP_PHONE},{{MENUMODEL_ITEM_VISABLE,{SK_OK_TEXT,SK_OK,SK_CANCEL},1},TXT_LIL_N_FMSCHAPP_CARD}})
        WdgEnd(CLSID_VTMPOPUPSELECT,StorageTypeVtmSelect)
    WndEnd(FMSCH_WND_SET_STORAGETYPE)
    
    WndBegin(FMSCH_WND_SCH_REC_LIST)
        WdgBegin(CLSID_VTMMENU,SchRecListVtm)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_FM_RECORD_SCHEDULE,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_IMAGETEXT_SPACETEXT,WDG_MENU_CHECK_STYLE_NONE,FMRECSCH_RECORDS_MAX_NUM_RS,0,0})
        WdgEnd(CLSID_VTMMENU,SchRecListVtm)
    WndEnd(FMSCH_WND_SCH_REC_LIST)
    
    WndBegin(FMSCH_WND_SET_REC_SCHEDULE)
        WndSetAllSoftkeyRC({SK_SAVE, SK_OK, SK_CANCEL})
        WndSetTitleRC({IMG_NULL_ID,TXT_NULL_ID})
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,RecChannelFrequencyDoubleTextWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_FMR_CHANNEL_FREQUENCY,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,RecChannelFrequencyDoubleTextWidget)
        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,RecStatusTextPickWidget)
            WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(2, {0,{IMG_NULL_ID,TXT_LIL_N_STATUS}},{ {IMG_NULL_ID,TXT_LIL_N_OFF},{IMG_NULL_ID,TXT_LIL_N_ON} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,RecStatusTextPickWidget)
        WdgBegin(CLSID_TEXT_DATE_WIDGET,RecStarDateTextDateWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_DATE})
            WdgDoubleItemTextDateSetDataByIDRC({TXT_LIL_N_STARTDATE,{0,0,0,0,0,0,0,0}})
        WdgEnd(CLSID_TEXT_DATE_WIDGET,RecStarDateTextDateWidget)
        WdgBegin(CLSID_TEXT_TIME_WIDGET,RecStartTimeTextTimeWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_TIME})
            WdgDoubleItemTextDateSetDataByIDRC({TXT_LIL_N_STARTTIME,{0,0,0,0,0,0,0,0}})
        WdgEnd(CLSID_TEXT_TIME_WIDGET,RecStartTimeTextTimeWidget)
        WdgBegin(CLSID_TEXT_TIME_WIDGET,RecEndTimeTextTimeWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_TIME})
            WdgDoubleItemTextDateSetDataByIDRC({TXT_LIL_N_ENDTIME,{0,0,0,0,0,0,0,0}})
        WdgEnd(CLSID_TEXT_TIME_WIDGET,RecEndTimeTextTimeWidget)
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,RecFrequencyDoubleTextWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_FREQUENCY,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,RecFrequencyDoubleTextWidget)
        
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,RecFileDoubleTextWidget)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_FMSCHAPP_RECORD_FILE,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,RecFileDoubleTextWidget)
        
        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,RecFileTypePickTextWidget)
	          WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(4, {0,{IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_RECORD_FORMAT}},{ {IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_AMR_LOW_QUALITY}, {IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_AWB_NORMAL_QUALITY}, {IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_MP3_HIGH_QUALITY}, {IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_WAV_HIGHEST_QUALITY} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,RecFileTypePickTextWidget)
        
        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,StorageTypePickTextWidget)
            WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(3, {0,{IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_STORAGE}},{ {IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_PHONE}, {IMG_NULL_ID,TXT_LIL_N_FMSCHAPP_CARD},{IMG_NULL_ID,TXT_LIL_N_CARD2} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,StorageTypePickTextWidget)
        
        
        
    WndEnd(FMSCH_WND_SET_REC_SCHEDULE)
ApEnd(WWQvgaP,CLSID_FMSCHAPP)
