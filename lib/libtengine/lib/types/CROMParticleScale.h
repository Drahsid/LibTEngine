#ifndef CROMPARTICLESCALE_TYPE_H
#define CROMPARTICLESCALE_TYPE_H

#include "CRandomShortPair.h"

typedef struct {
    /* 0x00 */ CRandomShortPair m_XScale;
    /* 0x04 */ CRandomShortPair m_XScaleInc;
    /* 0x08 */ CRandomShortPair m_YScale;
    /* 0x0C */ CRandomShortPair m_YScaleInc;
    /* 0x10 */ CRandomShortPair m_ZScale;
    /* 0x14 */ CRandomShortPair m_ZScaleInc;
    /* 0x18 */ float m_ShadowScale;
    /* 0x1C */ float m_NearScale;
    /* 0x20 */ float m_FarScale;
} CROMParticleScale; /* sizeof = 0x24 */

#endif

