#ifndef CANIMPOOL_TYPE_H
#define CANIMPOOL_TYPE_H

#include "CDynamicAnim.h"
#include "CList.h"

#ifdef GAME_TUROK3
typedef struct {
	/* 0x0000 */ CDynamicAnim DynAnims[32];
	/* 0x6F00 */ CList FreeList;
	/* 0x6F14 */ CList UsedList;
} CAnimPool; /* sizeof = 0x6F28 */
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x0000 */ CDynamicAnim DynAnims[32];
	/* 0x5300 */ CList FreeList;
	/* 0x5314 */ CList UsedList;
} CAnimPool; /* sizeof = 0x5328*/
#endif

#endif

