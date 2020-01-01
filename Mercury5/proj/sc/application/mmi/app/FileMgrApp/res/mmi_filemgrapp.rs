ApBegin(RS,CLSID_FILEMGRAPP)
    WndBegin(FILEMGRAPP_WND_MEDIALIST_STORAGE_AND_CONTENT)
        WdgBegin(CLSID_MENUWIDGET,MenuWidget)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
            WdgStaticMenuInitRC(WDG_MENU_ITEM_TYPE_IMAGE_TEXTIMAGE_TEXTIMAGE)
        WdgEnd(CLSID_MENUWIDGET,MenuWidget)
    WndEnd(FILEMGRAPP_WND_MEDIALIST_STORAGE_AND_CONTENT)

    WndBegin(FILEMGRAPP_WND_LISTER_VIRTUALROOT)
        WdgBegin(CLSID_IMAGEWIDGET,ImgWidget)
#if !defined(__LCM_LANDSCAPE_QVGA_MMI__) && !defined(__LCM_WQVGA_240_400_MMI__)
            WdgImageCreateForWndRC({{0,0},{MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT*2},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID}})
#else
			WdgImageCreateForWndRC({{0,0},{MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT+MAIN_LCD_ONELINE_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID}})
#endif
        WdgEnd(CLSID_IMAGEWIDGET,ImgWidget)

        WdgBegin(CLSID_IMGGRID_MENUWIDGET,MenuGridWidget)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_DEFVIEW_HEIGHT},WDG_MENU_TYPE_IMG_GRID})
            WdgCommonSetPaddingDataRC( {5,5,8,FILEMGRAPP_RS_GRID_PADDING_BOTTOM} )
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
            WdgCommonSetBGColorRC(DEF_THM_FILEMGRAPP_BG)
            WdgMenuSetRowGapRC((u16)MAIN_THUMBNAIL_ITEM_ROW_GAP)
            WdgMenuSetColGapRC((u16)MAIN_THUMBNAIL_ITEM_COL_GAP)

        WdgEnd(CLSID_IMGGRID_MENUWIDGET,MenuGridWidget)
    WndEnd(FILEMGRAPP_WND_LISTER_VIRTUALROOT)

    WndBegin(FILEMGRAPP_WND_LISTER)
        WndSetTitleRC(IMG_NULL_ID,TXT_LTL_N_FILEMGR)

        WdgBegin(CLSID_MENUWIDGET,PickView2Menu)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,PickView2Menu)

        WdgBegin(CLSID_MENUWIDGET,PickViewMenu)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,PickViewMenu)


        WdgBegin(CLSID_IMAGEWIDGET,ImgWidget1)
#if !defined(__LCM_LANDSCAPE_QVGA_MMI__) && !defined(__LCM_WQVGA_240_400_MMI__)
            WdgImageCreateForWndRC({{0,0},{MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT*2},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID}})
#else
			WdgImageCreateForWndRC({{0,0},{MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT+MAIN_LCD_ONELINE_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID}})
#endif
        WdgEnd(CLSID_IMAGEWIDGET,ImgWidget1)

        WdgBegin(CLSID_IMGGRID_MENUWIDGET,MenuWidget1)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,MAIN_DEFVIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_IMG_GRID})
            WdgCommonSetPaddingDataRC( {MAIN_THUMBNAIL_LEFT_PADDING,MAIN_THUMBNAIL_RIGHT_PADDING,MAIN_THUMBNAIL_TOP_PADDING,MAIN_THUMBNAIL_BOTTOM_PADDING} )
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
            WdgCommonSetBGColorRC(DEF_THM_FILEMGRAPP_BG)
            WdgMenuSetRowGapRC((u16)MAIN_THUMBNAIL_ITEM_ROW_GAP)
            WdgMenuSetColGapRC((u16)MAIN_THUMBNAIL_ITEM_COL_GAP)
        WdgEnd(CLSID_IMGGRID_MENUWIDGET,MenuWidget1)


        WdgBegin(CLSID_MENUWIDGET,PickContentMenu)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,PickContentMenu)

        WdgBegin(CLSID_MENUWIDGET,PickContentView2Menu)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,PickContentView2Menu)


        WdgBegin(CLSID_IMAGEWIDGET,EmptyFolderImgWdg)
#if !defined(__LCM_LANDSCAPE_QVGA_MMI__) && !defined(__LCM_WQVGA_240_400_MMI__)
            WdgImageCreateForWndRC( { {0,0},{MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT*2},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID} } )
#else
			WdgImageCreateForWndRC( { {0,0},{MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT+MAIN_LCD_ONELINE_HEIGHT},IMAGE_STYLE_COMMON,{FALSE,IMG_NULL_ID} } )
#endif
            WdgImageSetDataByIDRC(THM_COMMON_IMG_LIST_TITLE_TWO_LINES_BG)
        WdgEnd(CLSID_IMAGEWIDGET,EmptyFolderImgWdg)

        WdgBegin(CLSID_TEXTWIDGET,ThmTextWidget)
            WdgTextCreateForWndRC( { {0,MAIN_TITLE_HEIGHT}, {MAIN_DEFVIEW_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},TEXT_STYLE_COMMON } )
            WdgTextSetDataByIDRC(TXT_LIL_N_NO_ITEM)
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_MIDDLE)
        WdgEnd(CLSID_TEXTWIDGET,ThmTextWidget)
    WndEnd(FILEMGRAPP_WND_LISTER)

    WndBegin(FILEMGRAPP_WND_MULTISEL_CONTENT)
        WdgBegin(CLSID_MENUWIDGET,MultiselMenu)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
            WdgMenuSetCheckStyleRC(ITEM_DISP_STYLE_ALWAYS_TWOLINE|CHECK_RADIO_STYLE_MARK)
        WdgEnd(CLSID_MENUWIDGET,MultiselMenu)


        WdgBegin(CLSID_IMAGEWIDGET,MultiselThumbImgWdg)
#if !defined(__LCM_LANDSCAPE_QVGA_MMI__) && !defined(__LCM_WQVGA_240_400_MMI__)
            WdgImageCreateForWndRC( {{0,0}, {MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT*2}, IMAGE_STYLE_COMMON, {FALSE,IMG_NULL_ID} } )
#else
			WdgImageCreateForWndRC( {{0,0}, {MAIN_DEFVIEW_WIDTH,MAIN_TITLE_HEIGHT+MAIN_LCD_ONELINE_HEIGHT}, IMAGE_STYLE_COMMON, {FALSE,IMG_NULL_ID} } )
#endif
        WdgEnd(CLSID_IMAGEWIDGET,MultiselThumbImgWdg)

        WdgBegin(CLSID_MENUWIDGET,MultiselThumbMenuWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH ,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT },WDG_MENU_TYPE_IMG_GRID})
            WdgCommonSetPaddingDataRC( {MAIN_THUMBNAIL_MARK_LEFT_PADDING,MAIN_THUMBNAIL_MARK_RIGHT_PADDING,MAIN_THUMBNAIL_MARK_TOP_PADDING,MAIN_THUMBNAIL_MARK_BOTTOM_PADDING} )
            WdgMenuSetCheckStyleRC(WDG_MENU_CHECK_STYLE_MARK)
            WdgCommonSetBGColorRC(DEF_THM_FILEMGRAPP_BG)
            WdgMenuSetRowGapRC((u16)MAIN_THUMBNAIL_MARK_ITEM_ROW_GAP)
            WdgMenuSetColGapRC((u16)MAIN_THUMBNAIL_MARK_ITEM_COL_GAP)
        WdgEnd(CLSID_MENUWIDGET,MultiselThumbMenuWdg)
    WndEnd(FILEMGRAPP_WND_MULTISEL_CONTENT)

    WndBegin(FILEMGRAPP_WND_SORTBY)
        WndSetTitleRC(IMG_NULL_ID,TXT_LTL_N_SORT_BY)

        WdgBegin(CLSID_MENUWIDGET,SortByMenuWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
            WdgStaticMenuInitRC(WDG_MENU_ITEM_TYPE_TEXT)
            WdgMenuSetCheckStyleRC(WDG_MENU_CHECK_STYLE_RADIO)
        WdgEnd(CLSID_MENUWIDGET,SortByMenuWdg)
    WndEnd(FILEMGRAPP_WND_SORTBY)

    WndBegin(FILEMGRAPP_WND_SELECT_STORAGE)
        WndSetTitleRC(IMG_NULL_ID,TXT_LTL_N_COPY_TO)
        WdgBegin(CLSID_MENUWIDGET,StorageMenuWdg)
            WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH ,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
            WdgStaticMenuInitRC(WDG_MENU_ITEM_TYPE_IMAGE_TEXT)
            WdgMenuSetCheckStyleRC(CHECK_RADIO_STYLE_NONE)
        WdgEnd(CLSID_MENUWIDGET,StorageMenuWdg)
    WndEnd(FILEMGRAPP_WND_SELECT_STORAGE)

    WndBegin(FILEMGRAPP_WND_CPMV)
        WdgBegin(CLSID_MENUWIDGET,DestMenuWdg)
                WdgMenuCreateForWndRC({{0,MAIN_TITLE_HEIGHT},{MAIN_LCD_WIDTH ,SETTINGAPP_VIEW_HEIGHT-MAIN_TITLE_HEIGHT},WDG_MENU_TYPE_NORMAL})
        WdgEnd(CLSID_MENUWIDGET,DestMenuWdg)

        WdgBegin(CLSID_TEXTWIDGET,EmptyFolderTextWdg)
            WdgTextCreateForWndRC( { {0,0},{MAIN_DEFVIEW_WIDTH,MAIN_DEFVIEW_HEIGHT},TEXT_STYLE_COMMON })
            WdgTextSetDataByIDRC(TXT_LIL_N_LISTEMPTY)
        WdgEnd(CLSID_TEXTWIDGET,EmptyFolderTextWdg)
    WndEnd(FILEMGRAPP_WND_CPMV)
ApEnd(RS,CLSID_FILEMGRAPP)


