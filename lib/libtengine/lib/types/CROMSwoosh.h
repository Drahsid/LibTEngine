#ifndef CROMSWOOSH_TYPE_H
#define CROMSWOOSH_TYPE_H

#include <inttypes.h>
#include "CROMSwooshPoint.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ float m_TotalTime;
	/* 0x04 */ float m_TimeTillFadeOut;
	/* 0x08 */ float m_EdgeTime;
	/* 0x0C */ int m_nNode;
	/* 0x10 */ int16_t m_nTexture;
	/* 0x12 */ uint8_t m_bLoop;
	/* 0x13 */ int8_t m_RandomizeHue;
	/* 0x14 */ int8_t m_RandomizeSaturation;
	/* 0x15 */ int8_t m_RandomizeBrightness;
	/* 0x16 */ uint8_t m_WhiteColor[3];
	/* 0x19 */ uint8_t m_BlackColor[3];
	/* 0x1C */ uint8_t m_TextureType;
	/* 0x1D */ uint8_t m_Segments;
	/* 0x1E */ uint8_t m_Playback;
	/* 0x1F */ uint8_t m_nType;
	/* 0x20 */ uint8_t m_nEndType;
	/* 0x21 */ uint8_t m_StartScale;
	/* 0x22 */ uint8_t m_EndScale;
	/* 0x23 */ uint8_t m_SwooshPointCount;
	/* 0x24 */ CROMSwooshPoint m_SwooshPoints;
} CROMSwoosh; /* sizeof = 0x30 */

#endif

