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
* @file    drv_clkgen_cmu_types.h
* @version
* @brief   Clock Management Unit driver
*
*/

#ifndef __DRV_CLKGEN_CMU_TYPES_H__
#define __DRV_CLKGEN_CMU_TYPES_H__

/*=============================================================*/
// Include files
/*=============================================================*/

#include "vm_types.ht"
#include "sys_sys_vm_sys.h"
#include "hal_clkgen_common.h"

/*=============================================================*/
// Macro definition
/*=============================================================*/

#define LOG_CLKGEN_TRACE (_SYS|LEVEL_4)
#define LOG_CLKGEN_ERROR (_SYS|LEVEL_4)
#define LOG_CLKGEN_FATAL (_SYS|LEVEL_4|FATAL)

/*=============================================================*/
// Data type definition
/*=============================================================*/

opaque_enum(ClkgenResult_e_)
{
    CLKGEN_SUCCESS = 0,
    CLKGEN_INVALID_PARAMETER,
    CLKGEN_MODULE_NOT_SUPPORT,
    CLKGEN_CLOCK_NOT_SUPPORT,
    CLKGEN_SPEED_NOT_SUPPORT,
    CLKGEN_INTERNAL_ERROR,
};

opaque_enum(ClkgenModule_e_)
{
    CLKGEN_DRV_MFE,
    CLKGEN_DRV_VHE,
    CLKGEN_DRV_HVSP1,
    CLKGEN_DRV_HVSP2,
    CLKGEN_DRV_HVSP3,
    CLKGEN_DRV_SCLDMA1,
    CLKGEN_DRV_SCLDMA2,
    CLKGEN_DRV_SCLDMA3,
    CLKGEN_DRV_SCLDMA4,
    CLKGEN_DRV_UART0,
    CLKGEN_DRV_UART1,
    CLKGEN_DRV_UART2,
    CLKGEN_DRV_FUART,
    CLKGEN_DRV_EMAC,
    CLKGEN_DRV_FLASHISP,
    CLKGEN_DRV_NANDFLASH,
    CLKGEN_DRV_SPINANDFLASH,
    CLKGEN_DRV_MSTAR_EHCI1,
    CLKGEN_DRV_MSTAR_EHCI2,
    CLKGEN_DRV_ISP,
    CLKGEN_DRV_JPE0,
    CLKGEN_DRV_IVE0,
    CLKGEN_DRV_I2C0,
    CLKGEN_DRV_I2C1,
    CLKGEN_DRV_I2C2,
    CLKGEN_DRV_I2C3,
    CLKGEN_DRV_AUDIO,
    CLKGEN_DRV_SDMMC,
    CLKGEN_DRV_AESDMA,
    CLKGEN_DRV_GOP,
    CLKGEN_DRV_GOP1,
    CLKGEN_DRV_GOP2,
    CLKGEN_DRV_RTC,
    CLKGEN_DRV_PWM,
    CLKGEN_DRV_CORE,
    CLKGEN_DRV_HVD,
    CLKGEN_DRV_HVD_IDB,    
    CLKGEN_DRV_VD_R2,	
    CLKGEN_DRV_DIP,
    CLKGEN_DRV_ARMPLL,
    CLKGEN_MOD_INVALID,
};

opaque_enum(ClkgenClkReq_e_)
{
    CLKGEN_CLK_REQ_ON = 0,
    CLKGEN_CLK_REQ_OFF,
    CLKGEN_CLK_REQ_UPDATE,
    CLKGEN_CLK_REQ_INVALID
};

typedef ClkgenTopClk_e ClkgenClkUpdate_e;

opaque_enum(ClkgenClkSpeed_e_)
{
    CLKGEN_0HZ          = 0,
    CLKGEN_NON_ZERO     = 1,
    CLKGEN_16HZ         = 16,
    CLKGEN_128HZ        = 128,
    CLKGEN_1KHZ         = 1000,
    CLKGEN_8KHZ         = 8000,
    CLKGEN_16KHZ        = 16000,
    CLKGEN_32KHZ        = 32000,
    CLKGEN_93KHZ        = 93000,
    CLKGEN_187KHZ       = 187000,
    CLKGEN_300KHZ       = 300000,
    CLKGEN_800KHZ       = 800000,
    CLKGEN_187P5KHZ     = 187500,
    CLKGEN_750KHZ       = 750000,
    CLKGEN_1MHZ         = 1000000,
    CLKGEN_1P019MHZ     = 1019000,
    CLKGEN_1P02MHZ      = 1020000,
    CLKGEN_1P5MHZ       = 1500000,
    CLKGEN_2MHZ         = 2000000,
    CLKGEN_2P6MHZ       = 2600000,
    CLKGEN_3MHZ         = 3000000,
    CLKGEN_4MHZ         = 4000000,
    CLKGEN_4P3MHZ       = 4300000,
    CLKGEN_4P4MHZ       = 4400000,
    CLKGEN_4P7MHZ       = 4700000,
    CLKGEN_4P8MHZ       = 4800000,
    CLKGEN_5P2MHZ       = 5200000,
    CLKGEN_5P3MHZ       = 5300000,
    CLKGEN_5P4MHZ       = 5400000,
    CLKGEN_6MHZ         = 6000000,
    CLKGEN_8MHZ         = 8000000,
    CLKGEN_9P6MHZ       = 9600000,
    CLKGEN_10MHZ        = 10000000,
    CLKGEN_10P4MHZ      = 10400000,
    CLKGEN_12MHZ        = 12000000,
    CLKGEN_12P8MHZ      = 12800000,
    CLKGEN_13MHZ        = 13000000,
    CLKGEN_13P7MHZ      = 13700000,
    CLKGEN_15MHZ        = 15000000,
    CLKGEN_15P36MHZ     = 15360000,
    CLKGEN_15P6MHZ      = 15600000,
    CLKGEN_16MHZ        = 16000000,
    CLKGEN_19P2MHZ      = 19200000,
    CLKGEN_19P5MHZ      = 19500000,
    CLKGEN_20MHZ        = 20000000,
    CLKGEN_20P8MHZ      = 20800000,
    CLKGEN_21P3MHZ      = 21300000,
    CLKGEN_21P6MHZ      = 21600000,
    CLKGEN_22P29MHZ     = 22290000,
    CLKGEN_24MHZ        = 24000000,
    CLKGEN_25MHZ        = 25000000,
    CLKGEN_26MHZ        = 26000000,
    CLKGEN_27MHZ        = 27000000,
    CLKGEN_27P4MHZ      = 27400000,
    CLKGEN_28P36MHZ     = 28360000,
    CLKGEN_29P71MHZ     = 29710000,
    CLKGEN_30MHZ        = 30000000,
    CLKGEN_31P2MHZ      = 31200000,
    CLKGEN_32MHZ        = 32000000,
    CLKGEN_34P6MHZ      = 34600000,
    CLKGEN_34P65MHZ     = 34650000,
    CLKGEN_34P67MHZ     = 34670000,
    CLKGEN_36MHZ        = 36000000,
    CLKGEN_37P125MHZ    = 37125000,
    CLKGEN_38P4MHZ      = 38400000,
    CLKGEN_39MHZ        = 39000000,
    CLKGEN_39P8MHZ      = 39800000,
    CLKGEN_40MHZ        = 40000000,
    CLKGEN_41MHZ        = 41000000,
    CLKGEN_41P6MHZ      = 41600000,
    CLKGEN_42P6MHZ      = 42600000,
    CLKGEN_43P2MHZ      = 43200000,
    CLKGEN_44P5MHZ      = 44500000,
    CLKGEN_44P57MHZ     = 44570000,
    CLKGEN_48MHZ        = 48000000,
    CLKGEN_48P1MHZ      = 48100000,
    CLKGEN_49P8MHZ      = 49875000,
    CLKGEN_50MHZ        = 50000000,
    CLKGEN_51MHZ        = 51000000,
    CLKGEN_51P2MHZ      = 51200000,
    CLKGEN_SDR_PLL_DIV3,
    CLKGEN_52MHZ        = 52000000,
    CLKGEN_54MHZ        = 54000000,
    CLKGEN_54P8MHZ      = 54800000,
    CLKGEN_56P7MHZ      = 56700000,
    CLKGEN_56P73MHZ     = 56730000,
    CLKGEN_60MHZ        = 60000000,
    CLKGEN_61P7MHZ      = 61700000,
    CLKGEN_62P4MHZ      = 62400000,
    CLKGEN_64MHZ        = 64000000,
    CLKGEN_64P1MHZ      = 64100000,
    CLKGEN_66MHZ        = 66000000,
    CLKGEN_66P5MHZ      = 66500000, /* pll div 2 will not equal to 66p5 when apll is not 133*/
    CLKGEN_67MHZ        = 67000000,
    CLKGEN_69P3MHZ      = 69300000,
    CLKGEN_69P33MHZ     = 69330000,
    CLKGEN_69P8MHZ      = 69800000,
    CLKGEN_71P5MHZ      = 71500000,
    CLKGEN_72MHZ        = 72000000,
    CLKGEN_75MHZ        = 75000000,
    CLKGEN_76P5MHZ      = 76500000,
    CLKGEN_76P8MHZ      = 76800000,
    CLKGEN_78MHZ        = 78000000,
    CLKGEN_79MHZ        = 79000000,
    CLKGEN_80MHZ        = 80000000,
    CLKGEN_81MHZ        = 81000000,
    CLKGEN_82MHZ        = 82000000,
    CLKGEN_83MHZ        = 83000000,
    CLKGEN_84MHZ        = 84000000,
    CLKGEN_84P5MHZ      = 84500000,
    CLKGEN_85MHZ        = 85000000,
    CLKGEN_85P3MHZ      = 85300000,
    CLKGEN_86MHZ        = 86000000,
    CLKGEN_86P4MHZ      = 86400000,
    CLKGEN_87MHZ        = 87000000,
    CLKGEN_88MHZ        = 88000000,
    CLKGEN_89MHZ        = 89000000,
    CLKGEN_89P1MHZ      = 89100000,
    CLKGEN_89P14MHZ     = 89140000,
    CLKGEN_90MHZ        = 90000000,
    CLKGEN_91MHZ        = 91000000,
    CLKGEN_92MHZ        = 92000000,
    CLKGEN_93MHZ        = 93000000,
    CLKGEN_94MHZ        = 94000000,
    CLKGEN_95MHZ        = 95000000,
    CLKGEN_96MHZ        = 96000000,
    CLKGEN_97MHZ        = 97000000,
    CLKGEN_97P5MHZ      = 97500000,
    CLKGEN_98MHZ        = 98000000,
    CLKGEN_99MHZ        = 99000000,
    CLKGEN_100MHZ       = 100000000,
    CLKGEN_101MHZ       = 101000000,
    CLKGEN_102MHZ       = 102000000,
    CLKGEN_103MHZ       = 103000000,
    CLKGEN_104MHZ       = 104000000,
    CLKGEN_108MHZ       = 108000000,
    CLKGEN_109P6MHZ     = 109600000,
    CLKGEN_117MHZ       = 117000000,
    CLKGEN_123MHZ       = 123000000,
    CLKGEN_123P4MHZ     = 123400000,
    CLKGEN_123P5MHZ     = 123500000,
    CLKGEN_SDR_PLL_DIV2,
    CLKGEN_124P8MHZ     = 124800000,
    CLKGEN_125MHZ       = 125000000,
    CLKGEN_128MHZ       = 128000000,
    CLKGEN_128P3MHZ     = 128300000,
    CLKGEN_130MHZ       = 130000000,
    CLKGEN_132MHZ       = 132000000,
    CLKGEN_133MHZ       = 133000000,
    CLKGEN_134MHZ       = 134000000,
    CLKGEN_135MHZ       = 135000000,
    CLKGEN_136MHZ       = 136000000,
    CLKGEN_138MHZ       = 138000000,
    CLKGEN_139MHZ       = 139000000,
    CLKGEN_142MHZ       = 142000000,
    CLKGEN_143MHZ       = 143000000,
    CLKGEN_144MHZ       = 144000000,
    CLKGEN_147MHZ       = 147000000,
    CLKGEN_150MHZ       = 150000000,
    CLKGEN_153MHZ       = 153000000,
    CLKGEN_153P6MHZ     = 153600000,
    CLKGEN_156MHZ       = 156000000,
    CLKGEN_158MHZ       = 158000000,
    CLKGEN_160MHZ       = 160000000,
    CLKGEN_162MHZ       = 162000000,
    CLKGEN_164MHZ       = 164000000,
    CLKGEN_166MHZ       = 166000000,
    CLKGEN_168MHZ       = 168000000,
    CLKGEN_169MHZ       = 169000000,
    CLKGEN_170MHZ       = 170000000,
    CLKGEN_170P6MHZ     = 170600000,
    CLKGEN_172MHZ       = 172000000,
    CLKGEN_172P8MHZ     = 172800000,
    CLKGEN_174MHZ       = 174000000,
    CLKGEN_175MHZ       = 175000000,
    CLKGEN_176MHZ       = 176000000,
    CLKGEN_178MHZ       = 178000000,
    CLKGEN_180MHZ       = 180000000,
    CLKGEN_182MHZ       = 182000000,
    CLKGEN_184MHZ       = 184000000,
    CLKGEN_186MHZ       = 186000000,
    CLKGEN_187P5MHZ     = 187500000,
    CLKGEN_188MHZ       = 188000000,
    CLKGEN_190MHZ       = 190000000,
    CLKGEN_192MHZ       = 192000000,
    CLKGEN_194MHZ       = 194000000,
    CLKGEN_195MHZ       = 195000000,
    CLKGEN_196MHZ       = 196000000,
    CLKGEN_198MHZ       = 198000000,
    CLKGEN_200MHZ       = 200000000,
    CLKGEN_202MHZ       = 202000000,
    CLKGEN_204MHZ       = 204000000,
    CLKGEN_206MHZ       = 206000000,
    CLKGEN_208MHZ       = 208000000,
    CLKGEN_216MHZ       = 216000000,
    CLKGEN_225MHZ       = 225000000,
    CLKGEN_234MHZ       = 234000000,
    CLKGEN_240MHZ       = 240000000,
    CLKGEN_247MHZ       = 247000000,
    CLKGEN_250MHZ       = 250000000,
    CLKGEN_256MHZ       = 256000000,
    CLKGEN_260MHZ       = 260000000,
    CLKGEN_264MHZ       = 264000000,
    CLKGEN_266MHZ       = 266000000,
    CLKGEN_268MHZ       = 268000000,
    CLKGEN_275MHZ       = 275000000,
    CLKGEN_286MHZ       = 286000000,
    CLKGEN_288MHZ       = 288000000,
    CLKGEN_290MHZ       = 290000000,
    CLKGEN_299MHZ       = 299000000,
    CLKGEN_300MHZ       = 300000000,
    CLKGEN_306MHZ       = 306000000,
    CLKGEN_312MHZ       = 312000000,
    CLKGEN_316MHZ       = 316000000,
    CLKGEN_320MHZ       = 320000000,
    CLKGEN_324MHZ       = 324000000,
    CLKGEN_325MHZ       = 325000000,
    CLKGEN_328MHZ       = 328000000,
    CLKGEN_332MHZ       = 332000000,
    CLKGEN_336MHZ       = 336000000,
    CLKGEN_338MHZ       = 338000000,
    CLKGEN_350MHZ       = 350000000,
    CLKGEN_360MHZ       = 360000000,
    CLKGEN_364MHZ       = 364000000,
    CLKGEN_375MHZ       = 375000000,
    CLKGEN_380MHZ       = 380000000,
    CLKGEN_384MHZ       = 384000000,
    CLKGEN_385MHZ       = 385000000,
    CLKGEN_390MHZ       = 390000000,
    CLKGEN_399MHZ       = 399000000,
    CLKGEN_400MHZ       = 400000000,
    CLKGEN_416MHZ       = 416000000,
    CLKGEN_432MHZ       = 432000000,
    CLKGEN_480MHZ       = 480000000,
    CLKGEN_572MHZ       = 572000000,
    CLKGEN_600MHZ       = 600000000,
    CLKGEN_624MHZ       = 624000000,
    CLKGEN_650MHZ       = 650000000,
    CLKGEN_768MHZ       = 768000000,
    CLKGEN_800MHZ       = 800000000,
    CLKGEN_1000MHZ      = 1000000000,
    CLKGEN_1100MHZ      = 1100000000,
    CLKGEN_1200MHZ      = 1200000000,
    CLKGEN_SR_P,
    CLKGEN_MIU_MAX,      /* for MIU clock speed only */
    CLKGEN_SDR_PLL_DIV1, /* special placeholder for clkgen HAL table only */
    CLKGEN_INVALID      = -1
};

opaque_enum(PeriphType_e_)
{
    PERIPH_IMI,
    PERIPH_AHB_ML,
    PERIPH_AHB2APB1,
    PERIPH_AHB2APB2,
    PERIPH_AHB2APB3,
    PERIPH_DMA,
    PERIPH_ITCTRL,
    PERIPH_EXT_ITCTRL,
    PERIPH_FCS,
    PERIPH_GEA,
    PERIPH_GEA2,
    PERIPH_UART1,
    PERIPH_UART2,
    PERIPH_SPI1,
    PERIPH_SPI2,
    PERIPH_SIM1,
    PERIPH_SIM2,
    PERIPH_PWM,
    PERIPH_I2C,
    PERIPH_SYSTIMER,
    PERIPH_EMI,
    PERIPH_EMI_ARBITER,
    PERIPH_SDRAM,
    PERIPH_EBI,
    PERIPH_AUDIO,
    PERIPH_MMP,
    PERIPH_JTAG,
    PERIPH_DSP,
    PERIPH_RTC,
};

#include "drv_clkgen_cmu_forward.h"

#endif //__DRV_CLKGEN_CMU_TYPES_H__

