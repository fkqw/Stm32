/**
  ******************************************************************************
  * @file    test.c
  * @author Jack Feng
  * @version V0
  * @date   2018-05-19
  * @brief  按键 PA0 WK_UP,PE4 KEY0,PE3 KEY1, PE2 KEY2。
  ******************************************************************************
  **/

#include "key.h"
#include "delay.h"

/**
  * @brief  KEY_Init 按键初始化
  * @param  None
  * @retval None
  */
void KEY_Init(void)
{
	//设置io口时钟
	RCC->APB2ENR|=1<<2;
	RCC->APB2ENR|=1<<6;
	//设置输入模式
	//设置PA0输出
	GPIOA->CRL&=0xFFFFFFF0;//这个也可以
	GPIOA->CRL|=0x00000008;
	
		GPIOE->CRL&=0xFFF000FF;
		GPIOE->CRL|=0x00088800;
	//设置io口 默认开始的值
	GPIOE->ODR=7<<2;
}
/**
  * @brief  KEY_Scan  progra 按键扫描
* @param  mode 0 不支持连续按键，1支持连续按键
  * @retval None
  */
u8 KEY_Scan(u8 mode)
{
	static u8 key_up=1;//按键松开标志
	if(mode) key_up=1;
	if(key_up&&(KEY0==0||KEY1==0||KEY2==0||KEY3==1))
	{
		delay_ms(200);
		key_up=0;
		if(KEY0==0) return 1;
		else if(KEY1==0) return 2;
		else if(KEY2==0) return 3;
		else if(KEY3==1)	return 4;
	}
	return 0;//
	
}
