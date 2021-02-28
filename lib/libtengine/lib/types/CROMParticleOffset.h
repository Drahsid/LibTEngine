#ifndef CROMPARTICLEOFFSET_TYPE_H
#define CROMPARTICLEOFFSET_TYPE_H

#include "CRandomShortPair.h"

// No version differences afaik
typedef struct {
    /* 0x00 */ CRandomShortPair m_XPosOffset;
    /* 0x04 */ CRandomShortPair m_YPosOffset;
    /* 0x08 */ CRandomShortPair m_ZPosOffset;
} CROMParticleOffset; /* sizeof = 0xC */

#endif

