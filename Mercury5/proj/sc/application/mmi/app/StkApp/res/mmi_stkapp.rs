ApBegin(RS,CLSID_STKAPP)
    WndBegin(STKAPP_WND_SHOWMENU)
        WdgBegin(CLSID_VTMMENU,vtmMenu)
            VtmCreateMenuRC({IMG_NULL_ID,TXT_LIL_N_STK,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0})
        WdgEnd(CLSID_VTMMENU,vtmMenu)
    WndEnd(STKAPP_WND_SHOWMENU)

    WndBegin(STKAPP_RCID_DRAWTEXT)
        WdgBegin(CLSID_VTMINPUT,vtmInput)
            VtmCreateInputRC({IMG_NULL_ID,TXT_LIL_N_STK,	0,		TRUE})
        WdgEnd(CLSID_VTMINPUT,vtmInput)
    WndEnd(STKAPP_RCID_DRAWTEXT)

    WndBegin(STKAPP_RCID_LAUNCHEDITOROPTION)
        WdgBegin(CLSID_VTMOPTIONMENU,vtmOption)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,		1})
            VtmCreateOptionMenuDataRC(1,{{{MENUMODEL_ITEM_VISABLE|MENUMODEL_ITEM_HAS_CHILD,{DEFAULT_SK,DEFAULT_SK,DEFAULT_SK},MNU_STKAPP_INPUT_MENU},TXT_OIL1_N_INPUT_MENU}} )
        WdgEnd(CLSID_VTMOPTIONMENU,vtmOption)
    WndEnd(STKAPP_RCID_LAUNCHEDITOROPTION)


    WndBegin(STKAPP_RCID_LAUNCHEDITOR)
        WdgBegin(CLSID_VTMINPUT,vtmInput1)
            VtmCreateInputRC({IMG_NULL_ID,TXT_LIL_N_STK,	0,		FALSE})
				VTMWdgBegin (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmInputWdg)                    
					WdgInputSetMultilineRC(TRUE)
					WdgInputSetCurrentInputModeRC(MAE_INPUTMODE_DIALING)
					WdgInputSetDisableSwitchInputModeRC(TRUE)
					WdgInputSetChineseInputOffRC(TRUE)
					WdgInputSetPasswordStyleRC(TRUE)
				VTMWdgEnd (CLSID_INPUTWIDGET, INPUT_INPUT_WDG, VtmInputWdg)
        WdgEnd(CLSID_VTMINPUT,vtmInput1)
    WndEnd(STKAPP_RCID_LAUNCHEDITOR)
ApEnd(RS,CLSID_STKAPP)


