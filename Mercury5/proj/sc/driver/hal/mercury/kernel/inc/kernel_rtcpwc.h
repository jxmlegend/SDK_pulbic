/*
 * kernel_rtcpwc.h
 *
 *  Created on: 2017/8/29
 *      Author: titan.huang
 */

#ifndef __KERNEL_RTC_PWC_H__
#define __KERNEL_RTC_PWC_H__

#define BIT0	0x1
#define BIT1	0x2
#define BIT2	0x4
#define BIT3	0x8
#define BIT4	0x10
#define BIT5	0x20
#define BIT6	0x40
#define BIT7	0x80
#define BIT8	0x100
#define BIT9	0x200
#define BIT10	0x400
#define BIT11	0x800
#define BIT12	0x1000
#define BIT13	0x2000
#define BIT14	0x4000
#define BIT15	0x8000

#define RTCPWC_DIG2RTC_BASE_WR					0x00*2
	#define RTCPWC_DIG2RTC_BASE_WR_BIT			BIT1
	#define RTCPWC_DIG2RTC_BASE_RD				BIT2
#define RTCPWC_DIG2RTC_CNT_RST_WR				0x00*2
	#define RTCPWC_DIG2RTC_CNT_RST_WR_BIT		BIT3
#define RTCPWC_DIG2RTC_CNT_RD					0x01*2
	#define RTCPWC_DIG2RTC_CNT_RD_BIT			BIT0

#define RTCPWC_DIG2RTC_ISO_CTRL					0x03*2
	#define RTCPWC_DIG2RTC_BASE_WR_MASK			BIT0|BIT1|BIT2
#define RTCPWC_DIG2RTC_WRDATA_L					0x04*2
#define RTCPWC_DIG2RTC_WRDATA_H					0x05*2

#define RTCPWC_DIG2RTC_SET						0x06*2
	#define RTCPWC_DIG2RTC_SET_BIT				BIT0
#define RTCPWC_RTC2DIG_VAILD					0x07*2
	#define RTCPWC_RTC2DIG_VAILD_BIT			BIT0
#define RTCPWC_RTC2DIG_ISO_CTRL_ACK				0x08*2
	#define RTCPWC_RTC2DIG_ISO_CTRL_ACK_BIT		BIT3

#define RTCPWC_RTC2DIG_RDDATA_L					0x09*2
#define RTCPWC_RTC2DIG_RDDATA_H					0x0A*2

#define RTCPWC_RTC2DIG_CNT_UPDATING				0x0B*2
	#define RTCPWC_RTC2DIG_CNT_UPDATING_BIT		BIT0
#define RTCPWC_REG_RTC2DIG_RDDATA_CNT_L			0x0C*2
#define RTCPWC_REG_RTC2DIG_RDDATA_CNT_H			0x0D*2

#define RTCPWC_DIG2RTC_CNT_RD_TRIG				0x0E*2
	#define RTCPWC_DIG2RTC_CNT_RD_TRIG_BIT		BIT0

#endif /* __KERNEL_RTC_PWC_H__ */
