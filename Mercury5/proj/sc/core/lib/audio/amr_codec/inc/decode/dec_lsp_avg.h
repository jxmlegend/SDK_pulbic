/*
********************************************************************************
*
*      GSM AMR-NB speech codec   R98   Version 7.6.0   December 12, 2001
*                                R99   Version 3.3.0                
*                                REL-4 Version 4.1.0                
*
********************************************************************************
*
*      File             : lsp_avg.h
*      Purpose:         : LSP averaging and history
*                         The LSPs are averaged over 8 frames
*
********************************************************************************
*/
#ifndef dec_lsp_avg_h
#define dec_lsp_avg_h "$Id $"
 
/*
********************************************************************************
*                         INCLUDE FILES
********************************************************************************
*/
#include "typedef.h"
#include "cnst.h"

/*
********************************************************************************
*                         LOCAL VARIABLES AND TABLES
********************************************************************************
*/

#define EXPCONST          5243               /* 0.16 in Q15 */
 
/*
********************************************************************************
*                         DEFINITION OF DATA TYPES
********************************************************************************
*/
typedef struct {
  Word16 lsp_meanSave[M];          /* Averaged LSPs saved for efficiency  */
} lsp_avgState;
 
/*
********************************************************************************
*                         DECLARATION OF PROTOTYPES
********************************************************************************
*/

/*
**************************************************************************
*
*  Function    : lsp_avg_init
*  Purpose     : Allocates memory and initializes state variables
*
**************************************************************************
*/
int Decoder_lsp_avg_init (
    lsp_avgState *state
);
 
/*
**************************************************************************
*
*  Function    : lsp_history_reset
*  Purpose     : Resets state memory
*
**************************************************************************
*/
int Decoder_lsp_avg_reset (
    lsp_avgState *state
);
 
/*
**************************************************************************
*
*  Function    : lsp_avg_exit
*  Purpose     : The memory used for state memory is freed
*
**************************************************************************
*/
void Decoder_lsp_avg_exit (
    lsp_avgState *state
);

/*
**************************************************************************
*
*  Function    : lsp_avg
*  Purpose     : Calculate the LSP averages
*
**************************************************************************
*/
void Decoder_lsp_avg (
    lsp_avgState *st,     /* i/o : State struct                 Q15 */
    Word16 *lsp           /* i   : LSP vector                   Q15 */
);
#endif
