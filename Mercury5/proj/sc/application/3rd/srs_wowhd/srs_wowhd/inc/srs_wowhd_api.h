/********************************************************************************
 *	SRS Labs CONFIDENTIAL
 *	@Copyright 2010 by SRS Labs.
 *	All rights reserved.
 *
 *  Description:
 *  Exposes all srs_wowhd APIs
 *
 *	Author: Zesen Zhuang
 *
 *  RCS keywords:
 *	$Id: //srstech/srs_wowhd/std_fxp/include/srs_wowhd_api.h#6 $
 *  $Author: oscarh $
 *  $Date: 2010/12/17 $
 *
********************************************************************************/

#ifndef __SRS_WOWHD_API_H__
#define __SRS_WOWHD_API_H__

#include "srs_wowhd_def.h"
#include "srs_fxp.h"


#ifdef __cplusplus
extern "C"{
#endif /*__cplusplus*/

//API declaration here:

SRSWowhdObj		SRS_CreateWowhdObj(void* pBuf);

void		SRS_InitWowhdObj8k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj11k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj16k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj22k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj24k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj32k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj44k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj48k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj88k(SRSWowhdObj wowhdObj);
void		SRS_InitWowhdObj96k(SRSWowhdObj wowhdObj);

SRSResult		SRS_Wowhd(SRSWowhdObj wowhdObj, SRSStereoCh *input, SRSStereoCh *output, int blockSize, void *ws);
SRSResult		SRS_WowhdProcess(SRSWowhdObj wowhdObj, SRSStereoCh *input, SRSStereoCh *output, int blockSize, void *ws);

//"Set" functions:
void		SRS_SetWowhdControlDefaults(SRSWowhdObj wowhdObj);
void		SRS_SetWowhdEnable(SRSWowhdObj wowhdObj, int enable);
SRSResult	SRS_SetWowhdInputGain(SRSWowhdObj wowhdObj, srs_int16 gain);	//i16.1 0.0-1.0
SRSResult	SRS_SetWowhdOutputGain(SRSWowhdObj wowhdObj, srs_int16 gain);	//i16.1 0.0-1.0
SRSResult	SRS_SetWowhdBypassGain(SRSWowhdObj wowhdObj, srs_int16 gain);	//i16.1 0.0-1.0

/* srs3d sub component */
void		SRS_SetWowhdSrs3dEnable(SRSWowhdObj wowhdObj, int enable);
SRSResult	SRS_SetWowhdSrs3dSpaceCtrl(SRSWowhdObj wowhdObj, srs_int16 ctrl);	//0.0-1.0
SRSResult	SRS_SetWowhdSrs3dCenterCtrl(SRSWowhdObj wowhdObj, srs_int16 ctrl);	//0.0-1.0
void		SRS_SetWowhdSrs3dHeadphone(SRSWowhdObj wowhdObj, int ishp);
void		SRS_SetWowhdSrs3dHighBitRate(SRSWowhdObj wowhdObj, int hbrate);
void			SRS_SetWowhdSrs3dMode(SRSWowhdObj wowhdObj, SRSSrs3dMode mode);

/* trubass sub component */
void		SRS_SetWowhdTBEnable(SRSWowhdObj wowhdObj, int enable);
SRSResult	SRS_SetWowhdTBControl(SRSWowhdObj wowhdObj, srs_int16 ctrl);
void		SRS_SetWowhdTBSpeakerSize(SRSWowhdObj wowhdObj, SRSSATruBassSpeakerSize sz);
SRSResult	SRS_SetWowhdTBCustomSpeakerFilterCoefs(SRSWowhdObj wowhdObj, const srs_int32 *coefs); //Set custom speaker coefficients
void		SRS_SetWowhdTBSplitAnalysisEnable(SRSWowhdObj wowhdObj, int enable);				//disabled by default
void		SRS_SetWowhdTBMode(SRSWowhdObj wowhdObj, SRSSATruBassMode mode);
SRSResult	SRS_SetWowhdTBCompressorCtrl(SRSWowhdObj wowhdObj, srs_int16 ctrl); //TB compressor ctrl, 0~1.0, default 0.25, I16.SRS_SATB_CTRL_IWL

/* definition sub component */
void		SRS_SetWowhdDefEnable(SRSWowhdObj wowhdObj, int enable);
SRSResult	SRS_SetWowhdDefFactor(SRSWowhdObj wowhdObj, srs_int16 factor);

/* focus sub component */
void		SRS_SetWowhdFocusEnable(SRSWowhdObj wowhdObj, int enable);
SRSResult	SRS_SetWowhdFocusFactor(SRSWowhdObj wowhdObj, srs_int16 factor);

/* limiter sub component */
SRSResult	SRS_SetWowhdLmtMinimalGain(SRSWowhdObj wowhdObj, srs_int32 minGain);	//i32.2
void		SRS_SetWowhdLmtEnable(SRSWowhdObj wowhdObj, int enable);


//"Get" functions:
int			SRS_GetWowhdEnable(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdInputGain(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdOutputGain(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdBypassGain(SRSWowhdObj wowhdObj);

/* srs3d sub component */
int			SRS_GetWowhdSrs3dEnable(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdSrs3dSpaceCtrl(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdSrs3dCenterCtrl(SRSWowhdObj wowhdObj);
int			SRS_GetWowhdSrs3dHeadphone(SRSWowhdObj wowhdObj);
int			SRS_GetWowhdSrs3dHighBitRate(SRSWowhdObj wowhdObj);
SRSSrs3dMode	SRS_GetWowhdSrs3dMode(SRSWowhdObj wowhdObj);

/* trubass sub component */
int			SRS_GetWowhdTBEnable(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdTBControl(SRSWowhdObj wowhdObj);						//I16.SRS_STB_CTRL_IWL
SRSSATruBassSpeakerSize	SRS_GetWowhdTBSpeakerSize(SRSWowhdObj wowhdObj);
SRSSATruBassMode		SRS_GetWowhdTBMode(SRSWowhdObj wowhdObj);
SRSSATruBassCustomSpeakerCoefs	SRS_GetWowhdTBCustomSpeakerFilterCoefs(SRSWowhdObj wowhdObj);
int			SRS_GetWowhdTBSplitAnalysisEnable(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdTBCompressorCtrl(SRSWowhdObj wowhdObj);

/* definition sub component */
int			SRS_GetWowhdDefEnable(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdDefFactor(SRSWowhdObj wowhdObj);

/* focus sub component */
int			SRS_GetWowhdFocusEnable(SRSWowhdObj wowhdObj);
srs_int16	SRS_GetWowhdFocusFactor(SRSWowhdObj wowhdObj);

/* limiter sub component */
srs_int32	SRS_GetWowhdLmtMinimalGain(SRSWowhdObj wowhdObj);
int			SRS_GetWowhdLmtEnable(SRSWowhdObj wowhdObj);

//Version query:
unsigned char SRS_GetWowhdTechVersion(SRSVersion which);
unsigned char SRS_GetWowhdLibVersion(SRSVersion which);

#ifdef __cplusplus
}
#endif /*__cplusplus*/


#endif /*__SRS_WOWHD_API_H__*/
