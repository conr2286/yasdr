/*
 * @file --- Debugging kit for printing tracing messages
 *
 * @section Usage
 * You will need to modify the project-specific DebugKitTraceFlags.h file
 * included herein, and then include this file in C/C++ files whose execution you
 * wish to trace.
 *
 * In addition to your trace bit flags defined in DebugKitTraceFlags.h, the two
 * macros below comprise your interface to DebugKit.
 *
 * DK_SET_VAR(foo,1);						//Set trace bit flag foo true
 * DK_SET_VAR(zot,0);						//Set trace bit flag zot false
 * DK_TRACE(foo,"Debugging foo, i=%d\n",i);	//Print trace message if foo==true
 *
 * To enable DebugKit, define the symbol DEBUG either in your code or on the gcc
 * command line, e.g. gcc ... -DDEBUG ...
 *
 * Omitting the symbol DEBUG disables DebugKit's macro expansions.
 *
 * Be sure to link DebugKit.o into your program.  Even without DEBUG defined,
 * DebugKit.o includes the definition of the DebugKitTraceFlags bit field.
 * There is little or no other overhead without DEBUG defined.
 *
 * @section Limitations
 * DebugKit was originally developed for C17 and uses the widely supported but
 * non-standard @pragma once extension.
 *
 * @author Jim Conrad, KQ7B
 */

#pragma once



#include "DebugKitTraceFlags.h"

#ifdef DEBUG

//When debugging, provide access to the trace flag bits
extern struct DK_TRACE_FLAGS dkTraceBits;		//The field's implementation resides in DebugKit.c

//Assign a value to a trace flag bit
#define DK_SET_VAR(bit,val) dkTraceBits.bit = val;

//Formatted trace print
#define DK_TRACE(bit, ...) if (dkTraceBits.bit) printf(__VA_ARGS__);

#else //~DEBUG

#define DK_SET_VAR(...)
#define DK_TRACE(...)

#endif

