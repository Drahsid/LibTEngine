#ifndef CONSCREEN_TYPE_H
#define CONSCREEN_TYPE_H

#include <inttypes.h>
#include "COverlay.h"

#ifdef GAME_TUROK3
struct COnScreen;
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x000 */ COverlay m_BossOverlay;
    /* 0x03C */ char* m_pBossName;
    /* 0x040 */ struct CGameObjectInstance* m_pBoss;
    /* 0x044 */ int m_BossPercent;
    /* 0x048 */ COverlay m_BossOverlay2;
    /* 0x084 */ char* m_pBossName2;
    /* 0x088 */ struct CGameObjectInstance* m_pBoss2;
    /* 0x08C */ int m_BossPercent2;
    /* 0x090 */ struct CMemEntry* m_pmeTinyFont;
    /* 0x094 */ struct CMemEntry* m_pmeSmallFont;
    /* 0x098 */ struct CMemEntry* m_pmeNormalFont;
    /* 0x09C */ struct CMemEntry* m_pmeKanjiFont;
    /* 0x0A0 */ int m_TopR;
    /* 0x0A4 */ int m_TopG;
    /* 0x0A8 */ int m_TopB;
    /* 0x0AC */ int m_BottomR;
    /* 0x0B0 */ int m_BottomG;
    /* 0x0B4 */ int m_BottomB;
    /* 0x0B8 */ float m_FontXScale;
    /* 0x0BC */ float m_FontYScale;
    /* 0x0C0 */ int m_ShadowXOff;
    /* 0x0C4 */ int m_ShadowYOff;
    /* 0x0C8 */ uint8_t m_CharacterSmallLookUpPos[256];
    ///* 0x1C8 */ uint8_t m_CharacterNormalLookUpPos[256]; TODO: Investigate why these members are inconsistent? Perhaps it is region specific
} COnScreen; /* sizeof = 0x1C8 (0x2C8) */
#endif

#endif

