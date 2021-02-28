#ifndef CROMPARTICLECOLOR_TYPE_H
#define CROMPARTICLECOLOR_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ uint8_t m_WhiteColor[3];
	/* 0x03 */ uint8_t m_BlackColor[3];
	/* 0x06 */ uint8_t m_WhiteColor2[3];
	/* 0x09 */ uint8_t m_BlackColor2[3];
	/* 0x0C */ int8_t m_RandomizeHue;
	/* 0x0D */ int8_t m_RandomizeSaturation;
	/* 0x0E */ int8_t m_RandomizeBrightness;
    /* 0x0F */ int8_t _pad;
} CROMParticleColor; /* sizeof = 0x10 */

#endif

