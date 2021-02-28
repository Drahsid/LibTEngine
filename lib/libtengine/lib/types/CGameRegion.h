#ifndef CGAMEREGION_TYPE_H
#define CGAMEREGION_TYPE_H

#include <inttypes.h>

#ifdef GAME_TUROK3
struct CGameRegion;
#endif

#ifdef GAME_TUROK2
typedef struct CGameRegion_t {
	/* 0x00 */ int16_t m_nRegionSet;
	/* 0x02 */ int16_t m_wFlags;
	/* 0x04 */ struct CROMCorner* m_pCorners[3];
	/* 0x08 */ struct CGameRegion_t* m_pNeighbors[3];
	/* 0x0C */ uint32_t m_VisBits;
} CGameRegion; /* sizeof = 0x10 */
#endif



#endif

