/*
********************************************************************************
*
*      GSM AMR-NB speech codec   R98   Version 7.6.0   December 12, 2001
*                                R99   Version 3.3.0                
*                                REL-4 Version 4.1.0                
*
********************************************************************************
*
*      File             : d_homing.tab
*      Purpose          : definitions for decoder homing frames
*
*      $Id $
*
********************************************************************************
*/

#ifndef d_homing_tab
#define d_homing_tab

#include "typedef.h"
#include "mode.h"

#include "bitno.tab"


static const Word16 dhf_MR475[PRMNO_MR475] =
{
    0x00F8,
    0x009D,
    0x001C,
    0x0066,
    0x0000,
    0x0003,
    0x0028,
    0x000F,
    0x0038,
    0x0001,
    0x000F,
    0x0031,
    0x0002,
    0x0008,
    0x000F,
    0x0026,
    0x0003 
};
   
static const Word16 dhf_MR515[PRMNO_MR515] =
{
    0x00F8,
    0x009D,
    0x001C,
    0x0066,
    0x0000,
    0x0003,
    0x0037,
    0x000F,
    0x0000,
    0x0003,
    0x0005,
    0x000F,
    0x0037,
    0x0003,
    0x0037,
    0x000F,
    0x0023,
    0x0003,
    0x001F 
};

static const Word16 dhf_MR59[PRMNO_MR59] =
{
    0x00F8,
    0x00E3,
    0x002F,
    0x00BD,
    0x0000,
    0x0003,
    0x0037,
    0x000F,
    0x0001,
    0x0003,
    0x000F,
    0x0060,
    0x00F9,
    0x0003,
    0x0037,
    0x000F,
    0x0000,
    0x0003,
    0x0037 
};

static const Word16 dhf_MR67[PRMNO_MR67] =
{
    0x00F8,
    0x00E3,
    0x002F,
    0x00BD,
    0x0002,
    0x0007,
    0x0000,
    0x000F,
    0x0098,
    0x0007,
    0x0061,
    0x0060,
    0x05C5,
    0x0007,
    0x0000,
    0x000F,
    0x0318,
    0x0007,
    0x0000 
};

static const Word16 dhf_MR74[PRMNO_MR74] =
{
    0x00F8,
    0x00E3,
    0x002F,
    0x00BD,
    0x0006,
    0x000F,
    0x0000,
    0x001B,
    0x0208,
    0x000F,
    0x0062,
    0x0060,
    0x1BA6,
    0x000F,
    0x0000,
    0x001B,
    0x0006,
    0x000F,
    0x0000 
};

static const Word16 dhf_MR795[PRMNO_MR795] =
{
    0x00C2,
    0x00E3,
    0x002F,
    0x00BD,
    0x0006,
    0x000F,
    0x000A,
    0x0000,
    0x0039,
    0x1C08,
    0x0007,
    0x000A,
    0x000B,
    0x0063,
    0x11A6,
    0x000F,
    0x0001,
    0x0000,
    0x0039,
    0x09A0,
    0x000F,
    0x0002,
    0x0001 
};

static const Word16 dhf_MR102[PRMNO_MR102] =
{
    0x00F8,
    0x00E3,
    0x002F,
    0x0045,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x001B,
    0x0000,
    0x0001,
    0x0000,
    0x0001,
    0x0326,
    0x00CE,
    0x007E,
    0x0051,
    0x0062,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x015A,
    0x0359,
    0x0076,
    0x0000,
    0x001B,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x017C,
    0x0215,
    0x0038,
    0x0030 
};

static const Word16 dhf_MR122[PRMNO_MR122] =
{
    0x0004,
    0x002A,
    0x00DB,
    0x0096,
    0x002A,
    0x0156,
    0x000B,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0000,
    0x0036,
    0x000B,
    0x0000,
    0x000F,
    0x000E,
    0x000C,
    0x000D,
    0x0000,
    0x0001,
    0x0005,
    0x0007,
    0x0001,
    0x0008,
    0x0024,
    0x0000,
    0x0001,
    0x0000,
    0x0005,
    0x0006,
    0x0001,
    0x0002,
    0x0004,
    0x0007,
    0x0004,
    0x0002,
    0x0003,
    0x0036,
    0x000B,
    0x0000,
    0x0002,
    0x0004,
    0x0000,
    0x0003,
    0x0006,
    0x0001,
    0x0007,
    0x0006,
    0x0005,
    0x0000 
};
        


/* overall table with the parameters of the
   decoder homing frames for all modes */
static const Word16 *dhf[] =
{
   dhf_MR475,
   dhf_MR515,
   dhf_MR59,
   dhf_MR67,
   dhf_MR74,
   dhf_MR795,
   dhf_MR102,
   dhf_MR122
};

#endif
