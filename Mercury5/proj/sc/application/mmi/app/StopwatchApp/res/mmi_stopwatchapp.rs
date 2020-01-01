ApBegin(RS,CLSID_STOPWATCHAPP)
    WndBegin(STOPWATCH_WND_MAIN)
        WndSetTitleRC(IMG_NULL_ID,TXT_LIL_N_STOPWATCH)
        WndSetTitleVisiableRC(TRUE)
        WdgBegin(CLSID_TEXTWIDGET,CountWdg)
            WdgTextCreateForWndRC({{0,0},{STOPWATCH_COUNT_TEXTWIDGET_WIDTH,STOPWATCH_COUNT_TEXTWIDGET_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetPaddingDataRC( {STOPWATCH_COUNT_TEXTWIDGET_PADDING_LEFT, 0, 0, 0} )
            WdgCommonSetAlignmentRC(ALIGN_H_START | ALIGN_V_MIDDLE)
            WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
        WdgEnd(CLSID_TEXTWIDGET,CountWdg)
        WdgBegin(CLSID_VTMMENU,MenuWdg)
            WdgMenuCreateForWndRC({{0,STOPWATCH_RS_MENU_POS_Y},{MAIN_DEFVIEW_WIDTH,STOPWATCH_RS_MENU_HEIGHT},WDG_MENU_TYPE_NORMAL})
            WdgMenuSetItemFocusImageRC(IMG_NULL_ID)
        WdgEnd(CLSID_VTMMENU,MenuWdg)
    WndEnd(STOPWATCH_WND_MAIN)
ApEnd(RS,CLSID_STOPWATCHAPP)

