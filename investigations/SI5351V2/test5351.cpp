#include "SI5351a.h"

int main(void)
{
	//Initialize SI5351a on Raspberry Pi I2C bus 1
	si5351Init('1');

	si5351SetFrequency(10000000);

	return 0;
}

