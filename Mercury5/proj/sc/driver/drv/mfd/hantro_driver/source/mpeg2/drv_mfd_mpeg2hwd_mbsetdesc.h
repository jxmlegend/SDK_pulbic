/*------------------------------------------------------------------------------
--                                                                            --
--       This software is confidential and proprietary and may be used        --
--        only as expressly authorized by a licensing agreement from          --
--                                                                            --
--                            Hantro Products Oy.                             --
--                                                                            --
--                   (C) COPYRIGHT 2006 HANTRO PRODUCTS OY                    --
--                            ALL RIGHTS RESERVED                             --
--                                                                            --
--                 The entire notice above must be reproduced                 --
--                  on all copies and should not be removed.                  --
--                                                                            --
--------------------------------------------------------------------------------
--
--  Abstract : algorithm header file
--
--------------------------------------------------------------------------------
--
--  Version control information, please leave untouched.
--
--  $RCSfile: mpeg2hwd_mbsetdesc.h,v $
--  $Date: 2007/11/20 08:45:36 $
--  $Revision: 1.6 $
------------------------------------------------------------------------------*/
#ifdef _HANTRO_M2V_EN_
#ifndef MPEG2DECMBSETDESC_DEFINED
#define MPEG2DECMBSETDESC_DEFINED

#include "drv_mfd_basetype.h"
#include "drv_mfd_dwl.h"
#include "drv_mfd_mpeg2decapi.h"

typedef struct
{
    Mpeg2DecOutput outData; /* Return PIC info */

} DecMbSetDesc;

#endif /* #ifndef MPEG2DECMBSETDESC_DEFINED */
#endif // _HANTRO_M2V_EN_