#ifndef CPATHTRACK_TYPE_H
#define CPATHTRACK_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ int8_t m_Mode;
	/* 0x01 */ uint8_t m_nCurrentPathIndex;
	/* 0x02 */ int16_t m_nCurrentPointIndex;
} CPathTrack; /* sizeof = 0x04 */

#endif

