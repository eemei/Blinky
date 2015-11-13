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

	configurePort(GPIO_MODE_OUTPUT, PIN_14,	PORTG);
	configurePort(GPIO_MODE_OUTPUT, PIN_13,	PORTG);
	configurePort(GPIO_MODE_OUTPUT, PIN_5,	PORTC);
	configurePort(GPIO_MODE_OUTPUT, PIN_13,	PORTB);
	configurePortInput(PIN_0, PORTA);
	int SignalR;



    while(1) {
    	 SignalR = PORTA->IDR & 1;
    	 if (SignalR){
    		 writeOne(PIN_14, GPIOG);
    		 writeZero(PIN_13, GPIOG);

    	 }

    	 else{
    		 writeZero(PIN_14, GPIOG);
    		 writeOne(PIN_13, GPIOG);
    	 }

    }

}


//delay(1000000);
//writeOne(PIN_14, GPIOG);
//writeZero(PIN_13, GPIOG);
//writeOne(PIN_5, GPIOC);   //pc5
//writeZero(PIN_13, GPIOB); //pb13

//delay(1000000);
//writeZero(PIN_14, GPIOG);
//writeOne(13, GPIOG);
//writeZero(PIN_5, GPIOC);
//writeOne(PIN_13, GPIOB);
