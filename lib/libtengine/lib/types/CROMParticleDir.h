#ifndef CROMPARTICLEDIR_TYPE_H
#define CROMPARTICLEDIR_TYPE_H

#include "CRandomShortPair.h"

// No version differences afaik
typedef struct {
    /* 0x00 */ CRandomShortPair m_XDirection;
    /* 0x04 */ CRandomShortPair m_YDirection;
    /* 0x08 */ CRandomShortPair m_ZDirection;
} CROMParticleDir; /* sizeof = 0xC */

#endif

