#ifndef __LED_H
#define __LED_H

#include "sys.h"


/**
  ******************************************************************************
  * @file    test.c
  * @author Jack Feng
  * @version V0
  * @date   2018-05-19
  * @brief    LED0接在PB5 ，LED1接在PE5，低电平灯亮。
	* 
  ******************************************************************************
  **/



//通过宏定义,直接定义io口。
#define LED0  PBout(5)
#define LED1  PEout(5)

//#define LED0 (1<<5)
//#define LED1 (1<<5)


/**
  * @brief 初始化函数.
  * @param  None
  * @retval None
  */	
void LED_Init(void);

#endif
