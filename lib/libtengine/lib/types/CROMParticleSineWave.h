#ifndef CROMPARTICLESINEWAVE_TYPE_H
#define CROMPARTICLESINEWAVE_TYPE_H

#include <inttypes.h>
#include "CRandomShortPair.h"

// No version differences afaik
typedef struct {
    /* 0x00 */ CRandomShortPair m_XAmplitude;
    /* 0x04 */ CRandomShortPair m_XFrequency;
    /* 0x08 */ CRandomShortPair m_XPhase;
    /* 0x0C */ CRandomShortPair m_YAmplitude;
    /* 0x10 */ CRandomShortPair m_YFrequency;
    /* 0x14 */ CRandomShortPair m_YPhase;
    /* 0x18 */ int8_t m_nSineWaveFadeIn;
    /* 0x19 */ int8_t _pad[3];
} CROMParticleSineWave; /* sizeof = 0x1C */

#endif

