#ifndef __FMS_TRC_ITF__
#define __FMS_TRC_ITF__

/*--------------------------------------------------------------------------*/
/* INCLUDE FILE                                                             */
/*--------------------------------------------------------------------------*/
#include "vm_types.ht"
#include "mdl_fms_backtrace.h"



/*--------------------------------------------------------------------------*/
/* PREPROCESSOR CONSTANT DEFINITION                                         */
/*--------------------------------------------------------------------------*/
#ifdef DefExtern
#undef DefExtern
#endif
#ifdef __FMS_TRC_ITF__
#define DefExtern
#else
#define DefExtern extern
#endif
#define TRC_LOCK_SEM  (NAND_TRC_REENTRY_LOCK_SEM)


/*--------------------------------------------------------------------------*/
/* TYPE DEFINITION                                                          */
/*--------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------*/
/* GLOBAL FUNCTION DEFINITION                                               */
/*--------------------------------------------------------------------------*/

#endif //__FMS_TRC_ITF__

