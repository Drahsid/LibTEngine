#ifndef CROMLINK_TYPE_H
#define CROMLINK_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ uint32_t m_dwCause;
	/* 0x04 */ uint16_t m_nEffectInstance;
	/* 0x06 */ uint16_t m_EffectData;
	/* 0x08 */ uint16_t m_CinemaID;
	/* 0x0A */ uint16_t m_nEffectLevel;
	/* 0x0C */ int16_t m_UserValue;
	/* 0x0E */ uint8_t m_bFlags;
	/* 0x0F */ uint8_t m_nGroupID;
	/* 0x10 */ uint8_t m_TextID;
	/* 0x11 */ uint8_t m_nEffectIntelType;
	/* 0x12 */ uint8_t m_nEffectType;
	/* 0x13 */ uint8_t m_Index;
} CROMLink; /* sizeof = 0x14 */

#endif

