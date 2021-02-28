#ifndef CACTIVELINK_TYPE_H
#define CACTIVELINK_TYPE_H

#ifdef GAME_TUROK3
typedef struct CActiveLink_t {
	/* 0x00 */ struct CActiveLink_t* m_pPrev;
	/* 0x04 */ struct CActiveLink_t* m_pNext;
	/* 0x08 */ struct CROMLink* m_pLink;
	/* 0x0C */ float m_UserValue;
    /* 0x10 */ int unk_0x10;
} CActiveLink; /* sizeof = 0x14 */
#endif

#ifdef GAME_TUROK2
typedef struct CActiveLink_t {
	/* 0x00 */ struct CActiveLink_t* m_pPrev;
	/* 0x04 */ struct CActiveLink_t* m_pNext;
	/* 0x08 */ struct CROMLink* m_pLink;
	/* 0x0C */ float m_UserValue;
} CActiveLink; /* sizeof = 0x10 */
#endif

#endif

