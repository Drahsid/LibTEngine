#ifndef CANIMDRAWINFO_TYPE_H
#define CANIMDRAWINFO_TYPE_H

#ifdef GAME_TUROK3
struct CAnimDrawInfo;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ int bDrawModel;
	/* 0x04 */ int bDrawShadow;
	/* 0x08 */ struct CCamera* pCamera;
	/* 0x0C */ struct CMemEntry* pmeGeometry;
	/* 0x10 */ struct CVector3* pvShadowOffset;
	/* 0x14 */ int nLOD;
	/* 0x18 */ int nModelIndex;
	/* 0x1C */ int nShadowModelIndex;
} CAnimDrawInfo; /* sizeof = 0x20 */
#endif

#endif

