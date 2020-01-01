/**
* @file mmi_unitconverterapp_priv.h
*
* State Machine Application - UNITCONVERTER
* Generated by XFSM v1.0, CodeVer=v0.24
*
* Class Id: CLSID_UNITCONVERTER
*
*
* @version $Id$
*/
#ifndef __MMI_UNITCONVERTERAPP_PRIV_H__
#define __MMI_UNITCONVERTERAPP_PRIV_H__

/*-------------------------------------------------------------------------*/

#include "mmi_mae_common_def.h"
#include "mmi_unitconverterapp.h"

#include "mmi_unitconverterapp_util.h"
#include "mmi_cfgsrv.h"
#include "mmi_cfgsrv_mitem_allow_mr_itemid.h"
#include "mmi_unitconverter_cfg.h"
#include "mmi_common_vtm.h"
#include "mmi_unitconverterapp_id.h"
#include "unitconverterapp_resource.h"

// new
#include "mmi_baseapplet.h"

#define LEAPMONTH_TEXT_COUNT 2

typedef enum {
    cUNITCONVERTER_MODE_UnitConverter = 0,
    cUNITCONVERTER_MODE_Idle,
    cUNITCONVERTER_MODE_Init,
    cUNITCONVERTER_MODE_Active,
    cUNITCONVERTER_MODE_Active_Converting,
    cUNITCONVERTER_MODE_Active_SetCurrencyRate,
    cUNITCONVERTER_MODE_Active_Selection,
    cUNITCONVERTER_MODE_Active_EditCustomCurrencyName,
    cUNITCONVERTER_MODE_Active_EditOptionMenu,
    cUNITCONVERTER_MODE_Suspend
} UnitConverterMode_e;

typedef enum
{
	DATA_SELECTION,
	DATA_CURRENCY_RATE

} DataStore_Type_e;

typedef enum
{
	SOURCE_CONVERSION = 0,
	SOURCE_UNIT1 = 1,
	SOURCE_INPUT1 = 2,
	SOURCE_UNIT2 = 3,
	SOURCE_INPUT2 = 4,
	SOURCE_INFO = 5

} Input_Type_e;

typedef enum
{
	SOLAR_TO_LUNAR,
	LUNAR_TO_SOLAR,
	LEAPMONTH_LUNAR_TO_SOLAR

} DateCon_Type_e;

typedef enum
{
	CONTYPE_CURRENCY = 0,
	CONTYPE_ENERGY,
	CONTYPE_SPEED,
	CONTYPE_MASS,
	CONTYPE_AREA,
	CONTYPE_VOLUME,
	CONTYPE_POWER,
	CONTYPE_TIME,
	CONTYPE_PRESSURE,
	CONTYPE_LENGTH,
	CONTYPE_TEMPERATURE,
	CONTYPE_DATE,

    CONTYPE_NUMBER,
} Convert_Type_e;

typedef struct
{
	IWidget      *pIMflContainerWidget;
	IWidget      *pIConTypeWidget;
	IWidget      *pIUnitType1Widget;
	IWidget      *pIUnitType2Widget;
	IWidget      *pIRateWidget;
	IWidget      *pIUnitInput1Widget;
	IWidget      *pIUnitInput2Widget;

	IWidget      *pISolarTextWidget;
	IWidget      *pILunarTextWidget;
	IWidget      *pISolarDateWidget;
	IWidget      *pILunarDateWidget;
	IWidget      *pILeapMonthWidget;

	///////////////////////////////////////////

	u32 nFocusIndex;  // The focused field index of the settings view.

} UnitConverterAppView_t;

typedef struct
{
	IView *pIView;

	IWidget  *pIBaseCurrencyTextWidget;
	IWidget  *pITargetCurrencyTextWidget;
	IWidget  *pICurrencyRateInputWidget;
	IWidget  *pIRateRangeTextWidget;

} UnitConverterRateView_t;

typedef struct
{
	IView *pIView;

	IWidget     *pISelectionMenuWidget;

	u32          nHighlightIndex;

} UnitConverterSelectionView_t;

typedef struct
{
	IView *pIView;

	IWidget         *pIEditInputWidget;

	IWidget         *pIOptMnuWgt;

} UnitConverterEditView_t;

typedef struct WndData_t_
{
  IView* pIView;
} WndData_t;

/*-------------------------------------------------------------------------*/

/**
 * Application structure
 */
typedef struct MMI_UNITCONVERTER_TAG
{
    APPLET_BASE_ELEMENTS;

	UnitConverterAppView_t          *pUnitConverterAppView;
	UnitConverterRateView_t         *pUnitConverterRateView;
	UnitConverterSelectionView_t    *pUnitConverterSelectionView;
	UnitConverterEditView_t         *pUnitConverterEditView;

    u32         inputSource; //SOURCE_INPUT1==0, SOURCE_INPUT2==1
	double      inputValues[2];

	boolean     bSaveCurRate;

	//config service
	UnitConverter_Selection_t Selection;
	UnitConverter_DataStore_t DataStore;

	MAE_WChar   *pEditTxt;

    boolean     bIsDialogPopup;

    u32         CurrentMode;

    MAE_WChar   **ppTypeName;
    u32         nTypeNameCount;

    MAE_WChar   ***pppTypeItemName;
    u32         *pTypeItemNameCount;

    MAE_WChar*  ppLeapMonth[LEAPMONTH_TEXT_COUNT];
    u32         nLeapMonthCount;    
    MAE_DateTime_t  preLunarDate;    
} UnitConverterAppData_t;

/*-------------------------------------------------------------------------*/
MAE_Ret _UniconverterConstructor(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
MAE_Ret _UniconverterDestructor(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
boolean _UniconverterStartCB(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);
boolean _UniconverterKeyPressCB(IApplet *pApplet, u32 nEvt, u32 param1, u32 param2);

boolean _HandleKeyPressConverting(UnitConverterAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
boolean _HandleKeyPressSetRate(UnitConverterAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
boolean _HandleKeyPressEditName(UnitConverterAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);

MAE_Ret _UniconverterWndHdlConverting(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _UniconverterWndHdlSetRate(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _UniconverterWndHdlSelection(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _UniconverterWndHdlEditName(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);
MAE_Ret _UniconverterWndHdlEditMenu(void *pCusHandle, const WindowMsg_t *pWndMsg, void *pWndData, u32 nWndInitParam);

void _UnitConverterInit(UnitConverterAppData_t *pThis,u32 nEvt, u32 param1, u32 param2);
void _UnitConverterPrepareToConvert(UnitConverterAppData_t *pThis);
void  _UnitConverterFinishConvert(UnitConverterAppData_t *pThis);
s32  _UnitConverterCheckCurrencyLeftKey(UnitConverterAppData_t *pThis, u32 nKey);
void _UnitConverterPrepareToSetRate(UnitConverterAppData_t *pThis);
s32  _UnitConverterCheckActKey(UnitConverterAppData_t *pThis,u32 nKey);
void _UnitConverterPrepareToSelection(UnitConverterAppData_t *pThis);
void _UnitConverterPrepareToEditName(UnitConverterAppData_t *pThis);
void _UnitConverterPrepareToEditMenu(UnitConverterAppData_t *pThis);

void  _UnitConverterSaveCurrencyName(UnitConverterAppData_t *pThis);

/*-------------------------------------------------------------------------*/
#endif /* __MMI_UNITCONVERTERAPP_PRIV_H__ */
