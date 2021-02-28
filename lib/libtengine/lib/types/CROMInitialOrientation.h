#ifndef CROMINITIALORIENTATION_TYPE_H
#define CROMINITIALORIENTATION_TYPE_H

#include <inttypes.h>
#include "CVector3.h"

// No version differences afaik
typedef struct {
    /* 0x00 */ CVector3 m_vPos;
    /* 0x0C */ int16_t m_RotX;
    /* 0x0E */ int16_t m_RotY;
    /* 0x10 */ int16_t m_RotZ;
    /* 0x12 */ int16_t m_RotW;
} CROMInitialOrientation; /* sizeof = 0x14 */

#endif

