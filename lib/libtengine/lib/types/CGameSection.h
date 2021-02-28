#ifndef CGAMESECTION_TYPE_H
#define CGAMESECTION_TYPE_H

#include <inttypes.h>

typedef struct {
    /* 0x00 */ uint32_t m_dwMatFlags;
    /* 0x04 */ uint32_t m_nMaterial;
    /* 0x08 */ void* rpTextureSet;
	/* 0x0C */ uint32_t TextureSetSize;
    /* 0x10 */ uint8_t m_Color[4];
    /* 0x14 */ uint8_t m_BlackColor[4];
    /* 0x18 */ uint16_t m_MultU;
    /* 0x1A */ uint16_t m_MultV;
} CGameSection; /* sizeof = 0x1C */

#endif

