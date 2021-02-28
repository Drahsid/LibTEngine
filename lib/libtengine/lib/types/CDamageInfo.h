#ifndef CDAMAGEINFO_TYPE_H
#define CDAMAGEINFO_TYPE_H

#ifdef GAME_TUROK3
struct CDamageInfo;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ struct CInstanceHeader* m_pOrigin;
	/* 0x04 */ int m_Hits;
	/* 0x08 */ float m_Radius;
	/* 0x0C */ int m_dwAIDamageFlags;
	/* 0x10 */ struct CROMNode* m_pNode;
} CDamageInfo; /* sizeof = 0x14 */
#endif

#endif

