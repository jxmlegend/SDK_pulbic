/***********************************************************************
        Copyright (c) 2002 RADVISION Ltd.
************************************************************************
NOTICE:
This document contains information that is confidential and proprietary
to RADVISION Ltd.. No part of this document may be reproduced in any
form whatsoever without written prior approval by RADVISION Ltd..

RADVISION Ltd. reserve the right to revise this publication and make
changes without obligation to notify any person of such revisions or
changes.
***********************************************************************/

#ifndef _H245_AUTO_CAPS_AMR_H_
#define _H245_AUTO_CAPS_AMR_H_


/*-----------------------------------------------------------------------*/
/*                        INCLUDE HEADER FILES                           */
/*-----------------------------------------------------------------------*/

#include "H245AutoCapsInternal.h"

#ifdef __cplusplus
extern "C" {
#endif

#if (RV_H245_AUTO_CAPS_AMR == RV_YES)
/*-----------------------------------------------------------------------*/
/*                           TYPE DEFINITIONS                            */
/*-----------------------------------------------------------------------*/


/*-----------------------------------------------------------------------*/
/*                           FUNCTIONS HEADERS                           */
/*-----------------------------------------------------------------------*/

/******************************************************************************
 * H245AutoCapsMatchCapabilityAmr
 * ----------------------------------------------------------------------------
 * General: Matching function for AMR capability.
 *
 * Return Value: RV_OK  - if matching.
 *               Other on failure.
 * ----------------------------------------------------------------------------
 * Arguments:
 * Input:  context              - The context of the application.
 *         hPvt                 - The PVT handle.
 *         localCapNodeId       - The local capability ASN.1 node id.
 *         remoteCapNodeId      - The remote capability ASN.1 node id.
 * Output: None.
 *****************************************************************************/
RvStatus RVCALLCONV H245AutoCapsMatchCapabilityAmr (
    IN  void			*context,
    IN  HPVT			hPvt,
    IN  RvPvtNodeId     localCapNodeId,
    IN  RvPvtNodeId     remoteCapNodeId);

/******************************************************************************
 * H245AutoCapsGetGCDCapabilityAmr
 * ----------------------------------------------------------------------------
 * General: Function called when finding GCD between local and
 *          remote Amr capabilities.
 *          
 *          Note that the bitRate parameter is skipped due to the fact that the
 *          bit rate can change during the session.
 * Return Value: RV_OK  - if successful.
 *               Other on failure.
 * ----------------------------------------------------------------------------
 * Arguments:
 * Input:  context              - The context of the application.
 *         hPvt                 - The PVT handle.
 *         localCapNodeId       - The local capability ASN.1 node id.
 *         remoteCapNodeId      - The remote capability ASN.1 node id.
 * Output: bChanged             - Indication that one of the parameters was
 *                                changed during the GCD process.
 *****************************************************************************/
RvStatus RVCALLCONV H245AutoCapsGetGCDCapabilityAmr (
    IN  void			*context,
    IN  HPVT			hPvt,
    IN  RvPvtNodeId     localCapNodeId,
    IN  RvPvtNodeId     remoteCapNodeId,
    OUT RvBool          *bChanged);

#else 
/* RV_H245_AUTO_CAPS_AMR  */
#define H245AutoCapsMatchCapabilityAmr(_context, _hPvt, _localCapNodeId, _remoteCapNodeId) RV_OK
#define H245AutoCapsGetGCDCapabilityAmr(_context, _hPvt, _localCapNodeId, _remoteCapNodeId, _bChanged) RV_OK
#endif  /* RV_H245_AUTO_CAPS_AMR) */

#ifdef __cplusplus
}
#endif

#endif /* _H245_AUTO_CAPS_AMR_H_ */
