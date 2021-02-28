#ifndef CROMHOTPOINT_TYPE_H
#define CROMHOTPOINT_TYPE_H

#include <inttypes.h>
#include "CVector3.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CVector3 m_vPosition;
	/* 0x0C */ uint32_t m_dwFlags;
	/* 0x10 */ uint16_t m_nNode;
	/* 0x12 */ uint16_t m_unused;
} CROMHotPoint; /* sizeof = 0x14 */

#endif

