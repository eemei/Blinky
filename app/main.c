#include "stm32f4xx.h"
#include "stm32f4xx_hal_gpio.h"
#include "Time.h"
#include "Gpio.h"


int main(void)
{
	configurePort(GPIO_OUTPUT, GPIO_PIN_13, GPIOG);

    while(1)
    {
    	writeOne(GPIO_PIN_13, GPIOG);
    	writeZero(GPIO_PIN_13, GPIOG);


    }
}
