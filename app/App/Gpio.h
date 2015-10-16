#ifndef __Gpio_H__
#define __Gpio_H__

#include "stm32f4xx_hal_gpio.h"


#define GPIO_OUTPUT	GPIO_MODE_OUTPUT_PP
#define GPIO_INPUT	GPIO_MODE_INPUT

void configurePin(int direction, int pinnum, GPIO_TypeDef *port);
void writeZero (int pinNum, GPIO_TypeDef *port);
void writeOne (int pinNum, GPIO_TypeDef *port);


#endif //_GPIO_H__
