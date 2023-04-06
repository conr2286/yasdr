/**
 *
 * I2C --- A system-independent interface to the Raspberry Pi 4's I2C busses
 *
 * @author
 * 	Johnny Sheppard			Appears to be the original author
 * 	Jim Conrad, KQ7B		Minor tweaks for yasdr (doesn't implement all of Wire)
 *
 * @section NOTES
 *  The public interface to this class should be system-independent (you could
 *  implement it on an Arduino, Raspberry, etc).  This implementation of that
 *  interface is for the Raspberry Pi (RPi) 4.
 *
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
#include <iostream>
#include "I2C.h"

/**
 * Pi2c Constructor (Akin to Arduino Wire.begin(void)
 *
 * @param bus 		Selects a Raspberry bus (The RPi 4 supports several)
 * @param addr		The 7-bit I2C device address
 *
 * Usage:  I2C('1',0x60);			//Device 0x60 on RPi I2C bus 1 (GPIO 2 and 3)
 *
 * Note:  At this time, I2C joins the bus only as a controller, not as a slave.
 * Someday... we should probably implement another constructor for using the RPi as a slave.
 *
 * In an Arduino implementation, we'd likely just save the parameters as member
 * variables to access when reading/writing the device.
 */
I2C::I2C(char bus, uint8_t addr){

	//Build the RPi filename of the desired I2C Bus (RPi4 has several)
	char filename[11] = "/dev/i2c-";
	filename[9] = bus;
	filename[10] = 0; //Add the null character onto the end of the array to make it a string
	
	//Open the I2C bus
	fd = open(filename, O_RDWR); //Open the i2c file descriptor in read/write mode
	if (fd < 0) {
		std::cout << "Can't open I2C BUS" << std::endl; //If there's an error opening this, then display it.
	}

	//Configure file descriptor to access the desired I2C device on the bus
	if (ioctl(fd, I2C_SLAVE, addr) < 0) { //Using ioctl set the i2c device to talk to address in the "addr" variable.
		std::cout << "Can't set the I2C address for slave device" << std::endl; //Display error setting the address for the slave.
	}

} //I2C()





/**
 * Pi2C End Transmission (a NOP)
 *
 *
 * Usage:  	endTransmission();			//Doesn't actually do anything at all
 * 			endTransmission(stop);		//Doesn't actually do anything at all
 *
 * Note:  These methods exist merely for compatibility with the Arduino Wire class
 *
 */
int I2C::endTransmission() {
	return 0;
}
int I2C::endTransmission(bool x) {
	return 0;
}


//Destructor merely closes the handle
I2C::~I2C(){
	if (fd){ 			//If the I2C File handle is still open...
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
int I2C::read(char *bfr,size_t count){
	int er = ::read(fd,bfr,count); //Read count number of bytes into bfr from the I2C bus.
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
size_t I2C::write(const uint8_t *bfr,size_t count){
	int er = ::write(fd,bfr,count);	//Write count bytes from bfr to I2C device
	return er;
}




/**
 * Write one byte to I2C device
 *
 * @param c			Byte to be written
 * @return			Number of bytes written or -1 if error
 *
 */
size_t I2C::write(uint8_t c){
	int er = ::write(fd,&c,1);	//Write 1 byte from c to I2C device
	return er;
}




/**
 * Send one byte to an I2C device register
 *
 * @param reg		Target register
 * @param c			Byte to be written
 * @return			Number of bytes written or -1 if error
 *
 */
size_t I2C::sendRegister(uint8_t reg, uint8_t c){
	uint8_t bfr[2];
	bfr[0] = reg;  bfr[1] = c;
	int er = ::write(fd,bfr,2);		//Write register's number followed by the data byte
	return er;
}
