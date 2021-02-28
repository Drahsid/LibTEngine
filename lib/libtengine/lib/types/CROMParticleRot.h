#ifndef CROMPARTICLEROT_TYPE_H
#define CROMPARTICLEROT_TYPE_H

#include "CRandomShortPair.h"

// No version differences afaik
typedef struct {
    /* 0x00 */ CRandomShortPair m_XRot;
    /* 0x04 */ CRandomShortPair m_XRotInc;
    /* 0x08 */ CRandomShortPair m_YRot;
    /* 0x0C */ CRandomShortPair m_YRotInc;
    /* 0x10 */ CRandomShortPair m_ZRot;
    /* 0x14 */ CRandomShortPair m_ZRotInc;
} CROMParticleRot; /* sizeof = 0x18 */

#endif

