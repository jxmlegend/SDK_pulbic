/**
 * @file mmi_mae_gps.h
 *
 * Service without using State Machine  - GPS
 * Generated by AP Designer v0.24, 2008-17-12 08:49
 *
 * Class Id: CLSID_GPS
 * Interface Id: IID_GPS
 *
 * @version $Id: mmi_mae_gps.h 910 2009-05-18 13:45:14Z steve.lee $
 */
#ifndef __MMI_MAE_GPS_H__
#define __MMI_MAE_GPS_H__
#include "mmi_mae_common_def.h"
#include "mmi_mae_handler.h"
#include "mmi_mae_gps_forward.h"

// Callback function definition
typedef void (*PfnGPSCallback)(void *, MAEGpsCallbackData_t *);

/**
 * External Events
 */

/**
 * IGPS Interfaces
 */
#define INHERIT_IGPS(IName) \
    INHERIT_IHandler(IName); \
    MAE_Ret		(*Register)									(IName *, void *pUserData, PfnGPSCallback pCallback); \
    MAE_Ret		(*UnRegister)									(IName *, void *pUserData); \
    MAE_Ret		(*Open)										(IName *, void *pUserData, MAEGpsAppId_e appId); \
    MAE_Ret		(*Close)										(IName *, void *pUserData, MAEGpsAppId_e appId); \
    MAE_Ret		(*GetData)										(IName *, MAEGpsAppId_e appId, MAEGpsCmd_e cmdId)

DEFINE_INTERFACE(IGPS);

#define IGPS_QueryInterface(pICntlr, nId, pp, po)			GET_FUNCTBL((pICntlr), IGPS)->QueryInterface(pICntlr, nId, pp, po)
#define IGPS_HandleEvent(pICntlr, e, p1, p2)				GET_FUNCTBL((pICntlr), IGPS)->HandleEvent(pICntlr, e, p1, p2)
#define IGPS_Register(pICntlr, p1, p2)						GET_FUNCTBL((pICntlr), IGPS)->Register(pICntlr, p1, p2)
#define IGPS_UnRegister(pICntlr, p1)						GET_FUNCTBL((pICntlr), IGPS)->UnRegister(pICntlr, p1)
#define IGPS_Open(pICntlr, p1, p2)							GET_FUNCTBL((pICntlr), IGPS)->Open(pICntlr, p1, p2)
#define IGPS_Close(pICntlr, p1, p2)							GET_FUNCTBL((pICntlr), IGPS)->Close(pICntlr, p1, p2)
#define IGPS_GetData(pICntlr, p1, p2)					GET_FUNCTBL((pICntlr), IGPS)->GetData(pICntlr, p1, p2)

/**
 * Functions
 */
void GPS_Init(void);

MAE_Ret GPS_New(MAE_ClsId nId, void **ppObj);

#endif /* __MMI_MAE_GPS_H__ */
