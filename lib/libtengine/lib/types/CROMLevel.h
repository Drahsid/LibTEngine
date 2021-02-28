#ifndef CROMLEVEL_TYPE_H
#define CROMLEVEL_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ float m_GridDistance;
    /* 0x04 */ uint8_t m_BlackColor[3];
    /* 0x07 */ uint8_t m_WhiteColor[3];
    /* 0x0A */ uint8_t m_DirectionalLight[3];
    /* 0x0D */ uint8_t m_AmbientLight[3];
    /* 0x10 */ uint8_t m_bFlags;
    /* 0x11 */ int8_t m_Direction[3];
} CROMLevel; /* sizeof = 0x14 */

#endif

