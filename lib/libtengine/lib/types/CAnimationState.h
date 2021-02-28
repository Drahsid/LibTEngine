#ifndef CANIMSTATE_TYPE_H
#define CANIMSTATE_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ float m_AnimationFrame;
    /* 0x04 */ int16_t m_nAnimIndex;
    /* 0x06 */ int16_t m_nRequestedAnimIndex;
    /* 0x08 */ uint16_t m_nFrames;
    /* 0x0A */ uint8_t m_bCycleCompleted;
    /* 0x0B */ uint8_t m_bAnimActive;
    /* 0x0C */ uint32_t m_nAnimStartFrame;
    /* 0x10 */ struct CMemEntry* pmeAnimData;
} CAnimationState; /* sizeof = 0x14 */

#endif

