# DebugKit
 
DebugKit is a small set of C macros and sources for debugging C/C++ code.  The current
implementation supports printing tracing messages.  Families of related trace messages
are enabled/disabled with user-defined flag bits.

Very little, if any, impact is made to the runtime project when DEBUG is not enabled.

##Usage
###Modify DebugKitTraceFlags.h
You will need to define a bit field for each group of related trace messages in your
project.  For example, if your project has an IO section and a MATH section whose trace
messages are to be enabled/disabled independently, then your DebugKitTraceFlags.h
would define the flag bits something like this:

struct DK_TRACE_FLAGS {
	unsigned io:1;
	unsigned math:1;
};

If printf() is not suitable for outputting trace messages, you will also need to modify
the DK_PRINTF macro.
###Add tracing code to your project sources
	#include <DebugKit.h>
	...
	DK_SET_VAR(io,1);						//Set debugging flag io = true
	...
	DK_TRACE(io,"Byte count %d\n",nBytes);	//If io then print count of bytes xfer'd
###Compile your project with -DDEBUG and link DebugKit.o
	gcc ... -DDEBUG ... DebugKit.o ...
##Limitations
+ Future implementations may limit the number of debug flags to 32 bits
##Requirements:
+ C17
+ gcc support for the non-standard #pragma once
+ stdio.h
+ unistd.h
##Manifest
+ DebugKit.h				Header file included into user-supplied project source files
+ DebugKitTraceFlags.h	User-supplied definitions of trace flag bits
+ DebugKit.c				Companion C source file (it's really small)
+ test.c					Simple program to test/demo DebugKit
+ Makefile				By default, it builds the DebugKit object files