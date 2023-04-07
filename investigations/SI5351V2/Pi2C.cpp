/**
 *
 * Pi2C --- An interface to a an I2C device on the Raspberry Pi
 *
 * @author
 * 	Jim Conrad, KQ7B		Implementation for yasdr
 *
 * @section NOTES
 *  This implementation of the Pi2C class interface was originally developed for
 *  use with Raspberry Pi 4 hardware supervised by bullseye.
 *
 * 	On the RPi, you likely need to install libi2c-dev.
 *
 * @section MIT LICENSE
 * Copyright (c) <2023> <Jim Conrad, KQ7B>
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
**/

#include <errno.h>
#include <sys/ioctl.h>
#include <stdexcept>
#include <linux/types.h>
#include <linux/i2c-dev.h>

#include "Pi2C.h"



/**
 * Pi2c Constructor
 *
 * @param busName 	Linux filename of the desired I2C bus
 * @param addr		The 7-bit I2C device address
 *
 * Usage:  Pi2C("/dev/i2c-1",0x60);			//Device 0x60 on RPi I2C bus 1 (GPIO 2 and 3)
 *
 * @section NOTES
 * At this time, Pi2C joins the bus only as a controller, not as a slave.
 * At this time, the instantiated object is configured to access a single device on the
 * I2C bus.  Because I2C supports many devices on a single bus, we may someday implement
 * another constructor (sans the addr parameter) and another method for selecting an
 * I2C device address.
 *
 */
Pi2C::Pi2C(char* busName, uint8_t addr){

	//Open the I2C bus
	fd = open(busName, O_RDWR); //Open the i2c file descriptor in read/write mode
	if (fd < 0) {
		throw errno;			//Whoopsie!
	}

	//Configure that file descriptor to access the desired I2C device on this bus
	if (ioctl(fd, I2C_SLAVE, addr) < 0) { //Using ioctl set the i2c device to talk to address in the "addr" variable.
		close(fd);
		throw errno;
	}

} //I2C()





//Destructor merely closes the handle
Pi2C::~Pi2C(){
	close(fd); 		//...Close it.
} //~





/**
 * Send one byte to an I2C device register over the bus accessed through the fd member
 *
 * @param reg		Target register
 * @param c			Byte to be written
 * @return			Number of bytes written or -1 if error
 *
 * @section NOTES
 * Someday consider overloading sendRegister with a method passing the I2C device address as a parameter?
 *
 */
int Pi2C::sendRegister(uint8_t reg, uint8_t c) {
	return i2c_smbus_write_byte_data(fd, reg, c) < 0);
}























