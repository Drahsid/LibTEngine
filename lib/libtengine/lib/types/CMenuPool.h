#ifndef CMENUPOOL_TYPE_H
#define CMENUPOOL_TYPE_H

#include <inttypes.h>
#include "CList.h"

#ifdef GAME_TUROK3
struct CMenuPool;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ CList m_ActiveList;
	/* 0x14 */ int16_t m_MenuFadeStyle;
    /* 0x16 */ int16_t _pad;
} CMenuPool; /* sizeof = 0x18 */
#endif

#endif

