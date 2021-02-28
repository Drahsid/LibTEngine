#ifndef CSKYLAYER_TYPE_H
#define CSKYLAYER_TYPE_H

#ifdef GAME_TUROK3
struct CSkyLayer;
#endif

#ifdef GAME_TUROK2
typedef struct CSkyLayer_t {
	/* 0x000 */ struct CSkyLayer_t* m_pPrev;
	/* 0x004 */ struct CSkyLayer_t* m_pNext;
	/* 0x008 */ int m_Mode;
	/* 0x00C */ struct CROMSkyLayer* m_pROMSkyLayer;
	/* 0x010 */ int16_t m_wActive;
    /* 0x012 */ int16_t _pad0;
	/* 0x014 */ void* rpTextureSet;
	/* 0x018 */ uint32_t TextureSetSize;
	/* 0x01C */ float m_cScrollX;
	/* 0x020 */ float m_cScrollZ;
	/* 0x024 */ int _pad1;
	/* 0x028 */ Vtx fv[2][5][3];
	/* 0x208 */ float m_Alpha;
	/* 0x20C */ float m_cFrame;
	/* 0x210 */ float m_Height;
	/* 0x214 */ float m_Speed;
	/* 0x218 */ float m_Tile;
	/* 0x21C */ float m_HeightOffset;
	/* 0x220 */ float m_Opacity;
	/* 0x224 */ int _pad2;
} CSkyLayer; /* sizeof = 0x228 */
#endif

#endif

