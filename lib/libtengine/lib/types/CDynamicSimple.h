#ifndef CDYNAMICSIMPLE_TYPE_H
#define CDYNAMICSIMPLE_TYPE_H

#include <inttypes.h>
#include "CGameSimpleInstance.h"

#ifdef GAME_TUROK3
typedef struct CDynamicSimple_t {
    /* 0x000 */ int unk_0x000[120];
    /* 0x1E0 */ struct CDynamicSimple_t* m_pLast;
    /* 0x1E4 */ struct CDynamicSimple_t* m_pNext;
} CDynamicSimple; /* sizeof = 0x1E8 */
#endif

#ifdef GAME_TUROK2
typedef struct CDynamicSimple_t {
    /* 0x000 */ CGameSimpleInstance instance;
    /* 0x198 */ float m_LifeTime;
    /* 0x1BC */ float m_SparkleTime;
    /* 0x1A0 */ uint32_t m_dwFlags;
    /* 0x1A4 */ int* m_pOwnerCount;
    /* 0x1A8 */ struct CDynamicSimple_t* m_pLast;
    /* 0x1AC */ struct CDynamicSimple_t* m_pNext;
} CDynamicSimple; /* sizeof = 0x1B0 */
#endif

#endif

