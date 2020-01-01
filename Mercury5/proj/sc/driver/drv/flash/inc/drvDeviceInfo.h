////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2008-2009 MStar Semiconductor, Inc.
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

///////////////////////////////////////////////////////////////////////////////////////////////////
///
/// @file   drvDeviceInfo.h
/// @brief  Serial Flash Device Information
/// @author MStar Semiconductor Inc.
///////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _DRV_DEVICE_INFO_H_
#define _DRV_DEVICE_INFO_H_


//-------------------------------------------------------------------------------------------------
//  Macro and Define
//-------------------------------------------------------------------------------------------------

// Flash IC


#define FLASH_IC_UNKNOWN         0x0000UL
// SST
#define FLASH_IC_SST25VF080B     0x0100UL      // 1M    SST
#define FLASH_IC_SST25VF016B     0x0101UL      // 2M
#define FLASH_IC_SST25VF032B     0x0102UL      // 2M

#define FLASH_IC_PM25LV080       0x0200UL      // 1M    PMC
#define FLASH_IC_PM25LV016       0x0201UL      // 2M
#define FLASH_IC_PM25LQ032C      0x0202UL      // 4M

#define FLASH_IC_ST25P80_A       0x0300UL      // 1M    ST
#define FLASH_IC_ST25P16_A       0x0301UL      // 2M
#define FLASH_IC_STM25P32        0x0302UL      // 4M
//ATMEL
#define FLASH_IC_AT26DF081A      0x0400UL      // 1M    ATMEL
#define FLASH_IC_AT26DF161       0x0401UL      // 2M
#define FLASH_IC_AT26DF321       0x0402UL      // 4M
#define FLASH_IC_AT25DF321A      0x0403UL      // 4M

// MXIC
#define FLASH_IC_MX25L8005       0x0500UL      // 1M    MXIC
#define FLASH_IC_MX25L1655D      0x0501UL      // 2M for secure option
#define FLASH_IC_MX25L1606E      0x0502UL      // 2M
#define FLASH_IC_MX25L1605A      0x0503UL      // 2M
#define FLASH_IC_MX25L3206E      0x0504UL      // 4M
#define FLASH_IC_MX25L3205D      0x0505UL      // 4M
#define FLASH_IC_MX25L6405D      0x0506UL      // 8M
#define FLASH_IC_MX25L6406E      0x0507UL      // 8M
#define FLASH_IC_MX25L12805D     0x0508UL      // 16M
#define FLASH_IC_MX25L12845E     0x0509UL      // 16M
#define FLASH_IC_MX25L6445E      0x050AUL      // 8M
#define FLASH_IC_MX25L6455E      0x050BUL      // 8M
#define FLASH_IC_MX25L12855E     0x050CUL      // 16M
#define FLASH_IC_MX25L4006E      0x050DUL      // 512K    MXIC
#define FLASH_IC_MX25L8006E      0x050EUL      // 1M    MXIC
#define FLASH_IC_MX25L3255D      0x0512UL      // 4M for secure option

// NX
#define FLASH_IC_NX25P80         0x0600UL      // 1M    NX
#define FLASH_IC_NX25P16         0x0601UL      // 2M

// WINB
#define FLASH_IC_W25X80          0x0700UL      // 1M    WINB
#define FLASH_IC_W25Q80          0x0701UL      // 1M
#define FLASH_IC_W25Q16          0x0702UL      // 2M
#define FLASH_IC_W25X16          0x0703UL      // 2M
#define FLASH_IC_W25X32          0x0704UL      // 4M
#define FLASH_IC_W25Q32          0x0705UL      // 4M
#define FLASH_IC_W25X64          0x0706UL      // 8M
#define FLASH_IC_W25Q64          0x0707UL      // 8M
#define FLASH_IC_W25Q64CV        0x0708UL      // 8M
#define FLASH_IC_W25Q128         0x0709UL      // 16M
#define FLASH_IC_W25Q32BV        0x070AUL      // 4M
#define FLASH_IC_W25X40          0x070BUL      // 512K    WINB

//SPANSION
#define FLASH_IC_S25FL008A       0x0800UL      // 1M    SPANSION
#define FLASH_IC_S25FL016A       0x0801UL      // 2M
#define FLASH_IC_S25FL128P       0x0802UL      // 16M
#define FLASH_IC_S25FL032P       0x0803UL      // 4M
#define FLASH_IC_S25FL064P       0x0804UL      // 8M
#define FLASH_IC_S25FL032K       0x0805UL      // 4M
#define FLASH_IC_S25FL032        0x0804UL      // 4M

// EON
#define FLASH_IC_EN25F10         0x0900UL      // 128K for secure boot
#define FLASH_IC_EN25F16         0x0901UL      // 2M
#define FLASH_IC_EN25F32         0x0902UL      // 4M
#define FLASH_IC_EN25F80         0x0903UL      // 1M
#define FLASH_IC_EN25B20T        0x0904UL      // 2M    EON
#define FLASH_IC_EN25B20B        0x0905UL      // 2M
#define FLASH_IC_EN25B10T        0x0906UL      // 1M
#define FLASH_IC_EN25B10B        0x0907UL      // 1M
#define FLASH_IC_EN25B32B        0x0908UL      // 4M    (Bottom Boot)
#define FLASH_IC_EN25Q32         0x0909UL      // 4M
#define FLASH_IC_EN25Q32A        0x090AUL      // 4M
#define FLASH_IC_EN25Q64         0x090BUL      // 4M
#define FLASH_IC_EN25B64B        0x090CUL      // 4M
#define FLASH_IC_EN25Q128        0x090DUL      // 16M
#define FLASH_IC_EN25P16         0x090EUL      // 2M
#define FLASH_IC_EN25F40         0x090AUL      // 512k
#define FLASH_IC_EN25QH16        0x090BUL      // 2M

// ESMT
#define FLASH_IC_ESMT_F25L016A   0x0A00UL      // 2M
// GD
#define FLASH_IC_GD25Q32         0x0B00UL      // 4M
#define FLASH_IC_GD25Q16         0x0B01UL      // 2MByte
#define FLASH_IC_GD25S80         0x0B02UL
#define FLASH_IC_GD25Q64         0x0B03UL      // 8M
#define FLASH_IC_GD25Q128        0x0B05UL      //16M
// AM
#define FLASH_IC_A25LM032        0x0D00UL

// MICRON
#define FLASH_IC_MICRON_M25P16   0x0E00UL      // 2M
#define FLASH_IC_MICRON_N25Q32   0x0E01UL      // 4M
#define FLASH_IC_MICRON_N25Q64   0x0E02UL      // 8M
#define FLASH_IC_MICRON_N25Q128  0x0E03UL      // 16M
#define FLASH_IC_NUMONYX_M25PX16 0x0E04UL      // 2M




// Flash Manufacture ID
#define MID_MXIC                0xC2UL
#define MID_WB                  0xEFUL
#define MID_EON                 0x1CUL
#define MID_ST                  0x20UL
#define MID_SST                 0xBFUL
#define MID_PMC                 0x9DUL
#define MID_ATMEL               0x1FUL
#define MID_SPAN                0x01UL
#define MID_GD                  0xC8UL
#define MID_MICRON              0x20UL
#define MID_NUMONYX             0x20UL
#define MID_AM                  0x37UL

// Flash Storage Size
#define SIZE_1KB                0x400UL
#define SIZE_2KB                0x800UL
#define SIZE_4KB                0x1000UL
#define SIZE_8KB                0x2000UL
#define SIZE_16KB               0x4000UL
#define SIZE_32KB               0x8000UL
#define SIZE_64KB               0x10000UL
#define SIZE_128KB              0x20000UL
#define SIZE_256KB              0x40000UL
#define SIZE_512KB              0x80000UL
#define SIZE_1MB                0x100000UL
#define SIZE_2MB                0x200000UL
#define SIZE_4MB                0x400000UL
#define SIZE_8MB                0x800000UL
#define SIZE_16MB               0x1000000UL

// ISP_DEV_SEL
#define ISP_DEV_PMC             BITS(2:0, 0)
#define ISP_DEV_NEXTFLASH       BITS(2:0, 1)
#define ISP_DEV_ST              BITS(2:0, 2)
#define ISP_DEV_SST             BITS(2:0, 3)
#define ISP_DEV_ATMEL           BITS(2:0, 4)

// ISP_SPI_ENDIAN_SEL
#define ISP_SPI_ENDIAN_BIG      BITS(0:0, 1)
#define ISP_SPI_ENDIAN_LITTLE   BITS(0:0, 0)
#define BITS(_bits_, _val_)         ((BIT(((1)?_bits_)+1)-BIT(((0)?_bits_))) & (_val_<<((0)?_bits_)))
#define BMASK(_bits_)               (BIT(((1)?_bits_)+1)-BIT(((0)?_bits_)))

typedef struct
{
    u8   u8BlockProtectBits;  // Block Protection Bits
    u32  u32LowerBound;
    u32  u32UpperBound;
} ST_WRITE_PROTECT;

typedef struct
{
    u16  u16Start;           // Start block # of special block size
    u16  u16End;             // End   block # of special block size
    u32  au32SizeList[8];    // List of special block sizes. Total size must be equal to FLASH_BLOCK_SIZE
} ST_SPECIAL_BLOCKS;


typedef struct
{
    u16  u16FlashType;   // flash type
    u8   u8MID;          // Manufacture ID
    u8   u8DID0;         // Device ID (memory type)
    u8   u8DID1;         // Device ID (memory capacity)

    ST_WRITE_PROTECT   *pWriteProtectTable;
    ST_SPECIAL_BLOCKS  *pSpecialBlocks;

    u32  u32FlashSize;               // Flash Size
    u32  u32NumSec;                  // NUMBER_OF_SERFLASH_SECTORS                  // number of sectors
    u32  u32SecSize;                 // SERFLASH_SECTOR_SIZE                                // sector size
    u16  u16PageSize;                // SERFLASH_PAGE_SIZE                                    // page size
    u16  u16MaxChipWrDoneTimeout;    // SERFLASH_MAX_CHIP_WR_DONE_TIMEOUT    // max timeout for chip write done
    u8   u8WrsrBlkProtect;           // SERFLASH_WRSR_BLK_PROTECT                     // BP bits @ Serial Flash Status Register
    u16  u16DevSel;                  // ISP_DEV_SEL                                                  // reg_device_select
    u16  u16SpiEndianSel;            // ISP_SPI_ENDIAN_SEL                                     // reg_endian_sel_spi
    u16  u16SPIMaxClk[2];
    bool b2XREAD;
    bool b4XREAD;
} hal_SERFLASH_t;

#endif //_DRV_DEVICE_INFO_H_
