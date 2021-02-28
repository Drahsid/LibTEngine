#ifndef CCAMERATEXT_TYPE_H
#define CCAMERATEXT_TYPE_H

#ifdef GAME_TUROK3
struct CCameraText;
#endif

#ifdef GAME_TUROK2
typedef struct CCameraText_t {
    /* 0x00 */ struct CCameraText_t* m_pLast;
    /* 0x04 */ struct CCameraText_t* m_pNext;
    /* 0x08 */ float m_Time;
    /* 0x0C */ float m_DisplayTime;
    /* 0x10 */ float m_Scale;
    /* 0x14 */ int m_nMode;
    /* 0x18 */ int m_nAlpha;
    /* 0x1C */ int m_nId;
    /* 0x20 */ int m_bSmall;
    /* 0x24 */ char* m_pString;
    /* 0x28 */ float m_ModeTime;
    /* 0x2C */ float m_ModeDuration;
    /* 0x30 */ float m_PositionX;
    /* 0x34 */ float m_PositionY;
    /* 0x38 */ float m_ScaleX;
    /* 0x3C */ float m_ScaleY;
} CCameraText; /* sizeof = 0x40 */
#endif

#endif

