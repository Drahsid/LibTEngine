#ifndef CROMCORNER_TYPE_H
#define CROMCORNER_TYPE_H

#include "CVector3.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CVector3 m_vCorner;
	/* 0x0C */ float m_Ceiling;
} CROMCorner; /* sizeof = 0x10 */

#endif

