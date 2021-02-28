#ifndef HEALTH_HELPER_TYPE_H
#define HEALTH_HELPER_TYPE_H

// This is a helper for the 24:8 health type
typedef union {
    /* 0x00 */ int dirty;
    struct {
        /* 0x00:XXXXXXXXXXXXXXXXXXXXXXXXOOOOOOOO */
		int primary : 24;

        /* 0x00:OOOOOOOOOOOOOOOOOOOOOOOOXXXXXXXX */
		int fraction : 8;
    };
} health_t; /* sizeof = 0x4 */

typedef union {
    /* 0x00 */ short dirty;
    struct {
        /* 0x00:XXXXXXXXOOOOOOOO */
        short primary : 8;

        /* 0x00:OOOOOOOOXXXXXXXX */
        short fraction : 8;
    };
} health_8_8_t; /* sizeof = 0x2 */


#endif

