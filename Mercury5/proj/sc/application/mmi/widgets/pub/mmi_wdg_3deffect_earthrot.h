#ifndef __MMI_WDG_3DEFFECT_EARTHROT_H__
#define __MMI_WDG_3DEFFECT_EARTHROT_H__

#include "mae_wallpaper_effect.h"

MAE_WALLPAPER_EFFECT_INFO _3deffect_earthrot_create(void* pWidget);  // return NULL when create fail
MAE_Ret _3deffect_earthrot_release(MAE_WALLPAPER_EFFECT_INFO peffectdata);
MAE_Ret _3deffect_earthrot_release_cache(MAE_WALLPAPER_EFFECT_INFO peffectdata);
MAE_Ret _3deffect_earthrot_configure(MAE_WALLPAPER_CONFIG_DATA *pCfg, boolean bLoadCfg);
MAE_Ret _3deffect_earthrot_draw(MAE_WALLPAPER_EFFECT_INFO peffectdata, IDispCanvas *pDispCanvas, s32 x, s32 y);
MAE_Ret _3deffect_earthrot_animation_timehandler(void* pWidget, MAE_WALLPAPER_EFFECT_INFO peffectdata);
MAE_Ret _3deffect_earthrot_touchevent_handler(MAE_EventId eventID, u32 param1, u32 param2, MAE_WALLPAPER_EFFECT_INFO peffectdata);

#endif
