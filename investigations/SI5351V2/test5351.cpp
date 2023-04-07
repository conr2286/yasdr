#include <stdio.h>
#include "SI5351a.h"

int main(void)
{
	//Initialize SI5351a on Raspberry Pi I2C bus 1
	int err = si5351Init("/dev/i2c-1",0x60,27000000,10);
	if (err<0) {
		printf("si5351Init failed\n");
	}

	//Start the Clk0 oscillator at 10 mHz without quadrature
	si5351setFrequency(0, 10000000, 0);

	return 0;
}

