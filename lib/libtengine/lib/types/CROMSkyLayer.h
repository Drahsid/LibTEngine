#ifndef CROMSKYLAYER_TYPE_H
#define CROMSKYLAYER_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ int16_t m_nTextureSet;
	/* 0x02 */ uint8_t m_BlackColor[3];
	/* 0x05 */ uint8_t m_WhiteColor[3];
	/* 0x08 */ float m_SpeedScaler;
	/* 0x0C */ float m_Tile;
	/* 0x10 */ float m_AnimSpeed;
	/* 0x14 */ float m_HeightOffset;
	/* 0x18 */ float m_FadeThroughDist;
	/* 0x20 */ float m_CameraTrack;
	/* 0x24 */ float m_FadeInTime;
	/* 0x28 */ float m_FadeOutTime;
	/* 0x2C */ uint8_t m_Opacity;
	/* 0x2D */ uint8_t m_bFlags;
	/* 0x2E */ uint16_t _pad;
} CROMSkyLayer; /* sizeof = 0x30 */

#endif

