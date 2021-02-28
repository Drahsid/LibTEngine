#ifndef CGAMESTATUS_TYPE_H
#define CGAMESTATUS_TYPE_H

#ifdef GAME_TUROK3
struct CGameStatus;
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x00 */ float m_GameTimeFifteenth;
    /* 0x04 */ float m_GameTimeSeconds;
    /* 0x08 */ float m_GameTimeMinutes;
    /* 0x0C */ float m_GameTimeHours;
    /* 0x10 */ float m_GameOverTimer;
    /* 0x14 */ float m_DeathmatchTimer;
    /* 0x18 */ int m_DeathmatchKillLimit;
    /* 0x1C */ int m_bDeathmatchFinished;
    /* 0x20 */ int m_bDeathmatchDone;
    /* 0x24 */ int m_bDeathmatchTeamPlay;
    /* 0x28 */ int m_bDeathmatchTeamPlayEnded;
    /* 0x2C */ int m_nDeathmatchBlueScore;
    /* 0x30 */ int m_nDeathmatchRedScore;
    /* 0x34 */ int m_bFragTagOn;
    /* 0x38 */ int m_FragTagPlayerPos;
    /* 0x3C */ int m_FragTagPlayerChosen;
    /* 0x40 */ int m_FragTagMode;
    /* 0x44 */ int m_bEnteredEndGameCinema;
    /* 0x48 */ int m_bCreditsSeenOnce;
} CGameStatus; /* sizeof= 0x4C */
#endif

#endif

