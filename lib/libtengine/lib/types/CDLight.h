#ifndef CDLIGHT_TYPE_H
#define CDLIGHT_TYPE_H

#include <inttypes.h>

#ifdef GAME_TUROK3
typedef struct CDLight_t {
	/* 0x00 */ struct CDLight_t* m_pPrev;
	/* 0x04 */ struct CDLight_t* m_pNext;
	/* 0x08 */ struct CROMDynamicLight* m_pROMLight;
	/* 0x0C */ float m_ColorFade;
	/* 0x10 */ int16_t x;
    /* 0x12 */ int16_t y;
    /* 0x14 */ int16_t z;
	/* 0x16 */ int16_t m_bEnabled;
	/* 0x18 */ float unk_0x18;
	/* 0x1C */ int unk_0x1C;
} CDLight; /* sizeof = 0x20 */
#endif

#ifdef GAME_TUROK2
typedef struct CDLight_t {
	/* 0x00 */ struct CDLight_t* m_pPrev;
	/* 0x04 */ struct CDLight_t* m_pNext;
	/* 0x08 */ struct CROMDynamicLight* m_pROMLight;
	/* 0x0C */ float m_ColorFade;
	/* 0x10 */ int16_t x;
    /* 0x12 */ int16_t y;
    /* 0x14 */ int16_t z;
	/* 0x16 */ int16_t m_bEnabled;
} CDLight; /* sizeof = 0x18 */
#endif

#endif

