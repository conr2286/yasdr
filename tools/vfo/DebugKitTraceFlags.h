/**
 * Define user-supplied, project-specific trace variables
 *
 * Each trace flag bit enables/disables tracing by a family of related
 * trace messages.  See DebugKit.h for more information.
 *
 */

#include <stdio.h>

struct DK_TRACE_FLAGS {
	unsigned vfo:1;
	unsigned si5351:1;
	unsigned i2cb:1;
	unsigned i2c:1;
};

//Define project-dependent macro to output trace messages to console
#define DK_PRINTF(...) printf(__VAR_ARGS__);

