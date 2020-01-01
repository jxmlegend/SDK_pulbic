/**
* @file mmi_clsrv_priv.h
*
* Service without using State Machine - CLSRV
* Generated by XFSM v1.0, CodeVer=v0.24  2009-20-02, 09:18:22
*
* Class Id: CLSID_CLSRV
* Interface Id: IID_CLSRV
*
* @version $Id$
*/
#ifndef __MMI_CLSRV_PRIV_H__
#define __MMI_CLSRV_PRIV_H__

/*-------------------------------------------------------------------------*/
#include "mmi_mae_common_content.h"
#include "mmi_srv_filemgr.h"

/*-------------------------------------------------------------------------*/
/* Foreword */
/* User Code Begin */
#include "mmi_log.h"
//---------------------------------------------------------------------------
#define MMI_LEVEL_CLSRV MMI_LEVEL_2
/* User Code End */
/*-------------------------------------------------------------------------*/


typedef enum 
{
	EN_CL_VOL_SD1 = 0,
#ifdef __DUAL_CARD__
	EN_CL_VOL_SD2,
#endif
	EN_CL_VOL_PHON,
	EN_CL_VOL_MAX
}enStgOrder;
 


/**
 * Application structure
 */
typedef struct MMI_CLSRV_TAG {
    DECLARE_FUNCTBL(ICLSRV);	// function table pointer
    u32		refCnt;		// reference count

    /* Add custom fields below */

    /* User Code Begin */
    MAE_WChar wFullDbFilePath[FILEMGR_MAX_FILEPATH_SIZE+1];

	// Accessory service
	IACCESSORYSRV *pIAccessorySrv;
    u8 nStgSearchOrder[EN_CL_VOL_MAX];
	/* User Code End */
} MMI_CLSRV;

// ---------------------------------------------------------------------------

/* User Code End */
/* -------------------------------------------------------------------------*/
#endif /* __MMI_CLSRV_PRIV_H__ */
