/**
  ******************************************************************************
  * @file    stm32f10x_adc.c
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    11-March-2011
  * @brief   This file provides all the ADC firmware functions.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "delay.h"

static uint8_t fac_us=0;

static uint32_t fac_ms=0;//msÑÓÊ±±¶³ËÊý'

#ifdef OS_CRITICAL_METHOD 
void SysTick_Handler(void)
{
	
}
#endif
void delay_init(void)
{
	
	//SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);
	SysTick->CTRL
}
void delay_ms(u16 nms);
void delay_us(u32 nus);

