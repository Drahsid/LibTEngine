#ifndef CROMDYNAMICLIGHT_TYPE_H
#define CROMDYNAMICLIGHT_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ int16_t m_wFallOff;
	/* 0x02 */ int16_t m_wColorScale;
	/* 0x04 */ uint8_t m_ColorR;
	/* 0x05 */ uint8_t m_ColorG;
	/* 0x06 */ uint8_t m_ColorB;
	/* 0x07 */ uint8_t m_ColorA;
} CROMDynamicLight; /* sizeof = 0x8 */

#endif

