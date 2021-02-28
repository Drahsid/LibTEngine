#ifndef CSIMPLEPOOL_TYPE_H
#define CSIMPLEPOOL_TYPE_H

#include <inttypes.h>
#include "CDynamicSimple.h"

#ifdef GAME_TUROK3
typedef struct {
    /* 0x0000 */ CDynamicSimple m_Simples[32];
    /* 0x3D00 */ struct CDynamicSimple* m_pFreeHead;
    /* 0x3D04 */ struct CDynamicSimple* m_pActiveHead;
    /* 0x3D08 */ struct CDynamicSimple* m_pActiveTail;
    /* 0x3D0C */ int _pad;
} CSimplePool; /* sizeof = 0x3D10 */
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x0000 */ CDynamicSimple m_Simples[32];
	/* 0x3600 */ struct CDynamicSimple* m_pFreeHead;
	/* 0x3604 */ struct CDynamicSimple* m_pActiveHead;
    /* 0x3608 */ struct CDynamicSimple* m_pActiveTail;
    /* 0x360C */ int _pad; // Explicitly padding this
} CSimplePool; /* sizeof = 0x3610 */
#endif

#endif

