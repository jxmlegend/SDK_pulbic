/*
 * ===================================================================
 *  TS 26.104
 *  REL-5 V5.4.0 2004-03
 *  REL-6 V6.1.0 2004-03
 *  3GPP AMR Floating-point Speech Codec
 * ===================================================================
 *
 */

/*
 * sp_enc.h
 *
 *
 * Project:
 *    AMR Floating-Point Codec
 *
 * Contains:
 *    Defines interface to AMR encoder
 *
 */
#ifndef _SP_DEC_H_
#define _SP_DEC_H_

#include "amr_typedef.h"
#include "amr_mode.h"
#include "romlibTbl.h"

#define STEREO_OUTPUT_3D

/*
 * definition of enumerated types
 */


/* Declaration recieved frame types */
enum RXFrameType { RX_SPEECH_GOOD = 0,
                   RX_SPEECH_DEGRADED,
                   RX_ONSET,
                   RX_SPEECH_BAD,
                   RX_SID_FIRST,
                   RX_SID_UPDATE,
                   RX_SID_BAD,
                   RX_NO_DATA,
                   RX_N_FRAMETYPES     /* number of frame types */
};

/*
 * Function prototypes
 */

/*
 * initialize one instance of the speech decoder
 */
void* Speech_Decode_Frame_init(AMRLIB_VARSTRUCT *libVarStruct);

/*
 * free status struct
 */
#if 0
void Speech_Decode_Frame_exit (void **st);
#endif
/*
 * Decodes one frame from encoded parameters
 */
void Speech_Decode_Frame (void *st, enum Mode mode, short *serial,
                   enum RXFrameType frame_type, short *synth);

/*
 * reset speech decoder
 */
int Speech_Decode_Frame_reset (void **st);

void gc_pred( gc_predState *st, enum Mode mode, Word32 *code, Word32 *
      exp_gcode0, Word32 *frac_gcode0, Word32 *exp_en, Word32 *frac_en );

#endif

