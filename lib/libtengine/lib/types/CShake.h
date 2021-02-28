#ifndef CSHAKE_TYPE_H
#define CSHAKE_TYPE_H

#include "CVector3.h"
#include "CShakeAxis.h"

#ifdef GAME_TUROK3
struct CShake;
#endif

#ifdef GAME_TUROK2
typedef struct CShake_t {
	/* 0x00 */ struct CShake_t* m_pLast;
	/* 0x04 */ struct CShake_t* m_pNext;
	/* 0x08 */ CVector3 m_vPos;
	/* 0x14 */ float m_Radius;
	/* 0x18 */ CShakeAxis m_XAxis;
	/* 0x2C */ CShakeAxis m_YAxis;
	/* 0x40 */ CShakeAxis m_ZAxis;
} CShake; /* sizeof = 0x54 */
#endif

#endif

