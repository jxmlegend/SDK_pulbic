/**
 * @file    mmi_wdg_opdesktop_priv.h
 * @brief   The internal structure of the omp desktopwidget

 */

#ifndef __MMI_WDG_OPDESKTOP_PRIV_H__
#define __MMI_WDG_OPDESKTOP_PRIV_H__

#include "mmi_mae_common_def.h"
#include "mmi_wdg_desktop.h"
#include "mmi_offapp.h"
#include "rs_layout_id.h"

#if defined(__GADGETS_MMI__) || defined(__3D_UI_IDLE_GADGETBAR__) || defined(__3D_UI_IDLE_MULTIPAGE__)

typedef struct
{
	DECLARE_BASECLASS_DESKTOPWIDGET

	// Subwidget codes
	IWidget			*pITextMasterWidget;
	IWidget			*pITextSlaveWidget;
} OpDesktopWdg_t;

/*************************************************************************/
/*   For IBase Interface                                                 */
/*************************************************************************/

/*************************************************************************/
/*   For IWidget interface                                               */
/*************************************************************************/

/*************************************************************************/
/*   Other Local Functions                                               */
/*************************************************************************/

#endif //__GADGETS_MMI__ || __3D_UI_IDLE_GADGETBAR__ || __3D_UI_IDLE_MULTIPAGE__
#endif //__MMI_WDG_OPDESKTOP_PRIV_H__
/*=============================================================*/
// end of file
