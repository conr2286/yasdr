#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "SI5351a.h"

int main(void)
{
	//Initialize SI5351a on Raspberry Pi I2C bus 1
	setvbuf(stdout, NULL, _IONBF, 0);
	printf("Starting...\n");
	int err = si5351Init("/dev/i2c-1",0x60,27000000,10);
	if (err<0) {
		printf("si5351Init failed\n");
		exit(-1);
	}

	//Start the Clk0 and Clk1 oscillators
	si5351setFrequency(0, 5000000, 0);
	si5351setFrequency(1, 5000000, 90);

	si5351ClockEnable(0,true);	//Enable Clk0
	si5351ClockEnable(1,true);

	//Time minor changes in Clk2 frequency
	unsigned count=10000;
	time_t t0 = time(NULL);
	for (int i=0; i<count; i++) {
		si5351setFrequency(2, 1000000, 0);
		si5351setFrequency(2, 1000050, 0);
	}
	time_t t1 = time(NULL);
	float t = ((float)(t1-t0))/count;
	printf("t=%d seconds\n",t);

	return 0;
}

