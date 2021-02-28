#ifndef CGAMERUMBLE_TYPE_H
#define CGAMERUMBLE_TYPE_H

#include "CGameCurve.h"
#include "CVector3.h"

// No version differences afaik
typedef struct CGameRumble_t {
	/* 0x00 */ struct CGameRumble_t* m_pPrev;
	/* 0x04 */ struct CGameRumble_t* m_pNext;
	/* 0x08 */ struct CROMRumble* m_pROMRumble;
	/* 0x0C */ CVector3 m_vPos;
	/* 0x18 */ float m_Radius;
	/* 0x1C */ float m_Volume;
	/* 0x20 */ CGameCurve m_Curve1;
	/* 0x2C */ CGameCurve m_Curve2;
	/* 0x38 */ struct CGameRumble_t** m_ppOwner;
} CGameRumble; /* sizeof = 0x3C */

#endif

