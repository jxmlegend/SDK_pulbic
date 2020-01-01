
ApBegin(RS,CLSID_GOBANGAPP)
    WndBegin(GOBANG_WND_MAIN)
        WdgBegin(CLSID_IMAGEWIDGET,BgImageWdg)
            WdgImageCreateForWndRC({{0,0},{MAIN_LCD_WIDTH, MAIN_LCD_HEIGHT},IMAGE_STYLE_COMMON,{TRUE, GOBANG_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,BgImageWdg)

        WdgBegin(CLSID_TEXTWIDGET, InfoTxtWdg)
            WdgTextCreateForWndRC({{GOBANG_INFO_TEXT_POS_X, GOBANG_INFO_TEXT_POS_Y},{GOBANG_INFO_TEXT_WIDTH,GOBANG_INFO_TEXT_HEIGHT},TEXT_STYLE_COMMON})
            WdgCommonSetTextColorRC(RGBCOLOR_WHITE)
            WdgCommonSetFontCategoryRC(GOBANG_INFO_TEXT_FONT_CAT)
            WdgCommonSetAlignmentRC(GOBANG_INFO_TEXT_ALIGNMENT)
            WdgTextSetDataByIDRC(TXT_CCL_N_GOBANGAPP_ROBOT_FIRST_COMMENT)
        WdgEnd(CLSID_TEXTWIDGET, InfoTxtWdg)

        WdgBegin(CLSID_BUTTONWIDGET,RegBtnWdg)
            WdgButtonCreateForWndRC({{GOBANG_REGRET_POS_X,GOBANG_REGRET_POS_Y},{GOBANG_REGRET_WIDTH,GOBANG_REGRET_HEIGHT},GOBANGAPP_REGRET_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,GOBANG_REGRESS_UNPERSS,GOBANG_REGRESS_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,RegBtnWdg)
        WdgBegin(CLSID_BUTTONWIDGET,RegBtnWdgEng)
            WdgButtonCreateForWndRC({{GOBANG_REGRET_POS_X,GOBANG_REGRET_POS_Y},{GOBANG_REGRET_WIDTH,GOBANG_REGRET_HEIGHT},GOBANGAPP_REGRET_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,EN_GOBANG_REGRESS_UNPERSS,EN_GOBANG_REGRESS_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,RegBtnWdgEng)
        
        WdgBegin(CLSID_BUTTONWIDGET,OppoFirstBtnWdg)
            WdgButtonCreateForWndRC({{GOBANG_OPPONENT_FIRST_POS_X,GOBANG_OPPONENT_FIRST_POS_Y},{GOBANG_OPPONENT_FIRST_WIDTH,GOBANG_OPPONENT_FIRST_HEIGHT},GOBANGAPP_OPPO_FIRST_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,GOBANG_OPPO_FIRST_UNPRESS,GOBANG_OPPO_FIRST_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,OppoFirstBtnWdg)
        WdgBegin(CLSID_BUTTONWIDGET,OppoFirstBtnWdgEng)
            WdgButtonCreateForWndRC({{GOBANG_OPPONENT_FIRST_POS_X,GOBANG_OPPONENT_FIRST_POS_Y},{GOBANG_OPPONENT_FIRST_WIDTH,GOBANG_OPPONENT_FIRST_HEIGHT},GOBANGAPP_OPPO_FIRST_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,EN_GOBANG_OPPO_FIRST_UNPRESS,EN_GOBANG_OPPO_FIRST_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,OppoFirstBtnWdgEng)

        WdgBegin(CLSID_BUTTONWIDGET,QuitBtnWdg)
            WdgButtonCreateForWndRC({{GOBANG_QUIT_POS_X,GOBANG_QUIT_POS_Y},{GOBANG_QUIT_WIDTH,GOBANG_QUIT_HEIGHT},GOBANGAPP_QUIT_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,GOBANG_QUIT_UNPRESS,GOBANG_QUIT_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,QuitBtnWdg)
        WdgBegin(CLSID_BUTTONWIDGET,QuitBtnWdgEng)
            WdgButtonCreateForWndRC({{GOBANG_QUIT_POS_X,GOBANG_QUIT_POS_Y},{GOBANG_QUIT_WIDTH,GOBANG_QUIT_HEIGHT},GOBANGAPP_QUIT_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,EN_GOBANG_QUIT_UNPRESS,EN_GOBANG_QUIT_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,QuitBtnWdgEng)

        WdgBegin(CLSID_BUTTONWIDGET,ResetBtnWdg)
            WdgButtonCreateForWndRC({{GOBANG_RESET_POS_X,GOBANG_RESET_POS_Y},{GOBANG_RESET_WIDTH,GOBANG_RESET_HEIGHT},GOBANGAPP_RESET_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,GOBANG_RESET_UNPRESS,GOBANG_RESET_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,ResetBtnWdg)
        WdgBegin(CLSID_BUTTONWIDGET,ResetBtnWdgEng)
            WdgButtonCreateForWndRC({{GOBANG_RESET_POS_X,GOBANG_RESET_POS_Y},{GOBANG_RESET_WIDTH,GOBANG_RESET_HEIGHT},GOBANGAPP_RESET_BTN})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,EN_GOBANG_RESET_UNPRESS,EN_GOBANG_RESET_PRESS})
        WdgEnd(CLSID_BUTTONWIDGET,ResetBtnWdgEng)

        WdgBegin(CLSID_GRID_MENUWIDGET,GridMenuWdg)
            WdgMenuCreateForWndRC({{GOBANG_GRID_MENU_POS_X,GOBANG_GRID_MENU_POS_Y},{GOBANG_GRID_MENU_WIDTH,GOBANG_GRID_MENU_HEIGHT},WDG_MENU_TYPE_GRID})
            WdgCommonSetPaddingDataRC({GOBANG_GRID_MENU_PADDING,GOBANG_GRID_MENU_PADDING,GOBANG_GRID_MENU_PADDING,GOBANG_GRID_MENU_PADDING})
            WdgMenuSetToGridStyleRC({GOBANG_GRID_MENU_ITEM_ROW_NUM, GOBANG_GRID_MENU_ITEM_COL_NUM, GRID_FIX_LAYOUT_IN_SINGLE_PAGE})
            WdgMenuSetRowGapRC(GOBANG_GRID_MENU_ITEM_ROW_GAP)
            WdgMenuSetColGapRC(GOBANG_GRID_MENU_ITEM_COL_GAP)
            WdgMenuSetItemWidthRC(GOBANG_GRID_MENU_ITEM_WIDTH)
            WdgMenuSetItemHeightRC(GOBANG_GRID_MENU_ITEM_HEIGHT)
        WdgEnd(CLSID_GRID_MENUWIDGET,GridMenuWdg)

		RSCustomize(u32, nGridMenuFocusBGImgID, GOBANG_SELECT_RECT)
		RSCustomize(u32, nGoBangBlackPiece, GOBANG_BLACKPIECE)
		RSCustomize(u32, nGoBangWhitePiece, GOBANG_WHITEPIECE)
		RSCustomize(u32, nGoBangBlackWin, GOBANG_BLACKPIECE_WIN)
		RSCustomize(u32, nGoBangWhiteWin, GOBANG_WHITEPIECE_WIN)
		RSCustomize(u32, nGoBangBlackFocus, GOBANG_BLACKPIECE_FOCUS)
		RSCustomize(u32, nGoBangTXTPlayerWin, TXT_LIL_N_GOBANGAPP_PLAER_WIN)
		RSCustomize(u32, nGoBangTXTRobotWin, TXT_LIL_N_GOBANGAPP_ROBOT_WIN)
		RSCustomize(u32, nGoBangTXTRobotFirst, TXT_CCL_N_GOBANGAPP_ROBOT_FIRST_COMMENT)

    WndEnd(GOBANG_WND_MAIN)

ApEnd(RS,CLSID_GOBANGAPP)


