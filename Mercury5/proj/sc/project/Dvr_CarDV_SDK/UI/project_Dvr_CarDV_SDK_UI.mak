#-------------------------------------------------------------------------------
#	$(Variable) is generated by script and $(variable) is manually maintained.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
#	Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS = lib

PATH_C +=\
    $(PATH_project_Dvr_CarDV_SDK_UI)/src\

PATH_H += \
    $(PATH_ahc)/inc\
    $(PATH_application_sys_utility_FileProspector_Porting)/inc\
    $(PATH_core_application_mmpd_audio)/inc\
    $(PATH_core_application_mmpd_flow_ctl)/inc\
    $(PATH_core_application_mmpd_fs)/inc\
    $(PATH_core_application_mmpd_sensor)/inc\
    $(PATH_core_application_mmpd_usb)/inc\
    $(PATH_core_application_mmps_adas)/inc\
    $(PATH_core_application_mmps_audio)/inc\
    $(PATH_core_application_mmps_display)/inc\
    $(PATH_core_application_mmps_fs)/inc\
    $(PATH_core_application_mmps_sensor)/inc\
    $(PATH_core_application_mmps_system)/inc\
    $(PATH_core_application_mmps_usb)/inc\
    $(PATH_core_application_mmps_vid_recd)/inc\
    $(PATH_core_application_mmps_vid_play)/inc\
    $(PATH_core_application_mmph)/inc\
    $(PATH_core_application_mmpd_vid_play)/inc\
    $(PATH_core_application_mmpd_system)/inc\
    $(PATH_core_application_component)/inc\
    $(PATH_core_driver_rtc)/inc\
    $(PATH_core_driver_gpio)/inc\
    $(PATH_core_driver_bsp)/inc\
    $(PATH_core_driver_common)/inc\
    $(PATH_core_driver_display)/inc\
    $(PATH_core_driver_i2cm)/inc\
    $(PATH_core_driver_img_pipe)/inc\
    $(PATH_core_driver_jpeg)/inc\
    $(PATH_core_driver_misc)/inc\
    $(PATH_core_driver_timer)/inc\
    $(PATH_core_driver_uart)/inc\
    $(PATH_core_include_application)\
    $(PATH_core_include_display)\
    $(PATH_core_include_img_pipe)\
    $(PATH_core_include_misc)\
    $(PATH_core_include_usb)\
    $(PATH_core_lib_algorithm_adas)/inc\
    $(PATH_core_lib_algorithm_edog)/inc\
    $(PATH_core_lib_audio_aac_enc)/inc\
    $(PATH_core_lib_audio_adpcm_common)/inc\
    $(PATH_core_lib_audio_adpcm_wav_dec)/inc\
    $(PATH_core_lib_audio_mp12_dec)/inc\
    $(PATH_core_lib_audio_mp3_dec)/inc\
    $(PATH_core_lib_audio_nr)/inc\
    $(PATH_core_lib_audio_wnr)/inc\
    $(PATH_core_lib_fs)/inc\
    $(PATH_core_lib_edog)/inc\
    $(PATH_core_lib_gui_inc_Config)\
    $(PATH_core_lib_gui_inc_Core)\
    $(PATH_core_lib_isp)/inc\
    $(PATH_core_system_vid_play)/inc\
    $(PATH_core_system_vid_play_inc_parser)\
    $(PATH_core_system_algorithm)/inc\
    $(PATH_core_system_audio_codec_aac_enc)/inc\
    $(PATH_core_system_audio_codec_aacplus_dec)/inc\
    $(PATH_core_system_audio_codec_adpcm_enc)/inc\
    $(PATH_core_system_audio_codec_amr_enc)/inc\
    $(PATH_core_system_audio_codec_g711_enc)/inc\
    $(PATH_core_system_audio_codec_mp3_dec)/inc\
    $(PATH_core_system_audio_codec_mp3_enc)/inc\
    $(PATH_core_system_audio_codec_pcm_enc)/inc\
    $(PATH_core_system_audio_codec_wav_dec)/inc\
    $(PATH_core_system_audio_codec_wav_enc)/inc\
    $(PATH_core_system_audio_control)/inc\
    $(PATH_core_system_audio_nr)/inc\
    $(PATH_core_system_audio_src)/inc\
    $(PATH_core_system_audio_wnr)/inc\
    $(PATH_core_system_buffering)/inc\
    $(PATH_core_system_fs)/inc\
    $(PATH_core_system_gsensor)/inc\
    $(PATH_core_system_host_if)/inc\
    $(PATH_core_system_misc)/inc\
    $(PATH_core_system_net_api)/inc\
    $(PATH_core_system_net_libupnp_core_genlib)/inc\
    $(PATH_core_system_net_libupnp_upnp)/inc\
    $(PATH_core_system_net_lib)/inc\
    $(PATH_core_system_net_lwip_api)/inc\
    $(PATH_core_system_net_lwip_ipv4)/inc\
    $(PATH_core_system_net_lwip_netif)/inc\
    $(PATH_core_system_net_lwip_port)/inc\
    $(PATH_core_system_net_streaming_server)/inc\
    $(PATH_core_system_os)/inc\
    $(PATH_core_system_sensor)/inc\
    $(PATH_core_system_usb_dev_uvc)/inc\
    $(PATH_core_system_usb_dev_vendor)/inc\
    $(PATH_core_system_usb_host)/inc\
    $(PATH_core_system_vid_play)/inc\
    $(PATH_core_system_sys)/inc\
    $(PATH_core_utility)/inc\
    $(PATH_driver_drv_bluetooth_bt_host_arch_rtk_pif_drv)/inc\
    $(PATH_driver_drv_dsp_isw)/inc\
    $(PATH_driver_drv_int_pub)\
    $(PATH_driver_drv_io_pub)\
    $(PATH_driver_drv_timer_pub)\
    $(PATH_driver_hal_infinity_int_pub)\
    $(PATH_driver_hal_infinity_io_pub)\
    $(PATH_driver_hal_infinity_kernel)/inc\
    $(PATH_driver_hal_infinity_timer_pub)\
    $(PATH_core_driver_storage)/inc\
    $(PATH_core_driver_pll)/inc\
    $(PATH_core_driver_adc)/inc\
    $(PATH_middleware_pm_pub)\
    $(PATH_project_Dvr_CarDV_SDK_Menu)/inc\
    $(PATH_project_Dvr_CarDV_SDK_Draw)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon_position)/inc\
    $(PATH_project_Dvr_CarDV_SDK_UI)/inc\
    $(PATH_project_Dvr_CarDV_SDK_UI)/draw/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_isp)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_algorithm_ldws)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_core)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_fs)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_hdr)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_ldc)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_net)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_sdk)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_snr)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_usb)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_vidrec)/inc\
    $(PATH_project_Dvr_CarDV_SDK_sd_updater)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDString)\
    $(PATH_project_Dvr_CarDV_SDK_cfg_comp)/inc\
    $(PATH_system_MsWrapper_pub)\
    $(PATH_system_fc_pub)\
    $(PATH_system_libc)/inc\
    $(PATH_system_rtk_pub)\
    $(PATH_system_sdtarget_common_include)\
    $(PATH_system_sdtarget_wintarget)/inc\
    $(PATH_system_sys_pub)\
    $(PATH_core_system_comp_ctl)/inc\
    $(PATH_vendor_Dtv)\
    $(PATH_vendor_gps)/inc\
    $(PATH_vendor_gsensor)\
    $(PATH_scl)/inc/pq\
    $(PATH_scl_hal)/inc/pq \
    $(PATH_scl_hal)/inc/hal\
    $(PATH_scl_hal)/inc/drv\
    $(PATH_scl_hal)/inc/drv/rtk\
    $(PATH_scl)/inc/rtk\
    $(PATH_scl)/inc/pq\
    $(PATH_scl)/pub\
    $(PATH_scl)/pub/rtk\
    $(PATH_core_system_net_wifi)/inc\
    $(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include)\
    $(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include_proto)\
    $(PATH_vendor_speech)/inc\
    $(PATH_core_system_audio)/codec/pcm_enc/inc\

ifeq ($(filter WIFI_PORT ,$(PP_OPT_COMMON)),WIFI_PORT)
PATH_H += \
    $(PATH_LibSourceInc_wifi)/WiFi-GB9662/wlan/src/dhd/sys\
    $(PATH_LibSourceInc_wifi)/WiFi-GB9662/wlan/src/dongle\
    $(PATH_LibSourceInc_wifi_WiFi-MT7751)/interface/adapter\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/rtk_wifi_api\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/include\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/src/osdep\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/src/osdep/ucosii
endif
    
#-------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST =\
    ahc_callback.c\
    ahc_gsensor_ui.c\
    ahc_main.c\
    ahc_menu.c\
    ahc_mimf.c\
    ahc_task.c\
    ahc_Customer.c\
    ahc_warningmsg.c\
    ahc_wireless.c\
    driving_safety.c\
    dsc_Key.c\
    keyparser.c\
    ledcontrol.c\
    mediaplaybackctrl.c\
    parkingmodectrl.c\
    satemsdcfunc.c\
    soundeffectname.c\
    stateaudiopbfunc.c\
    statebrowserfunc.c\
    statecamerafunc.c\
    statemoviepbfunc.c\
    statenetcgicmdfunc.c\
    statenetplaybackfunc.c\
    statenetstreamingfunc.c\
    statephotopbfunc.c\
    stateplaybackcommonfunc.c\
    statevideofunc.c\
    touchparser.c\
    zoomcontrol.c\
    