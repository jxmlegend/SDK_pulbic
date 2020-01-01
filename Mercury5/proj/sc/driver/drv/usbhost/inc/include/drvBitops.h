//<MStar Software>
//******************************************************************************
// MStar Software
// Copyright (c) 2010 - 2012 MStar Semiconductor, Inc. All rights reserved.
// All software, firmware and related documentation herein ("MStar Software") are
// intellectual property of MStar Semiconductor, Inc. ("MStar") and protected by
// law, including, but not limited to, copyright law and international treaties.
// Any use, modification, reproduction, retransmission, or republication of all
// or part of MStar Software is expressly prohibited, unless prior written
// permission has been granted by MStar.
//
// By accessing, browsing and/or using MStar Software, you acknowledge that you
// have read, understood, and agree, to be bound by below terms ("Terms") and to
// comply with all applicable laws and regulations:
//
// 1. MStar shall retain any and all right, ownership and interest to MStar
//    Software and any modification/derivatives thereof.
//    No right, ownership, or interest to MStar Software and any
//    modification/derivatives thereof is transferred to you under Terms.
//
// 2. You understand that MStar Software might include, incorporate or be
//    supplied together with third party`s software and the use of MStar
//    Software may require additional licenses from third parties.
//    Therefore, you hereby agree it is your sole responsibility to separately
//    obtain any and all third party right and license necessary for your use of
//    such third party`s software.
//
// 3. MStar Software and any modification/derivatives thereof shall be deemed as
//    MStar`s confidential information and you agree to keep MStar`s
//    confidential information in strictest confidence and not disclose to any
//    third party.
//
// 4. MStar Software is provided on an "AS IS" basis without warranties of any
//    kind. Any warranties are hereby expressly disclaimed by MStar, including
//    without limitation, any warranties of merchantability, non-infringement of
//    intellectual property rights, fitness for a particular purpose, error free
//    and in conformity with any international standard.  You agree to waive any
//    claim against MStar for any loss, damage, cost or expense that you may
//    incur related to your use of MStar Software.
//    In no event shall MStar be liable for any direct, indirect, incidental or
//    consequential damages, including without limitation, lost of profit or
//    revenues, lost or damage of data, and unauthorized system use.
//    You agree that this Section 4 shall still apply without being affected
//    even if MStar Software has been modified by MStar in accordance with your
//    request or instruction for your use, except otherwise agreed by both
//    parties in writing.
//
// 5. If requested, MStar may from time to time provide technical supports or
//    services in relation with MStar Software to you for your use of
//    MStar Software in conjunction with your or your customer`s product
//    ("Services").
//    You understand and agree that, except otherwise agreed by both parties in
//    writing, Services are provided on an "AS IS" basis and the warranty
//    disclaimer set forth in Section 4 above shall apply.
//
// 6. Nothing contained herein shall be construed as by implication, estoppels
//    or otherwise:
//    (a) conferring any license or right to use MStar name, trademark, service
//        mark, symbol or any other identification;
//    (b) obligating MStar or any of its affiliates to furnish any person,
//        including without limitation, you and your customers, any assistance
//        of any kind whatsoever, or any information; or
//    (c) conferring any license or right under any intellectual property right.
//
// 7. These terms shall be governed by and construed in accordance with the laws
//    of Taiwan, R.O.C., excluding its conflict of law rules.
//    Any and all dispute arising out hereof or related hereto shall be finally
//    settled by arbitration referred to the Chinese Arbitration Association,
//    Taipei in accordance with the ROC Arbitration Law and the Arbitration
//    Rules of the Association by three (3) arbitrators appointed in accordance
//    with the said Rules.
//    The place of arbitration shall be in Taipei, Taiwan and the language shall
//    be English.
//    The arbitration award shall be final and binding to both parties.
//
//******************************************************************************
//<MStar Software>
#ifndef __DRV_BITOPS_H
#define __DRV_BITOPS_H

#include <MsTypes.h>

/* find first bit set */
static __inline__ int generic_ffs(int x)
{
	int r = 1;

	if (!x)
		return 0;
	if (!(x & 0xffff))
	{
		x >>= 16;
		r += 16;
	}
	if (!(x & 0xff))
	{
		x >>= 8;
		r += 8;
	}
	if (!(x & 0xf))
	{
		x >>= 4;
		r += 4;
	}
	if (!(x & 3))
	{
		x >>= 2;
		r += 2;
	}
	if (!(x & 1))
	{
		x >>= 1;
		r += 1;
	}
	return r;
}

static __inline__ int __test_bit(int nr, const MS_U32 * p)
{
	return (p[nr >> 5] >> (nr & 31)) & 1UL;
}

#define ms_find_1st_set(x)      generic_ffs(x)
#define ms_test_bit(nr,p)       __test_bit(nr,p)
#define ms_clear_bit(nr,addr,type) *(addr) = (volatile type )( (~( (type)1 << (type)nr)) & (type)(*((volatile type *)(addr))))
#define ms_set_bit(nr,addr,type)   *(addr) = (volatile type )( ( ( (type)1 << (type)nr)) | (type)(*((volatile type *)(addr))))

static __inline__ void ms_devmap_clear_bit(MS_U32 nr, MS_U32 *p)
{
	int bit = nr & (8 * sizeof(MS_U32) - 1);
	int idx = nr >> 5;

	ms_clear_bit(bit, &p[idx], MS_U32);
}

static __inline__ void ms_devmap_set_bit(MS_U32 nr, MS_U32 *p)
{
	int bit = nr & (8 * sizeof(MS_U32) - 1);
	int idx = nr >> 5;

	ms_set_bit(bit, &p[idx], MS_U32);
}

static __inline__ int __ms_test_and_clear_bit_le(MS_U32 nr, MS_U32 *p)
{
	int oldVal = (*p >> (nr & 31)) & 1UL;

	ms_clear_bit(nr, p, MS_U32);
	return oldVal;
}

static __inline__ int __ms_test_and_set_bit_le(MS_U32 nr, MS_U32 *p)
{
	int oldVal = (*p >> (nr & 31)) & 1UL;

	ms_set_bit(nr, p, MS_U32);
	return oldVal;
}

/* APIs for little endian */
#define ms_test_and_set_bit(nr,p)    __ms_test_and_set_bit_le(nr,p)
#define ms_test_and_clear_bit(nr,p)  __ms_test_and_clear_bit_le(nr,p)
extern int find_next_zero_bit_le (void *p, int size, int offset);
#define find_next_zero_bit(p,size,offset)  find_next_zero_bit_le(p,size,offset)

#endif