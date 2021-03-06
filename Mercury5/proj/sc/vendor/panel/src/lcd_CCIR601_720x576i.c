//==============================================================================
//
//  File        : lcd_CCIR601_720x576i.c
//  Description : 
//  Author      : 
//  Revision    : 1.0
//
//==============================================================================

//==============================================================================
//
//                              INCLUDE FILE
//
//==============================================================================

//#include "Customer_config.h" // CarDV
//#include "lib_retina.h"
#include "lcd_common.h"
//#include "mmpf_pio.h"
#include "drv_bus_spi.h"
#include "drv_mspi.h"
#include "halPnl.h"
//==============================================================================
//
//                              MACRO DEFINE
//
//==============================================================================

#define Delayms(t) 					MMPF_OS_SleepMs(t)

#define SECONDARY_DISPLAY 			(0)

#define PANEL_WIDTH                 720
#define PANEL_HEIGHT              576// 576//PAL
//#define PANEL_HEIGHT             240//480//NTSC

#define _SUPPORT_SW_SPI    0

#define Delay_us(n)   (0) //MMPF_OS_Sleep_MS(n)	//(lcm_util.udelay(n))
#define Delay_ms(n)   (0) //MMPF_OS_Sleep_MS(n)	//(lcm_util.mdelay(n))


typedef unsigned char u8;
typedef int i32;
typedef unsigned int u32;
#define NULL 0

static MMPF_PANEL_ATTR m_PanelAttr = 
{
	// Panel basic setting
	PANEL_WIDTH, PANEL_HEIGHT,
	LCD_TYPE_CCIR601,
	LCD_PRM_CONTROLER,
	0,

	// CarDV
#if ((16 == LCD_MODEL_RATIO_X) && (9 == LCD_MODEL_RATIO_Y))
	LCD_RATIO_16_9,
#else
	LCD_RATIO_4_3,
#endif

	// Panel initial sequence
	NULL,

	// Index/Cmd sequence
	NULL,

	// MCU interface
    LCD_BUS_WIDTH_8,	//ubBusWidth
	LCD_YUV422_UY0VY1,	//ubBusCfg
    LCD_PHASE0,			//ubPhase
    LCD_POLARITY0,		//ubPolarity
    LCD_MCU_80SYS,		//ubMCUSystem
    0,					//usRsLeadCsCnt
    0,					//usCsLeadRwCnt
    0,					//usRwCycCnt
    LCD_RGB_ORDER_RGB,	//ubRgbOrder

	// RGB interface
    MMP_FALSE,				//bPartialDisp
	LCD_SIG_POLARITY_L,     // DCLK Polarity
	LCD_SIG_POLARITY_L,     // H-Sync Polarity
	LCD_SIG_POLARITY_L,     // V-Sync Polarity
    0x02/*RGB_D24BIT_RGB565*/,	//ubRgbFmt
    LCD_TOP_CLK_MPLL_108M,	//ulClkSelect

	{0}
};

#define ENABLE_LCD_LOG       		(1)

#if defined(FAT_BOOT)
#define ENABLE_LCD_TEST_PATTERN 	(1)
#else
#define ENABLE_LCD_TEST_PATTERN 	(0)
#endif

#if (ENABLE_LCD_LOG)
#define LCD_DBG_LEVEL               (0)
#else
#define LCD_DBG_LEVEL               (3)
#endif

//==============================================================================
//
//                              FUNCTIONS
//
//==============================================================================

void RTNA_LCD_InitMainLCD(void)
{
#if (SECONDARY_DISPLAY == 0)
	//RTNA_DBG_Str(LCD_DBG_LEVEL, "### RTNA_LCD CCIR 601 \r\n");

	m_PanelAttr.ulDotClkFreq 	= 27000000; //28000000; 
	
//	m_PanelAttr.usDotClkRatio	= 6;	// DCLK = 166MHz / usDotClkRatio

	
	m_PanelAttr.ubBusCfg		= LCD_YUV422_UY0VY1;//LCD_TYPE_RGBLCD & LCD_TYPE_CCIR601 need to setting only.
	m_PanelAttr.ubRgbOrder		= LCD_RGB_ORDER_RGB;//LCD_TYPE_PLCD  & LCD_TYPE_PLCD_FLM need to setting only.

	// RGB interface
	#if 0///NTSC
	m_PanelAttr.usHBPorch		= 134;///106;///4; Horizontal back porch must larger than 4 i n CCIR601 mode
	m_PanelAttr.usHBlanking 	= 138;//////25;
	m_PanelAttr.usHSyncW		= 3;
	m_PanelAttr.usVBPorch		= 18;//24;///16;
	m_PanelAttr.usVBlanking 	= 29;//45;///96;///
	m_PanelAttr.usVSyncW 		= 3;
	
	//  m_PanelAttr.usHBPorch                   = 12; //16
   	//  m_PanelAttr.usHBlanking       = 144;
    	//  m_PanelAttr.usHSyncW           = 132; //128
     	//  m_PanelAttr.usVBPorch                    = 16;
      //  m_PanelAttr.usVBlanking        = 45;
     	//  m_PanelAttr.usVSyncW           = 29;
	#else///PAL
	m_PanelAttr.usHBPorch 		= 140; //Horizontal back porch must larger than 4 in CCIR601 mode
	m_PanelAttr.usHBlanking 	= 140;
	m_PanelAttr.usHSyncW 		= 2;
	m_PanelAttr.usVBPorch 		= 19;
	m_PanelAttr.usVBlanking 	= 25;
	m_PanelAttr.usVSyncW 		= 0;
	#endif
	m_PanelAttr.ubVsyncPor = LCD_SIG_POLARITY_L;
	
	m_PanelAttr.usPRT2HdotClk 	= 2;

	m_PanelAttr.bDeltaRBG 		= MMP_FALSE;
	m_PanelAttr.bDummyRBG 		= MMP_FALSE;

	m_PanelAttr.ubEvenLnOrder   = LCD_SPI_PIX_ORDER_RGB;
	m_PanelAttr.ubOddLnOrder    = LCD_SPI_PIX_ORDER_RGB;

	// Window setting (For drawing test pattern)
	m_PanelAttr.ubDispWinId 	= LCD_DISP_WIN_PIP;
	m_PanelAttr.usWinStX 		= 0;
	m_PanelAttr.usWinStY 		= 0;
	m_PanelAttr.usWinW 			= PANEL_WIDTH;
	m_PanelAttr.usWinH 			= PANEL_HEIGHT;
	m_PanelAttr.usWinBPP 		= 2;
	m_PanelAttr.usWinFmt 		= LCD_WIN_FMT_16BPP;
	m_PanelAttr.ulWinAddr 		= 0x03000000;

	// CarDV
	#if ((16 == LCD_MODEL_RATIO_X) && (9 == LCD_MODEL_RATIO_Y))
	m_PanelAttr.ubRatio 		= LCD_RATIO_16_9;
	#else
	m_PanelAttr.ubRatio 		= LCD_RATIO_4_3;
	#endif

	*(volatile unsigned short *)0x1F2C44C0 = 0x01;//enable interlace mode


	MMPF_LCD_InitPanel(&m_PanelAttr);
#endif
}

void RTNA_LCD_Init2ndLCD(void)
{
#if (SECONDARY_DISPLAY == 1)
    // TBD
#endif
}

void RTNA_LCD_Init(void)
{
	RTNA_DBG_Str(0, "### RTNA_LCD_Init for CCIR601 720x576i @@\r\n");

	/* LCD Power On */                                                                                                
#if defined(LCD_GPIO_ENABLE)
	if (LCD_GPIO_ENABLE != MMP_GPIO_MAX)
	{
		MMPF_PIO_EnableOutputMode(LCD_GPIO_ENABLE, MMP_TRUE, MMP_TRUE);
		MMPF_OS_Sleep_MS(100);
		RTNA_DBG_Str(0, "dbg-set LCD_CE to output mode\r\n");

		MMPF_PIO_SetData(LCD_GPIO_ENABLE, LCD_GPIO_ENABLE_ACT_LEVEL, MMP_TRUE);
		MMPF_OS_Sleep_MS(10);
		RTNA_DBG_Str(0, "dbg-set LCD_CE to high\r\n");
	}
#endif

#if (SECONDARY_DISPLAY == 1)
	RTNA_LCD_Init2ndLCD();
#else
	RTNA_LCD_InitMainLCD();
#endif
  
}

//============================================================================//
void RTNA_LCD_RGB_Test(void)
{
#if (ENABLE_LCD_TEST_PATTERN)
	#if defined(LCD_GPIO_BACK_LIGHT)
		/* Force turn-on LCD backlight */
		if (LCD_GPIO_BACK_LIGHT != MMP_GPIO_MAX)
		{
            MMPF_PIO_PadConfig(LCD_GPIO_BACK_LIGHT, PAD_OUT_DRIVING(0), MMP_TRUE);
			MMPF_PIO_EnableOutputMode(LCD_GPIO_BACK_LIGHT, MMP_TRUE, MMP_TRUE);
			RTNA_DBG_Str(LCD_DBG_LEVEL, "dbg-set LCD_BL to output mode\r\n");

			MMPF_PIO_SetData(LCD_GPIO_BACK_LIGHT, !LCD_GPIO_BACK_LIGHT_ACT_LEVEL, MMP_TRUE);
			Delayms(20);
			RTNA_DBG_Str(LCD_DBG_LEVEL, "dbg-set LCD_BL to low\r\n");

			MMPF_PIO_SetData(LCD_GPIO_BACK_LIGHT, LCD_GPIO_BACK_LIGHT_ACT_LEVEL, MMP_TRUE);
			Delayms(20);
			RTNA_DBG_Str(LCD_DBG_LEVEL, "dbg-set LCD_BL to high\r\n");
		}
	#endif

	MMPF_LCD_DrawTestPattern(&m_PanelAttr);
    Delayms(5000);
#endif
}

void RTNA_LCD_Direction(LCD_DIR dir)
{
	// TBD
}

void RTNA_LCD_SetReg(MMP_ULONG reg, MMP_UBYTE value)
{
	// TBD
}

void RTNA_LCD_GetReg(MMP_ULONG reg, MMP_ULONG *value)
{
	// TBD
}

void RTNA_LCD_AdjustBrightness(MMP_UBYTE level)
{
	// TBD
}

void RTNA_LCD_AdjustBrightness_R(MMP_UBYTE level)
{
	// TBD
}

void RTNA_LCD_AdjustBrightness_B(MMP_UBYTE level)
{
	// TBD
}

void RTNA_LCD_AdjustContrast(MMP_UBYTE level)
{
	// TBD
}

void RTNA_LCD_AdjustContrast_R(MMP_BYTE level)
{
	// TBD
}

void RTNA_LCD_AdjustContrast_B(MMP_BYTE level)
{
	// TBD
}

/*
 * Set Panel Properties
 * Width, Height, Color Depth, Display Type
 */
MMPF_PANEL_ATTR* RTNA_LCD_GetAttr(void)
{
	return &m_PanelAttr;
}


/**
    @brief  
    @return NONE
*/
void RTNA_LCD_Backlight(MMP_BOOL bEnable)
{
#if 0
#if (USE_PWM_FOR_LCD_BACKLIGHT)
	MMPF_PWM_Initialize();
	MMPF_PWM_OutputPulse(LCD_BACKLIGHT_PWM_UNIT_PIN, bEnable, 6000,50, MMP_TRUE, MMP_FALSE, NULL, 0);
#else
	// (LCD_GPIO_BACK_LIGHT == MMP_GPIOxxx) which can not be used in preprocessor
	#if	defined(LCD_GPIO_BACK_LIGHT)
		if (LCD_GPIO_BACK_LIGHT != MMP_GPIO_MAX)
		{
            MMPF_PIO_PadConfig(LCD_GPIO_BACK_LIGHT, PAD_OUT_DRIVING(0), MMP_TRUE);
			MMPF_PIO_EnableOutputMode(LCD_GPIO_BACK_LIGHT, MMP_TRUE, MMP_TRUE);
		#ifdef LCD_GPIO_BACK_LIGHT_ACT_LEVEL
			MMPF_PIO_SetData(LCD_GPIO_BACK_LIGHT, ((bEnable) ? (LCD_GPIO_BACK_LIGHT_ACT_LEVEL) : !(LCD_GPIO_BACK_LIGHT_ACT_LEVEL)), MMP_TRUE);
		#else
			MMPF_PIO_SetData(LCD_GPIO_BACK_LIGHT, bEnable, MMP_TRUE);
		#endif
		}
	#endif
#endif
#endif
}


/**
@brief Customer LCD initialize setting(register setting in AIT side) for MAIN LCD.
@retval MMP_TRUE for success, MMP_FALSE for fail
*/
MMP_BOOL MMPC_Display_InitMainLCD(MMP_BOOL bSoftReset)
{
    RTNA_LCD_InitMainLCD();

    return MMP_TRUE;
}

/**
@brief Customer LCD re-initialize setting for MAIN LCD.
@retval MMP_TRUE for success, MMP_FALSE for fail
*/
MMP_BOOL MMPC_Display_ReinitMainLCD(MMP_BOOL bSoftReset)
{
    return MMP_TRUE;
}


