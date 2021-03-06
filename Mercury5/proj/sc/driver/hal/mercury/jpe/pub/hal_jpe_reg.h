////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2017 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// ("MStar Confidential Information") by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef __HAL_JPE_REG_H__
#define __HAL_JPE_REG_H__

#include "hal_jpe_defs.h"

#define REG_CKG_BASE         0x1F207000
#define REG_CKG_JPE_BASE     (REG_CKG_BASE+0x6A*4)

typedef struct JpeJob_t
{
    u32     i_code;
    u32     i_tick;
    u32     i_bits;
} JpeJob_t;

typedef struct
{
    JpeJob_t mjob;

    union
    {
        struct
        {
            u16 nRegJpeGFrameStartSw: 1;    // frame start (1T clk_mfe) (write one clear)
            u16 nRegJpeGSoftRstz: 1;        // software reset; 0/1: reset/not reset
            u16 nRegJpeGEncMode: 1;         // 0/1: JPEG/H263
            u16 nRegJpeGEncFormat: 1;       // 0/1: YUV420/YUV422
            u16 nRegJpeGFrameIdx: 2;
            u16 nReg00Dummy: 2;
            u16 nRegJpeGQscale: 5;          // frame level qscale: [H263]: 1 ~ 31
            u16 nRegJpeGMreq: 1;            // mreq_jpe; miu clock gating enable
            u16 nRegJpeGDctOnlyEn: 1;       // 0: normal function, 1: DCT only to accelerate SW encoding
            u16 nRegJpeGMode: 1;            // 0/1: JPE/JPD
        } tReg00;
        u16 nReg00;
    } uReg00;

    union
    {
        struct
        {
            u16 nRegJpeGPicWidth: 14;       // picture width
        } tReg01;
        u16 nReg01;
    } uReg01;

    union
    {
        struct
        {
            u16 nRegJpeGPicHeight: 14;      // picture height
        } tReg02;
        u16 nReg02;
    } uReg02;

    union
    {
        struct
        {
            u16 nReg03Dummy: 6;
            u16 nRegJpeGTbcMode: 1;         // table mode; 0: SW control, 1: HW control
        } tReg03;
        u16 nReg03;
    } uReg03;

    union
    {
        struct
        {
            u16 nRegJpeGBufYAdr0Low: 16;    // Y buffer base address0
        } tReg06;
        u16 nReg06;
    } uReg06;

    union
    {
        struct
        {
            u16 nRegJpeGBufYAdr0High: 8;    // Y buffer base address0
        } tReg07;
        u16 nReg07;
    } uReg07;

    union
    {
        struct
        {
            u16 nRegJpeGBufYAdr1Low: 16;    // Y buffer base address1
        } tReg08;
        u16 nReg08;
    } uReg08;

    union
    {
        struct
        {
            u16 nRegJpeGBufYAdr1High: 8;    // Y buffer base address1
        }tReg09;
        u16 nReg09;
    } uReg09;

    union
    {
        struct
        {
            u16 nRegJpeGBufCAdr0Low: 16;    // C buffer base address0
        } tReg0a;
        u16 nReg0a;
    } uReg0a;

    union
    {
        struct
        {
            u16 nRegJpeGBufCAdr0High: 8;    // C buffer base address0
        } tReg0b;
        u16 nReg0b;
    } uReg0b;

    union
    {
        struct
        {
            u16 nRegJpeGBufCAdr1Low: 16;    // C buffer base address1
        } tReg0c;
        u16 nReg0c;
    } uReg0c;

    union
    {
        struct
        {
            u16 nRegJpeGBufCAdr1High: 8;    // C buffer base address1
        } tReg0d;
        u16 nReg0d;
    } uReg0d;

    union
    {
        struct
        {
            u16 nReg0fDummy: 8;
            u16 nRegJpeGFsvsWptr: 8;        // fsvs to jpe write pointer
        } tReg0f;
        u16 nReg0f;
    } uReg0f;

    union
    {
        struct
        {
            u16 nRegJpeGRowDownCnt: 8;      // row_done counter in clk_jpe domain
        } tReg10;
        u16 nReg10;
    } uReg10;

    union
    {
        struct
        {
            // clock gating
            // [0]: clock gating: clk_jpe (used by JPE); 0: clk_jpe enable, 1: clk_jpe disable
            // [1]: clock gating: clk_jpd (used by JPD); 0: clk_jpd enable, 1: clk_jpd disable
            // [2]: clock gating: clk_miu0 (used by JPE); 0: clk_miu0 enable, 1: clk_miu0 disable
            // [3]: clock gating: clk_miu1 (used by JPD); 0: clk_miu1 enable, 1: clk_miu1 disable
            // [4]: clock gating: clk_viu (used by JPE); 0: clk_viu enable, 1: clk_viu disable"
            u16 nRegJpeGClkGateEn: 5;       // 0x0a : gating jpd, 0x15 : gating jpe
            u16 nRegJpeGSramGateEn: 1;
        } tReg16;
        u16 nReg16;
    } uReg16;

    // [JPEG]
    union
    {
        struct
        {
            u16 nRegMfeGJpeEncModeDummy: 2;
            u16 nRegJpeGJpeBuffermode: 1;   // JPE buffer mode; 0/1: double buffer mode/frame buffer mode
            u16 nRegJpeSAutoRstWaitCnt: 6;  // the waiting count for regen_soft_rstz and regen_fs_sw generation
            u16 nRegJpeGJpeFsvsMode: 2;     // JPE fsvs generation mode; 0/1/2/3: pure sw/sw+hw/hw wo auto-restart/hw with auto-restart, but fsvs function is removed...
            u16 nReg18Dummy: 4;
            u16 nRegJpeGViuSoftRstz: 1;     // viu software reset; 0/1: reset/not reset
        } tReg18;
        u16 nReg18;
    } uReg18;

    // [IRQ & important IP status checkings]
    union
    {
        struct
        {
            u16 nRegJpeGIrqMask: 8;         // 0/1: irq not-mask/mask
        } tReg1c;
        u16 nReg1c;
    } uReg1c;

    union
    {
        struct
        {
            u16 nRegJpeGIrqClr: 9;          // bitwise 0/1: not clear interrupt/clear interrupt 8 (write one clear)
            u16 nRegJpeGSwrstSafe: 1;       // to indicate there're no miu activities that need to pay attention to
            u16 nRegJpeGLastDoneZ: 1;       // to indicate all miu data has been written
        } tReg1d;
        u16 nReg1d;
    } uReg1d;

    union
    {
        struct
        {
            u16 nRegJpeGIrqCpu: 8;          // status of interrupt on CPU side ({1'b0, netrigger, fs_fail_irq, txipime_out, bspobuf_full_irq, img_buf_full_irq, marb_bspobuf_ful, frame_done_irq})
        } tReg1e;
        u16 nReg1e;
    } uReg1e;

    union
    {
        struct
        {
            u16 nRegJpeGIrqIp: 8;           // status of interrupt on IP side ({1'b0, netrigger, fs_fail_irq, txipime_out, bspobuf_full_irq, img_buf_full_irq, marb_bspobuf_ful, frame_done_irq})
        } tReg1f;
        u16 nReg1f;
    } uReg1f;

    union
    {
        struct
        {
            u16 nRegJpeGIrqForce: 8;        // 0/1: set corresponding interrupt as usual/force corresponding interrupt
        } tReg20;
        u16 nReg20;
    } uReg20;

    union
    {
        struct
        {
            u16 nRegJpeGSramSdEn: 3;        // SRAM SD enable
        } tReg21;
        u16 nReg21;
    } uReg21;

    // [TXIP PIPELINE ]
    // QUAN
    union
    {
        struct
        {
            u16 nRegJpeSQuanIdxLast: 6;     // the index of the last non-zero coefficient in the zig-zag order
            u16 nRegJpeSQuanIdxSwlast: 1;   // software control of the index of the last non-zero coefficient in the zig-zag order; 0/1: disable/enable
        } tReg2c;
        u16 nReg2c;
    } uReg2c;

    // TXIP control & debug
    union
    {
        struct
        {
            u16 nRegJpeSTxipMbx: 9;         // txip mbx
            u16 nRegJpeSTxipSngMb: 1;       // 0/1: disable/enable txip controller stop-and-go mechanism using (txip_mbx == reg_mfe_g_debugrig_mbx) & (txip_mby == reg_mfe_g_debugrig_mby)
            u16 nRegJpeSTxipSngSet: 1;      // txip controller stop-and-go mechanism using this register bit: 0/1: go/stop
            u16 nRegJpeSTxipDbfFullHaltEn: 1; //txip controller stop-and-go mechanism using double buffer fullness as criterion; 0/1: disable/enable
        } tReg2d;
        u16 nReg2d;
    } uReg2d;

    union
    {
        struct
        {
            u16 nRegJpeSTxipMby: 9;         // txip mby
        } tReg2e;
        u16 nReg2e;
    } uReg2e;

    union
    {
        struct
        {
            u16 nRegMfeSTxipIrfshMbE1Dummy: 11;
            u16 nRegJpeSTxipTimeoutEn: 1;   // txip time out enable
            u16 nRegJpeSTxipWaitMode: 1;    // txip waiting mode to move to next MB; 0/1: idle count/cycle count
        } tReg32;
        u16 nReg32;
    } uReg32;

    union
    {
        struct
        {
            u16 nRegJpeSTxipIdlecnt: 16;    // wait mode is 0: txip idle count (x 64T)/ wait mode is 1: txip total processing count (x 64T)
        } tReg33;
        u16 nReg33;
    } uReg33;

    union
    {
        struct
        {
            u16 nRegJpeSTxipTimeout: 16;    // txip timeout count (x 64T)
        } tReg34;
        u16 nReg34;
    } uReg34;

    // [ECDB PIPELINE]
    // ECDB control & debug
    union
    {
        struct
        {
            u16 nRegJpeSEcdbMbx: 9;         // ecdb mbx
        } tReg35;
        u16 nReg35;
    } uReg35;

    union
    {
        struct
        {
            u16 nRegJpeSEcdbMby: 9;         // ecdb mby
        } tReg36;
        u16 nReg36;
    } uReg36;

    union
    {
        struct
        {
            u16 nRegJpeSRstEn: 1;           // JPEG restart marker enable
            u16 nRegJpeSRstMcuCntLo: 15;    // JPEG MCU counter of restart marker
        } tReg37;
        u16 nReg37;
    } uReg37;

    union
    {
        struct
        {
            u16 nRegJpeSRstMcuCntHi: 11;    // JPEG MCU counter of restart marker
        } tReg38;
        u16 nReg38;
    } uReg38;

    // BSP/BSPOBUF
    union
    {
        struct
        {
            u16 nRegJpeSBspobufSetAdr: 1;   // set bsp obuf start address(write one clear)
            u16 nRegJpeSBspFdcOffset: 5;    // bsp's fdc offset
            u16 nRegJpeObuffullIrqAtFrameEnd: 1; // keep obuf full irq at frame end
            u16 nRegJpeObufToggleObuf0Status: 1; // toggle buf0 status(write one clear)
            u16 nRegJpeObufToggleObuf1Status: 1; // toggle buf1 status(write one clear)
            u16 nRegJpeObufHwEn: 1;         // enable HW obuf automatic mechanism
            u16 nRegJpeObufUpdateAdr: 1;    // update obuf address(write one clear)
            u16 nRegJpeObufAdrRchkSe1: 2;   // obuf adr read back check selection: 0/1/2/3: s0/e0/s1/e1
            u16 nRegJpeObufAdrRchkEn: 1;    // enable bspobuf adr read back check through reg_jpe_s_bspobuf_wptr
        } tReg3b;
        u16 nReg3b;
    } uReg3b;

    union
    {
        struct
        {
            u16 nRegJpeSBspobufAdrLow: 16;  // bsp obuf start address (4 byte unit)
        } tReg3c;
        u16 nReg3c;
    } uReg3c;

    union
    {
        struct
        {
            u16 nRegJpeSBspobufAdrHigh: 13; // bsp obuf start address (4 byte unit)
            u16 nRegJpeSBspobufDummyBit: 1;
            u16 nRegJpeSBspobufId:2;
        } tReg3d;
        u16 nReg3d;
    } uReg3d;

    union
    {
        struct
        {
            u16 nRegJpeSBspspobufWriteIdAdr: 1; // write to this address to enable writing of bspobuf address
        } tReg3e;
        u16 nReg3e;
    } uReg3e;

    union
    {
        struct
        {

            u16 nRegJpeSBspByteIdx: 2;      // last encoded byte index in 4-byte MIU
            u16 nRegJpeSObufIdx: 2;         // HW obuf index(0->1->2->3->0->1�K)
            u16 nRegJpeSObufSwIdx: 2;       // SW obuf index(00->01->11->10->00...)
            u16 RegJpeSObufAdrStatus: 6;    // {fifo_not_full, fifo_not_empty, enable_obufadr_update, obufadr_update_cnt[2:0]}
        } tReg42;
        u16 nReg42;
    } uReg42;

    union
    {
        struct
        {
            u16 nRegJpeSBspobufWptrLow: 16; // bspobuf write pointer (4 byte unit)
        } tReg44;
        u16 nReg44;
    } uReg44;

    union
    {
        struct
        {
            u16 nRegJpeSBspobufWptrHigh:13; // bspobuf write pointer (4 byte unit)
        } tReg45;
        u16 nReg45;
    } uReg45;

    // [Table Control]
    union
    {
        struct
        {
            u16 nReg48Dummy: 12;
            u16 nRegJpeSTbcEn: 1;           // set for table read & write ; 1: enable, 0: disable (write one clear)
        } tReg48;
        u16 nReg48;
    } uReg48;

    union
    {
        struct
        {
            u16 nRegJpeSTbcRw: 1;           // table mode; 0: read, 1: write
            u16 nRegJpeSTbcDoneClr: 1;      // table done clear (write one clear)
            u16 nRegJpeSTbcDone: 1;         // table done; indicate to CPU that (1) data has been written to table (2) table output is ready at reg_mfe_sbc_rdata
            u16 nReg49Dummy: 5;
            u16 nRegJpeSTbcAdr: 8;          // table address
        } tReg49;
        u16 nReg49;
    } uReg49;

    union
    {
        struct
        {
            u16 nRegJpeSTbcWdata: 8;        // table write data
        } tReg4a;
        u16 nReg4a;
    } uReg4a;

    union
    {
        struct
        {
            u16 nRegJpeSTbcRdata: 8;        // table read data
        } tReg4b;
        u16 nReg4b;
    } uReg4b;

    // [Miu Arbiter]
    union
    {
        struct
        {
            u16 nRegJpeSDmaMrBurstThd: 5;   // miu read burst bunch up threshold
            u16 nRegJpeSDmaMrTimeout: 3;    // miu read burst timeout
            u16 nRegJpeSDmaMwBurstThd: 5;   // miu write burst bunch up threshold
            u16 nRegJpeSDmaMwTimeout: 3;    // miu write burst timeout
        } tReg54;
        u16 nReg54;
    } uReg54;

    union
    {
        struct
        {
            u16 nRegJpeSDmaMrpriorityThd: 7;    // hardware mfe2mi_rpriority threshold
            u16 nRegJpeSDmaMrpriorityType: 1;   // hardware mfe2mi_rpriority threshold
            u16 nRegJpeSDmaMwpriorityThd: 7;    // hardware mfe2mi_wpriority threshold
            u16 nRegJpeSDmaMwpriorityType: 1;
        } tReg55;
        u16 nReg55;
    } uReg55;

    union
    {
        struct
        {
            u16 reg_jpe_s_dma_mrpriority_sw: 2; // mfe2mi_rpriority software programmable
            u16 reg5600_dummy: 1;
            u16 reg_jpe_s_dma_mr_nwait_mw: 1;   // miu read not wait mi2mfe_wrdy
            u16 reg_jpe_s_dma_mwpriority_sw: 2; // mfe2mi_wpriority software programmable
            u16 reg5601_dummy: 1;
            u16 reg_jpe_s_dma_mw_nwait_mr: 1;   // miu read not wait mi2mfe_wrdy
            u16 reg_jpe_s_dma_mr_pending: 4;    // miu read not wait mi2mfe_wrdy
            u16 reg_jpe_s_dma_32b_ad_nswap: 1;  // 32bits miu address not swap. only for 32bits mode
            u16 reg_jpe_s_dma_miu_wmode: 1;     // 0/1: original miu protocol/new miu protocol(wd_en)
        } tReg56;
        u16 nReg56;
    } uReg56;

    union
    {
        struct
        {
            u16 nRegJpeSDmaMrlastThd: 5;    // auto mfe2mi_rlast threshold
            u16 nRegJpeSDmaMwlastThd: 5;    // auto mfe2mi_wlast threshold
            u16 nReg5700Dummy: 2;
            u16 nRegJpeSDmaBurstSplit: 4;   // 0: disable; N: MIU Request IDLE ��N�� cycles with every last signal
        } tReg57;
        u16 nReg57;
    } uReg57;

    union
    {
        struct
        {
            u16 nRegJpeSDmaUbound0Low: 16;  // miu write protection, miu upper bound 0  (BSP obuf)
        } tReg58;
        u16 nReg58;
    } uReg58;

    union
    {
        struct
        {
            u16 nRegJpeSDmaUbound0High:13;  //miu write protection, miu upper bound 0  (BSP obuf)
        } tReg59;
        u16 nReg59;
    } uReg59;

    union
    {
        struct
        {
            u16 nRegJpeSDmaLbound0Low: 16;  // miu write protection, miu lower bound 0
        } tReg5a;
        u16 nReg5a;
    } uReg5a;

    union
    {
        struct
        {
            u16 nRegJpeSDmaLbound0High: 13; // miu write protection, miu lower bound 0
            u16 nReg5bDummy:1;              // miu write protection, miu lower bound 0
            u16 nRegJpeSDmaMiuOff: 1;       // miu write protection, miu off
            u16 nRegJpeSDmaMiuBoundErr: 1;
        } tReg5b;
        u16 nReg5b;
    } uReg5b;

    union
    {
        struct
        {
            u16 nRegJpeSDmaMrRdffPriorThd: 4;   // 4��hx: high priority when rdff depth < {xxx,2��b00}
            u16 nRegJpeSDmaMrRdffPriorMask: 4;  // Read data fifo depth priority initial mask,  0:disable, 1:release the mask after 8 requests
            u16 nRegJpeSDmaMlastStallOld: 1;    // jpde2mi Last in stall state  0:Guarantee jpde2mi Last, 1:No jpde2mi Last in Stall State
            u16 nRegJpeSDmaRsv5c: 7;            // reserved registers
        } tReg5c;
        u16 nReg5c;
    } uReg5c;

    union
    {
        struct
        {
            u16 nRegJpeSDmaMreqAlwaysActive: 1; // 0:dynamic mreq, 1:always set mreq = 1
            u16 nRegJpeSDmaMreqModeSel: 1;      // mreq mode selection  0:clk_miu enabled dynamically, 1:clk_miu enabled from Enstart -> Frame_done
            u16 nRegJpeSDmaMiuBoundEn: 4;       // miu write protection, miu bound enable for write port 0 ~ 3
        } tReg5d;
        u16 nReg5d;
    } uReg5d;

    union
    {
        struct
        {
            u16 nRegGJpeYPitch: 8;          // Y frame buffer pitch
            u16 nRegGJpeCPitch: 8;          // C frame buffer pitch
        } tReg5e;
        u16 nReg5e;
    } uReg5e;

    union
    {
        struct
        {
            u16 nRegSJpeYuvldrRlastThd: 4;      // YUV loader MIU burst read interval
            u16 nRegSJpeYuvldrMrprioritySw: 2;  // YUV loader MIU read priority SW programmable
            u16 nRegSJpeYuvldrMrpriorityThd: 7; // YUV loader MIU read priority setting threshold
            u16 nRegSJpeYuvldrMrpriorityType: 1;// YUV loader MIU read priority type
            u16 nRegSJpeYuvldrImiEn: 1;         // YUV loader IMI enable
            u16 nRegSJpeYuvldrCSwap: 1;         // YUV loader Chroma swap
        } tReg5f;
        u16 nReg5f;
    } uReg5f;

    union
    {
        struct
        {
            u16 nRegJpeSBspobufWlastThd: 4;     // BSP obuf MIU burst write interval
            u16 nRegJpeSBspobufMwpriorityWw: 2; // BSP obuf MIU write priority SW programmable
            u16 nRegJpeSBspobufMwpriorityThd: 7;// BSP obuf MIU write priority setting threshold
            u16 nRegJpeSBspobufMwpriorityType:1;// BSP obuf MIU write priority type
        } tReg60;
        u16 nReg60;
    } uReg60;

    union
    {
        struct
        {
            u16 nRegJpeSYuvldrImiBound: 9;  // YUV loader IMI bound (unit: Macro)
        } tReg61;
        u16 nReg61;
    } uReg61;

    union
    {
        struct
        {
            u16 nRegJpeTlb: 1;              // YUV loader IMI bound (unit: Macro)
        } tReg64;
        u16 nReg64;
    } uReg64;

    // [Debug]
    union
    {
        struct
        {
            u16 nRegJpeGPatGenInit: 16;     // pattern generation initial value
        } tReg6f;
        u16 nReg6f;
    } uReg6f;

    union
    {
        struct
        {
            u16 nRegJpeGDebugMode: 5;       // debug mode
            u16 nRegJpeGPatGenEn: 1;        // enable pattern generation
            u16 nRegJpeGDebugTrigCycle: 10; // wait (8 * reg_mfe_g_debugrig_cycle) cycles
        } tReg70;
        u16 nReg70;
    } uReg70;

    union
    {
        struct
        {
            u16 nRegJpeGDebugTrigMbx: 9;    // debug trigger mbx
        } tReg71;
        u16 nReg71;
    } uReg71;

    union
    {
        struct
        {
            u16 nRegJpeGDebugTrigMby: 9;    // debug trigger mby
        } tReg72;
        u16 nReg72;
    } uReg72;

    union
    {
        struct
        {
            u16 nRegJpeGDebugTrig: 1;       // reg trigger (write one clear)
            u16 nRegJpeGDebugTrigMode: 2;   // debug trigger mode; 0/1/2/3: regrigger/3rd stage (mbx, mby)/frame start
            u16 nRegJpeGDebugEn: 1;         // debug enable
            u16 nRegJpeGCrcMode: 4;         // 'h0: Disable,��hc: bsp obuf, 'hd: mc obuf, 'hd: mc obuf
            u16 nRegJpeGDebugTcycleChkEn: 1;// enable total cycle check
            u16 nRegJpeGDebugTcycleChkSel: 1;// select total cycle and report it on reg_mfe_g_crc_result[15:0]
            u16 nRegJpeGRowDownIrqEn: 1;    // row done irq enable; 0: disable, 1: enable
            u16 nRegJpeGVsIrqEn: 1;         // vs irq enable; 0: disable, 1: enable
        } tReg73;
        u16 nReg73;
    } uReg73;

    union
    {
        struct
        {
            u16 nRegJpeGDebugState0: 16;    // "debug state for TXIP/ECDB submodule {txip2q_en, txip2iq_en, txip2mbr_en, txip2zmem_en, txip2dpcm_en,
        } tReg74;
        u16 nReg74;
    } uReg74;

    union
    {
        struct
        {
            u16 nRegJpeGSwBufferMode: 1;    // 0/1: hw/sw buffer mode, but not work anymore...
            u16 nRegJpeGSwRowDone: 1;       // sw row done (1T clk_jpe) (write one clear)
            u16 nRegJpeGSwVsync: 1;         // sw vsync (1T clk_jpe) (write one clear), but not work anymore...
        } tReg75;
        u16 nReg75;
    } uReg75;

    union
    {
        struct
        {
            u16 nRegJpeGCrcResult0: 16;     // CRC64[15..0]
        } tReg76;
        u16 nReg76;
    } uReg76;

    union
    {
        struct
        {
            u16 nRegJpeGCrcResult1: 16;     // CRC64[31..16]
        } tReg77;
        u16 nReg77;
    } uReg77;

    union
    {
        struct
        {
            u16 nRegJpeGCrcResult2: 16;     // CRC64[47..32]
        } tReg78;
        u16 nReg78;
    } uReg78;

    union
    {
        struct
        {
            u16 nRegJpeGCrcResult3: 16;     // CRC64[63..48]
        } tReg79;
        u16 nReg79;
    } uReg79;

    union
    {
        struct
        {
            u16 nRegJpeGBistFail0: 16;
        } tReg7a;
        u16 nReg7a;
    } uReg7a;

    union
    {
        struct
        {
            u16 nRegJpeGDebugOutLow: 16;
        } tReg7b;
        u16 nReg7b;
    } uReg7b;

    union
    {
        struct
        {
        u16 nRegJpeGDebugOutHigh: 5;
        } tReg7c;
        u16 nReg7c;
    } uReg7c;

    union
    {
        struct
        {
            u16 regClk_jpe_clock_setting: 2;
            u16 regClk_clock_source: 3;
        };
        u16 regClk;
    };
} JpeReg_t;

#endif // __HAL_JPE_REG_H__
