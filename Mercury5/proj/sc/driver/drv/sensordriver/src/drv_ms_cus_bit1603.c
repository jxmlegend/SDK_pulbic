////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2006-2009 MStar Semiconductor, Inc.
// All rights reserved.
//
// Unless otherwise stipulated in writing, any and all information contained
// herein regardless in any format shall remain the sole proprietary of
// MStar Semiconductor Inc. and be kept in strict confidence
// (������MStar Confidential Information������) by the recipient.
// Any unauthorized act including without limitation unauthorized disclosure,
// copying, use, reproduction, sale, distribution, modification, disassembling,
// reverse engineering and compiling of the contents of MStar Confidential
// Information is unlawful and strictly prohibited. MStar hereby reserves the
// rights to any and all damages, losses, costs and expenses resulting therefrom.
//
////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include "drv_SensorIF_pub.h"
#include "drv_ms_cus_sensor.h"
#include "drv_i2c_common.h"

#ifdef __cplusplus
}
#endif

#include <sensor_log.h>

#if defined(__RTK_OS__)
#include "cam_os_wrapper.h"
#if defined(__GNUC__)
#include "vm_types.ht"
#endif
#include "libcamera.h"
#include "AIT_Init.h"
#include "Config_SDK.h" //By project.
#else //#if defined(__RTK_OS__)

#include "isp_config.h"
#if (SENSOR0 == BIT1603)
#define BIND_SENSOR_BIT1603 (1)
#endif
#endif //#if defined(__RTK_OS__)

#if defined(BIND_SENSOR_BIT1603) && (BIND_SENSOR_BIT1603 == 1)

#define SENSOR_PAD_GROUP_SET CUS_SENSOR_PAD_GROUP_B
#define SENSOR_CHANNEL_NUM (1)
#define SENSOR_CHANNEL_MODE CUS_SENSOR_CHANNEL_MODE_RAW_STORE

//============================================
//BT656 config begin.
#define SENSOR_BT656_CH_TOTAL_NUM (1)
#define SENSOR_BT656_CH_DET_ENABLE CUS_SENSOR_FUNC_DISABLE
#define SENSOR_BT656_CH_DET_SEL CUS_VIF_BT656_EAV_DETECT
#define SENSOR_BT656_BIT_SWAP CUS_SENSOR_FUNC_DISABLE
#define SENSOR_BT656_8BIT_MODE CUS_SENSOR_FUNC_ENABLE
#define SENSOR_BT656_VSYNC_DELAY CUS_VIF_BT656_VSYNC_DELAY_AUTO
#define SENSOR_HSYCN_INVERT CUS_SENSOR_FUNC_DISABLE
#define SENSOR_VSYCN_INVERT CUS_SENSOR_FUNC_DISABLE
#define SENSOR_CLAMP_ENABLE CUS_SENSOR_FUNC_DISABLE
//BT656 config end.
//============================================

#define SENSOR_ISP_TYPE     ISP_EXT                   //ISP_EXT, ISP_SOC
#define F_number  22                                  // CFG, demo module
//#define SENSOR_DATAFMT      CUS_DATAFMT_BAYER        //CUS_DATAFMT_YUV, CUS_DATAFMT_BAYER
#define SENSOR_IFBUS_TYPE   CUS_SENIF_BUS_BT656      //CFG //CUS_SENIF_BUS_PARL, CUS_SENIF_BUS_MIPI
//#define SENSOR_MIPI_DELAY   0x1212                  //CFG
#define SENSOR_DATAPREC     CUS_DATAPRECISION_16    //CUS_DATAPRECISION_8, CUS_DATAPRECISION_10
#define SENSOR_DATAMODE     CUS_SEN_10TO12_9000     //CFG
#define SENSOR_BAYERID      CUS_BAYER_RG            //CFG //CUS_BAYER_GB, CUS_BAYER_GR, CUS_BAYER_BG, CUS_BAYER_RG
#define SENSOR_ORIT         CUS_ORIT_M0F0           //CUS_ORIT_M0F0, CUS_ORIT_M1F0, CUS_ORIT_M0F1, CUS_ORIT_M1F1,
//#define SENSOR_YCORDER      CUS_SEN_YCODR_YC       //CUS_SEN_YCODR_YC, CUS_SEN_YCODR_CY
#define lane_number 2
#define vc0_hs_mode 3   //0: packet header edge  1: line end edge 2: line start edge 3: packet footer edge
#define long_packet_type_enable 0x00 //UD1~UD8 (user define)
#define SENSOR_MAX_GAIN     (64 * 1024)                  // max sensor again, a-gain * conversion-gain*d-gain
#define SENSOR_MIN_GAIN      (1 * 1024) //1557
#define SENSOR_GAIN_DELAY_FRAME_COUNT      (2)
#define SENSOR_SHUTTER_DELAY_FRAME_COUNT      (2)

#define Preview_MCLK_SPEED  CUS_CMU_CLK_24MHZ       //CFG //CUS_CMU_CLK_12M, CUS_CMU_CLK_16M, CUS_CMU_CLK_24M, CUS_CMU_CLK_27M
#define Preview_line_period 30000                  ////HTS/PCLK=4455 pixels/148.5MHZ=30usec
#define Prv_Max_line_number 1080                    //maximum exposure line munber of sensor when preview
#define vts_30fps 1125//1346,1616                      //for 29.1fps
#define Preview_WIDTH       720                    //resolution Width when preview
#define Preview_HEIGHT      288                    //resolution Height when preview
#define Preview_MAX_FPS     30                     //fastest preview FPS
#define Preview_MIN_FPS     8                      //slowest preview FPS
#define Preview_CROP_START_X     1                      //CROP_START_X
#define Preview_CROP_START_Y     1                      //CROP_START_Y

//#define Capture_MCLK_SPEED  CUS_CMU_CLK_16M     //CUS_CMU_CLK_12M, CUS_CMU_CLK_16M, CUS_CMU_CLK_24M, CUS_CMU_CLK_27M
#define Cap_Max_line_number 720                   //maximum exposure line munber of sensor when capture

//#define SENSOR_I2C_LEGACY  CUS_I2C_NORMAL_MODE     //usally set CUS_I2C_NORMAL_MODE,  if use old OVT I2C protocol=> set CUS_I2C_LEGACY_MODE
//#define SENSOR_I2C_FMT     CUS_I2C_FMT_A16D8        //CUS_I2C_FMT_A8D8, CUS_I2C_FMT_A8D16, CUS_I2C_FMT_A16D8, CUS_I2C_FMT_A16D16
#define SENSOR_I2C_ADDR    0x4C                   //I2C slave address
#define SENSOR_I2C_SPEED    I2C_SLOWSPEED_MODE_200KHZ   //200KHz
#define SENSOR_I2C_CHANNEL  1                           //I2C Channel
#define SENSOR_I2C_PAD_MODE 2                           //Pad/Mode Number

#define SENSOR_I2C_LEGACY  I2C_NORMAL_MODE     //usally set CUS_I2C_NORMAL_MODE,  if use old OVT I2C protocol=> set CUS_I2C_LEGACY_MODE
#define SENSOR_I2C_FMT     I2C_FMT_A8D8        //CUS_I2C_FMT_A8D8, CUS_I2C_FMT_A8D16, CUS_I2C_FMT_A16D8, CUS_I2C_FMT_A16D16

#define SENSOR_PWDN_POL     CUS_CLK_POL_POS//CUS_CLK_POL_NEG        // if PWDN pin High can makes sensor in power down, set CUS_CLK_POL_POS
#define SENSOR_RST_POL      CUS_CLK_POL_NEG        // if RESET pin High can makes sensor in reset state, set CUS_CLK_POL_NEG

// VSYNC/HSYNC POL can be found in data sheet timing diagram,
// Notice: the initial setting may contain VSYNC/HSYNC POL inverse settings so that condition is different.

#define SENSOR_VSYNC_POL    CUS_CLK_POL_POS  //MUST POS for BT601       // if VSYNC pin High and data bus have data, set CUS_CLK_POL_POS
#define SENSOR_HSYNC_POL    CUS_CLK_POL_POS  //MUST POS for BT601      // if HSYNC pin High and data bus have data, set CUS_CLK_POL_POS
#define SENSOR_PCLK_POL     CUS_CLK_POL_NEG//CUS_CLK_POL_NEG        // depend on sensor setting, sometimes need to try CUS_CLK_POL_POS or CUS_CLK_POL_NEG
//static int  drv_Fnumber = 22;

static int pCus_SetAEGain(ms_cus_sensor *handle, u32 gain);
static int pCus_SetAEUSecs(ms_cus_sensor *handle, u32 us);
int bit1603_cus_camsensor_release_handle(ms_cus_sensor *handle);

static CUS_CAMSENSOR_CAP sensor_cap = {
    .length = sizeof(CUS_CAMSENSOR_CAP),
    .version = 0x0001,
};

typedef struct {
    struct {
        u16 pre_div0;
        u16 div124;
        u16 div_cnt7b;
        u16 sdiv0;
        u16 mipi_div0;
        u16 r_divp;
        u16 sdiv1;
        u16 r_seld5;
        u16 r_sclk_dac;
        u16 sys_sel;
        u16 pdac_sel;
        u16 adac_sel;
        u16 pre_div_sp;
        u16 r_div_sp;
        u16 div_cnt5b;
        u16 sdiv_sp;
        u16 div12_sp;
        u16 mipi_lane_sel;
        u16 div_dac;
    } clk_tree;
    struct {
        bool bVideoMode;
        u16 res_idx;
        CUS_CAMSENSOR_ORIT  orit;
    } res;

    struct {
        float sclk;
        u32 hts;
        u32 vts;
        u32 ho;
        u32 xinc;
        u32 line_freq;
        u32 us_per_line;
        u32 final_us;
        u32 final_gain;
        u32 back_pv_us;
        u32 fps;
    } expo;

    int sen_init;
    int still_min_fps;
    int video_min_fps;
    bool reg_dirty; //sensor setting need to update through I2C
} bit1603_params;
// set sensor ID address and data,

static I2C_ARRAY Sensor_id_table[] =
{
    {0x00, 0xD4},
};


static I2C_ARRAY Sensor_init_table[] =
{
#if 0//defined(BIT1603_TEST_PATTERN_EN) && (BIT1603_TEST_PATTERN_EN == 1)
    {0x5F, 0x21},
    {0x5D, 0x80},
#else
    {0x5F, 0x00},
    {0x10, 0x80},// Brightness
    {0x11, 0x80},// contrast
    {0x17, 0xc0},// bit7=together,|0x40    //saturation
    {0x18, 0x40},                          //saturation
    //{0x65, 0x40},
#endif
    {0x6D, 0x01},
};

static I2C_ARRAY TriggerStartTbl[] =
{

};

static I2C_ARRAY PatternTbl[] =
{

};

/////////////////////////////////////////////////////////////////
//       @@@@@@                                                                                    //
//                 @@                                                                                    //
//             @@@                                                                                      //
//       @       @@                                                                                    //
//         @@@@                                                                                        //
//                                                                                                          //
//      Step 3 --  complete camera features                                              //
//                                                                                                         //
//                                                                                                         //
//  camera set EV, MWB, orientation, contrast, sharpness                          //
//   , saturation, and Denoise can work correctly.                                     //
//                                                                                                          //
/////////////////////////////////////////////////////////////////



typedef struct
{
    short reg;
    char startbit;
    char stopbit;
} COLLECT_REG_SET;


static I2C_ARRAY mirror_reg[] =
{

};

static I2C_ARRAY gain_reg[] =
{

};

//static int g_sensor_ae_min_gain = 1024;
static CUS_GAIN_GAP_ARRAY gain_gap_compensate[16] =
{

};

static I2C_ARRAY expo_reg[] =
{

};

static I2C_ARRAY vts_reg[] =
{

};
/*
static CUS_INT_TASK_ORDER def_order =
{
    .RunLength = 9,
    .Orders =
    {
        CUS_INT_TASK_AE|CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_AWB|CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_AE|CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_AWB|CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_AE|CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_AWB|CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
        CUS_INT_TASK_VDOS|CUS_INT_TASK_AF,
    },
};*/

/////////// function definition ///////////////////

/////////////////// sensor hardware dependent //////////////
static int pCus_poweron(ms_cus_sensor *handle)
{
    ISensorIfAPI *sensor_if = &handle->sensor_if_api;

    //Sensor power on sequence
    //DrvSensorIFHWSetIOPad(0/*TBD*/, CUS_SENIF_BUS_BT656, CUS_SR_PAD_CFG_6);//call sensor if
    sensor_if->SetIOPad(SENSOR_PAD_GROUP_SET/*TBD. Pad Num.*/, CUS_SENIF_BUS_BT656, CUS_SR1_BT656_MODE_1); //CHIPTOP_SR1_BT656_MODE_1);            //Parallel: reg_sr1_bt656_mode

    //sensor_if->SetCSI_Clk(CUS_CSI_CLK_DISABLE);       //Set_csi_if(0, 0); //disable MIPI
    //sensor_if->MCLK(SENSOR_PAD_GROUP_SET, 1, handle->mclk);

    SENSOR_DMSG("[%s] reset low\n", __FUNCTION__);
    sensor_if->Reset(SENSOR_PAD_GROUP_SET, handle->reset_POLARITY);
    MsSleep(RTK_MS_TO_TICK(5));//usleep(500);
    //SENSOR_DMSG("[%s] power low\n", __FUNCTION__);
    //sensor_if->PowerOff(SENSOR_PAD_GROUP_SET, handle->pwdn_POLARITY);
    //MsSleep(RTK_MS_TO_TICK(500));//usleep(500);

    // power -> high, reset -> high
    //SENSOR_DMSG("[%s] power high\n", __FUNCTION__);
    //sensor_if->PowerOff(SENSOR_PAD_GROUP_SET, !handle->pwdn_POLARITY);
    //usleep(500);
    //SENSOR_DMSG("[%s] reset high\n", __FUNCTION__);
    sensor_if->Reset(SENSOR_PAD_GROUP_SET, !handle->reset_POLARITY);
    MsSleep(RTK_MS_TO_TICK(5));//usleep(500);

    //sensor_if->Set3ATaskOrder( def_order);
    // pure power on
    sensor_if->PowerOff(SENSOR_PAD_GROUP_SET, !handle->pwdn_POLARITY);
	sensor_if->SWReset(handle->channel_num, FALSE);
    return SUCCESS;
}

static int pCus_poweroff(ms_cus_sensor *handle)
{
    ISensorIfAPI *sensor_if = &handle->sensor_if_api;
    //sensor_if->MIPISamplingDelay(handle, false, handle->mipi_sampling_delay);
    SENSOR_DMSG("[%s] power low\n", __FUNCTION__);
	sensor_if->SWReset(handle->channel_num, TRUE);
	sensor_if->PowerOff( 1, handle->pwdn_POLARITY);

    MsSleep(RTK_MS_TO_TICK(10));//usleep(1000);
    sensor_if->SetCSI_Clk(handle->snr_pad_group, CUS_CSI_CLK_DISABLE, handle->PCLK_POLARITY);     //Set_csi_if(0, 0);
    sensor_if->MCLK(0, 0, handle->mclk);

    return SUCCESS;
}

/////////////////// image function /////////////////////////
//Get and check sensor ID
//if i2c error or sensor id does not match then return FAIL
static int pCus_GetSensorID(ms_cus_sensor *handle, u32 *id)
{
    int i,n;
    int table_length= ARRAY_SIZE(Sensor_id_table);
    I2C_ARRAY id_from_sensor[ARRAY_SIZE(Sensor_id_table)];

    for(n=0;n<table_length;++n)
    {
        id_from_sensor[n].reg = Sensor_id_table[n].reg;
        id_from_sensor[n].data = 0;
    }

    *id =0;
    if(table_length>8) table_length=8;

    for(n=0;n<4;++n)        //retry , until I2C success
    {
        if(n>2) return FAIL;

        if( SensorRegArrayR((I2C_ARRAY*)id_from_sensor,table_length) == SUCCESS)        //read sensor ID from I2C
        {
            //convert sensor id to u32 format
            for(i=0;i<table_length;++i)
            {
                *id = id_from_sensor[i].data;
                SENSOR_DMSG("[%s] %s read id[%d], get 0x%x\n", __FUNCTION__, handle->model_id, i, ( int )*id);

                if( id_from_sensor[i].data != Sensor_id_table[i].data )
                {
                    SENSOR_EMSG("[%s] %s,get 0x%x, error id!\n", __FUNCTION__, handle->model_id, Sensor_id_table[i].data);
                    return FAIL;
                }
            }
            break;
        }
        else{
            MsSleep(RTK_MS_TO_TICK(10));//usleep(1*1000);
        }
    }
    //SENSOR_IMSG("[%s] %s get sensor id:0x%x, SUCCESS!\n", __FUNCTION__, handle->model_id, ( int )*id);
    return SUCCESS;
}

static int bit1603_SetPatternMode(ms_cus_sensor *handle,u32 mode)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);


    return SUCCESS;
}

static int pCus_I2CWrite(ms_cus_sensor *handle, unsigned short usreg, unsigned short usval)
{
    unsigned short sen_data;

    SensorReg_Write(usreg, usval);
    //SensorReg_Read(usreg, &sen_data);
    //UartSendTrace("bit1603 reg: 0x%x, data: 0x%x, read: 0x%x.\n", usreg, usval, sen_data);

    return SUCCESS;
}

static int pCus_I2CRead(ms_cus_sensor *handle, unsigned short usreg, unsigned short* pusval)
{
    unsigned short usread_data = 0;
    int ret = FAIL;

    if(SensorReg_Read(usreg, &usread_data) == FAIL)
    {
        *pusval = 0;
    }
    else{
        *pusval = usread_data;
        //UartSendTrace("bit1603 reg: 0x%x, data: 0x%x\n", usreg, usread_data);
        ret = SUCCESS;
    }
    return ret;
}

static int pCus_init(ms_cus_sensor *handle)
{
    int i,cnt=0;
    unsigned short sen_data;

    ISensorIfAPI *sensor_if = &(handle->sensor_if_api);
#if 0
    sensor_if->PCLK(CUS_SNR_PCLK_SR_PAD);
#endif

    for(i=0;i< ARRAY_SIZE(Sensor_init_table);i++)
    {
        if(Sensor_init_table[i].reg==0xffff)
        {
            MsSleep(RTK_MS_TO_TICK(1));//usleep(1000*Sensor_init_table[i].data);
        }
        else
        {
            cnt = 0;
            while(SensorReg_Write(Sensor_init_table[i].reg,Sensor_init_table[i].data) != SUCCESS)
            {
                cnt++;
                SENSOR_DMSG("[%s] set Sensor_init_table retry : %d...\n",__FUNCTION__,cnt);
                if(cnt>=10)
                {
                    SENSOR_EMSG("[%s:%d] retry FAIL!!\n", __FUNCTION__, __LINE__);
                    return FAIL;
                }
                MsSleep(RTK_MS_TO_TICK(1));//usleep(10*1000);
            }

            //SensorReg_Read(Sensor_init_table[i].reg, &sen_data);
            //UartSendTrace("bit1603 reg: 0x%x, data: 0x%x, read: 0x%x.\n",Sensor_init_table[i].reg, Sensor_init_table[i].data, sen_data);
        }
    }

    for(i=0;i< ARRAY_SIZE(mirror_reg); i++)
    {
        if(SensorReg_Write(mirror_reg[i].reg,mirror_reg[i].data) != SUCCESS)
        {
          SENSOR_EMSG("[%s:%d] set mirror_reg fail!!\n", __FUNCTION__, __LINE__);
          return FAIL;
        }
    }

    for(i=0;i< ARRAY_SIZE(TriggerStartTbl);i++)
    {
        if(SensorReg_Write(TriggerStartTbl[i].reg,TriggerStartTbl[i].data) != SUCCESS)
        {
            SENSOR_EMSG("[%s:%d] set TriggerStartTbl fail!!\n", __FUNCTION__, __LINE__);
            return FAIL;
        }
    }
    // MsSleep(RTK_MS_TO_TICK(50)); // ??
    //usleep(50*1000);

    //SensorReg_Read(0x7A, &sen_data);
    //UartSendTrace("\n================\n");
    //UartSendTrace("bit1603 reg: 0x%x, read: 0x%x.\n",0x7A, sen_data);

#if 0
    usleep(50*1000);
    pCus_SetAEGain(handle,2048);
    pCus_SetAEUSecs(handle, 25000);
#endif

    return SUCCESS;
}

static int pCus_GetVideoResNum( ms_cus_sensor *handle, u32 *ulres_num)
{
    *ulres_num = handle->video_res_supported.num_res;
    return SUCCESS;
}

static int pCus_GetVideoRes(ms_cus_sensor *handle, cus_camsensor_res **res)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);
    //return current resolution
    *res = &handle->video_res_supported.res[handle->video_res_supported.ulcur_res];
    return SUCCESS;
}

static int pCus_SetVideoRes(ms_cus_sensor *handle, u32 res)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);
    handle->video_res_supported.ulcur_res = 0; //TBD
    //TODO: Set sensor output resolution
    return SUCCESS;
}

static int pCus_GetOrien(ms_cus_sensor *handle, CUS_CAMSENSOR_ORIT *orit)
{
    char sen_data;

    sen_data = mirror_reg[0].data;
    SENSOR_DMSG("[%s] mirror:%x\r\n", __FUNCTION__, sen_data & 0x03);
    switch(sen_data & 0x03)
    {
        case 0x00:
            *orit = CUS_ORIT_M0F0;
            break;
        case 0x02:
            *orit = CUS_ORIT_M1F0;
            break;
        case 0x01:
            *orit = CUS_ORIT_M0F1;
            break;
        case 0x03:
            *orit = CUS_ORIT_M1F1;
            break;
    }
    return SUCCESS;
}

static int pCus_SetOrien(ms_cus_sensor *handle, CUS_CAMSENSOR_ORIT orit)
{
    char index=0;
    bit1603_params *params = (bit1603_params *)handle->private_data;

    switch(orit)
    {
        case CUS_ORIT_M0F0:
            index = 0;
            break;
        case CUS_ORIT_M1F0:
            index = 1;
            break;
        case CUS_ORIT_M0F1:
            index = 2;
            break;
        case CUS_ORIT_M1F1:
            index = 3;
            break;
    }
    SENSOR_DMSG("[%d] CUS_CAMSENSOR_ORIT orit : %x\r\n",__FUNCTION__, orit);
    if (index != mirror_reg[0].data)
    {
        mirror_reg[0].data = index;
        SensorRegArrayW((I2C_ARRAY*)mirror_reg, sizeof(mirror_reg)/sizeof(I2C_ARRAY));
        params->reg_dirty = true;
    }
    return SUCCESS;
}

static int pCus_GetFPS(ms_cus_sensor *handle)
{
    bit1603_params *params = (bit1603_params *)handle->private_data;
    SENSOR_DMSG("[%s] FPS %d\n", __FUNCTION__, params->expo.fps);

    return params->expo.fps;
}

static int pCus_SetFPS(ms_cus_sensor *handle, u32 fps)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);
    bit1603_params *params = (bit1603_params *)handle->private_data;


    return 0; //test only

}
static int pCus_GetSensorCap(ms_cus_sensor *handle, CUS_CAMSENSOR_CAP *cap)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);

    return SUCCESS;
}


///////////////////////////////////////////////////////////////////////
// auto exposure
///////////////////////////////////////////////////////////////////////
// unit: micro seconds
//AE status notification
static int pCus_AEStatusNotify(ms_cus_sensor *handle, CUS_CAMSENSOR_AE_STATUS_NOTIFY status)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);

    return SUCCESS;
}

static int pCus_GetAEUSecs(ms_cus_sensor *handle, u32 *us)
{

    return SUCCESS;
}

static int pCus_SetAEUSecs(ms_cus_sensor *handle, u32 us)
{

    return SUCCESS;
}

// Gain: 1x = 1024
static int pCus_GetAEGain(ms_cus_sensor *handle, u32* gain)
{
    //int rc = SensorRegArrayR((I2C_ARRAY*)gain_reg, ARRAY_SIZE(gain_reg));

    return SUCCESS;
}

static int pCus_SetAEGain_cal(ms_cus_sensor *handle, u32 gain)
{

    return SUCCESS;
}

static int pCus_SetAEGain(ms_cus_sensor *handle, u32 gain)
{

    return SUCCESS;
}

static int pCus_GetAEMinMaxUSecs(ms_cus_sensor *handle, u32 *min, u32 *max)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);
    *min = 1;
    *max = 1000000/4;
    return SUCCESS;
}

static int pCus_GetAEMinMaxGain(ms_cus_sensor *handle, u32 *min, u32 *max)
{
    SENSOR_DMSG("[%s]\n", __FUNCTION__);
    *min = SENSOR_MIN_GAIN;
    *max = SENSOR_MAX_GAIN;
    return SUCCESS;
}

static int pCus_GetDGainRemainder(ms_cus_sensor *handle, u32 *dgain_remainder)
{
    *dgain_remainder = handle->dgain_remainder;

    return SUCCESS;
}

static int pCus_setCaliData_gain_linearity(ms_cus_sensor* handle, CUS_GAIN_GAP_ARRAY* pArray, u32 num)
{

    return SUCCESS;
}

static int bit1603_GetShutterInfo(struct __ms_cus_sensor* handle,CUS_SHUTTER_INFO *info)
{

    return SUCCESS;
}

static int pCus_BT656_GetSrcType(ms_cus_sensor *handle, CUS_SNR_ANADEC_SRC_TYPE *psrc_type)
{
    unsigned short usreg, usval;

    *psrc_type = CUS_SNR_ANADEC_SRC_NO_READY;

    if(pCus_I2CRead == NULL){
        SENSOR_EMSG("[%s] I2C function is not ready!\n", __FUNCTION__);
        return FAIL;
    }

    usreg = 0x7A;
    pCus_I2CRead(handle, usreg, &usval);
    if ((usval & 0x0E) != 0x0E) {
        *psrc_type = CUS_SNR_ANADEC_SRC_NO_READY;
    }
    else if (usval & 0x01) {
        *psrc_type = CUS_SNR_ANADEC_SRC_NTSC;
    }
    else {
        *psrc_type = CUS_SNR_ANADEC_SRC_PAL;
    }

    return SUCCESS;
}

int bit1603_cus_camsensor_init_handle(ms_cus_sensor* handle)
{
#if defined(__RTK_OS__)
    CamOsRet_e                  eCamOsRet = CAM_OS_OK;
    void*                       pvBufVirt = NULL;
    u64                 u64BufPhy = 0;
    u64                 u64BufMiu = 0;
    u8                   str[20];
#endif
    if (!handle)
    {
        SENSOR_EMSG("[%s] not enough memory!\n", __FUNCTION__);
        return FAIL;
    }
    //SENSOR_DMSG("[%s]\n", __FUNCTION__);
    //private data allocation & init
#if defined(__RTK_OS__)
    sprintf(str, "BIT1603linear");
    eCamOsRet = CamOsDirectMemAlloc(str, sizeof(bit1603_params), &pvBufVirt, &u64BufMiu, &u64BufPhy);
    if (eCamOsRet != CAM_OS_OK) {
        UartSendTrace("[%s:%d] fail!\n", __FUNCTION__, __LINE__);
        return FAIL;
    }
    handle->private_data = (bit1603_params *)pvBufVirt;
    memset(handle->private_data, 0, sizeof(bit1603_params));
#else
    handle->private_data = calloc(1, sizeof(bit1603_params));
#endif
    bit1603_params *params = (bit1603_params *)handle->private_data;

    ////////////////////////////////////
    //    sensor model ID                           //
    ////////////////////////////////////
    sprintf(handle->model_id,"bit1603_PARL");

    ////////////////////////////////////
    //    sensor interface info       //
    ////////////////////////////////////
    //SENSOR_DMSG("[%s] entering function with id %d\n", __FUNCTION__, id);
    handle->isp_type    = SENSOR_ISP_TYPE;  //ISP_SOC;
    //handle->data_fmt    = SENSOR_DATAFMT;   //CUS_DATAFMT_YUV;
    handle->sif_bus     = SENSOR_IFBUS_TYPE;//CUS_SENIF_BUS_PARL;
    handle->data_prec   = SENSOR_DATAPREC;  //CUS_DATAPRECISION_8;
    handle->data_mode   = SENSOR_DATAMODE;
    handle->bayer_id    = SENSOR_BAYERID;   //CUS_BAYER_GB;
    handle->orient      = SENSOR_ORIT;      //CUS_ORIT_M1F1;
    //handle->YC_ODER     = SENSOR_YCORDER;   //CUS_SEN_YCODR_CY;
    //handle->mipi_sampling_delay = SENSOR_MIPI_DELAY;

    ////////////////////////////////////
    //    resolution capability       //
    ////////////////////////////////////

    handle->video_res_supported.num_res = 1;
    handle->video_res_supported.ulcur_res = 0; //default resolution index is 0.
    handle->video_res_supported.res[0].width = Preview_WIDTH;
    handle->video_res_supported.res[0].height = Preview_HEIGHT;
    handle->video_res_supported.res[0].max_fps= Preview_MAX_FPS;
    handle->video_res_supported.res[0].min_fps= Preview_MIN_FPS;
    handle->video_res_supported.res[0].crop_start_x= Preview_CROP_START_X;
    handle->video_res_supported.res[0].crop_start_y= Preview_CROP_START_Y;
    handle->video_res_supported.res[0].nOutputWidth= Preview_WIDTH;
    handle->video_res_supported.res[0].nOutputHeight= Preview_HEIGHT;

    handle->video_res_supported.res[1].max_fps= Preview_MAX_FPS;
    handle->video_res_supported.res[1].min_fps= Preview_MIN_FPS;
    handle->video_res_supported.res[1].crop_start_x= Preview_CROP_START_X;
    handle->video_res_supported.res[1].crop_start_y= Preview_CROP_START_Y;

    // i2c
    handle->i2c_cfg.mode                = SENSOR_I2C_LEGACY;    //(CUS_ISP_I2C_MODE) FALSE;
    handle->i2c_cfg.fmt                 = SENSOR_I2C_FMT;       //CUS_I2C_FMT_A16D16;
    handle->i2c_cfg.address             = SENSOR_I2C_ADDR;      //0x5a;
    handle->i2c_cfg.speed               = SENSOR_I2C_SPEED;     //200000;
    handle->i2c_cfg.nChannel            = SENSOR_I2C_CHANNEL;   //Channel 1
    handle->i2c_cfg.nPadNum             = SENSOR_I2C_PAD_MODE;  //pad mode 1

    // mclk
    handle->mclk                        = Preview_MCLK_SPEED;

    //polarity
    /////////////////////////////////////////////////////
    handle->pwdn_POLARITY               = SENSOR_PWDN_POL;  //CUS_CLK_POL_NEG;
    handle->reset_POLARITY              = SENSOR_RST_POL;   //CUS_CLK_POL_NEG;
    handle->VSYNC_POLARITY              = SENSOR_VSYNC_POL; //CUS_CLK_POL_POS;
    handle->HSYNC_POLARITY              = SENSOR_HSYNC_POL; //CUS_CLK_POL_POS;
    handle->PCLK_POLARITY               = SENSOR_PCLK_POL;  //CUS_CLK_POL_POS);    // use '!' to clear board latch error
    /////////////////////////////////////////////////////



    ////////////////////////////////////////////////////
    // AE parameters
    ////////////////////////////////////////////////////
    handle->ae_gain_delay       = SENSOR_GAIN_DELAY_FRAME_COUNT;//0;//1;
    handle->ae_shutter_delay    = SENSOR_SHUTTER_DELAY_FRAME_COUNT;//1;//2;

    ///calibration
    handle->sat_mingain = SENSOR_MIN_GAIN;//g_sensor_ae_min_gain;
    handle->dgain_remainder = 0;
    handle->pCus_sensor_release     = bit1603_cus_camsensor_release_handle;
    handle->pCus_sensor_init        = pCus_init    ;
    handle->pCus_sensor_poweron     = pCus_poweron ;
    handle->pCus_sensor_poweroff    = pCus_poweroff;

    // Normal
    handle->pCus_sensor_GetSensorID       = pCus_GetSensorID   ;
    handle->pCus_sensor_GetVideoResNum = pCus_GetVideoResNum;
    handle->pCus_sensor_GetVideoRes       = pCus_GetVideoRes   ;
    handle->pCus_sensor_SetVideoRes       = pCus_SetVideoRes   ;
    handle->pCus_sensor_GetOrien          = pCus_GetOrien      ;
    handle->pCus_sensor_SetOrien          = pCus_SetOrien      ;
    handle->pCus_sensor_GetFPS          = pCus_GetFPS      ;
    handle->pCus_sensor_SetFPS          = pCus_SetFPS      ;
    handle->pCus_sensor_GetSensorCap    = pCus_GetSensorCap;
    handle->pCus_sensor_SetPatternMode = bit1603_SetPatternMode;
    ///////////////////////////////////////////////////////
    // AE
    ///////////////////////////////////////////////////////
    // unit: micro seconds
    handle->pCus_sensor_AEStatusNotify = pCus_AEStatusNotify;
    handle->pCus_sensor_GetAEUSecs      = pCus_GetAEUSecs;
    handle->pCus_sensor_SetAEUSecs      = pCus_SetAEUSecs;
    handle->pCus_sensor_GetAEGain       = pCus_GetAEGain;
    handle->pCus_sensor_SetAEGain_cal   = pCus_SetAEGain_cal;
    handle->pCus_sensor_SetAEGain       = pCus_SetAEGain;
    handle->pCus_sensor_GetShutterInfo = bit1603_GetShutterInfo;

    handle->pCus_sensor_GetAEMinMaxGain = pCus_GetAEMinMaxGain;
    handle->pCus_sensor_GetAEMinMaxUSecs= pCus_GetAEMinMaxUSecs;
    handle->pCus_sensor_GetDGainRemainder = pCus_GetDGainRemainder;

    //sensor calibration
    handle->pCus_sensor_setCaliData_gain_linearity=pCus_setCaliData_gain_linearity;
#if 1//defined(__MV5_FPGA__)
    handle->pCus_sensor_I2CWrite = pCus_I2CWrite; //Andy Liu
    handle->pCus_sensor_I2CRead = pCus_I2CRead; //Andy Liu
#endif
    params->expo.vts=vts_30fps;
    params->expo.fps = 30;
    params->reg_dirty = false;

    handle->snr_pad_group = SENSOR_PAD_GROUP_SET;

    handle->channel_num = SENSOR_CHANNEL_NUM;
    handle->channel_mode = SENSOR_CHANNEL_MODE;

    //============================================
    //BT656 config begin.
    handle->interface_attr.attr_bt656.bt656_total_ch = SENSOR_BT656_CH_TOTAL_NUM;
    handle->interface_attr.attr_bt656.bt656_cur_ch = 0;
    handle->interface_attr.attr_bt656.bt656_ch_det_en = SENSOR_BT656_CH_DET_ENABLE;
    handle->interface_attr.attr_bt656.bt656_ch_det_sel = SENSOR_BT656_CH_DET_SEL;
    handle->interface_attr.attr_bt656.bt656_bit_swap = SENSOR_BT656_BIT_SWAP;
    handle->interface_attr.attr_bt656.bt656_8bit_mode = SENSOR_BT656_8BIT_MODE;
    handle->interface_attr.attr_bt656.bt656_vsync_delay = SENSOR_BT656_VSYNC_DELAY;
    handle->interface_attr.attr_bt656.bt656_hsync_inv = SENSOR_HSYCN_INVERT;
    handle->interface_attr.attr_bt656.bt656_vsync_inv = SENSOR_VSYCN_INVERT;
    handle->interface_attr.attr_bt656.bt656_clamp_en = SENSOR_CLAMP_ENABLE;
	handle->interface_attr.attr_bt656.bt656_yuv_order = CUS_SENSOR_YUV_ORDER_CY;
    handle->interface_attr.attr_bt656.pCus_sensor_bt656_get_src_type = pCus_BT656_GetSrcType;
    //BT656 config end.
    //============================================
    return SUCCESS;
}

int bit1603_cus_camsensor_release_handle(ms_cus_sensor *handle)
{
#if defined(__RTK_OS__)
    CamOsRet_e                  eCamOsRet = CAM_OS_OK;
#endif

    //SENSOR_DMSG("[%s]\n", __FUNCTION__);
    if (handle && handle->private_data)
    {
        //SENSOR_IMSG("[%s] release handle 0x%x, private data %x\n",__FUNCTION__,(int)handle,(int)handle->private_data);
#if defined(__RTK_OS__)
        eCamOsRet = CamOsDirectMemRelease((void*)handle->private_data, sizeof(bit1603_params));
        if (eCamOsRet != CAM_OS_OK) {
            handle->private_data = NULL;
            UartSendTrace("[%s:%d] fail!\n", __FUNCTION__, __LINE__);
            return FAIL;
        }

#else
        free( handle->private_data );
#endif

        handle->private_data = NULL;
    }
    return SUCCESS;
}

#if defined(__RTK_OS__)
struct SensorMapTable_t gsensor_map_bit1603 = {
    SENSOR_CHANNEL_NUM,
    bit1603_cus_camsensor_init_handle,
    bit1603_cus_camsensor_release_handle
};

int BIT1603_Module_Init(void)
{
    cameraSensorRegister(&gsensor_map_bit1603);

    return 0;
}

void BIT1603_Module_Exit(void)
{
    cameraSensorUnRegister(&gsensor_map_bit1603);
}

#if defined(__GNUC__)
__section__(initcall6)
#endif
ait_module_init(BIT1603_Module_Init);
//ait_module_exit(BIT1603_Module_Exit);
#endif //#if defined(__RTK_OS__)

#endif //#if defined(BIND_SENSOR_BIT1603) && (BIND_SENSOR_BIT1603 == 1)
