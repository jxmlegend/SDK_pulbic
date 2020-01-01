ApBegin(RS,CLSID_BJXAPP)
    WndBegin(BJXAPP_WND_MAIN)
        WndSetTitleRC({IMG_NULL_ID,TXT_OIL2_N_SEARCH_BY_BAIJIAXING})
        WndSetAllSoftkeyRC({SK_SWITCH_UP, SK_OK, SK_BACK})
        WdgBegin(CLSID_GRID_MENUWIDGET,SurnameGrid)
            WdgMenuCreateForWndRC({{BJX_SURNAME_GRID_X,BJX_SURNAME_GRID_Y+MAIN_TITLE_HEIGHT}, {BJX_SURNAME_GRID_WIDTH, BJX_SURNAME_GRID_HEIGHT},WDG_MENU_TYPE_GRID})
            WdgMenuSetItemWidthRC(BJX_SURNAME_ITEM_WIDTH)
            WdgMenuSetItemHeightRC(BJX_SURNAME_ITEM_HEIGHT)
            WdgMenuSetRowGapRC(BJX_SURNAME_GRID_ROW_GAP)
            WdgMenuSetColGapRC(BJX_SURNAME_GRID_COL_GAP)
            WdgMenuSetFixedNumRC(BJX_SURNAME_NUM_COL)
        WdgEnd(CLSID_GRID_MENUWIDGET,SurnameGrid)
        WdgBegin(CLSID_TEXTWIDGET,SurnameItem)
            WdgTextCreateForWndRC({{0,0},{0,0},TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetTextColorRC(DEF_THM_COMMON_COLOR_LIST_TEXT)
            WdgCommonSetHighlightTextColorRC(DEF_THM_COMMON_COLOR_LIST_INFO_TEXT)
        WdgEnd(CLSID_TEXTWIDGET,SurnameItem)
        WdgBegin(CLSID_GRID_MENUWIDGET,AlphabetGrid)
            WdgMenuCreateForWndRC({{BJX_ALPHABET_GRID_X,BJX_ALPHABET_GRID_Y+MAIN_TITLE_HEIGHT},{BJX_ALPHABET_GRID_WIDTH,BJX_ALPHABET_GRID_HEIGHT},WDG_MENU_TYPE_GRID})
            WdgCommonSetBorderDataRC({1, 1, 1, 1, DEF_THM_BJXAPP_ALPHABET_GRID_BORDER})
            WdgCommonSetPaddingDataRC({1, 1, 1, 1})
            WdgMenuSetItemWidthRC(BJX_ALPHABET_ITEM_WIDTH)
            WdgMenuSetItemHeightRC(BJX_ALPHABET_ITEM_HEIGHT)
            WdgMenuSetRowGapRC(BJX_ALPHABET_GRID_ROW_GAP)
            WdgMenuSetColGapRC(BJX_ALPHABET_GRID_COL_GAP)
            WdgMenuSetFixedNumRC(BJX_ALPHABET_NUM_COL)           
        WdgEnd(CLSID_GRID_MENUWIDGET,AlphabetGrid)

        WdgBegin(CLSID_TEXTWIDGET,AlphabetItem)
            WdgTextCreateForWndRC({{0,0},{0,0},TEXT_STYLE_COMMON})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
            WdgCommonSetFontCategoryRC(FONT_CAT_NORMAL)
            WdgCommonSetTextColorRC(DEF_THM_COMMON_COLOR_LIST_TEXT)
            WdgCommonSetHighlightTextColorRC(DEF_THM_COMMON_COLOR_LIST_INFO_TEXT)
        WdgEnd(CLSID_TEXTWIDGET,AlphabetItem)
    WndEnd(BJXAPP_WND_MAIN)
ApEnd(RS,CLSID_BJXAPP)

