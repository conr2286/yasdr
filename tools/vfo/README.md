#vfo
 
vfo is a simple command-line tool developed for the Raspberry Pi to set the frequency of
clk0 of an Adafruit I2C-connected SI5351 clock.

##Usage
vfo [-D] <frequency>

	frequency 	Operating frequency of clk0 in Hz
	-D			Enable debugging mode (must build with make debug)

#Notes
* The SI5351 must reside at address 0x60 on the I2C bus
* This tool was developed in C++ for the Raspberry Pi 4

