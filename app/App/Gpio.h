#ifndef __Gpio_H__
#define __Gpio_H__

#include <stdint.h>
#include "stm32f4xx_hal_gpio.h"

#define GPIO_OUTPUT	GPIO_MODE_OUTPUT_PP
#define GPIO_INPUT	GPIO_MODE_INPUT

typedef struct GPIO_t GPIO;
struct GPIO_t{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t  ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFRL;
	uint32_t AFRH;
};

//typedef struct RCC_t RCC;
struct RCC_t{
	uint32_t CR;
	uint32_t PLLCFGR;
	uint32_t CFGR;
	uint32_t CIR;
	uint32_t AHB1RSTR;
	uint32_t AHB2RSTR;
	uint32_t AHB3RSTR;
	uint32_t Reserved0X1C;
	uint32_t APB1RSTR;
	uint32_t APB2RSTR;
	uint32_t Reserved0X28;
	uint32_t Reserved0X2C;
	uint32_t AHB1ENR;
	uint32_t AHB2ENR;
	uint32_t AHB3ENR;
	uint32_t Reserved0X3C;
	uint32_t APB1ENR;
	uint32_t APB2ENR;
	uint32_t Reserved0X48;
	uint32_t Reserved0X4C;
	uint32_t AHB1LPENR;
	uint32_t AHB2LPENR;
	uint32_t AHB3LPENR;
	uint32_t Reserved0X5C;
	uint32_t APB1LPENR;
	uint32_t APB2LPENR;
	uint32_t Reserved0X68;
	uint32_t Reserved0x6C;
	uint32_t BDCR;
	uint32_t CSR;
	uint32_t Reserved0X78;
	uint32_t Reserved0X7C;
	uint32_t SSCGR;
	uint32_t PLLI2SCFGR;
};


#define PIN_0 	0
#define PIN_1 	1
#define PIN_2 	2
#define PIN_3 	3
#define PIN_4 	4
#define PIN_5 	5
#define PIN_6 	6
#define PIN_7 	7
#define PIN_8 	8
#define PIN_9 	9
#define PIN_10 10
#define PIN_11 11
#define PIN_12 12
#define PIN_13 13
#define PIN_14 14
#define PIN_15 15

#define LOW_SPEED 		0
#define MEDIUM_SPEED	1
#define HIGH_SPEED		2
#define VERY_HIGH_SPEED 3

#define GPIO_MODE_INPUT 	0
#define GPIO_MODE_OUTPUT 	1
#define GPIO_MODE_ALTFUNC 	2
#define GPIO_MODE_ANALOG 	3

#define GPIOG_BASE_ADDRESS 	0x40021800
#define GPIOB_BASE_ADDRESS 	0x40020400
#define GPIOC_BASE_ADDRESS 	0x40020800
//#define RCC_BASE_ADDRESS 	0x40023800

#define PORTG ((GPIO *)GPIOG_BASE_ADDRESS)
#define PORTB ((GPIO *)GPIOB_BASE_ADDRESS)
#define PORTC ((GPIO *)GPIOC_BASE_ADDRESS)

void configurePin(int mode, int pinNum, GPIO *port);
void writeZero (int pinNum, GPIO_TypeDef *port);
void writeOne (int pinNum, GPIO_TypeDef *port);


#endif //_GPIO_H__
