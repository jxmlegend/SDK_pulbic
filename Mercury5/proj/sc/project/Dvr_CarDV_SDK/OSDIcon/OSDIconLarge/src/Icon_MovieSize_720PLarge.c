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
* Source file: Icon_MovieSize_720P
* Dimensions:  48 * 32
* NumColors:   16
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

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_MovieSize_720P[] = {
     0xFF00FF,0x2F0000,0x480000,0x5A0000
    ,0x680000,0x750000,0x870000,0x9B0000
    ,0xA70000,0xB40000,0xC60000,0xDA0000
    ,0xE60000,0xF50000,0x0F0000,0xFFFFFF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_MovieSize_720P = {
  16,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_MovieSize_720P[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_MovieSize_720P[] = {
  0x0D, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xD0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0xDD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xCC, 0x00, 0x0C, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xC0, 0x00, 0xCC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xBB, 0x00, 0x0B, 0xBB, 0xBB, 0xBF, 0xFB, 0xBB, 0xFF, 0xBF, 0xFF, 0xFB, 0xBB, 0xBB, 0xBB, 0xB0, 0x00, 0xBB, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xAA, 0x00, 0x0A, 0xAA, 0xAA, 0xAF, 0xFA, 0xAA, 0xFF, 0xAF, 0xFF, 0xFF, 0xAA, 0xAA, 0xAA, 0xA0, 0x00, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAF, 0xFA, 0xAA, 0xFF, 0xAF, 0xFA, 0xAF, 0xFA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x99, 0x99, 0x99, 0x99, 0x99, 0x9F, 0xF9, 0x99, 0xFF, 0x9F, 0xF9, 0x9F, 0xF9, 0x99, 0x99, 0x99, 0x99, 0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x8F, 0xF8, 0x88, 0xFF, 0x8F, 0xF8, 0x8F, 0xF8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x77, 0x77, 0x77, 0x77, 0x77, 0x7F, 0xFF, 0xFF, 0xFF, 0x7F, 0xF7, 0x7F, 0xF7, 0x77, 0x77, 0x77, 0x77, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x06, 0x66, 0x66, 0x6F, 0xFF, 0xFF, 0xFF, 0x6F, 0xF6, 0x6F, 0xF6, 0x66, 0x66, 0x60, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x66, 0x00, 0x06, 0x66, 0x66, 0x6F, 0xF6, 0x66, 0xFF, 0x6F, 0xF6, 0x6F, 0xF6, 0x66, 0x66, 0x60, 0x00, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x55, 0x00, 0x05, 0x55, 0x55, 0x5F, 0xF5, 0x55, 0xFF, 0x5F, 0xF5, 0x5F, 0xF5, 0x55, 0x55, 0x50, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x44, 0x44, 0x44, 0x44, 0x44, 0x4F, 0xF4, 0x44, 0xFF, 0x4F, 0xF4, 0x4F, 0xF4, 0x44, 0x44, 0x44, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x33, 0x33, 0x33, 0x33, 0x33, 0x3F, 0xF3, 0x33, 0xFF, 0x3F, 0xFF, 0xFF, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x22, 0x22, 0x22, 0x22, 0x22, 0x2F, 0xF2, 0x22, 0xFF, 0x2F, 0xFF, 0xF2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x22, 0x00, 0x02, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, 0xFF, 0xFF, 0xFF, 0xF1, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x11, 0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1F, 0xFF, 0xFF, 0xFF, 0xF1, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0xEE, 0x00, 0x0E, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEF, 0xFE, 0xEF, 0xF0, 0xEE, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEF, 0xFE, 0xEF, 0xFE, 0xEE, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x0E, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEF, 0xFE, 0xEF, 0xFE, 0xE0, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_MovieSize_720P = {
  48, /* XSize */
  32, /* YSize */
  24, /* BytesPerLine */
  4, /* BitsPerPixel */
  acIcon_MovieSize_720P,  /* Pointer to picture data (indices) */
  &PalIcon_MovieSize_720P  /* Pointer to palette */
};

/* *** End of file *** */
