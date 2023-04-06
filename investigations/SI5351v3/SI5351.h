/*
 * SI5351.h
 *
 *  Created on: Apr 4, 2023
 *      Author: jconrad
 */

#ifndef SI5351_H_
#define SI5351_H_

#include <inttypes.h>
#include "Pi2c.h"

//Define hardware implementation constants
#define F_XTAL		27000000   	//27MHz SI5351 crystal on Adafruit daughter card
#define I2C_BUS		'1'			//Using SI5351 on this RPi bus
#define I2C_ADR		0x60		//Using I2C device 0x60 on that RPi bus



class SI5351 {
	Pi2c* i2c;					//Raspberry Pi I2C

public:
	SI5351();
	virtual ~SI5351();
};

#endif /* SI5351_H_ */
