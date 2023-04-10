/**
 *
 * pi2c --- An Arduino Wire Inspired I2C class for the Raspberry Pi
 *
 * @author
 * 	Johnny Sheppard			Appears to be the original author
 * 	Jim Conrad, KQ7B		Minor tweaks for yasdr (doesn't implement all of Wire)
 *
 * @section NOTES
 * 	On the RPi, you may need to install libi2c-dev
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
#include "Pi2c.h"
#include <iostream>

/**
 * Pi2c Constructor (Akin to Arduino Wire.begin(void)
 *
 * @param bus 		Selects a Raspberry bus (The RPi 4 supports several)
 *
 * Usage:  Pi2c(60,'1');			//Device 60 on RPi I2C bus 1 (GPIO 2 and 3)
 *
 * Note:  At this time, Pi2c joins the bus only as a controller, not as a slave.
 */
Pi2c::Pi2c(char bus) {

	//Set up the filename of the I2C Bus. Choose appropriate bus for Raspberry Pi
	char filename[11] = "/dev/i2c-";
	filename[9] = bus;
	filename[10] = 0; //Add the null character onto the end of the array to make it a string

	fd = open(filename, O_RDWR); //Open the i2c file descriptor in read/write mode
	if (fd < 0) {
		std::cout << "Can't open I2C BUS" << std::endl; //If there's an error opening this, then display it.
	}
} //Pi2c()

/**
 * Pi2c Begin Transmission to the specified device
 *
 * @param address	I2C bus address of the slave device
 *
 * Usage:  beginTransmission(60);			//Begin transmission with device at address 60
 *
 *
 */
void Pi2c::beginTransmission(uint8_t address) {

	if (ioctl(fd, I2C_SLAVE, address) < 0) { //Using ioctl set the i2c device to talk to address in the "addr" variable.
		std::cout << "Can't set the I2C address for slave device" << std::endl; //Display error setting the address for the slave.
	}
}

/**
 * Pi2c End Transmission (a NOP)
 *
 *
 * Usage:  	endTransmission();			//Doesn't actually do anything at all
 * 			endTransmission(stop);		//Doesn't actually do anything at all
 *
 * Note:  These methods exist merely for compatibility with the Arduino Wire class
 *
 */
int Pi2c::endTransmission() {
	return 0;
}
int Pi2c::endTransmission(bool x) {
	return 0;
}

//Destructor merely closes the handle
Pi2c::~Pi2c() {
	if (fd) { 			//If the I2C File handle is still open...
		close(fd); 		//...Close it.
		fd = 0;			//Remember it closed
	}
}

/**
 * Read count into bfr from I2C device
 *
 * @param bfr		Pointer to bfr of at least count bytes
 * @param count		Number of bytes to read
 * @return			Number of bytes read or -1 if error
 */
int Pi2c::read(char *bfr, size_t count) {
	int er = ::read(fd, bfr, count); //Read count number of bytes into bfr from the I2C bus.
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
size_t Pi2c::write(const uint8_t *bfr, size_t count) {
	int er = ::write(fd, bfr, count);//Write count bytes from bfr to I2C device
	return er;
}

/**
 * Write one byte to I2C device
 *
 * @param c			Byte to be written
 * @return			Number of bytes written or -1 if error
 *
 */
size_t Pi2c::write(uint8_t c) {
	int er = ::write(fd, &c, 1);	//Write 1 byte from c to I2C device
	return er;
}

/**
 * Send one byte to an I2C device register
 *
 * @param c			Byte to be written
 * @return			Number of bytes written or -1 if error
 *
 */
size_t Pi2c::sendRegister(uint8_t reg, uint8_t c) {
	uint8_t bfr[2];
	bfr[0] = reg;
	bfr[1] = c;
	int er = ::write(fd, bfr, 2);//Write register's number followed by the data byte
	return er;
}
