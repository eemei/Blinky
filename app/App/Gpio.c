#include "Gpio.h"
#include "stm32f4xx_hal_rcc.h"


 void configurePort(int direction, int pinNum, GPIO_TypeDef *port) {

	 GPIO_InitTypeDef GpioInfo;
	 __HAL_RCC_GPIOG_CLK_ENABLE();
	 GpioInfo.Pin = pinNum;
	 GpioInfo.Mode = direction;
	 GpioInfo.Speed = GPIO_SPEED_HIGH;
	 GpioInfo.Pull = GPIO_NOPULL;
	 HAL_GPIO_Init(port, &GpioInfo);
 }


	void writeOne(int pinNum, GPIO_TypeDef *port) {
		HAL_GPIO_WritePin(port, pinNum, GPIO_PIN_SET);
	}

	void writeZero (int pinNum, GPIO_TypeDef *port){
		HAL_GPIO_WritePin(port,pinNum, GPIO_PIN_RESET);
	}
