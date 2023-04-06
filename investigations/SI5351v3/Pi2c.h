/*
 * Pi2C.h
 *
 *  Created on: Apr 4, 2023
 *      Author: jconrad
 */

#ifndef PI2C_H_
#define PI2C_H_

//#include <iostream>
#include <stdint.h>
#include <stddef.h>
#include <linux/i2c-dev.h>
#include <i2c/smbus.h>
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
	    size_t sendRegister(uint8_t,uint8_t);


};


#endif /* PI2C_H_ */
