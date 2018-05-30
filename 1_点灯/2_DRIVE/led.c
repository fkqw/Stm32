/**
  ******************************************************************************
  * @file    test.c
  * @author Jack Feng
  * @version V0
  * @date   2018-05-19
  * @brief   LED.c???
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
	RCC->APB2ENR|=1<<3;    //ʹ?PORTBʱ?	   	 
	RCC->APB2ENR|=1<<6;    //ʹ?PORTEʱ?	
	   	 
	GPIOB->CRL&=0XFF0FFFFF; 
	GPIOB->CRL|=0X00300000;//PB.5 ?????   	 
  GPIOB->ODR|=1<<5;      //PB.5 ?????
						
				  
	GPIOE->CRL&=0XFF0FFFFF;
	GPIOE->CRL|=0X00300000;//PE.5?????		
	GPIOE->ODR|=1<<5;      //PE.5?????
}

/**
  * @brief ??????ʼ??.
  * @param  None
  * @retval None
  */
void BEEP_Init(void)
{
//	//??Ҫ??ʼ??ʱ?
//	//RCC->APB2ENR
//	//Ȼ??ʼ?????ģʽ
//	GPIOB->CRH&=0xFFFFFFF0;
//	
//	GPIOB->CRH|=0x00000003;
//	//???ʼ?????
//	GPIOE->ODR&=1<<8;      //PE.5?????
}
