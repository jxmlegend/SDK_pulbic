#------------------------------------------------------------------------------
#	Description of some variables owned by the library
#------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS		= lib


#------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#------------------------------------------------------------------------------

# c file list
SRC_C_LIST = \
	adas_calibration.c\
	DamageVideoFile.c\
	Icon_Battery_Empty.c\
	Icon_Battery_Exhaust.c\
	Icon_Battery_Full.c\
	Icon_Battery_Low.c\
	Icon_Battery_Mid.c\
	Icon_Battery_Normal.c\
	Icon_Battery2_Empty.c\
	Icon_Battery2_Full.c\
	Icon_Battery2_Mid.c\
	Icon_Battery2_Normal.c\
	Icon_Battery2_Recharge.c\
	Icon_Burst_High.c\
	Icon_Burst_Low.c\
	Icon_Burst_Middle.c\
	Icon_Button_Capture.c\
	Icon_Button_Capture_Touch.c\
	Icon_Button_Cut.c\
	Icon_Button_Movie.c\
	Icon_Button_Movie_Playback.c\
	Icon_Button_Record.c\
	Icon_Button_Record_Touch.c\
	Icon_Button_Still.c\
	Icon_Button_Still_Playback.c\
	Icon_Button_Zoom_In.c\
	Icon_Button_Zoom_In_Touch.c\
	Icon_Button_Zoom_Out.c\
	Icon_Button_Zoom_Out_Touch.c\
	Icon_Cancel.c\
	Icon_Cut.c\
	Icon_D_Down.c\
	Icon_D_Left.c\
	Icon_D_Right.c\
	Icon_D_Up.c\
	Icon_Delete.c\
	Icon_Dummy.c\
	Icon_EV_Bar.c\
	Icon_EV_Cursor.c\
	Icon_Exit.c\
	Icon_FaceTouch_TouchSpot.c\
	Icon_FD_OFF.c\
	Icon_FD_ON.c\
	Icon_Flash_Auto.c\
	Icon_Flash_OFF.c\
	Icon_Flash_ON.c\
	Icon_Flash_Slow_Sync.c\
	Icon_Focus_Infinity.c\
	Icon_Focus_Marco.c\
	Icon_Focus_Window.c\
	Icon_FocusWindow.c\
	Icon_FocusWindow_CentrSpot.c\
	Icon_FocusWindow_Multi.c\
	Icon_GPS_Active.c\
	Icon_GPS_Deactive.c\
	Icon_GPS_Status_1.c\
	Icon_GPS_Status_2.c\
	Icon_GPS_Status_3.c\
	Icon_GPS_status_BG.c\
	Icon_GPS_Status_No.c\
	Icon_GPSSigs.c\
	Icon_HdmiSlideShow.c\
	Icon_HdmiStillPlay.c\
	Icon_HdmiVideoPlay.c\
	Icon_HdmiVideoPlay_FB.c\
	Icon_HdmiVideoPlay_FF.c\
	Icon_HdmiVideoPlay_Pause.c\
	Icon_HdmiVideoPlay_PFB.c\
	Icon_HdmiVideoPlay_PFF.c\
	Icon_HdmiVideoPlay_Play.c\
	Icon_HdmiVideoPlay_Stop.c\
	Icon_HdmiVideoPlayPause.c\
	Icon_HdmiVideoPlayStop.c\
	Icon_HDR.c\
	Icon_HDR_OFF.c\
	Icon_ImageSize_1_2M.c\
	Icon_ImageSize_2M.c\
	Icon_ImageSize_3M.c\
	Icon_ImageSize_5M.c\
	Icon_ImageSize_8M.c\
	Icon_ImageSize_12M.c\
	Icon_ImageSize_14M.c\
	Icon_ImageSize_FHD.c\
	Icon_ImageSize_HD.c\
	Icon_ImageSize_VGA.c\
	Icon_ImageStable_OFF.c\
	Icon_ImageStable_ON.c\
	Icon_Info.c\
	Icon_InternalMem.c\
	Icon_InternalMem_Error.c\
	Icon_KeyMap_Capture.c\
	Icon_KeyMap_Down.c\
	Icon_KeyMap_Down_big.c\
	Icon_KeyMap_Emergent.c\
	Icon_KeyMap_Empty.c\
	Icon_KeyMap_Empty_Back.c\
	Icon_KeyMap_Menu.c\
	Icon_KeyMap_OK.c\
	Icon_KeyMap_OK_big.c\
	Icon_KeyMap_Pause.c\
	Icon_KeyMap_Play.c\
	Icon_KeyMap_Record.c\
	Icon_KeyMap_RecordStop.c\
	Icon_KeyMap_Resume.c\
	Icon_KeyMap_Return.c\
	Icon_KeyMap_Return_big.c\
	Icon_KeyMap_Speed.c\
	Icon_KeyMap_Up.c\
	Icon_KeyMap_Up_big.c\
	Icon_LDWS_Left.c\
	Icon_LDWS_Right.c\
	Icon_Menu.c\
	Icon_Menu_Edit.c\
	Icon_Menu_Edit_HL.c\
	Icon_Menu_General_Settings.c\
	Icon_Menu_General_SettingsHL.c\
	Icon_Menu_Manul_Settings.c\
	Icon_Menu_Manul_Settings_HL.c\
	Icon_Menu_Media.c\
	Icon_Menu_Media_HL.c\
	Icon_Menu_Movie.c\
	Icon_Menu_Movie_HL.c\
	Icon_Menu_Playback.c\
	Icon_Menu_Playback_HL.c\
	Icon_Menu_Select0.c\
	Icon_Menu_Select1.c\
	Icon_Menu_Still.c\
	Icon_Menu_Still_HL.c\
	Icon_Menu_Video_HL.c\
	Icon_MenuBar_White.c\
	Icon_MenuBar_White_Big.c\
	Icon_MenuBar_White_Default.c\
	Icon_MenuBar_White_Default_Big.c\
	Icon_MenuBar_Yellow.c\
	Icon_MenuBar_Yellow_Big.c\
	Icon_MenuBar_Yellow_Default.c\
	Icon_MenuBar_Yellow_Default_Big.c\
	Icon_Metering_CenterSpot.c\
	Icon_Metering_Multi.c\
	Icon_Metering_Weighted.c\
	Icon_Motion_Detection.c\
	Icon_Movie.c\
	Icon_Movie_Fast_Forward.c\
	Icon_Movie_Fast_Reverse.c\
	Icon_Movie_Playback.c\
	Icon_MovieSize_720_10P.c\
	Icon_MovieSize_720_24P.c\
	Icon_MovieSize_720_60P.c\
	Icon_MovieSize_720P.c\
	Icon_MovieSize_1080_24P.c\
	Icon_MovieSize_1080P.c\
	Icon_MovieSize_1080P_60.c\
	Icon_MovieSize_SHD_24P.c\
	Icon_MovieSize_SHD_25P.c\
	Icon_MovieSize_SHD_30P.c\
	Icon_MovieSize_VGA_30P.c\
	Icon_MovieSize_VGA_60P.c\
	Icon_MovieSize_VGA_120P.c\
	Icon_MSDC.c\
	Icon_Music.c\
	Icon_mutemic.c\
	Icon_mutemicW.c\
	Icon_NEXT.c\
	Icon_Num_0.c\
	Icon_Num_1.c\
	Icon_Num_2.c\
	Icon_Num_3.c\
	Icon_Num_4.c\
	Icon_Num_5.c\
	Icon_Num_6.c\
	Icon_Num_7.c\
	Icon_Num_8.c\
	Icon_Num_9.c\
	Icon_OK.c\
	Icon_Pause.c\
	Icon_PCCAM.c\
	Icon_PhotoBrowser.c\
	Icon_Play.c\
	Icon_Play_Pause.c\
	Icon_Play_Play.c\
	Icon_Playback.c\
	Icon_PREVIOUS.c\
	Icon_Protect.c\
	Icon_ProtectKey.c\
	Icon_ProtectKey_90.c\
	Icon_ProtectKeyD.c\
	Icon_ProtectKeyG.c\
	Icon_ProtectKeyM.c\
	Icon_ProtectKeyRed.c\
	Icon_QuickMenuBar_White.c\
	Icon_QuickMenuBar_Yellow.c\
	Icon_REC.c\
	Icon_RETURN.c\
	Icon_Right.c\
	Icon_Rotate_Left.c\
	Icon_Rotate_Right.c\
	Icon_RTC_Lost.c\
	Icon_RTClost.c\
	Icon_Scene_Auto.c\
	Icon_Scene_Beach.c\
	Icon_Scene_Fireworks.c\
	Icon_Scene_Landscape.c\
	Icon_Scene_Portrait.c\
	Icon_Scene_Snow.c\
	Icon_Scene_Sport.c\
	Icon_Scene_Twilight.c\
	Icon_Scene_Twilight_Dev.c\
	Icon_Scene_Twilight_Portrait.c\
	Icon_SD_Card.c\
	Icon_SD_Card_No.c\
	Icon_SD_CardSlow.c\
	Icon_SDCard_Error.c\
	Icon_SelfTimer.c\
	Icon_Selftimer_2S.c\
	Icon_Selftimer_10S.c\
	Icon_Slide_Show.c\
	Icon_SlideShow_Next.c\
	Icon_SlideShow_Previous.c\
	Icon_Smile_Detection.c\
	Icon_Smile_Detection_1People.c\
	Icon_Smile_Detection_2People.c\
	Icon_Smile_Detection_Off.c\
	Icon_Sound_Off.c\
	Icon_Status_Background.c\
	Icon_Status_Colon.c\
	Icon_Status_Disable_Indicator.c\
	Icon_Status_Disable_Speed.c\
	Icon_Status_Disable_Track.c\
	Icon_Status_Speed.c\
	Icon_Status_Speedcam.c\
	Icon_Status_Speedcam_Disable.c\
	Icon_Status_Track_0.c\
	Icon_Status_Track_1.c\
	Icon_Status_Track_2.c\
	Icon_Status_Track_3.c\
	Icon_Status_Track_4.c\
	Icon_Status_Track_5.c\
	Icon_Status_Track_6.c\
	Icon_Status_Track_7.c\
	Icon_Status_Track_8.c\
	Icon_Status_Track_9.c\
	Icon_Status_Track_A.c\
	Icon_Status_Track_B.c\
	Icon_Status_Track_Indicator.c\
	Icon_Still.c\
	Icon_Still_Playback.c\
	Icon_SubMenuBar_White.c\
	Icon_SubMenuBar_White_Default.c\
	Icon_SubMenuBar_Yellow.c\
	Icon_SubMenuBar_Yellow_Default.c\
	Icon_Thumbnail.c\
	Icon_Time_Edit_Normal.c\
	Icon_Time_Edit_Sel.c\
	Icon_USB_Connect.c\
	Icon_USB_Connect_2.c\
	Icon_Video.c\
	Icon_VideoBroswer.c\
	Icon_Volume_Decrease.c\
	Icon_Volume_Increase.c\
	Icon_VR_Volume_Off.c\
	Icon_VR_Volume_On.c\
	Icon_VRPause.c\
	Icon_W_0.c\
	Icon_W_1.c\
	Icon_W_2.c\
	Icon_W_3.c\
	Icon_W_4.c\
	Icon_W_5.c\
	Icon_W_6.c\
	Icon_W_7.c\
	Icon_W_8.c\
	Icon_W_9.c\
	Icon_W_Stabilization.c\
	Icon_Wait0.c\
	Icon_Wait1.c\
	Icon_Wait2.c\
	Icon_Wait3.c\
	Icon_Wait4.c\
	Icon_Warning.c\
	Icon_WB_Cloudy.c\
	Icon_WB_Daylight.c\
	Icon_WB_Flash.c\
	Icon_WB_Fluorescent1.c\
	Icon_WB_Fluorescent2.c\
	Icon_WB_Fluorescent3.c\
	Icon_WB_Incandescent.c\
	Icon_WB_One_Push.c\
	Icon_WB_One_Push_Set.c\
	Icon_WiFi.c\
	Icon_WiFi_Disconnect.c\
	Icon_WiFi_ERR.c\
	Icon_WiFi_FAIL.c\
	Icon_WiFi_IDLE.c\
	Icon_WiFi_Off.c\
	Icon_WiFi_On.c\
	Icon_WiFi_Setting.c\
	Icon_WiFi_Streaming_Off.c\
	Icon_WiFi_Streaming_On.c\
	Icon_WiFi00.c\
	Icon_WiFi01.c\
	Icon_WiFi02.c\
	Icon_WiFi03.c\
	Icon_WiFiNoIP.c\
	Icon_WMSG.c\
	Icon_Zoom_In.c\
	Icon_Zoom_Out.c\
	Icon_ZoomBar.c\
	Image_AIT.c\
	reverse_line.c\
	TV_TimeLapseB.c\
	IconPosition.c\
	Icon_Battery_EmptyLarge.c\
	Icon_Battery_ExhaustLarge.c\
	Icon_Battery_FullLarge.c\
	Icon_Battery_MidLarge.c\
	Icon_Battery_NormalLarge.c\
	Icon_HDR.c\
	Icon_HDR_OFF.c\
	Icon_ImageSize_1_2MLarge.c\
	Icon_ImageSize_2MLarge.c\
	Icon_ImageSize_3MLarge.c\
	Icon_ImageSize_5MLarge.c\
	Icon_ImageSize_8MLarge.c\
	Icon_ImageSize_12MLarge.c\
	Icon_ImageSize_14MLarge.c\
	Icon_ImageSize_VGALarge.c\
	Icon_MenuBar_White_DefaultLarge.c\
	Icon_MenuBar_WhiteLarge.c\
	Icon_MenuBar_WhiteSmall.c\
	Icon_MenuBar_WhiteXLarge.c\
	Icon_MenuBar_Yellow_DefaultLarge.c\
	Icon_MenuBar_YellowLarge.c\
	Icon_MenuBar_YellowSmall.c\
	Icon_MenuBar_YellowXLarge.c\
	Icon_Movie_PlaybackLarge.c\
	Icon_MovieLarge.c\
	Icon_MovieSize_720_24PLarge.c\
	Icon_MovieSize_720_60PLarge.c\
	Icon_MovieSize_720PLarge.c\
	Icon_MovieSize_1080P_24Large.c\
	Icon_MovieSize_1080P_60Large.c\
	Icon_MovieSize_1080PLarge.c\
	Icon_MovieSize_SHD_30PL.c\
	Icon_MovieSize_VGA_30PLarge.c\
	Icon_SD_Card_NoLarge.c\
	Icon_SD_CardLarge.c\
	Icon_SD_CardSlowLarge.c\
	Icon_SDCard_ErrorLarge.c\
	Icon_Still_PlaybackLarge.c\
	Icon_StillLarge.c\
	Icon_SubMenuBar_White_DefaultLarge.c\
	Icon_SubMenuBar_WhiteLarge.c\
	Icon_SubMenuBar_Yellow_DefaultLarge.c\
	Icon_SubMenuBar_YellowLarge.c\
	
PATH_H +=\
    $(PATH_ahc)/inc\
    $(PATH_core_application_mmps_system)/inc\
    $(PATH_core_application_mmps_dsc)/inc\
    $(PATH_core_application_mmps_audio)/inc\
    $(PATH_core_application_mmps_display)/inc\
    $(PATH_core_application_mmps_vid_recd)/inc\
    $(PATH_core_application_mmps_vid_play)/inc\
    $(PATH_core_application_mmps_sensor)/inc\
    $(PATH_core_application_mmps_usb)/inc\
    $(PATH_core_application_mmpd_display)/inc\
    $(PATH_core_application_mmpd_flow_ctl)/inc\
    $(PATH_core_application_mmpd_system)/inc\
    $(PATH_core_application_mmpd_dsc)/inc\
    $(PATH_core_application_mmpd_audio)/inc\
    $(PATH_core_application_mmpd_img_pipe)/inc\
    $(PATH_core_application_mmpd_vid_play)/inc\
    $(PATH_core_driver_bsp)/inc\
    $(PATH_core_driver_ccir)/inc\
    $(PATH_core_driver_common)/inc\
    $(PATH_core_driver_display)/inc\
    $(PATH_core_driver_storage)/inc\
    $(PATH_core_driver_pll)/inc\
    $(PATH_core_driver_img_pipe)/inc\
    $(PATH_core_lib_gui_inc_Core)\
    $(PATH_core_lib_gui_inc_Config)\
    $(PATH_core_system_os)/inc\
    $(PATH_core_system_fs)/inc\
    $(PATH_core_system_sensor)/inc\
    $(PATH_core_system_usb_dev_uvc)/inc\
    $(PATH_core_system_usb_host)/inc\
    $(PATH_core_system_vid_play)/inc\
    $(PATH_core_system_vid_play)/inc\parser\
    $(PATH_core_driver_dram)/inc\
    $(PATH_core_system_host_if)/inc\
    $(PATH_core_include_application)\
    $(PATH_core_include_misc)\
    $(PATH_core_include_application)\
    $(PATH_core_include_display)\
    $(PATH_core_include_img_pipe)\
    $(PATH_core_include_misc)\
    $(PATH_core_include_usb)\
    $(PATH_core_lib_fs)/inc\
    $(PATH_core_lib_gui_inc_Core)\
    $(PATH_core_utility)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg)/core/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg)/isp/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg)/sdk/inc\
    $(PATH_project_Dvr_CarDV_SDK_Menu)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon)/OSDIcon/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon)/position/inc\
    $(PATH_project_Dvr_CarDV_SDK_UI)/inc\

PATH_C +=\
	$(PATH_project_Dvr_CarDV_SDK_OSDIcon)/OSDIcon/src\
	$(PATH_project_Dvr_CarDV_SDK_OSDIcon)/OSDIconLarge/src\
	$(PATH_project_Dvr_CarDV_SDK_OSDIcon)/position/src\
