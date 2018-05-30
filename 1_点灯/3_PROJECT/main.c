/**
  ******************************************************************************
  * @file    Project/STM32F10x_StdPeriph_Template/main.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main program body
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


#include "sys.h"
#include "delay.h"
#include "led.h"
#include "usart.h"		
#include "key.h"
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  跑马灯实验.
  * @param  None
  * @retval None
  */
	
	
int main(void)
{
	//u8 t;
	Stm32_Clock_Init(9);
	delay_init(72);
	LED_Init();
	//BEEP_Init();	
	KEY_Init();
		LED0=OFF;
		LED1=ON;
	while(1)
	{

			switch(KEY_Scan(1))
			{
				case 0:
					break;
				case KEY_LEFT:
							LED0=!LED0;
							LED1=~LED1;
					break;
				case KEY_DOWN:
							LED0=!LED0;
							LED1=~LED1;
					break;
				case KEY_RIGHT:
							LED0=!LED0;
							LED1=~LED1;
					break;
				case KEY_UP:
								LED0=!LED0;
								LED1=~LED1;
					break;
			}

	}
}

