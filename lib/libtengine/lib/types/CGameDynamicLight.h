#ifndef CGAMEDYNAMICLIGHT_TYPE_H
#define CGAMEDYNAMICLIGHT_TYPE_H

#include <inttypes.h>
#include "CList.h"
#include "CDLight.h"

#ifdef GAME_TUROK3
typedef struct {
	/* 0x000 */ CList m_ActiveList;
	/* 0x014 */ CList m_FreeList;
	/* 0x028 */ CDLight m_DLights[8];
} CGameDynamicLight; /* sizeof = 0x128 */
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ CList m_ActiveList;
	/* 0x14 */ CList m_FreeList;
	/* 0x28 */ CDLight m_DLights[8];
} CGameDynamicLight; /* sizeof = 0xE8 */
#endif

#endif

