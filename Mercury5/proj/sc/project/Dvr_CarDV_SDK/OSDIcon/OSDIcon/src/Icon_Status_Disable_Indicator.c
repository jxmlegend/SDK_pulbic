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
* Source file: Icon_Status_Disable_Indicator
* Dimensions:  25 * 36
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

static GUI_CONST_STORAGE GUI_COLOR ColorsIcon_Status_Disable_Indicator[] = {
     0xAA50FF,0x5E5E5E
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalIcon_Status_Disable_Indicator = {
  2,	/* number of entries */
  1, 	/* Has transparency */
  &ColorsIcon_Status_Disable_Indicator[0]
};

static GUI_CONST_STORAGE unsigned char acIcon_Status_Disable_Indicator[] = {
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x50, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x50, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x05, 0x54, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x05, 0x54, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x55, 0x55, 0x40, 0x00, 0x00,
  0x00, 0x01, 0x55, 0x55, 0x50, 0x00, 0x00,
  0x00, 0x01, 0x55, 0x55, 0x50, 0x00, 0x00,
  0x00, 0x05, 0x55, 0x55, 0x54, 0x00, 0x00,
  0x00, 0x05, 0x55, 0x55, 0x54, 0x00, 0x00,
  0x00, 0x15, 0x55, 0x55, 0x55, 0x00, 0x00,
  0x00, 0x15, 0x55, 0x55, 0x55, 0x00, 0x00,
  0x00, 0x55, 0x55, 0x55, 0x55, 0x40, 0x00,
  0x01, 0x55, 0x55, 0x55, 0x55, 0x50, 0x00,
  0x01, 0x55, 0x55, 0x55, 0x55, 0x50, 0x00,
  0x05, 0x54, 0x15, 0x55, 0x05, 0x54, 0x00,
  0x05, 0x50, 0x15, 0x55, 0x01, 0x54, 0x00,
  0x15, 0x00, 0x15, 0x55, 0x00, 0x15, 0x00,
  0x50, 0x00, 0x15, 0x55, 0x00, 0x01, 0x40,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x15, 0x55, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmIcon_Status_Disable_Indicator = {
  25, /* XSize */
  36, /* YSize */
  7, /* BytesPerLine */
  2, /* BitsPerPixel */
  acIcon_Status_Disable_Indicator,  /* Pointer to picture data (indices) */
  &PalIcon_Status_Disable_Indicator  /* Pointer to palette */
};

/* *** End of file *** */
