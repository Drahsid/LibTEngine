#ifndef CSKYSYSTEM_TYPE_H
#define CSKYSYSTEM_TYPE_H

#include <inttypes.h>
#include "CList.h"
#include "CSkyLayer.h"
#include <libultra/PR/gbi.h>

#ifdef GAME_TUROK3
struct CSkySystem;
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x000 */ CSkyLayer m_SkyLayerVars[4];
    /* 0x8A0 */ CList m_FreeList;
    /* 0x8B4 */ CList m_ActiveList;
    /* 0x8C8 */ int16_t m_wActiveLayers;
    /* 0x8CA */ int16_t _pad0;
	/* 0x8CC */ int _pad1;
} CSkySystem; /* sizeof = 0x8D0 */
#endif

#endif

