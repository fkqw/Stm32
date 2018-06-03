/**
  ******************************************************************************
  * @file    exit.c
  * @author Jack Feng
  * @version V0
  * @date   2018-05-19
  * @brief   中断函数
  ******************************************************************************
  **/
#include "exit.h"
#include "key.h"

//外部中断0 服务程序。
void EXIT0_IRQHandler(void)
{
	
}
/**
  * @brief  None  program.
  * @param  None
  * @retval None
  */
void EXIT2_IRQHandler(void)
{
	
}
/**
  * @brief  None  program.
  * @param  None
  * @retval None
  */
void EXIT3_IRQHandler(void)
{
	
}
/**
  * @brief  None  program.
  * @param  None
  * @retval None
  */
void EXIT4_IRQHandler(void)
{
	
}
/**
  * @brief  None  program.
  * @param  None
  * @retval None
  */
//void Ex_NVIC_Config(u8 GPIOx,u8 BITx,u8 TRIM) 
//void MY_NVIC_Init(u8 NVIC_PreemptionPriority,u8 NVIC_SubPriority,u8 NVIC_Channel,u8 NVIC_Group)	 
void EXIT_Init(void)
{
		KEY_Init();
		Ex_NVIC_Config(GPIO_A,0,RTIR);
		Ex_NVIC_Config(GPIO_E,2,FTIR);
		Ex_NVIC_Config(GPIO_E,3,FTIR);
		Ex_NVIC_Config(GPIO_E,4,FTIR);
	
		MY_NVIC_Init(2,3,EXTI0_IRQn,2);
		MY_NVIC_Init(2,2,EXTI1_IRQn,2);
		MY_NVIC_Init(2,1,EXTI2_IRQn,2);
		MY_NVIC_Init(2,0,EXTI3_IRQn,2);
		
		
}