#include "Gpio.h"
#include "stm32f4xx_hal_rcc.h"

 void configurePort(int direction, int pinNum, GPIO_TypeDef *port) {

	 GPIO_InitTypeDef GpioInfo;

	 __HAL_RCC_GPIOG_CLK_ENABLE();
	 __HAL_RCC_GPIOC_CLK_ENABLE();
	 __HAL_RCC_GPIOB_CLK_ENABLE();

	 int *ptr = (int *)0x40021800;
	 ptr[0] = 0x14000000; 	//mode.pin14= output
	 ptr[1] = 0; 			//otype.pin14 = push-pull;
	 ptr[2] = 0x28000000;	//ospeed.pin14 = high speed;

	 int *ptr1 = (int *)0x40020800;	//portC
	 ptr1[0] = 0x00000400;
	 ptr1[1] = 0;
	 ptr1[2] = 0x00000000;

	 int *ptr3 = (int *)0x40020400;	//portB
	 ptr3[0] = 0x04000000;
	 ptr3[1] = 0;
	 ptr3[2] = 0x28000000;

	/* GpioInfo.Pin = pinNum;
	 GpioInfo.Mode = direction;
	 GpioInfo.Speed = GPIO_SPEED_HIGH;
	 GpioInfo.Pull = GPIO_NOPULL;
	 HAL_GPIO_Init(port, &GpioInfo);
	*/

 	 }


void writeOne(int pinNum, GPIO_TypeDef *port) {
	HAL_GPIO_WritePin(port, pinNum, GPIO_PIN_SET);
	}

void writeZero (int pinNum, GPIO_TypeDef *port){
	HAL_GPIO_WritePin(port,pinNum, GPIO_PIN_RESET);
	}
