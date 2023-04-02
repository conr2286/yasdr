#include "si5351a.h"
#include "i2c.h"

int main(void)
{
	i2cInit();

	si5351aSetFrequency(10000000);

	return 0;
}

