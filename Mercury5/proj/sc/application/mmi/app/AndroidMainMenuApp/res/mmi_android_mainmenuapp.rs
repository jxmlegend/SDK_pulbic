

ApBegin(RS,CLSID_ANDROID_MAINMENUAPP)

#ifdef __UI_STYLE_MMI_ANDROID_MAIN_MENU__
    WndBegin(WND_CELL1)
        WdgBegin(CLSID_VIEWPORTWIDGET,ViewportWdg)
            WdgViewportCreateForWndRC({{0,0},{MAINMENUAPP_MAINVIEW_WIDTH,MAINMENUAPP_VIEWPORT_HEIGHT},10,ALIGN_H_START|ALIGN_V_TOP})
    	    WdgCommonSetBGImageIdRC(MAINMENU_BG_IMAGE)
        WdgEnd(CLSID_VIEWPORTWIDGET, ViewportWdg)
        WdgBegin(CLSID_ABSCONTAINER,AbsContainer)
            WdgAbsContainerCreateForWndRC({{0, MAIN_STBAR_HEIGHT},{MAINMENUAPP_MAINVIEW_WIDTH,0},0})
        WdgEnd(CLSID_ABSCONTAINER, AbsContainer)
        WdgBegin(CLSID_IMAGEWIDGET,ImgHightLightBgWdg)
            WdgImageCreateForWndRC({{0,0},{MAINMENUAPP_CELL_HIGHLIGHT_ICON_WIDTH,MAINMENUAPP_CELL_HIGHLIGHT_ICON_HEIGHT},IMAGE_STYLE_COMMON,{TRUE,MAINMENU_ITEM_BG_IMG}})
            WdgCommonSetAlignmentRC(ALIGN_H_CENTER|ALIGN_V_TOP)
        WdgEnd(CLSID_IMAGEWIDGET,ImgHightLightBgWdg)

        WdgBegin(CLSID_IMAGEWIDGET,ImgMainBgWdg)
#ifdef __UI_STYLE_MMI_ANDROID_4_0__
            WdgImageCreateForWndRC({{0,0},{MAINMENUAPP_MAINVIEW_WIDTH,MAIN_DEFVIEW_HEIGHT_WITH_SB+MAIN_SK_HEIGHT},IMAGE_STYLE_COMMON,{TRUE,IMG_NULL_ID}})
            WdgCommonSetBGColorRC(RGBCOLOR_BLACK)
#else
            WdgImageCreateForWndRC({{0,0},{MAINMENUAPP_MAINVIEW_WIDTH,MAIN_DEFVIEW_HEIGHT_WITH_SB+MAIN_SK_HEIGHT},IMAGE_STYLE_COMMON,{TRUE,MAINMENU_BG_IMAGE}})
#endif // __UI_STYLE_MMI_ANDROID_4_0__
        WdgEnd(CLSID_IMAGEWIDGET,ImgMainBgWdg)

        WdgBegin(CLSID_BUTTONWIDGET,buttImgBackIdleIconWdg)
            WdgButtonCreateForWndRC({{MAINMENUAPP_CELL_BUTTON_BACKTOIDLE_X,MAINMENUAPP_CELL_BUTTON_BACKTOIDLE_Y},{MAINMENUAPP_CELL_BUTTON_BACKTOIDLE_WIDTH,MAINMENUAPP_CELL_BUTTON_BACKTOIDLE_HIGHT},0})
            WdgButtonSetDataByIDRC({TXT_NULL_ID,MAINMENU_BACKIDLE_ICON,MAINMENU_BACKIDLE_ICON_PRESSED})
        WdgEnd(CLSID_BUTTONWIDGET,buttImgBackIdleIconWdg)
    WndEnd(WND_CELL1)

#endif

ApEnd(RS,CLSID_ANDROID_MAINMENUAPP)



