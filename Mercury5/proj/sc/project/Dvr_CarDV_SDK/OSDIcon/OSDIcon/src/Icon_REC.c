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
* Source file: Icon_REC
* Dimensions:  48 * 32
* NumColors:   2
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

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_REC[] = {
     0xFF00FF,0x0000FF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_REC = {
  2,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_REC[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_REC[] = {
  ________, ________, ________, ________, ________, ________,
  ________, ________, ___XXXXX, ________, ___XXXXX, ________,
  ________, ________, _XXXXXXX, XX______, _XXXXXXX, XX______,
  ________, ________, XXXXXXXX, XXX_____, XXXXXXXX, XXX_____,
  ________, _______X, XXXXXXXX, XXXX___X, XXXXXXXX, XXXX____,
  ________, ______XX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXX___,
  ________, ______XX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXX___,
  ________, ______XX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXX___,
  ________, ______XX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXX___,
  ________, ______XX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXX___,
  ________, _______X, XXXXXXXX, XXXX___X, XXXXXXXX, XXXX____,
  __X_____, ________, XXXXXXXX, XXX_____, XXXXXXXX, XXX_____,
  __XX____, ________, _XXXXXXX, XX______, _XXXXXXX, XX______,
  __XXX___, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXX__, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXX_, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXXX, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXXX_, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XXXX__, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __XX____, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  __X_____, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__,
  ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________,
  ________, ________, ________, ________, ________, ________
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_REC = {
  48, /* XSize */
  32, /* YSize */
  6, /* BytesPerLine */
  1, /* BitsPerPixel */
  acIcon_REC,  /* Pointer to picture data (indices) */
  &PalIcon_REC  /* Pointer to palette */
};

/* *** End of file *** */
