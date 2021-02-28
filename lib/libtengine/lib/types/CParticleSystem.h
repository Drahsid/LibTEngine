#ifndef CPARTICLESYSTEM_TYPE_H
#define CPARTICLESYSTEM_TYPE_H

#include "CParticle.h"
#include "CList.h"

#ifdef GAME_TUROK3
typedef struct {
	/* 0x00000 */ CParticle m_ParticleVars[128];
	/* 0x10400 */ CList m_FreeList;
	/* 0x10414 */ CList m_DrawList;
	/* 0x10428 */ CList m_ActiveList[3];
} CParticleSystem; /* sizeof = 0x1043C? */
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x0000 */ CParticle m_ParticleVars[128];
	/* 0xEC00 */ CList m_FreeList;
	/* 0xEC14 */ CList m_DrawList;
	/* 0xEC28 */ CList m_ActiveList[3];
	/* 0xEC64 */ void* m_pParticleData;
} CParticleSystem; /* sizeof = 0xEC68 */
#endif

#endif

