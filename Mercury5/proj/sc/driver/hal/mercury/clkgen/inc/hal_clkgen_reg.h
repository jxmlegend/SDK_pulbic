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
* @file    hal_clkgen_reg.h
* @version
* @brief   This file contains the HAL interface of clkgen.
*
*/

#ifndef __HAL_CLKGEN_REG_H__
#define __HAL_CLKGEN_REG_H__

/*=============================================================*/
// Include files
/*=============================================================*/

#include "vm_types.ht"
#include "cpu_mem_map.hc"

/*=============================================================*/
// Macro definition
/*=============================================================*/

#define    REG_CKG_BASE                  MS_BASE_REG_CLKGEN_PA
#define    REG_SC_GP_CTRL_BASE           MS_BASE_REG_SC_GP_CTRL_PA
#define    REG_DEC_GP_CTRL_BASE          MS_BASE_REG_SC_GP_CTRL_PA
#define    REG_PM_SLEEP_CKG_BASE         MS_BASE_REG_PM_SLEEP_CKG_PA
#define    REG_ARMPLL_BASE               MS_BASE_REG_ARMPLL_PA

//====SPECIAL_CKG_REG==============================================
#define    REG_CKG_EMAC_RX_BASE         (REG_SC_GP_CTRL_BASE+0x22*4)
#define    REG_CKG_EMAC_RX_REF_BASE     (REG_SC_GP_CTRL_BASE+0x22*4)
#define    REG_CKG_EMAC_TX_BASE         (REG_SC_GP_CTRL_BASE+0x23*4)
#define    REG_CKG_EMAC_TX_REF_BASE     (REG_SC_GP_CTRL_BASE+0x23*4)
#define    REG_CKG_GOP0_PSRAM_BASE      (REG_SC_GP_CTRL_BASE+0x21*4)
#define    REG_CKG_GOP1_PSRAM_BASE      (REG_SC_GP_CTRL_BASE+0x21*4)
#define    REG_CKG_GOP2_PSRAM_BASE      (REG_SC_GP_CTRL_BASE+0x21*4)
#define    REG_CKG_GOP4_PSRAM_BASE      (REG_DEC_GP_CTRL_BASE+0x30*4)
#define    REG_CKG_GOP5_PSRAM_BASE      (REG_DEC_GP_CTRL_BASE+0x30*4)
#define    REG_CKG_GOP6_PSRAM_BASE      (REG_DEC_GP_CTRL_BASE+0x31*4)
#define    REG_CKG_IMI_BASE             (REG_SC_GP_CTRL_BASE+0x20*4)
#define    REG_CKG_NLM_BASE             (REG_SC_GP_CTRL_BASE+0x20*4)
#define    REG_NLM_CLK_GATE_RD_BASE     (REG_SC_GP_CTRL_BASE+0x20*4)
#define    REG_NLM_CLK_SEL_RD_BASE      (REG_SC_GP_CTRL_BASE+0x20*4)
#define    REG_SC_SPARE_HI_BASE         (REG_SC_GP_CTRL_BASE+0x31*4)
#define    REG_SC_SPARE_LO_BASE         (REG_SC_GP_CTRL_BASE+0x30*4)
#define    REG_SC_TEST_IN_SEL_BASE      (REG_SC_GP_CTRL_BASE+0x32*4)
#define    REG_CKG_SR0_BASE             (REG_SC_GP_CTRL_BASE+0x42*4)
#define    REG_CKG_SR1_BASE             (REG_SC_GP_CTRL_BASE+0x43*4)
#define    REG_CKG_SR2_BASE             (REG_SC_GP_CTRL_BASE+0x44*4)

//====PM_CKG_REG==============================================
#define    REG_CKG_AV_LNK_BASE          (REG_PM_SLEEP_CKG_BASE+0x24*4)
#define    REG_CKG_CEC_BASE             (REG_PM_SLEEP_CKG_BASE+0x23*4)
#define    REG_CKG_CEC_RX_BASE          (REG_PM_SLEEP_CKG_BASE+0x26*4)
#define    REG_CKG_DDC_BASE             (REG_PM_SLEEP_CKG_BASE+0x21*4)
#define    REG_CKG_DVI_RAW0_BASE        (REG_PM_SLEEP_CKG_BASE+0x23*4)
#define    REG_CKG_DVI_RAW1_BASE        (REG_PM_SLEEP_CKG_BASE+0x23*4)
#define    REG_CKG_DVI_RAW2_BASE        (REG_PM_SLEEP_CKG_BASE+0x24*4)
#define    REG_CKG_HOTPLUG_BASE         (REG_PM_SLEEP_CKG_BASE+0x24*4)
#define    REG_CKG_IR_BASE              (REG_PM_SLEEP_CKG_BASE+0x21*4)
#define    REG_CKG_KREF_BASE            (REG_PM_SLEEP_CKG_BASE+0x23*4)
#define    REG_CKG_MIIC_BASE            (REG_PM_SLEEP_CKG_BASE+0x26*4)
#define    REG_CKG_PM_SLEEP_BASE        (REG_PM_SLEEP_CKG_BASE+0x22*4)
#define    REG_CKG_RTC_BASE             (REG_PM_SLEEP_CKG_BASE+0x22*4)
#define    REG_CKG_SAR_BASE             (REG_PM_SLEEP_CKG_BASE+0x22*4)
#define    REG_CKG_SCDC_P0_BASE         (REG_PM_SLEEP_CKG_BASE+0x26*4)
#define    REG_CKG_MCU_PM_BASE          (REG_PM_SLEEP_CKG_BASE+0x20*4)
#define    REG_CKG_SPI_PM_BASE          (REG_PM_SLEEP_CKG_BASE+0x20*4)

//====NORMAL_CKG_REG==============================================
#define    REG_CKG_123M_2DIGPM_BASE     (REG_CKG_BASE+0x6D*4)
#define    REG_CKG_144M_2DIGPM_BASE     (REG_CKG_BASE+0x6D*4)
#define    REG_CKG_172M_2DIGPM_BASE     (REG_CKG_BASE+0x6D*4)
#define    REG_CKG_216M_2DIGPM_BASE     (REG_CKG_BASE+0x6D*4)
#define    REG_CKG_86M_2DIGPM_BASE      (REG_CKG_BASE+0x6D*4)

#define    REG_CKG_AESDMA_BASE          (REG_CKG_BASE+0x61*4)
#define    REG_CKG_BDMA_BASE            (REG_CKG_BASE+0x60*4)
#define    REG_CKG_BIST_BASE            (REG_CKG_BASE+0x02*4)
#define    REG_CKG_BIST_PM_BASE         (REG_CKG_BASE+0x02*4)
#define    REG_CKG_BIST_SC_GP_BASE      (REG_CKG_BASE+0x03*4)
#define    REG_CKG_BIST_VHE_GP_BASE     (REG_CKG_BASE+0x03*4)
#define    REG_CKG_BIST_DEC_GP_BASE     (REG_CKG_BASE+0x03*4)
#define    REG_CKG_BOOT_BASE            (REG_CKG_BASE+0x08*4)
#define    REG_CKG_BT656_0_BASE         (REG_CKG_BASE+0x5B*4)
#define    REG_CKG_BT656_1_BASE         (REG_CKG_BASE+0x5B*4)
#define    REG_CKG_CSI_MAC_0_BASE       (REG_CKG_BASE+0x6C*4)
#define    REG_CKG_CSI_MAC_1_BASE       (REG_CKG_BASE+0x79*4)
#define    REG_CKG_DC0_BASE             (REG_CKG_BASE+0x52*4)
#define    REG_CKG_DDR_SYN_BASE         (REG_CKG_BASE+0x19*4)
#define    REG_CKG_DEC_ODCLK_BASE       (REG_CKG_BASE+0x54*4)
#define    REG_CKG_DIP_BASE             (REG_CKG_BASE+0x56*4)
#define    REG_CKG_ECC_BASE             (REG_CKG_BASE+0x44*4)
#define    REG_CKG_EMAC_AHB_BASE        (REG_CKG_BASE+0x42*4)
#define    REG_CKG_FCIE_BASE            (REG_CKG_BASE+0x43*4)
#define    REG_CKG_FCLK1_BASE           (REG_CKG_BASE+0x64*4)
#define    REG_CKG_FCLK2_BASE           (REG_CKG_BASE+0x65*4)
#define    REG_CKG_FUART_BASE           (REG_CKG_BASE+0x34*4)
#define    REG_CKG_FUART0_SYNTH_IN_BASE (REG_CKG_BASE+0x34*4)
#define    REG_CKG_GOP_BASE             (REG_CKG_BASE+0x67*4)
#define    REG_CKG_HEMCU_216M_BASE      (REG_CKG_BASE+0x6D*4)
#define    REG_CKG_HVD_BASE             (REG_CKG_BASE+0x50*4)
#define    REG_CKG_HVD_IDB_BASE         (REG_CKG_BASE+0x51*4)
#define    REG_CKG_IDCLK_BASE           (REG_CKG_BASE+0x63*4)
#define    REG_CKG_ISP_BASE             (REG_CKG_BASE+0x61*4)
#define    REG_CKG_IVE_BASE             (REG_CKG_BASE+0x6A*4)
#define    REG_CKG_JPD_BASE             (REG_CKG_BASE+0x50*4)
#define    REG_CKG_JPE_BASE             (REG_CKG_BASE+0x6A*4)
#define    REG_CKG_LIVE_BASE            (REG_CKG_BASE+0x00*4)
#define    REG_CKG_MAC_LPTX_0_BASE      (REG_CKG_BASE+0x6C*4)
#define    REG_CKG_MAC_LPTX_1_BASE      (REG_CKG_BASE+0x79*4)
#define    REG_CKG_MCU_BASE             (REG_CKG_BASE+0x01*4)
#define    REG_CKG_MFE_BASE             (REG_CKG_BASE+0x69*4)
#define    REG_CKG_MIIC0_BASE           (REG_CKG_BASE+0x37*4)
#define    REG_CKG_MIIC1_BASE           (REG_CKG_BASE+0x37*4)
#define    REG_CKG_MIIC2_BASE           (REG_CKG_BASE+0x39*4)
#define    REG_CKG_MIIC3_BASE           (REG_CKG_BASE+0x39*4)
#define    REG_CKG_MIPI_TX_CSI_BASE     (REG_CKG_BASE+0x59*4)
#define    REG_CKG_MIPI_TX_DSI_BASE     (REG_CKG_BASE+0x55*4)
#define    REG_CKG_MIU_BASE             (REG_CKG_BASE+0x17*4)
#define    REG_CKG_MIU_BOOT_BASE        (REG_CKG_BASE+0x20*4)
#define    REG_CKG_MIU_REC_BASE         (REG_CKG_BASE+0x18*4)
#define    REG_CKG_MSPI0_BASE           (REG_CKG_BASE+0x33*4)
#define    REG_CKG_MSPI1_BASE           (REG_CKG_BASE+0x33*4)
#define    REG_CKG_MSPI2_BASE           (REG_CKG_BASE+0x3A*4)
#define    REG_CKG_NS_0_BASE            (REG_CKG_BASE+0x6B*4)
#define    REG_CKG_NS_1_BASE            (REG_CKG_BASE+0x78*4)
#define    REG_CKG_ODCLK_BASE           (REG_CKG_BASE+0x66*4)
#define    REG_CKG_RIUBRDG_BASE         (REG_CKG_BASE+0x01*4)
#define    REG_CKG_SD_BASE              (REG_CKG_BASE+0x6E*4)
#define    REG_CKG_SDIO_BASE            (REG_CKG_BASE+0x45*4)
#define    REG_CKG_SD_SYN_BASE          (REG_CKG_BASE+0x6F*4)
#define    REG_CKG_SPI_BASE             (REG_CKG_BASE+0x32*4)
#define    REG_CKG_SR0_MCLK_BASE        (REG_CKG_BASE+0x62*4)
#define    REG_CKG_SR1_MCLK_BASE        (REG_CKG_BASE+0x63*4)
#define    REG_CKG_TCK_BASE             (REG_CKG_BASE+0x30*4)
#define    REG_CKG_UART0_BASE           (REG_CKG_BASE+0x31*4)
#define    REG_CKG_UART1_BASE           (REG_CKG_BASE+0x31*4)
#define    REG_CKG_UART2_BASE           (REG_CKG_BASE+0x38*4)
#define    REG_CKG_VHE_BASE             (REG_CKG_BASE+0x68*4)
#define    REG_CKG_VD_R2_BASE           (REG_CKG_BASE+0x52*4)
#define    REG_CKG_XTALI_BASE           (REG_CKG_BASE+0x00*4)
#define    REG_CKG_XTALI_SC_GP_BASE     (REG_CKG_BASE+0x00*4)
#define    REG_CKG_XTALI_DEC_GP_BASE    (REG_CKG_BASE+055*4)
#define    REG_CKG_ARMPLL_CLK_BASE      (REG_ARMPLL_BASE+0x17*4)  

#define    REG_CLKGEN0_RESERVED0_BASE   (REG_CKG_BASE+0x7E*4)
#define    REG_CLKGEN0_RESERVED1_BASE   (REG_CKG_BASE+0x7F*4)

#define    REG_MPLL_123_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_123_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_123_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_124_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_124_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_124_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_144_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_144_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_144_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_172_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_172_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_172_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_216_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_216_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_216_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_288_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_288_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_288_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_345_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_345_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_345_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_432_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_432_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_432_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_MPLL_86_EN_RD_BASE       (REG_CKG_BASE+0x73*4)
#define    REG_MPLL_86_FORCE_OFF_BASE   (REG_CKG_BASE+0x72*4)
#define    REG_MPLL_86_FORCE_ON_BASE    (REG_CKG_BASE+0x71*4)

#define    REG_PLL_GATER_FORCE_OFF_LOCK_BASE        (REG_CKG_BASE+0x70*4)
#define    REG_PLL_GATER_FORCE_ON_LOCK_BASE         (REG_CKG_BASE+0x70*4)
#define    REG_PLL_RV1_FORCE_OFF_BASE               (REG_CKG_BASE+0x72*4)
#define    REG_PLL_RV1_FORCE_ON_BASE                (REG_CKG_BASE+0x71*4)
#define    REG_UART_STNTHESIZER_ENABLE_BASE         (REG_CKG_BASE+0x34*4)
#define    REG_UART_STNTHESIZER_FIX_NF_FREQ_BASE    (REG_CKG_BASE+0x36*4)
#define    REG_UART_STNTHESIZER_SW_RSTZ_BASE        (REG_CKG_BASE+0x34*4)

#define    REG_UPLL_320_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_UPLL_320_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_UPLL_320_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_UPLL_384_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_UPLL_384_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_UPLL_384_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_UTMI_160_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_UTMI_160_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_UTMI_160_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_UTMI_192_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_UTMI_192_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_UTMI_192_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_UTMI_240_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_UTMI_240_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_UTMI_240_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)
#define    REG_UTMI_480_EN_RD_BASE      (REG_CKG_BASE+0x73*4)
#define    REG_UTMI_480_FORCE_OFF_BASE  (REG_CKG_BASE+0x72*4)
#define    REG_UTMI_480_FORCE_ON_BASE   (REG_CKG_BASE+0x71*4)

#endif //__HAL_CLKGEN_REG_H__

