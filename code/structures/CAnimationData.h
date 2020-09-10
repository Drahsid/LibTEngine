#ifndef CANIMDAT_H
#define CANIMDAT_H

#include <min.h>
#include "CGameObjectInstance.h"
#include "CAnimationState.h"

/*
    Each weapon has an overload for the step function (it is a function pointer)
    generic step(CGameObjectInstance* A0, CAnimationState* A1, void* A2)
*/

typedef void (*fAnimStep)(CGameObjectInstance* A0, CAnimationState* A1, void* A2);

typedef struct {
    /* 0x00 */ int m_AnimationIndex;
    /* 0x04 */ int unk_0x04;
    /* 0x08 */ fAnimStep step;
    /* 0x0C */ int unk_0x0C;
    /* 0x10 */ uint32_t unk_0x10;
    /* 0x14 */ float m_PlaySpeedScale;
    /* 0x18 */ int unk_0x18[2];
} CAnimationData; /* sizeof = 0x20? */

#endif

