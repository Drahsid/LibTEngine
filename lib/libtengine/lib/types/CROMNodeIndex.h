#ifndef CROMNODEINDEX_TYPE_H
#define CROMNODEINDEX_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ int16_t m_nTranslationSet;
	/* 0x02 */ int16_t m_nRotationSet;
} CROMNodeIndex; /* sizeof = 0x4 */

#endif

