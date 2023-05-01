/**
 * Define user-supplied, project-specific trace variables
 *
 * Each trace flag bit enables/disables tracing by a family of related
 * trace messages.  See DebugKit.h for more information.
 *
 */

#include <stdio.h>

struct DK_TRACE_FLAGS {
	unsigned dbg:1;
};

//Define project-dependent macro to output trace messages to console
#define DK_PRINTF(...) printf(__VAR_ARGS__);

