#ifndef __MMI_AZANAPP_RS__
#define __MMI_AZANAPP_RS__


#endif /* __MMI_AZANAPP_RS__ */

ApBegin(RS,CLSID_AZANAPP)   
    WndBegin(AZAN_WND_ALARTIME)
        WdgBegin(CLSID_IMAGEWIDGET,BgImgWdg)
        		WdgImageCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT-MAIN_TITLE_HEIGHT-MAIN_SK_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,AZAN_IMG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,BgImgWdg)
        WdgBegin(CLSID_TEXTWIDGET,TextWdg)
        		WdgTextCreateForWndRC({{0,0},{0,0},TEXT_STYLE_COMMON})
        		WdgCommonSetAlignmentRC((ALIGN_H_CENTER | ALIGN_V_MIDDLE))
        		WdgCommonSetBorderDataRC({0,0,0,0,0})
        WdgEnd(CLSID_TEXTWIDGET,TextWdg)
        WndSetAllSoftkeyRC({SK_OPTION, SK_NONE, SK_BACK})
        WndSetTitleRC({IMG_NULL_ID, TXT_LIL_N_AZAN_ALARM})
    WndEnd(AZAN_WND_ALARTIME)     
    WndBegin(AZAN_WND_OPTION)
        WndSetAllSoftkeyRC({SK_SELECT, SK_OK, SK_BACK})
        WndSetTitleRC({IMG_NULL_ID,TXT_LIL_N_OPTIONS})
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,LocationDoubleTextWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_SET_LOCATION,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,LocationDoubleTextWdg)
        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,StatusTextPickWdg)
            WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(2, {0,{IMG_NULL_ID,TXT_LIL_N_STATUS}},{ {IMG_NULL_ID,TXT_LIL_N_OFF},{IMG_NULL_ID,TXT_LIL_N_ON} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,StatusTextPickWdg)
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,DirectionDoubleTextWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_QIBLAT_DIRECTION,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,DirectionDoubleTextWdg)        
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,PlaySoundDoubleTextWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_AZAZ_SOUND,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,PlaySoundDoubleTextWdg)
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,CalMethodDoubleTextWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_SET_CALUATION_METHOD,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,CalMethodDoubleTextWdg)  
        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,DSTTextPickWdg)
            WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(2, {0,{IMG_NULL_ID,TXT_LIL_N_AZAN_DAYLIGHT_SAVING_TIME}},{ {IMG_NULL_ID,TXT_LIL_N_OFF},{IMG_NULL_ID,TXT_LIL_N_ON} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,DSTTextPickWdg)  
    WndEnd(AZAN_WND_OPTION)   
    WndBegin(AZAN_WND_SET_COUNTRY_LOCATION)
        WdgBegin(CLSID_VTMMENU,SetCountryLocVtm)
        		VtmCreateMenuRC({IMG_NULL_ID, TXT_LIL_N_SET_LOCATION, WDG_MENU_TYPE_NORMAL, WDG_MENU_ITEM_TYPE_TEXT, WDG_MENU_CHECK_STYLE_NONE, 0, 0, 0})
        WdgEnd(CLSID_VTMMENU,SetCountryLocVtm)
    WndEnd(AZAN_WND_SET_COUNTRY_LOCATION) 
    WndBegin(AZAN_WND_EDIT_LOCATION)
        WndSetAllSoftkeyRC({SK_SAVE, SK_OK, SK_CANCEL})
		WndSetTitleRC({IMG_NULL_ID,TXT_LIL_N_EDIT})
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,TitleDoubleTextWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_TITLE,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,TitleDoubleTextWdg)
        WdgBegin(CLSID_TEXT_INPUT_WIDGET,LatitudeTextInputWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_INPUT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_LATITUDE,TXT_NULL_ID})
            ChildBegin(CLSID_INPUTWIDGET,CHILD_SECOND_ORDER,DownLatitudeTextInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_RATE)
                WdgInputSetDecimalPointEnableRC(TRUE)
                WdgInputSetHandWritingEnableRC(FALSE)
            ChildEnd(CLSID_INPUTWIDGET,CHILD_SECOND_ORDER,DownLatitudeTextInput)
        WdgEnd(CLSID_TEXT_INPUT_WIDGET,LatitudeTextInputWdg)       
        WdgBegin(CLSID_TEXT_INPUT_WIDGET,LongitudeTextInputWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_INPUT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_LONGITUDE,IMG_NULL_ID})
            ChildBegin(CLSID_INPUTWIDGET,CHILD_SECOND_ORDER,DownLongitudeTextInput)
                WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_RATE)
                WdgInputSetDecimalPointEnableRC(TRUE)
                WdgInputSetHandWritingEnableRC(FALSE)
            ChildEnd(CLSID_INPUTWIDGET,CHILD_SECOND_ORDER,DownLongitudeTextInput)
        WdgEnd(CLSID_TEXT_INPUT_WIDGET,LongitudeTextInputWdg)
        WdgBegin(CLSID_DOUBLE_TEXT_WIDGET,TimeZoneTextWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_DOUBLE_TEXT})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_GMT,TXT_NULL_ID})
        WdgEnd(CLSID_DOUBLE_TEXT_WIDGET,TimeZoneTextWdg)
    WndEnd(AZAN_WND_EDIT_LOCATION)
    WndBegin(AZAN_WND_EDIT_TITLE_OPTION)
        WdgBegin(CLSID_VTMOPTIONMENU,AzanVtmOpt)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
            VtmCreateOptionMenuDataRC(2,{{{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_SAVE},TXT_OIL1_N_SAVE},{{MENUMODEL_ITEM_VISABLE|MENUMODEL_ITEM_HAS_CHILD,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_INPUT_MENU},TXT_OIL1_N_INPUT_MENU}})
        WdgEnd(CLSID_VTMOPTIONMENU,AzanVtmOpt)
    WndEnd(AZAN_WND_EDIT_TITLE_OPTION)
    
    WndBegin(AZAN_WND_EDIT_LOCATION_TITLE)
        WdgBegin(CLSID_VTMINPUT,AZanVtmInput)
            VtmCreateInputRC({IMG_NULL_ID,TXT_LIL_N_TITLE,40,FALSE})
         		VTMWdgBegin (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmInputWdg)                    
					WdgInputSetLineFeedDisableRC(TRUE)    
				VTMWdgEnd (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmInputWdg)
        WdgEnd(CLSID_VTMINPUT,AZanVtmInput)
        WndSetTitleRC( {IMG_NULL_ID, TXT_LIL_N_TITLE})
        WndSetAllSoftkeyRC({SK_OPTION, SK_OK, SK_BACK})
    WndEnd(AZAN_WND_EDIT_LOCATION_TITLE)
    
    WndBegin(AZAN_WND_TIME_ZONE)
        WdgBegin(CLSID_VTMMENU,SetTimeZoneVtm)
        		VtmCreateMenuRC({IMG_NULL_ID, TXT_LIL_N_GMT, WDG_MENU_TYPE_NORMAL, WDG_MENU_ITEM_TYPE_TEXT, WDG_MENU_CHECK_STYLE_RADIO, 0, 0, 0})
        WdgEnd(CLSID_VTMMENU,SetTimeZoneVtm)
    WndEnd(AZAN_WND_TIME_ZONE)      
    WndBegin(AZAN_WND_SET_STATE_LOCATION)
        WdgBegin(CLSID_VTMMENU,SetStateLocVtm)
        		VtmCreateMenuRC({IMG_NULL_ID, TXT_LIL_N_SET_LOCATION, WDG_MENU_TYPE_NORMAL, WDG_MENU_ITEM_TYPE_TEXT, WDG_MENU_CHECK_STYLE_NONE, 0, 0, 0})
        WdgEnd(CLSID_VTMMENU,SetStateLocVtm)
    WndEnd(AZAN_WND_SET_STATE_LOCATION)    
    WndBegin(AZAN_WND_SET_CITY_LOCATION)
        WdgBegin(CLSID_VTMMENU,SetCityLocVtm)
        		VtmCreateMenuRC({IMG_NULL_ID, TXT_LIL_N_SET_LOCATION, WDG_MENU_TYPE_NORMAL, WDG_MENU_ITEM_TYPE_TEXT, WDG_MENU_CHECK_STYLE_NONE, 0, 0, 0})
        WdgEnd(CLSID_VTMMENU,SetCityLocVtm)
    WndEnd(AZAN_WND_SET_CITY_LOCATION)   
    WndBegin(AZAN_WND_QIBLAT_DIRECTION)
        WdgBegin(CLSID_IMAGEWIDGET,QiblatCompassWdg)
#ifdef __APP_MMI_SMALLROM__
			WdgImageCreateForWndRC({{AZANAPP_COMPASS_POS_X,AZANAPP_COMPASS_POS_Y},{AZANAPP_COMPASS_WIDTH,AZANAPP_COMPASS_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,AZAN_COMPASS_BG}})        
        WdgEnd(CLSID_IMAGEWIDGET,QiblatCompassWdg)
#else        
            WdgImageCreateForWndRC({{MAIN_BG_X,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,AZAN_COMPASS_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,QiblatCompassWdg)
        WdgBegin(CLSID_IMAGEWIDGET,QiblatArrowWdg)              
                WdgImageCreateForWndRC({{MAIN_BG_X,MAIN_BG_Y},{AZANAPP_ARROW_WIDTH,AZANAPP_ARROW_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,AZAN_ARROW}})            
        WdgEnd(CLSID_IMAGEWIDGET,QiblatArrowWdg)                    
#endif        
        WdgBegin(CLSID_IMAGEWIDGET,QiblatMakkahWdg)             
              WdgImageCreateForWndRC({{MAIN_BG_X,MAIN_BG_Y},{AZANAPP_MAKKAH_WIDTH,AZANAPP_MAKKAH_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,AZAN_MAKKAH}})            
        WdgEnd(CLSID_IMAGEWIDGET,QiblatMakkahWdg)
        WndSetTitleRC({IMG_NULL_ID, TXT_LIL_N_AZAN_ALARM})
        WndSetAllSoftkeyRC({SK_NONE, SK_NONE, SK_BACK})
    WndEnd(AZAN_WND_QIBLAT_DIRECTION)
    WndBegin(AZAN_WND_PLAY_SOUND)
        WdgBegin(CLSID_VTMMENU,PlaySoundVtm)
        		VtmCreateMenuRC({IMG_NULL_ID, TXT_LIL_N_AZAZ_SOUND, WDG_MENU_TYPE_NORMAL, WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT, WDG_MENU_CHECK_STYLE_NONE, 0, 0, 0})
        WdgEnd(CLSID_VTMMENU,PlaySoundVtm)
    WndEnd(AZAN_WND_PLAY_SOUND)
    WndBegin(AZAN_WND_SETCALMETHOD)
        WdgBegin(CLSID_VTMMENU,SetCalMethodVtm)
            VtmCreateMenuRC({IMG_NULL_ID, TXT_LIL_N_SET_CALUATION_METHOD, WDG_MENU_TYPE_NORMAL, WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT, WDG_MENU_CHECK_STYLE_NONE, 5, 0, 0})
            VtmCreateMenuDataRC(5, {
            		{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_BACK}, AZAN_MNU_EGYPTION},           {TXT_LIL_N_EGYPTION}},
            		{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_BACK}, AZAN_MNU_UNIVERSITY},         {TXT_LIL_N_UNIVERSITY}},
            		{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_BACK}, AZAN_MNU_SCIENCE},            {TXT_LIL_N_SCIENCE}},
            		{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_BACK}, AZAN_MNU_UMM_AI_QURA},        {TXT_LIL_N_UMMALQURA}},
            		{{MENUMODEL_ITEM_VISABLE, {SK_OK_TEXT, SK_OK, SK_BACK}, AZAN_MNU_ISNA_NORTH_AMERICA}, {TXT_LIL_N_ISNA}} })
        WdgEnd(CLSID_VTMMENU,SetCalMethodVtm)
        WndSetAllSoftkeyRC({SK_OK, SK_NONE, SK_BACK})
    WndEnd(AZAN_WND_SETCALMETHOD)    
ApEnd(RS,CLSID_AZANAPP)

