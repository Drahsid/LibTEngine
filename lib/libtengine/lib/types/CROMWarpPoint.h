#ifndef CROMWARPPOINT_TYPE_H
#define CROMWARPPOINT_TYPE_H

#include <inttypes.h>
#include "CVector3.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CVector3 m_vPos;
	/* 0x0C */ float m_RotY;
	/* 0x10 */ int16_t m_nLevel;
	/* 0x12 */ int16_t m_nRegion;
} CROMWarpPoint; /* sizeof = 0x14 */

#endif

