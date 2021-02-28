#ifndef CPLANE_TYPE_H
#define CPLANE_TYPE_H

#include "CVector3.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CVector3 m_vNormal;
	/* 0x0C */ float m_Dist;
} CPlane; /* sizeof = 0x10 */

#endif

