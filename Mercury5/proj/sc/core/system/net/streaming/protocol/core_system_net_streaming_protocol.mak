#-------------------------------------------------------------------------------
#	$(Variable) is generated by script and $(variable) is manually maintained.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
#	Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS = lib

PATH_C +=\
    $(PATH_core_system_net_streaming_protocol)/src\

PATH_H += \
    $(PATH_ahc)/inc\
    $(PATH_application_sys_utility_FileProspector_Porting)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_net)/inc\
    $(PATH_core_driver_common)/inc\
    $(PATH_core_driver_misc)/inc\
    $(PATH_core_driver_timer)/inc\
    $(PATH_core_lib_fs)/inc\
    $(PATH_core_lib_gui_inc_Core)\
    $(PATH_core_system_net_api)/inc\
    $(PATH_core_system_net_libupnp_core_genlib)/inc\
    $(PATH_core_system_net_libupnp_ixml)/inc\
    $(PATH_core_system_net_libupnp_pthread)/inc\
    $(PATH_core_system_net_libupnp_threadutil)/inc\
    $(PATH_core_system_net_libupnp_upnp)/inc\
    $(PATH_core_system_net_lib)/inc\
    $(PATH_core_system_net_lwip_api)/inc\
    $(PATH_core_system_net_lwip_ipv4)/inc\
    $(PATH_core_system_net_lwip_netif)/inc\
    $(PATH_core_system_net_lwip_port)/inc\
    $(PATH_core_system_net_streaming_protocol)/inc\
    $(PATH_core_system_net_streaming_server)/inc\
    $(PATH_core_system_os)/inc\
    $(PATH_driver_drv_int_pub)\
    $(PATH_driver_drv_io_pub)\
    $(PATH_driver_drv_timer_pub)\
    $(PATH_driver_hal_infinity_int_pub)\
    $(PATH_driver_hal_infinity_io_pub)\
    $(PATH_driver_hal_infinity_kernel)/inc\
    $(PATH_driver_hal_infinity_timer_pub)\
    $(PATH_middleware_pm_pub)\
    $(PATH_system_MsWrapper_pub)\
    $(PATH_system_fc_pub)\
    $(PATH_system_rtk_pub)\
    $(PATH_system_sdtarget_common_include)\
    $(PATH_system_sdtarget_wintarget)/inc\
    $(PATH_system_sys_pub)

#-------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST =\
    http-auth.c \
    rtp-h263.c \
    rtp-h264.c \
    rtp-jpeg.c \
    rtp-mpa.c \
    rtp-mpeg4.c \
    rtp-mpeg4generic.c \
    rtp-mpv.c \
    rtp-rawaudio.c \
    rtp.c \
    rtsp.c \
