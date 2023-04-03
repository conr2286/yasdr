////////////////////////////////////////////////////////////////////////////////
// License:  This  program  is  free software; you can redistribute it and/or //
// modify  it  under the terms of the GNU General Public License as published //
// by  the  Free Software Foundation; either version 3 of the License, or (at //
// your  option)  any  later version. This program is distributed in the hope //
// that it will be useful, but WITHOUT ANY WARRANTY; without even the implied //
// warranty  of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the //
// GNU General Public License for more details.                               //
////////////////////////////////////////////////////////////////////////////////
// pi2c.h: This is the header file for the Pi2c class which allows for easy   //
// communication to an Arduino from the Raspberry Pi over the I2C bus.        //
// The default usage is for a Raspberry Pi Rev 1 - using the I2C bus          //
// "/dev/i2c-1".  Rev0 and the "/dev/i2c-0" bus can be specfied though if     //
// needed.                                                                    //
////////////////////////////////////////////////////////////////////////////////
// Example Usage:                                                             //
// Please see https://bitbucket.org/JohnnySheppard/pi2c for example usage.    //
////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <linux/i2c-dev.h>
#include <linux/smbus.h>
#include <fcntl.h>    /* For O_RDWR */
#include <unistd.h>   /* For open(), */
#include <sys/ioctl.h>

class Pi2c {
		int fd;					//Linux file descriptor

	public:
		Pi2c(char);
		~Pi2c();
		
		void beginTransmission(uint8_t);
		int endTransmission(void);
		int endTransmission(bool);

		int read(char *data,size_t length);
		size_t write(uint8_t);
	    size_t write(const uint8_t*, size_t);

		
};
