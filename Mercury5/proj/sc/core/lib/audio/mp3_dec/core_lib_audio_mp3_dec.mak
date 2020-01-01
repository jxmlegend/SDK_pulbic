#-------------------------------------------------------------------------------
#	Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)

PROCESS = lib

PP_OPT_MP3_MODE_FW    = MP3_MODE_FW

DEBUG_MP3_DECODE   = FALSE

PP_OPT_COMMON += $(PP_OPT_MP3_MODE_FW)

PATH_C +=\
    $(PATH_core_lib_audio_mp3_dec)/src\


PATH_H +=\
    $(PATH_core_lib_audio_mp3_dec)/inc

ifeq ($(DEBUG_MP3_DECODE), TRUE)
PATH_H +=\
	$(PATH_ahc)/inc\
    $(PATH_core_application_mmps_display)/inc\
    $(PATH_core_application_mmps_fs)/inc\
    $(PATH_core_application_mmps_system)/inc\
    $(PATH_core_application_mmps_vid_recd)/inc\
    $(PATH_core_application_mmps_adas)/inc\
    $(PATH_core_application_mmps_audio)/inc\
    $(PATH_core_application_mmps_dsc)/inc\
    $(PATH_core_application_mmps_sensor)/inc\
    $(PATH_core_application_mmps_storage)/inc\
    $(PATH_core_application_mmps_usb)/inc\
    $(PATH_core_application_mmps_vid_play)/inc\
    $(PATH_core_application_mmpd_adas)/inc\
    $(PATH_core_application_mmpd_audio)/inc\
    $(PATH_core_application_mmpd_display)/inc\
    $(PATH_core_application_mmpd_dsc)/inc\
    $(PATH_core_application_mmpd_flow_ctl)/inc\
    $(PATH_core_application_mmpd_fs)/inc\
    $(PATH_core_application_mmpd_sensor)/inc\
    $(PATH_core_application_mmpd_img_pipe)/inc\
    $(PATH_core_application_mmpd_storage)/inc\
    $(PATH_core_application_mmpd_system)/inc\
    $(PATH_core_application_mmpd_usb)/inc\
    $(PATH_core_application_mmpd_vid_play)/inc\
    $(PATH_core_application_mmpd_vid_recd)/inc\
    $(PATH_core_application_component)/inc\
    $(PATH_core_driver_adc)/inc\
    $(PATH_core_driver_audio)/inc\
    $(PATH_core_driver_bsp)/inc\
    $(PATH_core_driver_ccir)/inc\
    $(PATH_core_driver_common)/inc\
    $(PATH_core_driver_img_pipe)/inc\
    $(PATH_core_driver_cpu_comm)/inc\
    $(PATH_core_driver_display)/inc\
    $(PATH_core_driver_dma)/inc\
    $(PATH_core_driver_dram)/inc\
    $(PATH_core_driver_gpio)/inc\
    $(PATH_core_driver_i2cm)/inc\
    $(PATH_core_driver_irda)/inc\
    $(PATH_core_driver_jpeg)/inc\
    $(PATH_core_driver_misc)/inc\
    $(PATH_core_driver_timer)/inc\
    $(PATH_core_driver_uart)/inc\
    $(PATH_core_driver_pll)/inc\
    $(PATH_core_driver_pwm)/inc\
    $(PATH_core_driver_rtc)/inc\
    $(PATH_core_driver_spi)/inc\
    $(PATH_core_driver_storage)/inc\
    $(PATH_core_driver_wd)/inc\
    $(PATH_core_driver_dip)/inc\
	$(PATH_core_include_application)\
	$(PATH_core_include_display)\
    $(PATH_core_include_img_pipe)\
    $(PATH_core_include_misc)\
    $(PATH_core_include_usb)\
	$(PATH_core_lib_fs)/inc\
    $(PATH_core_lib_gui_inc_Config)/inc\
    $(PATH_core_lib_gui_inc_Core)/inc\
    $(PATH_core_system_host_if)/inc\
    $(PATH_core_system_misc)/inc\
    $(PATH_core_system_os)/inc\
    $(PATH_core_system_sensor)/inc\
    $(PATH_core_utility)/inc\
    $(PATH_core_lib_isp)/inc\
    $(PATH_core_system_sys)/inc\
    $(PATH_core_system_sensor)/inc\
    $(PATH_core_system_fs)/inc\
    $(PATH_core_system_audio_control)/inc\
    $(PATH_core_system_algorithm)/inc\
    $(PATH_core_system_audio_agc)/inc\
    $(PATH_core_system_audio_codec_aac_enc)/inc\
    $(PATH_core_system_audio_codec_aacplus_dec)/inc\
	$(PATH_core_system_audio_codec_adpcm_enc)/inc\
	$(PATH_core_system_audio_codec_mp3_enc)/inc\
	$(PATH_core_system_audio_codec_mp3_dec)/inc\
	$(PATH_core_system_audio_codec_wav_enc)/inc\
	$(PATH_core_system_audio_codec_wav_dec)/inc\
	$(PATH_core_system_audio_control)/inc\
	$(PATH_core_system_audio_nr)/inc\
	$(PATH_core_system_audio_sbc)/inc\
	$(PATH_core_system_audio_src)/inc\
	$(PATH_core_system_audio_wnr)/inc\
	$(PATH_core_system_buffering)/inc\
	$(PATH_core_system_comp_ctl)/inc\
	$(PATH_core_system_dsc)/inc\
	$(PATH_core_system_exif)/inc\
	$(PATH_core_system_fs)/inc\
	$(PATH_core_system_gsensor)/inc\
	$(PATH_core_system_gyrosensor)/inc\
	$(PATH_core_system_host_if)/inc\
	$(PATH_core_system_misc)/inc\
	$(PATH_core_system_mm)/inc\
	$(PATH_core_system_multicore)/inc\
	$(PATH_core_system_os)/inc\
	$(PATH_core_system_ptz)/inc\
	$(PATH_core_system_rtc)/inc\
	$(PATH_core_system_sensor)/inc\
	$(PATH_core_system_sys)/inc\
	$(PATH_core_system_touchpanel)/inc\
	$(PATH_core_system_usb_dev)/inc\
	$(PATH_core_system_usb_dev_common)/inc\
	$(PATH_core_system_usb_dev_msdc)/inc\
	$(PATH_core_system_usb_dev_uvc)/inc\
	$(PATH_core_system_usb_dev_vendor)/inc\
	$(PATH_core_system_usb_embed_host)/inc\
	$(PATH_core_system_usb_host)/inc\
	$(PATH_core_system_vid_play)/inc\
	$(PATH_core_system_vid_play_inc_parser)/inc\
	$(PATH_core_system_vid_recd)/inc\
	$(PATH_core_system_vid_play)/inc\
	$(PATH_core_system_vid_play_inc_parser)\
	$(PATH_core_system_net_api)/inc\
	$(PATH_core_system_net_lwip_api)/inc\
	$(PATH_core_system_net_lwip_port)/inc\
	$(PATH_core_system_net_lwip_ipv4)/inc\
	$(PATH_core_system_net_wifi)/inc\
    $(PATH_core_system_net_arch_v4l)/inc\
	$(PATH_core_lib_algorithm)/inc\
	$(PATH_core_lib_algorithm_adas)/inc\
	$(PATH_core_lib_algorithm_mdtc)/inc\
	$(PATH_core_lib_audio)/inc\
	$(PATH_core_lib_audio_aac_enc)/inc\
	$(PATH_core_lib_audio_aacplus_dec)/inc\
	$(PATH_core_lib_audio_adpcm)/inc\
	$(PATH_core_lib_audio_adpcm_common)/inc\
	$(PATH_core_lib_audio_drc)/inc\
	$(PATH_core_lib_audio_eq)/inc\
	$(PATH_core_lib_audio_eq_new)/inc\
	$(PATH_core_lib_audio_mp3_enc)/inc\
	$(PATH_core_lib_audio_mp3_dec)/inc\
	$(PATH_core_lib_audio_mp12_dec)/inc\
	$(PATH_core_lib_video_avc_dec)/inc\
	$(PATH_core_lib_video_rc)/inc\
	$(PATH_core_lib_fs)/inc\
	$(PATH_core_lib_edog)/inc\
	$(PATH_core_lib_gui_inc_Core)\
	$(PATH_core_lib_gui_inc_Config)\
	$(PATH_core_lib_isp)/inc\
	$(PATH_core_system_audio)/codec/pcm_enc/inc\
	$(PATH_core_lib_video_avc_dec)/inc\
	$(PATH_core_lib_video_rc)/inc\
	$(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include)\
    $(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include_proto)\
	$(PATH_bdma)/pub\
	$(PATH_scalar_c3_mvop)/inc\
	$(PATH_dec_scl)/inc\
    $(PATH_jpe)/pub\
    $(PATH_jpe)/test/common\
	$(PATH_hostuvc_mdl)/pub\
	$(PATH_usbhost)/pub\
	$(PATH_scl)/pub\
	$(PATH_scl)/inc/rtk\
	$(PATH_scl_hal)/inc/drv\
	$(PATH_usbhost)/inc/include\
	$(PATH_usbhost_hal)/inc\
	$(PATH_utopia)/common/inc\
	$(PATH_utopia)/msos/inc\
	$(PATH_vendor_gsensor)\
    $(PATH_vendor_ir)\
    $(PATH_vendor_gps)/inc\
    $(PATH_vendor_sensor)\
    $(PATH_vendor_misc)\
    $(PATH_vendor_tpms)\
    $(PATH_project_Dvr_CarDV_SDK_UI)/inc\
    $(PATH_project_Dvr_CarDV_SDK_Draw)/inc\
	$(PATH_project_Dvr_CarDV_SDK_Menu)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_isp)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_core)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_sdk)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_algorithm_mdtc)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_hdr)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_net)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_ptz)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_snr)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_clock)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_comp)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_dram)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_fs)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_ldc)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_sf)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_usb)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_vidrec)/inc\
    $(PATH_project_Dvr_CarDV_SDK_sd_updater)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDString)\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon_OSDIcon)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon_position)/inc\
    $(PATH_core_system_net_wifi)/inc\
    $(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include)\
    $(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include_proto)\
else
endif
#-------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST +=\
    bitstream.c\
    buffers.c\
    dct32.c\
    dequant.c\
    dqchan.c\
    huffman.c\
    hufftabs.c\
    mp3_imdct.c\
    mp3dec.c\
    mp3tabs.c\
    scalfact.c\
    stproc.c\
    subband.c\
    trigtabs.c
ifeq ($(DEBUG_MP3_DECODE), TRUE)
SRC_C_LIST +=\
	mp3decMain.c
endif

SRC_ASM_LIST +=\
    asmpoly.asm