#ifndef CFXSYSTEM_TYPE_H
#define CFXSYSTEM_TYPE_H

#include <inttypes.h>
#include "CSwooshEdge.h"
#include "CNodeList.h"
#include "CDynamicList.h"
#include "CSwoosh.h"
#include "CFxTimer.h"
#include "CBulletHole.h"
#include "CList.h"
#include <libultra/PR/gbi.h>

#ifdef GAME_TUROK3
struct CFxSystem;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x0000 */ Vtx m_VertexList[2][300];
	/* 0x2580 */ int m_VtxsFree;
	/* 0x2584 */ struct Vtx* m_pFreeVertex;
	/* 0x2588 */ CSwooshEdge m_SwooshEdgeVars[96];
	/* 0x6A88 */ CNodeList m_SwooshEdgeList;
	/* 0x6A94 */ CSwoosh m_SwooshVars[32];
	/* 0x7514 */ CDynamicList m_SwooshList;
	/* 0x752C */ CFxTimer m_TimerFxVars[3];
	/* 0x7580 */ CDynamicList m_TimerFxList;
	/* 0x7598 */ CBulletHole m_BulletHoleVars[100];
	/* 0x94D8 */ CList m_BulletHoleActiveList[10];
	/* 0x95A0 */ CList m_BulletHoleFreeList;
	/* 0x95B4 */ int _pad; // Explicit padding
} CFxSystem; /* sizeof = 0x95B8 */
#endif

#endif

