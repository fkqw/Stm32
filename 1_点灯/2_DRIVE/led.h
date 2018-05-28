#ifndef __LED_H
#define __LED_H

#include "sys.h"


/**
  ******************************************************************************
  * @file    test.c
  * @author Jack Feng
  * @version V0
  * @date   2018-05-19
  * @brief    LED0����PB5 ��LED1����PE5���͵�ƽ������
	* 
  ******************************************************************************
  **/



//ͨ���궨��,ֱ�Ӷ���io�ڡ�
#define LED0  PBout(5)
#define LED1  PEout(5)

//#define LED0 (1<<5)
//#define LED1 (1<<5)


/**
  * @brief ��ʼ������.
  * @param  None
  * @retval None
  */	
void LED_Init(void);

#endif
