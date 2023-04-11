/*
 * SI5351RegBlock.cpp
 *
 *  Created on: Apr 10, 2023
 *      Author: jconrad
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "Pi2CBlock.h"

/**
 * Construct an optimized register block for I2C device at addr
 *
 * @param addr		7-bit I2C address of device
 *
 * This class constructs an object working with Pi2C to optimally send a
 * sequence of registers to the I2C device at addr through its sendRegister()
 * method.  All reguests to sendRegister() on an block object must address the
 * same I2C device.  However, the sendRegister()s may target registers within
 * that device in any order.  The close() method must be called after all
 * requests are complete.  Close() will flush the registers' data to the
 * device in sorted order, using burst mode when the requests target registers
 * in sequential order, else their data will be flushed through individual
 * transactions.
 */
Pi2CBlock::Pi2CBlock(Pi2C* i2C, uint8_t addr) {
	i2cDevice = addr;					//Remember the target device address
	count = 0;							//Reset count of <register,data> tuples
	first = NULL;						//Ordered list of <register,data> tuples
	i2c = i2C;
}




/**
 *  Buffer <reg,data> to later send to i2cDevice
 *
 *  All requests to sendRegister() address the same device in this object.
 *  Each request consists of a <reg,data> tuple and may appear in any order (they
 *  need not be sequential registers).  Even gaps in the register sequence are
 *  permitted.  The data is actually sent to the device after close().
 */
void Pi2CBlock::sendRegister(uint8_t reg, uint8_t data) {

	//Build new <reg,data> tuple
	Pi2CRegData *newTuple = new (Pi2CRegData);
	newTuple->next = NULL;
	newTuple->reg = reg;
	newTuple->data = data;

	//Insert at head of list?
	if (count == 0) {
		first = newTuple;
		count = 1;
		return;
	}

	//We don't actually send the register to the device until the block is closed.
	//All we do now is insert it into the ordered list of <reg,data> tuples.
	Pi2CRegData *curTuple = first;
	while (curTuple->next != NULL) {

		//Insert into midst of the list?
		if (newTuple->reg < curTuple->next->reg)
			break;

		//Not here, check the next
		curTuple = curTuple->next;

	}

	//Exited loop with curTuple referencing the tuple to proceed newTuple.
	newTuple->next = curTuple->next;
	curTuple->next = newTuple;
	count++;

} //sendRegister()




/**
 *  Close a block of <reg,data> tuples
 *
 */
void Pi2CBlock::close() {

	//Perhaps there isn't anything to send
	if (count==0) return;

	//Construct a buffer large enough to hold all of the data from the tuple list
	uint8_t bfr[] = malloc(count);		//It's an array of bytes

	//Outer loop walks the list, assembling one block of sequential data into the buffer
	Pi2CRegData* curTuple = first;		//
	while(curTuple!=NULL) {

		//Start filling the buffer
		uint8_t firstReg = curTuple->reg;		//Register number of first tuple in bfr
		uint8_t nextReg  = firstReg+1;			//Number of next expected register following curTuple
		unsigned n = 0;							//Buffer is currently empty
		do {
			bfr[n++] = curTuple->data;			//Buffer a byte of data from this tuple
			curTuple = curTuple->next;			//Now consider the following tuple if any
			if (curTuple == NULL) break;		//End of list?
		} while(curTuple->reg==nextReg++);		//No, does this following tuple belong in bufr?

		//Loop exited when bfr has n bytes of sequential data starting at firstReg
		i2c->sendRegister(i2cDevice,firstReg,n,bfr);	//Burst write bfr to firstReg in device addr
		printf("send %u bytes at reg %u\n",n,firstReg);

		//Free the buffer
		free(bfr);

	} //Outer loop

} //close()






Pi2CBlock::~Pi2CBlock() {

	//Free the list of tuples
	Pi2CRegData *p = first;
	while (p!=NULL) {
		Pi2CRegData* next = p->next;
		free(p);
		p = next;
	}

}

