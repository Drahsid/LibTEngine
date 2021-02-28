#ifndef CANIMNODEINFO_TYPE_H
#define CANIMNODEINFO_TYPE_H

#include "AnimInfo.h"

#ifdef GAME_TUROK3
struct CAnimNodeInfo;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ struct CGameObjectInstance* pThis;
	/* 0x04 */ struct Mtx* mStack;
	/* 0x08 */ struct CMtxF* mfStack;
	/* 0x0C */ struct CISet* pisNodes;
	/* 0x10 */ struct CISet* pisGeometry;
	/* 0x14 */ struct CROMObjectInfo* pROMObjectInfo;
	/* 0x18 */ struct CAnimationState* pGASCurrent;
	/* 0x1C */ struct CAnimationState* pGASBlend;
	/* 0x20 */ AnimInfo CurrentInfo;
	/* 0x44 */ AnimInfo BlendInfo;
	/* 0x68 */ int bRemoveRootXZ;
	/* 0x6C */ int bBlending;
	/* 0x70 */ int bSphericalBlend;
	/* 0x74 */ int bScaleHead;
	/* 0x78 */ int bScaleLeftFoot;
	/* 0x7C */ int bScaleRightFoot;
	/* 0x80 */ int bScaleLeftHand;
	/* 0x84 */ int bScaleRightHand;
	/* 0x88 */ int bScaleStick;
	/* 0x8C */ struct CROMNode* pROMNode;
	/* 0x90 */ int nNode;
} CAnimNodeInfo; /* sizeof = 0x94 */
#endif

#endif
