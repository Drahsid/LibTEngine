#ifndef CROMRUMBLE_TYPE_H
#define CROMRUMBLE_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ int16_t m_nROMCurve1;
	/* 0x02 */ int16_t m_nROMCurve2;
} CROMRumble; /* sizeof = 0x04 */

#endif

