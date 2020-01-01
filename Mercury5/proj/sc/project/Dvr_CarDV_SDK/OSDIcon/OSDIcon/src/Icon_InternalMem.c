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
* Source file: Icon_InternalMem
* Dimensions:  24 * 32
* NumColors:   14
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

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_InternalMem[] = {
     0xFF00FF,0xFFFFFF,0x030303,0xFFFFFF
    ,0x030303,0xFE00FE,0xFEFEFE,0xFFFFFF
    ,0x1A0E1A,0x0D080D,0x050405,0x030303
    ,0xFFFFFF,0x030303
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_InternalMem = {
  14,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_InternalMem[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_InternalMem[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0B, 0x22, 0x22, 0x2B, 0xBB, 0xBB, 0xBB, 0x22, 0x00, 0x00,
  0x00, 0x02, 0x22, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x12, 0x2B, 0x00,
  0x00, 0xB8, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0xB0,
  0x00, 0xB1, 0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0xB0,
  0x00, 0xB1, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0xB1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0xB1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x22, 0x21, 0xB0,
  0x00, 0xB1, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x21, 0xB0,
  0x00, 0xB1, 0x12, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xA2, 0x11, 0xB0,
  0x00, 0xB9, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0xB0,
  0x00, 0x02, 0x22, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x1B, 0x12, 0x2B, 0x00,
  0x00, 0x00, 0x0B, 0x22, 0x22, 0x2B, 0xBB, 0xBB, 0xBB, 0x22, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_InternalMem = {
  24, /* XSize */
  32, /* YSize */
  12, /* BytesPerLine */
  4, /* BitsPerPixel */
  acIcon_InternalMem,  /* Pointer to picture data (indices) */
  &PalIcon_InternalMem  /* Pointer to palette */
};

/* *** End of file *** */
