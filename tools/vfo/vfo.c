/*
 * vfo --- Set the VFO CLK0 to the specified frequency
 *
 * Usage:  vfo <[-D][-x] frequency>
 *
 * 	frequency	VFO operating frequency in HZ
 *
 * Notes:
 * 	- Code was originally developed for a Raspberry Pi 4
 *
 *  Created on: Apr 22, 2023
 *      Author: jconrad
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <getopt.h>
#include "DebugKit.h"
#include "SI5351a.h"

int main(int argc, char *argv[]) {

	int c;

	uint32_t freqHz = 10000000;	//VFO frequency in HZ
	bool halt=false;

	opterr = 0;

	while ((c = getopt(argc, argv, "Dx")) != -1) {
		switch (c) {
		case 'D':
			DK_SET_VAR(vfo,1);
			DK_SET_VAR(si5351,1);
			DK_SET_VAR(i2cb,1);
			DK_SET_VAR(i2c,1);
			break;
		case 'x':
			DK_TRACE(vfo,"Got -x\n");
			halt = true;
			break;
		case '?':
			fprintf(stderr, "Usage:  vfo [-D] <frequency>\n");
			return 1;
		default:
			abort();
		} //switch
	} //while

	//Initialize the SI5351a
	int err = si5351Init("/dev/i2c-1", 0x60, 25000000, 10);
	if (err < 0) {
		fprintf(stderr,"si5351Init failed\n");
		exit(-1);
	}

	//Halt the VFO?
	if (halt) {
		DK_TRACE(vfo,"Halting\n");
		si5351ClockEnable(0,false);			//Disable Clk0
		return 0;
	}

	//Parse requested frequency
	DK_TRACE(vfo,"arg[%d]=%s\n",optind,argv[optind]);
	sscanf(argv[optind],"%u",&freqHz);


	//Start the Clk0 oscillator at requested frequency
	si5351SetFrequency(0, freqHz, 0);
	si5351ClockEnable(0,true);			//Enable Clk0

	return 0;
}
