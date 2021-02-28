#ifndef CMAP_TYPE_H
#define CMAP_TYPE_H

#include "CGameRegion.h"
#include "CVector3.h"

#ifdef GAME_TUROK3
struct CMap;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ int m_bOn;
	/* 0x04 */ int m_Mode;
	/* 0x08 */ float m_Alpha;
	/* 0x0C */ struct CGameRegion* m_pCurrentRegion;
	/* 0x10 */ float m_RotY;
	/* 0x14 */ CVector3 m_vPos;
	/* 0x20 */ CVector3 m_vOffset;
	/* 0x2C */ CVector3 m_vDesiredOffset;
} CMap; /* sizeof = 0x38 */
#endif

#endif

