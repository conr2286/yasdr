#include "si5351a.h"

int main(void)
{
	//Initialize SI5351a on Raspberry Pi I2C bus 1
	i2cInit('1');

	si5351aSetFrequency(10000000);

	return 0;
}

