#-------------------------------------------------------------------------------
#	${Variable} is generated by script and $(variable) is manually maintained.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
#	Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS = lib

PATH_C +=\
    $(PATH_project_Dvr_CarDV_SDK_sd_updater)/src\

PATH_H += \
    $(PATH_ahc)/inc\
    $(PATH_core_application_mmpd_flow_ctl)/inc\
    $(PATH_core_application_mmps_display)/inc\
    $(PATH_core_application_mmps_system)/inc\
    $(PATH_core_application_mmps_vid_recd)/inc\
    $(PATH_core_driver_bsp)/inc\
    $(PATH_core_driver_common)/inc\
    $(PATH_core_driver_display)/inc\
    $(PATH_core_driver_img_pipe)/inc\
    $(PATH_core_driver_storage)/inc\
    $(PATH_core_include_application)\
    $(PATH_core_include_display)\
    $(PATH_core_include_img_pipe)\
    $(PATH_core_include_misc)\
    $(PATH_core_lib_edog)/inc\
    $(PATH_core_lib_fs)/inc\
    $(PATH_core_lib_gui_inc_Config)\
    $(PATH_core_lib_gui_inc_Core)\
    $(PATH_core_system_fs)/inc\
    $(PATH_core_system_host_if)/inc\
    $(PATH_core_system_misc)/inc\
    $(PATH_core_system_net_lib)/inc\
    $(PATH_core_system_os)/inc\
    $(PATH_core_system_sensor)/inc\
    $(PATH_core_utility)/inc\
    $(PATH_project_Dvr_CarDV_SDK_Menu)/inc\
    $(PATH_project_Dvr_CarDV_SDK_Draw)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon_OSDIcon)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDIcon_position)/inc\
    $(PATH_project_Dvr_CarDV_SDK_OSDString)\
    $(PATH_project_Dvr_CarDV_SDK_UI)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_isp)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_core)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_fs)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_net)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_sdk)/inc\
    $(PATH_project_Dvr_CarDV_SDK_sd_updater)/inc\

#-------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST =\
    SD_Updater.c \
