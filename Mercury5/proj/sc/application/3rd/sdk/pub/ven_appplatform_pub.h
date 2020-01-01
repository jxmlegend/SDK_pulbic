/**
 *
 * @file    ven_appplatform.h
 * @brief
 *
 * @author
 * @version $Id$
 *
 */

#ifdef __DECLARE_VEN_TASK_TABLE__
/*===== Do not modify anything below this line =====*/
DECLARE_VEN_TASK_STACK(VEN_TASK_1, VEN_TASK_STACK_1)
DECLARE_VEN_TASK_STACK(VEN_TASK_2, VEN_TASK_STACK_2)
DECLARE_VEN_TASK_STACK(VEN_TASK_3, VEN_TASK_STACK_3)
DECLARE_VEN_TASK_STACK(VEN_TASK_4, VEN_TASK_STACK_4)
DECLARE_VEN_TASK_STACK(VEN_TASK_5, VEN_TASK_STACK_5)
DECLARE_VEN_TASK_STACK(VEN_TASK_6, VEN_TASK_STACK_6)
/*===== Do not modify anything above this line =====*/
#endif // __DECLARE_VEN_TASK_TABLE__


/*===== Do not modify anything below this line =====*/
MAKE_VEN_APP_ITEM(E_VEN_WAP_INFRAWARE, VEN_WAP, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_LOW, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)

#if defined(__JAVA_OAKMONT__)
MAKE_VEN_APP_ITEM(E_VEN_JAVA, VEN_JAVA, MNU_STYLE_STATIC, CLSID_JAVAAPP, VEN_TASK_NUM, CPU_SPEED_HIGH, 0, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
MAKE_VEN_APP_ITEM(E_VEN_JVM, VEN_JVM, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#elif defined(__JAVA_DELTA__)
MAKE_VEN_APP_ITEM(E_VEN_JAVA, VEN_JAVA, MNU_STYLE_STATIC, CLSID_JAVAAPP, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
MAKE_VEN_APP_ITEM(E_VEN_JVM, VEN_JVM, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#elif defined(__NCC_3RD_JAVA_PORTING_LAYER__)
MAKE_VEN_APP_ITEM(E_VEN_JAVA, VEN_JAVA, MNU_STYLE_STATIC, CLSID_JAVAAPP, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
MAKE_VEN_APP_ITEM(E_VEN_JVM, VEN_JVM, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_JAVA, VEN_JAVA, MNU_STYLE_STATIC, CLSID_JAVAAPP, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
MAKE_VEN_APP_ITEM(E_VEN_JVM, VEN_JVM, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

#ifdef __WAP_MMI_CDWAP__
DECLARE_VEN_APP_INIT_FUNC(cdwap_app_init)
MAKE_VEN_APP_ITEM(E_VEN_WAP_CD, VEN_CDWAP, MNU_STYLE_STATIC, CLSID_CDWAPAPP, VEN_TASK_NUM, CPU_SPEED_LOW, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, cdwap_app_init, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_WAP_CD, VEN_CDWAP, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

#ifdef __EMAIL_MMI__
DECLARE_VEN_APP_INIT_FUNC(email_app_init)
MAKE_VEN_APP_ITEM(E_VEN_EMAIL, VEN_EMAIL, MNU_STYLE_STATIC, CLSID_EMAIL, VEN_TASK_NUM, CPU_SPEED_LOW, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, email_app_init, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_EMAIL, VEN_EMAIL, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

#ifdef __NCCQQ_MMI__
DECLARE_VEN_APP_INIT_FUNC(QQAppInit)
MAKE_VEN_APP_ITEM(E_VEN_QQ, VEN_QQ, MNU_STYLE_STATIC, CLSID_QQCLIENT, VEN_TASK_NUM, CPU_SPEED_LOW, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, QQAppInit, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_QQ, VEN_QQ, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif // #ifdef __NCCQQ_MMI__

#ifdef __MAP_MMI_LBS__
MAKE_VEN_APP_ITEM(E_VEN_TEMOBI_LBS, VEN_TEMOBI_LBS, MNU_STYLE_STATIC, CLSID_MAPAPP, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_TEMOBI_LBS, VEN_TEMOBI_LBS, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

#ifdef __WLAN_MMI__
MAKE_VEN_APP_ITEM(E_VEN_WLAN, VEN_WLAN, MNU_STYLE_STATIC, CLSID_WLANSRV, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_WLAN, VEN_WLAN, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

#ifdef __FT_AUTO_TEST__
MAKE_VEN_APP_ITEM(E_VEN_AUTO_TEST, VEN_AUTO_TEST, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_AUTO_TEST, VEN_AUTO_TEST, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

#ifdef __HTTP_STREAMING__
MAKE_VEN_APP_ITEM(E_VEN_HTTP, VEN_HTTP, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_LOW, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_HTTP, VEN_HTTP, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

#ifdef __RTSP_STREAMING__
MAKE_VEN_APP_ITEM(E_VEN_RTSP, VEN_RTSP, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_LOW, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#else
MAKE_VEN_APP_ITEM(E_VEN_RTSP, VEN_RTSP, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_LOW, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
#endif

MAKE_VEN_APP_ITEM(E_VEN_PLATFORM, VEN_PLATFORM, MNU_STYLE_STATIC, 0, VEN_TASK_NUM, CPU_SPEED_HIGH, VEN_UI_INT_NORMAL, VEN_DBG_GROUP_0, FALSE, NULL, NULL, NULL, NULL, NULL)
/*===== Do not modify anything above this line =====*/
