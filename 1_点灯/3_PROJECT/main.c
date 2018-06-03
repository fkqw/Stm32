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
	u8 t;
	u16 len,time;
	Stm32_Clock_Init(9);
	delay_init(72);
	uart_init(72,9600);//波特率为9600
	LED_Init();


		LED0=OFF;
		LED1=ON;
	while(1)
	{

		//接受完成
		if(USART_RX_STA&0x8000)
		{
			len=USART_RX_STA&0x3FFF;
			//printf()
			for(t=0;t<len;t++)
			{
				USART1->DR=USART_RX_BUF[t];
				while((USART1->SR&0x40)==0);//等待发送完成
			}
			USART_RX_STA=0;
		}
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

