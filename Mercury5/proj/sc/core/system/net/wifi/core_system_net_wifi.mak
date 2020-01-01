#-------------------------------------------------------------------------------
#	$(Variable) is generated by script and $(variable) is manually maintained.
#-------------------------------------------------------------------------------

#-------------------------------------------------------------------------------
#	Description of some variables owned by the library
#-------------------------------------------------------------------------------
# Library module (lib) or Binary module (bin)
PROCESS = lib

PATH_C +=\
    $(PATH_core_system_net_wifi)/src\

PATH_H += \
    $(PATH_ahc)/inc\
    $(PATH_application_sys_utility_FileProspector_Porting)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_isp)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_core)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_net)/inc\
    $(PATH_project_Dvr_CarDV_SDK_cfg_sdk)/inc\
    $(PATH_project_Dvr_CarDV_SDK_UI)/inc\
    $(PATH_project_Dvr_CarDV_SDK_Menu)/inc\
    $(PATH_core_application_mmpd_flow_ctl)/inc\
    $(PATH_core_application_mmps_display)/inc\
    $(PATH_core_application_mmps_system)/inc\
    $(PATH_core_application_mmps_vid_recd)/inc\
    $(PATH_core_driver_bsp)/inc\
    $(PATH_core_driver_common)/inc\
    $(PATH_core_driver_img_pipe)/inc\
    $(PATH_core_driver_misc)/inc\
    $(PATH_core_driver_pwm)/inc\
    $(PATH_core_driver_timer)/inc\
    $(PATH_core_driver_uart)/inc\
    $(PATH_core_include_application)\
    $(PATH_core_include_display)\
    $(PATH_core_include_img_pipe)\
    $(PATH_core_include_misc)\
    $(PATH_core_lib_fs)/inc\
    $(PATH_core_lib_gui_inc_Config)\
    $(PATH_core_lib_gui_inc_Core)\
    $(PATH_core_lib_isp)/inc\
    $(PATH_core_system_buffering)/inc\
    $(PATH_core_system_host_if)/inc\
    $(PATH_core_system_misc)/inc\
    $(PATH_core_system_mm)/inc\
    $(PATH_core_system_net_api)/inc\
    $(PATH_core_system_net_arch_v4l_src)\
    $(PATH_core_system_net_arch_v4l)/inc\
    $(PATH_core_system_net_dhcp)/inc\
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
    $(PATH_core_system_vid_play)/inc\
    $(PATH_core_utility)/inc\
    $(PATH_driver_drv_bluetooth_bt_host_arch_rtk_pif_drv)/inc\
    $(PATH_driver_drv_int_pub)\
    $(PATH_driver_drv_io_pub)\
    $(PATH_driver_drv_timer_pub)\
    $(PATH_driver_hal_infinity_int_pub)\
    $(PATH_driver_hal_infinity_io_pub)\
    $(PATH_driver_hal_infinity_kernel)/inc\
    $(PATH_driver_hal_infinity_timer_pub)\
    $(PATH_middleware_pm_pub)\
    $(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include)\
    $(PATH_LibSourceInc_wifi_WiFi-BCM-SDIO_wlan_src_include_proto)\
    $(PATH_system_MsWrapper_pub)\
    $(PATH_system_fc_pub)\
    $(PATH_system_libc)/inc\
    $(PATH_system_rtk_pub)\
    $(PATH_system_sdtarget_common_include)\
    $(PATH_system_sdtarget_wintarget)/inc\
    $(PATH_system_sys_pub)\
    $(PATH_core_system_net_wifi)/inc\

ifeq ($(filter WIFI_PORT ,$(PP_OPT_COMMON)),WIFI_PORT)
PATH_H += \
    $(PATH_LibSourceInc_wifi)/WiFi-BCM-SDIO/wlan/src/dhd/sys\
    $(PATH_LibSourceInc_wifi)/WiFi-BCM-SDIO/wlan/src/dongle\
    $(PATH_LibSourceInc_wifi_WiFi-MT7751)/interface/adapter\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/rtk_wifi_api\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/include\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/src/osdep\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/src/osdep/ucosii\
    $(PATH_LibSourceInc_wifi_WiFi-RTL8189)/src/osdep/rtk\
    $(PATH_LibSourceInc_wifi_WiFi-ATBM6022)/api\
    $(PATH_utopia)/common/inc\
    $(PATH_utopia)/msos/inc\
    $(PATH_usbhost)/pub\
    $(PATH_usbhost)/inc/include\
    $(PATH_usbhost_hal)/inc
endif

#-------------------------------------------------------------------------------
#	List of source files of the library or executable to generate
#-------------------------------------------------------------------------------
SRC_C_LIST =\
    wlanif.c \
    rtkos_osl_ext.c \
    rtkos_osl.c \
    wlan_cli.c\

ifeq ($(filter MTK_7601_WIFI ,$(PP_OPT_COMMON)),MTK_7601_WIFI)
SRC_C_LIST +=\
    wlan_dummy_lib.c\
    wlan_MTK.c
endif

ifeq ($(filter BCM_AP6181_WIFI ,$(PP_OPT_COMMON)),BCM_AP6181_WIFI)
SRC_C_LIST +=\
    wlan_BCM.c
endif

ifeq ($(filter RTK_8188ftv_WIFI ,$(PP_OPT_COMMON)),RTK_8188ftv_WIFI)
SRC_C_LIST +=\
    wlan_RTK.c
endif

ifeq ($(filter ATBM_6022_WIFI ,$(PP_OPT_COMMON)),ATBM_6022_WIFI)
SRC_C_LIST +=\
    wlan_ATBM.c
endif