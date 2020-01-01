ApBegin(RS,CLSID_FRUITGAMBLEGAME)
    WndBegin(FRUITGAMBLEGAME_WND_SPLASH)
				WdgBegin(CLSID_IMAGEWIDGET,pSplashImageWdg)
            WdgImageCreateForWndRC({{0,0},
                                    {FRUITGAMEAPP_MAINVIEW_WIDTH,MAIN_LCD_HEIGHT},
                                    IMAGE_STYLE_COMMON,
                                    {TRUE,GAME_FRUITGAMBLE_IMG_SPLASH}})
        WdgEnd(CLSID_IMAGEWIDGET,pSplashImageWdg)
        WdgBegin(CLSID_TEXTWIDGET,pSplashTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_SPLASH_TITLE_X,FRUITGAMEAPP_SPLASH_TITLE_Y},
                                   {FRUITGAMEAPP_SPLASH_TITLE_WIDTH,FRUITGAMEAPP_SPLASH_TITLE_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgTextSetDataByIDRC(TXT_FHL_N_FRUITGAMBLE_TITLE)
            WdgCommonSetAlignmentRC((ALIGN_H_CENTER|ALIGN_V_MIDDLE))
						WdgCommonSetFontCategoryRC(FONT_CAT_SUPERSMALL)
						WdgCommonSetTextColorRC(COLOR_WHITE)
        WdgEnd(CLSID_TEXTWIDGET,pSplashTextWdg)
		WndEnd(FRUITGAMBLEGAME_WND_SPLASH)
		
		
		WndBegin(FRUITGAMBLEGAME_WND_PLAY)
				WndSetAllSoftkeyRC({SK_NONE, SK_GAME_PLAY, SK_EXIT})
				WdgBegin(CLSID_IMAGEWIDGET,pTabletImageWdg)
            WdgImageCreateForWndRC({{0,0},
                                    {FRUITGAMEAPP_MAINVIEW_WIDTH,FRUITGAMEAPP_MAINVIEW_HEIGHT},
                                    IMAGE_STYLE_COMMON,
                                    {TRUE,GAME_FRUITGAMBLE_IMG_TABLET}})
        WdgEnd(CLSID_IMAGEWIDGET,pTabletImageWdg)
        WdgBegin(CLSID_IMAGEWIDGET,pSelectFrameImageWdg)
            WdgImageCreateForWndRC({{FRUITGAMEAPP_SELECT_FRAME_X,FRUITGAMEAPP_SELECT_FRAME_Y},
                                    {FRUITGAMEAPP_ITEM_WIDTH,FRUITGAMEAPP_ITEM_HEIGHT},
                                    IMAGE_STYLE_COMMON,
                                    {TRUE,GAME_FRUITGAMBLE_IMG_SELECT_FRAME}})
        WdgEnd(CLSID_IMAGEWIDGET,pSelectFrameImageWdg)
        WdgBegin(CLSID_IMAGEWIDGET,pFocusImageWdg)
            WdgImageCreateForWndRC({{FRUITGAMEAPP_INPUT_FRAME_APPLE_X,FRUITGAMEAPP_INPUT_FRAME_Y},
                                    {FRUITGAMEAPP_INPUT_FRAME_WIDTH,FRUITGAMEAPP_INPUT_FRAME_HEIGHT},
                                    IMAGE_STYLE_COMMON,
                                    {TRUE,GAME_FRUITGAMBLE_IMG_FOCUS}})
        WdgEnd(CLSID_IMAGEWIDGET,pFocusImageWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayYourMoneyTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_YOUR_MONEY_X,FRUITGAMEAPP_PLAY_YOUR_MONEY_Y},
                                   {FRUITGAMEAPP_PLAY_YOUR_MONEY_WIDTH,FRUITGAMEAPP_PLAY_YOUR_MONEY_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_WHITE)
        WdgEnd(CLSID_TEXTWIDGET,pPlayYourMoneyTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputBarTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BAR_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputBarTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputSevenTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_SEVEN_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputSevenTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputStarTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_STAR_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputStarTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputSuikaTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_SUIKA_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputSuikaTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputMelonTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_MELON_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputMelonTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputDingdongTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_DINGDONG_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputDingdongTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputOrangeTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_ORANGE_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputOrangeTextWdg)
        WdgBegin(CLSID_TEXTWIDGET,pPlayInputAppleTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_APPLE_X,FRUITGAMEAPP_PLAY_INPUT_Y},
                                   {FRUITGAMEAPP_PLAY_INPUT_WIDTH,FRUITGAMEAPP_PLAY_INPUT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_RED_5)
        WdgEnd(CLSID_TEXTWIDGET,pPlayInputAppleTextWdg)
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputBarButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_BAR_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputBarButtonWdg)  	
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputSevenButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_SEVEN_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputSevenButtonWdg)  	 	
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputStarButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_STAR_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputStarButtonWdg) 
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputSuikaButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_SUIKA_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputSuikaButtonWdg) 	
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputMelonButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_MELON_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputMelonButtonWdg)  	
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputDingdongButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_DINGDONG_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputDingdongButtonWdg)  	
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputOrangeButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_ORANGE_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputOrangeButtonWdg)  
        WdgBegin(CLSID_BUTTONWIDGET,pPlayInputAppleButtonWdg)
            WdgButtonCreateForWndRC({{FRUITGAMEAPP_PLAY_INPUT_BUTTON_APPLE_X, FRUITGAMEAPP_PLAY_INPUT_BUTTON_Y},{FRUITGAMEAPP_PLAY_INPUT_BUTTON_WIDTH, FRUITGAMEAPP_PLAY_INPUT_BUTTON_HEIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,IMG_NULL_ID,GAME_FRUITGAMBLE_IMG_BUTTON_PERSSED})
        WdgEnd(CLSID_BUTTONWIDGET,pPlayInputAppleButtonWdg)  
		WndEnd(FRUITGAMBLEGAME_WND_PLAY)
		
		WndBegin(FRUITGAMBLEGAME_WND_RESULT)
				WndSetAllSoftkeyRC({SK_NONE, SK_OK, SK_NONE})
				WdgBegin(CLSID_FADEOUTWIDGET,pResultFadeoutWdg)
            WdgFadeoutCreateForWndRC({{0,0},{FRUITGAMEAPP_MAINVIEW_WIDTH,FRUITGAMEAPP_MAINVIEW_HEIGHT},0})
        WdgEnd(CLSID_FADEOUTWIDGET,pResultFadeoutWdg)
        WdgBegin(CLSID_IMAGEWIDGET,pResultImageWdg)
            WdgImageCreateForWndRC({{FRUITGAMEAPP_RESULT_X,FRUITGAMEAPP_RESULT_Y},
                                    {FRUITGAMEAPP_RESULT_WIDTH,FRUITGAMEAPP_RESULT_HEIGHT},
                                    IMAGE_STYLE_COMMON,
                                    {TRUE,GAME_FRUITGAMBLE_IMG_WIN}})
        WdgEnd(CLSID_IMAGEWIDGET,pResultImageWdg)
        WdgBegin(CLSID_TEXTWIDGET,pResultTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_RESULT_TEXT_X,FRUITGAMEAPP_RESULT_TEXT_Y},
                                   {FRUITGAMEAPP_RESULT_TEXT_WIDTH,FRUITGAMEAPP_RESULT_TEXT_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_WHITE)
        WdgEnd(CLSID_TEXTWIDGET,pResultTextWdg)
		WndEnd(FRUITGAMBLEGAME_WND_RESULT)
		
		WndBegin(FRUITGAMBLEGAME_WND_GUESS)
				WndSetAllSoftkeyRC({SK_BIG, SK_NONE, SK_SMALL})
				WdgBegin(CLSID_FADEOUTWIDGET,pGuessFadeoutWdg)
            WdgFadeoutCreateForWndRC({{0,0},{FRUITGAMEAPP_MAINVIEW_WIDTH,FRUITGAMEAPP_MAINVIEW_HEIGHT},0})
        WdgEnd(CLSID_FADEOUTWIDGET,pGuessFadeoutWdg)
        WdgBegin(CLSID_IMAGEWIDGET,pGuessBGImageWdg)
            WdgImageCreateForWndRC({{FRUITGAMEAPP_GUESS_BG_X,FRUITGAMEAPP_GUESS_BG_Y},
                                    {FRUITGAMEAPP_GUESS_BG_WIDTH,FRUITGAMEAPP_GUESS_BG_HEIGHT},
                                    IMAGE_STYLE_COMMON,
                                    {TRUE,GAME_FRUITGAMBLE_IMG_GUESS_BG}})
        WdgEnd(CLSID_IMAGEWIDGET,pGuessBGImageWdg)
        WdgBegin(CLSID_IMAGEWIDGET,pGuessFrameImageWdg)
            WdgImageCreateForWndRC({{FRUITGAMEAPP_GUESS_BIG_X,FRUITGAMEAPP_GUESS_BIG_Y},
                                    {FRUITGAMEAPP_GUESS_FRAME_WIDTH,FRUITGAMEAPP_GUESS_FRAME_HEIGHT},
                                    IMAGE_STYLE_COMMON,
                                    {TRUE,GAME_FRUITGAMBLE_IMG_GUESS_FRAME}})
        WdgEnd(CLSID_IMAGEWIDGET,pGuessFrameImageWdg)
        WdgBegin(CLSID_TEXTWIDGET,pGuessTextWdg)
            WdgTextCreateForWndRC({{FRUITGAMEAPP_GUESS_WIN_MONEY_X,FRUITGAMEAPP_GUESS_WIN_MONEY_Y},
                                   {FRUITGAMEAPP_GUESS_WIN_MONEY_WIDTH,FRUITGAMEAPP_GUESS_WIN_MONEY_HEIGHT},
                                   TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER)
						WdgCommonSetFontCategoryRC(FONT_CAT_NUM_SMALL)
						WdgCommonSetTextColorRC(COLOR_WHITE)
        WdgEnd(CLSID_TEXTWIDGET,pGuessTextWdg)
		WndEnd(FRUITGAMBLEGAME_WND_GUESS)
		
ApEnd(RS,CLSID_FRUITGAMBLEGAME)

