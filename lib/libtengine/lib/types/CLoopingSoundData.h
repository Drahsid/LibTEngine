#ifndef CLOOPINGSOUNDDATA_TYPE_H
#define CLOOPINGSOUNDDATA_TYPE_H

#include "CVector3.h"

#ifdef GAME_TUROK3
struct CLoopingSoundData;
#endif

#ifdef GAME_TUROK2
typedef struct CLoopingSoundData_t {
	/* 0x00 */ struct CLoopingSoundData_t* m_pPrev;
	/* 0x04 */ struct CLoopingSoundData_t* m_pNext;
	/* 0x08 */ int m_SoundHandle;
	/* 0x0C */ int m_SoundType;
	/* 0x10 */ CVector3 m_vSoundPos;
	/* 0x1C */ struct CVector3* m_vSoundPosPtr;
} CLoopingSoundData; /* sizeof = 0x20 */
#endif

#endif

