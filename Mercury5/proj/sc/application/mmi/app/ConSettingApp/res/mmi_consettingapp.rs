ApBegin(RS,CLSID_CONSETTINGAPP)
    WndBegin(CONSETTING_WND_MFL)
        //WndSetTitleRC(IMG_NULL_ID,TXT_LTL_N_EDIT_ACCOUNT)
        WndSetTitleRC(IMG_NULL_ID,TXT_LTL_N_EDIT_PROFILE)
        WndSetAllSoftkeyRC({SK_SAVE, SK_OK, SK_CANCEL})

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,AccountNameWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,2*MAIN_TITLE_WIDTH},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_ACCOUNT_NAME,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,DBTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,DBTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,AccountNameWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,APNWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,2*MAIN_TITLE_WIDTH},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_APN,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,ApnTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,ApnTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,APNWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,UserNameWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,2*MAIN_TITLE_WIDTH},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_USER_NAME,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,UserNameTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,UserNameTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,UserNameWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,PasswordWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,2*MAIN_TITLE_WIDTH},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_PASSWORD,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,PwdTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,PwdTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,PasswordWdg)

        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,AuthTypeWdg)
            WdgCommonPickCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,2*MAIN_TITLE_WIDTH},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(2, {0,{IMG_NULL_ID,TXT_LIL_N_AUTH_TYPE}},{ {IMG_NULL_ID,TXT_LIL_N_NORMAL},{IMG_NULL_ID,TXT_LIL_N_SECURE} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,AuthTypeWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,DNSWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{MAIN_LCD_WIDTH,2*MAIN_TITLE_HEIGHT},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_DNS,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,DnsTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,DnsTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,DNSWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,ProfileNameWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_PROFILE_NAME,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,ProfileTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,ProfileTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,ProfileNameWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,HomePageWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_HOMEPAGE,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,HomePageTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,HomePageTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,HomePageWdg)

        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,ConnectTypeWdg)
            WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(2, {0,{IMG_NULL_ID,TXT_LIL_N_CONNECTION_TYPE}},{ {IMG_NULL_ID, TXT_LIL_N_CONNECTION_ORIENTED},{IMG_NULL_ID, TXT_LIL_N_HTTP} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,ConnectTypeWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,ProxyWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_PROXY,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,ProxyTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,ProxyTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,ProxyWdg)

        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,PortWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_PORT,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,PortTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,PortTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,PortWdg)

        WdgBegin(CLSID_LINE2INFOPICK_TEXTWIDGET,DataAccountWdg)
            WdgCommonPickCreateForWndRC({{0,0},{0,0},COMMONPICK_STYLE_LINE2INFOPICK_TEXTWIDGET})
            WdgCommonPickSetDataByIDRC(1, {0, {TXT_LIL_N_DATA_ACCOUNTS,TXT_NULL_ID}},{ {IMG_NULL_ID, TXT_NULL_ID} })
        WdgEnd(CLSID_LINE2INFOPICK_TEXTWIDGET,DataAccountWdg)


        WdgBegin(CLSID_TEXT_LINE2INFO_WIDGET,MMSCWdg)
            WdgDoubleItemCreateForWndRC({{0,0},{0,0},DOUBLEITEM_STYLE_TEXT_LINE2INFO})
            WdgDoubleItemDBTextSetDataByIDRC({TXT_LIL_N_MMSC,TXT_NULL_ID})

            ChildBegin(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,MMSCTxtWdg)
                WdgCommonSetAlignmentRC(ALIGN_V_MIDDLE | ALIGN_H_CENTER)
            ChildEnd(CLSID_TEXTWIDGET,CHILD_SECOND_ORDER,MMSCTxtWdg)
        WdgEnd(CLSID_TEXT_LINE2INFO_WIDGET,MMSCWdg)

    WndEnd(CONSETTING_WND_MFL)

    WndBegin(CONSETTING_WND_IP_EDITOR)
        WdgBegin(CLSID_VTMIPINPUT, vtmIpEditorInput)
            VtmCreateIpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_NULL_ID})
        WdgEnd(CLSID_VTMIPINPUT,vtmIpEditorInput)
    WndEnd(CONSETTING_WND_IP_EDITOR)

    WndBegin(CONSETTING_WND_INPUT_NUMBER)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CLEAR})
        WdgBegin(CLSID_VTMPOPUPINPUT, tNumbericPopUpInputData)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_NULL_ID,MAE_INPUTMODE_NUMERIC})
				VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmNumInputWdg)
					WdgInputSetDisableSwitchInputModeRC(TRUE)
					WdgInputSetDisableSymbolTableRC(FALSE)
					WdgInputSetPasswordStyleRC(FALSE)
				VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmNumInputWdg)
        WdgEnd(CLSID_VTMPOPUPINPUT,tNumbericPopUpInputData)
    WndEnd(CONSETTING_WND_INPUT_NUMBER)

    WndBegin(CONSETTING_WND_INPUT_PASSWORD)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CLEAR})
        WdgBegin(CLSID_VTMPOPUPINPUT, tPasswordPopUpInputData)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_NULL_ID,MAE_INPUTMODE_MT_abc})
				VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmPwdInputWdg)
                    WdgInputSetCurrentInputLanguageRC(MAE_LANG_ENGLISH)				
					WdgInputSetDisableSwitchInputModeRC(FALSE)
					WdgInputSetDisableSymbolTableRC(FALSE)
					WdgInputSetPasswordStyleRC(TRUE)
				VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmPwdInputWdg)
        WdgEnd(CLSID_VTMPOPUPINPUT,tPasswordPopUpInputData)
    WndEnd(CONSETTING_WND_INPUT_PASSWORD)

    WndBegin(CONSETTING_WND_INPUT_DIAL_NUMBER)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CLEAR})
            WdgBegin(CLSID_VTMPOPUPINPUT, tDialingPopUpInputData)
            VtmCreatePopUpInputRC({IMG_NULL_ID,IMG_NULL_ID,TXT_NULL_ID,MAE_INPUTMODE_DIALING})
				VTMWdgBegin (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmDialingInputWdg)
					WdgInputSetDisableSwitchInputModeRC(TRUE)
					WdgInputSetDisableSymbolTableRC(TRUE)
					WdgInputSetPasswordStyleRC(FALSE)
				VTMWdgEnd (CLSID_INPUTWIDGET, POP_UP_INPUT_INPUT_WDG, VtmDialingInputWdg)
        WdgEnd(CLSID_VTMPOPUPINPUT,tDialingPopUpInputData)
    WndEnd(CONSETTING_WND_INPUT_DIAL_NUMBER)

    WndBegin(CONSETTING_WND_INPUT_TEXT)
        WndSetAllSoftkeyRC({SK_OK_TEXT, SK_OK, SK_CLEAR})
        WdgBegin(CLSID_VTMINPUT, tInputVtmData)
            VtmCreateInputRC({IMG_NULL_ID,TXT_NULL_ID,0,FALSE})
        WdgEnd(CLSID_VTMINPUT,tInputVtmData)
    WndEnd(CONSETTING_WND_INPUT_TEXT)

    WndBegin(CONSETTING_WND_LIST_DUAL_SIM_MENU)
        WdgBegin(CLSID_VTMMENU,tSimSelectionMenuData)
            VtmCreateMenuRC( { IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT_THEMETEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0  } )
        WdgEnd(CLSID_VTMMENU,tSimSelectionMenuData)
    WndEnd(CONSETTING_WND_LIST_DUAL_SIM_MENU)

    WndBegin(CONSETTING_WND_LIST_MENU)
        WdgBegin(CLSID_VTMMENU,tListMenuData)
            VtmCreateMenuRC( { IMG_NULL_ID,TXT_NULL_ID,WDG_MENU_TYPE_NORMAL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_NONE,0,0,0  } )
        WdgEnd(CLSID_VTMMENU,tListMenuData)
    WndEnd(CONSETTING_WND_LIST_MENU)

    WndBegin(CONSETTING_WND_RADIO_MENU_GPRS)
        WdgBegin(CLSID_VTMPOPUPSELECT,tGPRSMenuData)
            VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
            VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, GPRS_E_ALWAYS_RS     }, TXT_LIL_N_ALWAYS     },
                                            {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, GPRS_E_WHEN_NEEDED_RS}, TXT_LIL_N_WHEN_NEEDED}  } )
        WdgEnd(CLSID_VTMPOPUPSELECT,tGPRSMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_GPRS)

    WndBegin(CONSETTING_WND_RADIO_MENU_NAP_TYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,tNAPTypeMenuData)
            VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
            VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, FALSE  }, TXT_LIL_N_GPRS },
                                            {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, TRUE   }, TXT_LIL_N_CSD  }    } )
        WdgEnd(CLSID_VTMPOPUPSELECT,tNAPTypeMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_NAP_TYPE)

    WndBegin(CONSETTING_WND_RADIO_MENU_LINE_TYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,tLineTypeMenuData)
            VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
            VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, DATA_ACCOUNT_E_CSD_LINE_ANALOGUE_RS }, TXT_LIL_N_ANALOGUE},
                                            {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, DATA_ACCOUNT_E_CSD_LINE_ISDN_RS     }, TXT_LIL_N_ISDN    }      } )
        WdgEnd(CLSID_VTMPOPUPSELECT,tLineTypeMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_LINE_TYPE)

    WndBegin(CONSETTING_WND_RADIO_MENU_SPEED)
        WdgBegin(CLSID_VTMPOPUPSELECT,pSpeedMenuItem)
            VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,3,0,0  } )
            VtmCreatePopUpSelectDataRC(3, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, DATA_ACCOUNT_E_CSD_SPEED_4_8_KPBS_RS }, TXT_LIL_N_4_8KBPS },
                                            {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, DATA_ACCOUNT_E_CSD_SPEED_9_6_KPBS_RS }, TXT_LIL_N_9_6KBPS },
                                            {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, DATA_ACCOUNT_E_CSD_SPEED_14_4_KPBS_RS}, TXT_LIL_N_14_4KBPS}  } )
        WdgEnd(CLSID_VTMPOPUPSELECT,pSpeedMenuItem)
    WndEnd(CONSETTING_WND_RADIO_MENU_SPEED)

    WndBegin(CONSETTING_WND_RADIO_MENU_AUTH_TYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,tAuthTypeMenuData)
            VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
            VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, DATA_ACCOUNT_E_GPRS_AUTH_TYPE_NORMAL_RS}, TXT_LIL_N_NORMAL},
                                            {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, DATA_ACCOUNT_E_GPRS_AUTH_TYPE_SECURE_RS}, TXT_LIL_N_SECURE}  } )
        WdgEnd(CLSID_VTMPOPUPSELECT,tAuthTypeMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_AUTH_TYPE)

    WndBegin(CONSETTING_WND_RADIO_MENU_CON_TYPE)
        WdgBegin(CLSID_VTMPOPUPSELECT,tConnTypeMenuData)
            VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
            VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECTION_TYPE_E_CONNECTION_ORIENTED_RS}, TXT_LIL_N_CONNECTION_ORIENTED},
                                            {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECTION_TYPE_E_HTTP_RS }, TXT_LIL_N_HTTP}    } )
        WdgEnd(CLSID_VTMPOPUPSELECT,tConnTypeMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_CON_TYPE)

    WndBegin(CONSETTING_WND_RADIO_MENU_WAP_CONNECT_SET)
        WdgBegin(CLSID_VTMPOPUPSELECT,tWapConnectSetMenuData)
	//			  VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,4,0,0  } )
	//			  VtmCreatePopUpSelectDataRC(4, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY},	   TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY},	   TXT_LIL_N_WLAN_SETTING_GPRS_ONLY},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_PREFERRED}, TXT_LIL_N_WLAN_SETTING_WIFI_PREFERRED},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_PREFERRED}, TXT_LIL_N_WLAN_SETTING_GPRS_PREFERRED}	 } )
				VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
				VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
												{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_GPRS_ONLY}	} )
        WdgEnd(CLSID_VTMPOPUPSELECT,tWapConnectSetMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_WAP_CONNECT_SET)

    WndBegin(CONSETTING_WND_RADIO_MENU_JAVA_CONNECT_SET)
        WdgBegin(CLSID_VTMPOPUPSELECT,tJavaConnectSetMenuData)
	//			  VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,4,0,0  } )
	//			  VtmCreatePopUpSelectDataRC(4, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY},	   TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY},	   TXT_LIL_N_WLAN_SETTING_GPRS_ONLY},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_PREFERRED}, TXT_LIL_N_WLAN_SETTING_WIFI_PREFERRED},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_PREFERRED}, TXT_LIL_N_WLAN_SETTING_GPRS_PREFERRED}	 } )
				VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
				VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
												{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_GPRS_ONLY}	} )
        WdgEnd(CLSID_VTMPOPUPSELECT,tJavaConnectSetMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_JAVA_CONNECT_SET)

#ifdef __APP_MMI_NTP__
    WndBegin(CONSETTING_WND_RADIO_MENU_NTP_CONNECT_SET)
        WdgBegin(CLSID_VTMPOPUPSELECT,tNtpConnectSetMenuData)
				VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
				VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
												{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_GPRS_ONLY}	} )
        WdgEnd(CLSID_VTMPOPUPSELECT,tNtpConnectSetMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_NTP_CONNECT_SET)
#endif

#ifdef __EMAIL_MMI__
    WndBegin(CONSETTING_WND_RADIO_MENU_EMAIL_CONNECT_SET)
        WdgBegin(CLSID_VTMPOPUPSELECT,tEmailConnectSetMenuData)
				VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
				VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
												{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_GPRS_ONLY}	} )
        WdgEnd(CLSID_VTMPOPUPSELECT,tEmailConnectSetMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_EMAIL_CONNECT_SET)
#endif
#ifdef __NCCQQ_MMI__
    WndBegin(CONSETTING_WND_RADIO_MENU_QQ_CONNECT_SET)
        WdgBegin(CLSID_VTMPOPUPSELECT,tQQConnectSetMenuData)
				VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
				VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
												{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_GPRS_ONLY}	} )
        WdgEnd(CLSID_VTMPOPUPSELECT,tQQConnectSetMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_QQ_CONNECT_SET)
#endif //#ifdef __NCCQQ_MMI__
#ifdef __STREAMING_MODULE__
    WndBegin(CONSETTING_WND_RADIO_MENU_STREAMING_CONNECT_SET)
        WdgBegin(CLSID_VTMPOPUPSELECT,tStreamingConnectSetMenuData)
                VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
                VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY},      TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
                                                {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY},      TXT_LIL_N_WLAN_SETTING_GPRS_ONLY}  } )
        WdgEnd(CLSID_VTMPOPUPSELECT,tStreamingConnectSetMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_STREAMING_CONNECT_SET)
#endif //#ifdef __STREAMING_MODULE__
    WndBegin(CONSETTING_WND_RADIO_MENU_OTHER_CONNECT_SET)
        WdgBegin(CLSID_VTMPOPUPSELECT,tOtherConnectSetMenuData)
	//			  VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,4,0,0  } )
	//			  VtmCreatePopUpSelectDataRC(4, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY},	   TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY},	   TXT_LIL_N_WLAN_SETTING_GPRS_ONLY},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_PREFERRED}, TXT_LIL_N_WLAN_SETTING_WIFI_PREFERRED},
	//											  {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_PREFERRED}, TXT_LIL_N_WLAN_SETTING_GPRS_PREFERRED}	 } )
				VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,2,0,0  } )
				VtmCreatePopUpSelectDataRC(2, { {{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_WIFI_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_WIFI_ONLY},
												{{MENUMODEL_ITEM_VISABLE, {DEFAULT_SK,DEFAULT_SK,DEFAULT_SK}, CONNECT_SET_E_GPRS_ONLY}, 	 TXT_LIL_N_WLAN_SETTING_GPRS_ONLY}	} )
        WdgEnd(CLSID_VTMPOPUPSELECT,tOtherConnectSetMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU_OTHER_CONNECT_SET)

    WndBegin(CONSETTING_WND_RADIO_MENU)
        WdgBegin(CLSID_VTMPOPUPSELECT,tDynamicMenuData)
            VtmCreatePopUpSelectRC( { NULL,WDG_MENU_ITEM_TYPE_TEXT,WDG_MENU_CHECK_STYLE_RADIO,0,0,0  } )
        WdgEnd(CLSID_VTMPOPUPSELECT,tDynamicMenuData)
    WndEnd(CONSETTING_WND_RADIO_MENU)

    WndBegin(CONSETTING_WND_OPT)
        WdgBegin(CLSID_VTMOPTIONMENU,tOptionMenuData)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
            VtmCreateOptionMenuDataRC(2, { {{MENUMODEL_ITEM_VISABLE ,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_SAVE },TXT_OIL1_N_SAVE },
                                           {{MENUMODEL_ITEM_VISABLE|MENUMODEL_ITEM_HAS_CHILD,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_TEXT_INPUT_MENU},TXT_OIL1_N_INPUT_MENU} })
        WdgEnd(CLSID_VTMOPTIONMENU,tOptionMenuData)
    WndEnd(CONSETTING_WND_OPT)
    
    WndBegin(CONSETTING_WND_LIST_MENU_OPT)
        WdgBegin(CLSID_VTMOPTIONMENU,tOptionListMenuData)
            VtmCreateOptionMenuRC({WDG_MENU_ITEM_TYPE_TEXT,2})
            VtmCreateOptionMenuDataRC(2, { {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_OPT_EDIT },TXT_OIL1_N_EDIT },
                                           {{MENUMODEL_ITEM_VISABLE,{SK_SELECT,SK_OK,SK_CANCEL},MNU_COMMON_OPT_CLEAR},TXT_OIL1_N_CLEAR} })
        WdgEnd(CLSID_VTMOPTIONMENU,tOptionListMenuData)
    WndEnd(CONSETTING_WND_LIST_MENU_OPT)
ApEnd(RS,CLSID_CONSETTINGAPP)

