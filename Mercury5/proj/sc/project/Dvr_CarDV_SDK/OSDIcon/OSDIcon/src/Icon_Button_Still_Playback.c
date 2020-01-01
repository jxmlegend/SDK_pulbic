/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        �C/GUI-BitmapConvert V5.04.
*        Compiled Jan  8 2010, 16:46:31
*          (c) 2002-2005  Micrium, Inc.
  www.micrium.com

  (c) 1998-2005  Segger
  Microcontroller Systeme GmbH
  www.segger.com
*
**********************************************************************
*
* Source file: Icon_Button_Still_Playback
* Dimensions:  36 * 32
* NumColors:   98
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_Button_Still_Playback[] = {
     0xFE00FE,0x650000,0x640000,0x630000
    ,0x620000,0x610000,0x5F0000,0x5E0000
    ,0x5C0000,0x5B0000,0x590000,0x560000
    ,0x540000,0x520000,0x500000,0x4D0000
    ,0x4A0000,0x470000,0x440000,0x410000
    ,0x3F0000,0x3C0000,0x3A0000,0x370000
    ,0x350000,0x340000,0x330000,0x320000
    ,0x310000,0x731818,0x863838,0x4D2020
    ,0x4C2020,0x512828,0x904848,0xA26565
    ,0x988080,0xDDC7C7,0xBEAEAE,0xE7D7D7
    ,0xF3EBEB,0xE0D9D9,0xF7F2F2,0xF0EDED
    ,0xFEFEFE,0xFCFCFC,0xFBFBFB,0xF8F8F8
    ,0xF7F7F7,0xF6F6F6,0xF5F5F5,0xF2F2F2
    ,0xEFEFEF,0xEDEDED,0xECECEC,0xE8E8E8
    ,0xE5E5E5,0xE4E4E4,0xE2E2E2,0xE0E0E0
    ,0xDFDFDF,0xDDDDDD,0xD7D7D7,0xD5D5D5
    ,0xCFCFCF,0xCECECE,0xCBCBCB,0xC9C9C9
    ,0xC8C8C8,0xC7C7C7,0xC1C1C1,0xC0C0C0
    ,0xBEBEBE,0xBBBBBB,0xBABABA,0xB6B6B6
    ,0xB5B5B5,0xB4B4B4,0xB3B3B3,0xB1B1B1
    ,0x4D4D4D,0x4A4A4A,0x464646,0x424242
    ,0x3E3E3E,0x393939,0x343434,0x2F2F2F
    ,0x2B2B2B,0x262626,0x212121,0x1C1C1C
    ,0x171717,0x131313,0x0F0F0F,0x0B0B0B
    ,0xFFFFFF,0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_Button_Still_Playback = {
  98,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_Button_Still_Playback[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_Button_Still_Playback[] = {
  0x00, 0x00, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x00, 0x00,
  0x00, 0x28, 0x23, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1D, 0x25, 0x2A, 0x00,
  0x2C, 0x22, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x27, 0x2C,
  0x2C, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1E, 0x2C,
  0x2C, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x2C,
  0x2C, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x2C,
  0x2C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x51, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x51, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x2C,
  0x2C, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x52, 0x2D, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x52, 0x2D, 0x52, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x2C,
  0x2C, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x53, 0x30, 0x53, 0x53, 0x53, 0x53, 0x30, 0x30, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x30, 0x53, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x2C,
  0x2C, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x54, 0x33, 0x54, 0x54, 0x54, 0x54, 0x2C, 0x2C, 0x2C, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x33, 0x54, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x2C,
  0x2C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x55, 0x36, 0x55, 0x55, 0x55, 0x55, 0x31, 0x31, 0x31, 0x2F, 0x55, 0x55, 0x55, 0x55, 0x55, 0x36, 0x55, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x2C,
  0x2C, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x56, 0x38, 0x56, 0x56, 0x56, 0x56, 0x34, 0x35, 0x35, 0x34, 0x34, 0x56, 0x56, 0x56, 0x56, 0x38, 0x56, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x2C,
  0x2C, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x57, 0x3D, 0x57, 0x57, 0x57, 0x57, 0x3A, 0x3A, 0x39, 0x39, 0x3A, 0x3A, 0x57, 0x57, 0x57, 0x3C, 0x57, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x2C,
  0x2C, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x58, 0x3F, 0x58, 0x58, 0x58, 0x58, 0x3F, 0x3F, 0x3E, 0x3F, 0x3E, 0x3E, 0x58, 0x58, 0x58, 0x3F, 0x58, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x2C,
  0x2C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x59, 0x41, 0x59, 0x59, 0x59, 0x59, 0x43, 0x43, 0x42, 0x42, 0x43, 0x59, 0x59, 0x59, 0x59, 0x41, 0x59, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x2C,
  0x2C, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x5A, 0x44, 0x5A, 0x5A, 0x5A, 0x5A, 0x47, 0x48, 0x47, 0x48, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x44, 0x5A, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x2C,
  0x2C, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x5B, 0x46, 0x5B, 0x5B, 0x5B, 0x5B, 0x4C, 0x4C, 0x4C, 0x5B, 0x5B, 0x5B, 0x5B, 0x5B, 0x5B, 0x46, 0x5B, 0x2E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x2C,
  0x2C, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x5C, 0x49, 0x5C, 0x5C, 0x5C, 0x5C, 0x49, 0x49, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x49, 0x5C, 0x32, 0x32, 0x32, 0x32, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x2C,
  0x2C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x5D, 0x4B, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x5D, 0x4B, 0x5D, 0x34, 0x34, 0x34, 0x34, 0x34, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x2C,
  0x2C, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x5E, 0x4E, 0x4E, 0x4E, 0x4E, 0x4F, 0x4F, 0x4F, 0x4F, 0x4F, 0x4F, 0x4F, 0x4F, 0x4F, 0x4E, 0x4F, 0x5E, 0x11, 0x37, 0x37, 0x37, 0x37, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x2C,
  0x2C, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x12, 0x12, 0x3B, 0x3B, 0x3B, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x2C,
  0x2C, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x3E, 0x3E, 0x3E, 0x3E, 0x13, 0x13, 0x3E, 0x3E, 0x3E, 0x13, 0x13, 0x3E, 0x3E, 0x3E, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x2C,
  0x2C, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x40, 0x40, 0x40, 0x40, 0x14, 0x14, 0x40, 0x40, 0x40, 0x14, 0x14, 0x40, 0x40, 0x40, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x2C,
  0x2C, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x45, 0x45, 0x45, 0x45, 0x15, 0x15, 0x45, 0x45, 0x45, 0x15, 0x15, 0x45, 0x45, 0x45, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x2C,
  0x2C, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x47, 0x47, 0x47, 0x47, 0x47, 0x16, 0x16, 0x16, 0x16, 0x16, 0x47, 0x47, 0x47, 0x47, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x2C,
  0x2C, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x17, 0x17, 0x17, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x2C,
  0x2C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x4D, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x2C,
  0x2C, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 0x2C,
  0x2C, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1A, 0x1F, 0x2C,
  0x2C, 0x20, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x26, 0x2C,
  0x00, 0x29, 0x21, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x24, 0x2B, 0x00,
  0x00, 0x00, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x2C, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_Button_Still_Playback = {
  36, /* XSize */
  32, /* YSize */
  36, /* BytesPerLine */
  8, /* BitsPerPixel */
  acIcon_Button_Still_Playback,  /* Pointer to picture data (indices) */
  &PalIcon_Button_Still_Playback  /* Pointer to palette */
};

/* *** End of file *** */
