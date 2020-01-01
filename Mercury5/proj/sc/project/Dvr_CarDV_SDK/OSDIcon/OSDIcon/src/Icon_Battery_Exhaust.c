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
* Source file: Icon_Battery_Exhaust
* Dimensions:  24 * 24
* NumColors:   29
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

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_Battery_Exhaust[] = {
     0xFF00FF,0x0000FF,0x060306,0x545154
    ,0x0202FF,0x0F0C0F,0x404040,0x151215
    ,0x333333,0x4D4A4D,0x262626,0x2C2C2C
    ,0x1B181B,0x1F1F1F,0x3A3A3A,0x484548
    ,0x221F22,0x3C393C,0x464646,0x2E2B2E
    ,0x181818,0x292629,0x121212,0x353235
    ,0x0A070A,0x4B4B4B,0x514E51,0x0C0C0C
    ,0x423F42
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_Battery_Exhaust = {
  29,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_Battery_Exhaust[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_Battery_Exhaust[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x1A, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x01, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x19, 0x19, 0x09, 0x09, 0x09, 0x09, 0x09, 0x01, 0x09, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x0F, 0x12, 0x01, 0x12, 0x12, 0x0F, 0x12, 0x0F, 0x0F, 0x12, 0x0F, 0x12, 0x12, 0x12, 0x0F, 0x0F, 0x01, 0x0F, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1C, 0x01, 0x01, 0x01, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x01, 0x06, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x11, 0x01, 0x11, 0x11, 0x0E, 0x11, 0x11, 0x0E, 0x11, 0x0E, 0x0E, 0x11, 0x0E, 0x0E, 0x0E, 0x0E, 0x11, 0x01, 0x0E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x17, 0x01, 0x17, 0x17, 0x17, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x01, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x13, 0x01, 0x0B, 0x13, 0x13, 0x0B, 0x13, 0x0B, 0x0B, 0x13, 0x0B, 0x0B, 0x13, 0x0B, 0x0B, 0x0B, 0x13, 0x01, 0x0B, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x15, 0x01, 0x0A, 0x0A, 0x0A, 0x15, 0x15, 0x0A, 0x0A, 0x15, 0x0A, 0x15, 0x0A, 0x0A, 0x0A, 0x0A, 0x15, 0x01, 0x0A, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x10, 0x01, 0x0D, 0x0D, 0x10, 0x10, 0x10, 0x0D, 0x10, 0x0D, 0x0D, 0x0D, 0x10, 0x0D, 0x0D, 0x0D, 0x10, 0x01, 0x10, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0C, 0x01, 0x01, 0x01, 0x0C, 0x14, 0x0C, 0x14, 0x0C, 0x0C, 0x14, 0x14, 0x0C, 0x0C, 0x14, 0x14, 0x0C, 0x01, 0x0C, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x16, 0x16, 0x01, 0x16, 0x07, 0x07, 0x07, 0x07, 0x07, 0x16, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x01, 0x07, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x01, 0x1B, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x01, 0x05, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x18, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_Battery_Exhaust = {
  24, /* XSize */
  24, /* YSize */
  24, /* BytesPerLine */
  8, /* BitsPerPixel */
  acIcon_Battery_Exhaust,  /* Pointer to picture data (indices) */
  &PalIcon_Battery_Exhaust  /* Pointer to palette */
};

/* *** End of file *** */
