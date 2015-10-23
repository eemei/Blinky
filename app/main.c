#include "stm32f4xx.h"
#include "stm32f4xx_hal_gpio.h"
#include "Time.h"
#include "Gpio.h"

void delay (uint32_t delaycount){
	while (delaycount != 0){
		delaycount--;
	}

}

int main(void) {
	configurePort(GPIO_OUTPUT, GPIO_PIN_14, GPIOG);
	/*configurePort(GPIO_OUTPUT, GPIO_PIN_13, GPIOG);
	configurePort(GPIO_OUTPUT, GPIO_PIN_13, GPIOB); //GREEN
	configurePort(GPIO_OUTPUT, GPIO_PIN_5, GPIOC);	//RED*/


    while(1) {
    	delay(1000000);
    	writeOne(GPIO_PIN_14, GPIOG);
    	writeZero(GPIO_PIN_13, GPIOG);
    	writeOne(GPIO_PIN_5, GPIOC);   //pc5
    	writeZero(GPIO_PIN_13, GPIOB); //pb13

    	delay(1000000);
    	writeZero(GPIO_PIN_14, GPIOG);
    	writeOne(GPIO_PIN_13, GPIOG);
    	writeZero(GPIO_PIN_5, GPIOC);
    	writeOne(GPIO_PIN_13, GPIOB);
    }

}
