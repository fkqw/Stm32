#ifndef __STM32_H
#define __STM32_H
//引脚寄存器定义

//GPIO对应寄存器起始地址

#define GPIOA 0x40010800
#define GPIOB 0x40010C00
#define GPIOC 0x40011000
#define GPIOD 0x40011400
#define GPIOE 0x40011800
#define GPIOF 0x40011C00
#define GPIOG 0x40012000
#define RCC 	0x40021000

//寄存器偏移地址

#define GPIOx_CRL 0x00	
#define GPIOx_CRH 0x04
#define GPIOx_IDR 0x08
#define GPIOx_ODR 0x0c
#define GPIOx_BSRR 0x10
#define GPIOx_BRR 0x14
#define GPIOx_LCKR 0x18
#define GPIOx_APB2ENR 0x18


#define GPIOB_CRL *((volatile unsigned int *)(GPIOB + GPIOx_CRL))
#define GPIOB_CRH *((volatile unsigned int *)(GPIOB + GPIOx_CRH))
#define GPIOB_IDR *((volatile unsigned int *)(GPIOB + GPIOx_IDR))
#define GPIOB_ODR *((volatile unsigned int *)(GPIOB + GPIOx_ODR))
#define GPIOB_BSRR *((volatile unsigned int *)(GPIOB + GPIOx_BSRR))
#define GPIOB_BRR *((volatile unsigned int *)(GPIOB + GPIOx_BRR))
#define GPIOB_LCKR *((volatile unsigned int *)(GPIOB + GPIOx_LCKR))



#define GPIOF_CRL *((volatile unsigned int *)(GPIOF + GPIOx_CRL))
#define GPIOF_CRH *((volatile unsigned int *)(GPIOF + GPIOx_CRH))
#define GPIOF_IDR *((volatile unsigned int *)(GPIOF + GPIOx_IDR))
#define GPIOF_ODR *((volatile unsigned int *)(GPIOF + GPIOx_ODR))
#define GPIOF_BSRR *((volatile unsigned int *)(GPIOF + GPIOx_BSRR))
#define GPIOF_BRR *((volatile unsigned int *)(GPIOF + GPIOx_BRR))
#define GPIOF_LCKR *((volatile unsigned int *)(GPIOF + GPIOx_LCKR))


#define GPIOE_CRL *((volatile unsigned int *)(GPIOE + GPIOx_CRL))
#define GPIOE_CRH *((volatile unsigned int *)(GPIOE + GPIOx_CRH))
#define GPIOE_IDR *((volatile unsigned int *)(GPIOE + GPIOx_IDR))
#define GPIOE_ODR *((volatile unsigned int *)(GPIOE + GPIOx_ODR))
#define GPIOE_BSRR *((volatile unsigned int *)(GPIOE + GPIOx_BSRR))
#define GPIOE_BRR *((volatile unsigned int *)(GPIOE + GPIOx_BRR))
#define GPIOE_LCKR *((volatile unsigned int *)(GPIOE + GPIOx_LCKR))
	


#define GPIO_APB2ENR *((volatile unsigned int *)(RCC + GPIOx_APB2ENR))
#endif
