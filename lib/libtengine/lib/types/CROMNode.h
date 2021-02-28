#ifndef CROMNODE_TYPE_H
#define CROMNODE_TYPE_H

#include <inttypes.h>
#include "CVector3.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CVector3 vBoundsCorners[8];
	/* 0x60 */ float m_MaxBounds;
	/* 0x64 */ int8_t m_ParentIndex;
	/* 0x65 */ uint8_t m_Symbol;
	/* 0x66 */ uint8_t m_MaterialType;
	/* 0x67 */ uint8_t _pad;
	/* 0x68 */ float m_DamageScaler;
	/* 0x6C */ int m_dwModelFlags;
} CROMNode; /* sizeof = 0x70 */

#endif

