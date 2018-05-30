/**
  ******************************************************************************
  * @file    test.c
  * @author Jack Feng
  * @version V0
  * @date   2018-05-19
  * @brief   LED.c文件
  ******************************************************************************
  **/

#include "led.h"

/**
  * @brief  None  program.
  * @param  None
  * @retval None
  */


void LED_Init(void)
{
	RCC->APB2ENR|=1<<3;    //使能PORTB时钟	   	 
	RCC->APB2ENR|=1<<6;    //使能PORTE时钟	
	   	 
	GPIOB->CRL&=0XFF0FFFFF; 
	GPIOB->CRL|=0X00300000;//PB.5 推挽输出   	 
  GPIOB->ODR|=1<<5;      //PB.5 输出高
						
				  
	GPIOE->CRL&=0XFF0FFFFF;
	GPIOE->CRL|=0X00300000;//PE.5推挽输出		
	GPIOE->ODR|=1<<5;      //PE.5输出高 
}

/**
  * @brief 蜂鸣器初始化.
  * @param  None
  * @retval None
  */
void BEEP_Init(void)
{
//	//首先要初始化时钟
//	//RCC->APB2ENR
//	//然后初始化输出模式
//	GPIOB->CRH&=0xFFFFFFF0;
//	
//	GPIOB->CRH|=0x00000003;
//	//最后初始化电平
//	GPIOE->ODR&=1<<8;      //PE.5输出高 
}
