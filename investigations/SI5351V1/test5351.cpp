#include <time.h>
#include <stdio.h>
#include "si5351a.h"


int main(void)
{
	//Initialize SI5351a on Raspberry Pi I2C bus 1
	si5351Init('1');

//	si5351SetFrequency(10000000);

	//Time minor changes in Clk2 frequency
	int count=1000;
	time_t t0 = time(NULL);
	for (int i=0; i<count; i++) {
		si5351SetFrequency(1000000);
		si5351SetFrequency(1000050);
	}
	time_t t1 = time(NULL);
	float t = ((float)(t1-t0))/count;
	printf("t=%f seconds\n",t);

	return 0;
}

