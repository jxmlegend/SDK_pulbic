#ifndef __MMI_EMUAPP_RS_H__
#define __MMI_EMUAPP_RS_H__
#include "mmi_rs_macro_struct.h"

#if defined(__PC_SIMULATOR__) && defined(__RS_USE_SCRIPT__)

#include "mmi_emuapp.rs"
#include "mmi_rs_macro_val.h"
#include "mmi_emuapp.rs"

#else

#include "mmi_emuapp.rs"

#endif

#endif  /*__MMI_EMUAPP_RS_H__*/
