#ifndef CDYNAMICANIM_TYPE_H
#define CDYNAMICANIM_TYPE_H

#include "CGameObjectInstance.h"

#ifdef GAME_TUROK3
typedef struct CDynamicAnim_t {
	/* 0x000 */ CGameObjectInstance instance;
	/* 0x368 */ struct CDynamicAnim* pLast;
	/* 0x36C */ struct CDynamicAnim* pNext;
	/* 0x370 */ int unk_0x370[2];
} CDynamicAnim; /* sizeof = 0x378 */
#endif

#ifdef GAME_TUROK2
typedef struct CDynamicAnim_t {
	/* 0x000 */ CGameObjectInstance instance;
	/* 0x288 */ struct CDynamicAnim_t* pLast;
    /* 0x28C */ struct CDynamicAnim_t* pNext;
	/* 0x290 */ int* m_pOwnerCount;
	/* 0x294 */ int _pad;
} CDynamicAnim; /* sizeof = 0x298 */
#endif

#endif

