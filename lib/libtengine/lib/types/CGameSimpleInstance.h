#ifndef CGAMESIMPLEINSTANCE_TYPE_H
#define CGAMESIMPLEINSTANCE_TYPE_H

#include <inttypes.h>
#include "CInstanceHeader.h"
#include "CVector3.h"
#include <libultra/PR/gbi.h>

#ifdef GAME_TUROK3
struct CGameSimpleInstance;
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x000 */ CInstanceHeader header;
    /* 0x018 */ CVector3 m_vVelocity;
	/* 0x024 */ CVector3 m_vCurrent;
	/* 0x030 */ struct CInstanceHeader* m_pInstanceBelow;
	/* 0x034 */ void* rpObject;
	/* 0x038 */ Mtx m_mOrientation[2];
	/* 0x0B8 */ Mtx m_mShadow[2];
	/* 0x138 */ CVector3 vRotAxis;
	/* 0x144 */ float m_RotAngle;
    /* 0x148 */ float m_AngleVel;
	/* 0x14C */ CVector3 m_vMin;
    /* 0x158 */ CVector3 m_vMax;
	/* 0x164 */ float m_Scale;
    /* 0x168 */ float m_OffsetY;
	/* 0x16C */ uint16_t m_wFlags;
	/* 0x16E */ uint16_t m_nID;
	/* 0x170 */ float m_Time;
    /* 0x174 */ float m_MorphInc;
	/* 0x178 */ Lights1 m_Light;
	/* 0x190 */ uint32_t m_VisBits;
	/* 0x194 */ uint8_t m_DrawFrame;
	/* 0x195 */ uint8_t m_AdvanceFrame;
	/* 0x196 */ uint16_t _pad;
} CGameSimpleInstance; /* sizeof = 0x198 */
#endif

#endif

