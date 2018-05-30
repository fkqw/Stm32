/**
  ******************************************************************************
  * @file    test.c
  * @author Jack Feng
  * @version V0
  * @date   2018-05-19
  * @brief   按键 PA0 WK_UP,PE4 KEY0,PE3 KEY1, PE2 KEY2。
  ******************************************************************************
  **/
	
#ifndef __KEY_H
#define __KEY_H
#include "sys.h"

#define KEY0 PEin(4)
#define KEY1 PEin(3)
#define KEY2 PEin(2)
#define KEY3 PAin(0) //WK_UP

#define KEY_UP 4
#define KEY_LEFT 3
#define KEY_DOWN 2
#define KEY_RIGHT 1

void KEY_Init(void);
u8 KEY_Scan(u8);

#endif

