#ifndef CRANDOMSHORTPAIR_TYPE_H
#define CRANDOMSHORTPAIR_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */int16_t v;
    /* 0x02 */int16_t r;
} CRandomShortPair; /* sizeof = 0x4 */

#endif

