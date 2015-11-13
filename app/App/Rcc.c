
#include "Rcc.h"

void gpioUnresetEnableClock(GPIO* port){
	int shift = ((int)port - (0x40020000))/(0x400);
	RCC_reg->RCC_AHB1RSTR &= ~(1 << (shift));
	RCC_reg->RCC_AHB1ENR |= (0x00100000 | ~(0 << (shift)));
}
