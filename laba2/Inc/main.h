#ifndef __MAIN_H
#define	__MAIN_H

#include "stm32f1xx.h"
#include "stdbool.h"

#define DELAY_VAL		1000000

/* Управление светодиодами */
#define	LED_ON()		GPIOB->BSRR = GPIO_BSRR_BS0
#define	LED_OFF()		GPIOB->BSRR = GPIO_BSRR_BR0
#define LED_SWAP()		GPIOB->ODR ^= GPIO_ODR_ODR0

/* Прототипы функций */
void initClk(void);
void initPorts(void);
void initButton(void);
void initTIM2(void);
void delay(uint32_t takts);

#endif
