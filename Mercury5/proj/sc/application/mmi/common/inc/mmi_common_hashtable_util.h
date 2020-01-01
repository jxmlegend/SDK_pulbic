////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (��MStar Confidential Information��) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

/**
* @file    mmi_common_hashtable_util.h
* @version
* @brief
*
*/

#ifndef __MMI_COMMON_HASHTABLE_UTIL_H__
#define __MMI_COMMON_HASHTABLE_UTIL_H__

// String hash function from Daniel J. Bernstein
unsigned int hashtable_hash_djb2(void *pKey);
unsigned int hashtable_hash_int(void *pKey);
unsigned int hashtable_wstr_int(u16 *pKey, u16 u16ClusterLen);
unsigned int hashtable_wstr_equals(void *pKey1, void *pKey2);
unsigned int hashtable_str_equals(void *pKey1, void *pKey2);
unsigned int hashtable_int_equals(void *pKey1, void *pKey2);

#endif /* __MMI_COMMON_HASHTABLE_UTIL_H__ */
