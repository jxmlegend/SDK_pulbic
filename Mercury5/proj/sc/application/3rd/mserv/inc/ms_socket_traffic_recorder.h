#ifndef __MS_SOCKET_TRAFFIC_RECORDER_H__
#define __MS_SOCKET_TRAFFIC_RECORDER_H__

#include "vm_types.ht"

typedef void* Mserv_DataTrafficStatus_t;
typedef void* Mserv_DataTrafficRecorderHdl_t;

/// Factory can be separated from the file
/// Factory
Mserv_DataTrafficRecorderHdl_t Mserv_DataTrafficRecorderFactory_Create(void);
void Mserv_DataTrafficRecorderFactory_Destroy(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);


/// Utility

void Mserv_DataTrafficRecorder_SetRxInActive(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);
void Mserv_DataTrafficRecorder_SetRxActive(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);
bool Mserv_DataTrafficRecorder_IsRxActive(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);

void Mserv_DataTrafficRecorder_SetTxInActive(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);
void Mserv_DataTrafficRecorder_SetTxActive(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);
bool Mserv_DataTrafficRecorder_IsTxActive(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);

Mserv_DataTrafficStatus_t Mserv_DataTrafficRecorder_GetStatus(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);

void Mserv_DataTrafficRecorder_ReSetAll(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder);
void Mserv_DataTrafficRecorder_Assign(Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder_lhs, Mserv_DataTrafficRecorderHdl_t hDataTrafficRecorder_rhs);

bool Mserv_DataTrafficRecorder_HasTxTraffic(Mserv_DataTrafficStatus_t sStatus);
bool Mserv_DataTrafficRecorder_HasRxTraffic(Mserv_DataTrafficStatus_t sStatus);

#endif/* __MS_SOCKET_TRAFFIC_RECORDER_H__ */