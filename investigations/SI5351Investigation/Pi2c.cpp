/**
 *
 * pi2c --- An I2C class for the Raspberry Pi
 *
 * @author
 * 	Johnny Sheppard			Appears to be the original author
 * 	Jim Conrad, KQ7B		Minor tweaks for yasdr
 *
 * @section LICENSE
 *
 * GPL3:  This  program  is  free software; you can redistribute it and/or
 * modify  it  under the terms of the GNU General Public License as published
 * by  the  Free Software Foundation; either version 3 of the License, or (at
 * your  option)  any  later version. This program is distributed in the hope
 * that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty  of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
**/
#include "pi2c.h"

/**
 * Pi2c Constructor
 *
 * @param address	I2C bus address of the slave device
 * @param bus 		Selects a Raspberry bus (Raspberry 4 has several)
 *
 * Usage:  Pi2c(60,'1');			//Device 60 on RPi I2C bus 1 (GPIO 2 and 3)
 *
 *
 */
Pi2c::Pi2c(int address, char bus){
	//Set up the filename of the I2C Bus. Choose appropriate bus for Raspberry Pi Rev.
	char filename[11] = "/dev/i2c-";
	filename[9] = bus;
	filename[10] = 0; //Add the null character onto the end of the array to make it a string
	
	i2cHandle_ = open(filename, O_RDWR); //Open the i2c file descriptor in read/write mode
	if (i2cHandle_ < 0) {
		std::cout << "Can't open I2C BUS" << std::endl; //If there's an error opening this, then display it.
	}
	if (ioctl(i2cHandle_, I2C_SLAVE, address) < 0) { //Using ioctl set the i2c device to talk to address in the "addr" variable.
		std::cout << "Can't set the I2C address for the slave device" << std::endl; //Display error setting the address for the slave.
	}
}


//Destructor merely closes the handle
Pi2c::~Pi2c(){
	if (i2cHandle_){ //If the I2C File handle is still open...
		close(i2cHandle_); //...Close it.
	}
}


/**
 * Read count into bfr from I2C device
 *
 * @param bfr		Pointer to bfr of at least count bytes
 * @param count		Number of bytes to read
 * @return			Number of bytes read or -1 if error
 */
int Pi2c::i2cRead(char *bfr,size_t count){
	int er = read(i2cHandle_,bfr,count); //Read count number of bytes into bfr from the I2C bus.
	return er;
}

/**
 * Write count bytes from bfr to I2C device
 *
 * @param bfr		Pointer to the bytes to be written
 * @param count		Number of bytes to write
 * @return			Number of bytes written or -1 if error
 *
 */
int Pi2c::i2cWrite(char *bfr,size_t count){
	int er = write(i2cHandle_,bfr,count);	//Write count bytes from bfr to I2C device
	return er;
}
