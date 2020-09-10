#ifndef CPLAYEROPTS_H
#define CPLAYEROPTS_H

#include <min.h>

enum GameDifficulty {
    EASY = 0,
    MEDIUM = 1,
    HARD = 2,
    OBLIVION = 3
};

enum GameMode {
    SINGLE_PLAYER = 0,
    BLOODLUST,
    CAPTURE_THE_FLAG,
    LAST_STAND,
    GOLDEN_ARROW,
    MONKEY_TAG,
    ARSENAL_OF_WAR,
    COLOR_TAG,
    WEAPON_MASTER
};

typedef struct {
    /* 0x000 */ uint8_t m_nActiveIndex;
    /* 0x001 */ uint8_t m_bActive;
    /* 0x002 */ uint8_t m_bIsBot;
    /* 0x003 */ uint8_t unk_0x03;
    /* 0x004 */ uint8_t m_nCharacterIndex;
    /* 0x005 */ int8_t m_nHandicap;
    /* 0x006 */ uint16_t unk_0x06;
    /* 0x008 */ uint32_t m_Team;
    /* 0x00C */ int unk_0x18[60];
} CMPPlayerOptions; // sizeof = 0x104

typedef struct {
    /* 0x01 */ uint8_t m_nHorzSpeed;
    /* 0x02 */ uint8_t m_nVertSpeed;
    /* 0x03 */ uint16_t m_ControlStyle;
    /* 0x04 */ uint8_t m_bReverseVert;
    /* 0x05 */ uint8_t m_bLookSpring;
    /* 0x06 */ uint8_t m_bAutoAim;
    /* 0x07 */ uint8_t m_nWeaponWheelSpeed;
} CPlayerControlOptions; /* sizeof = 0x08 */

#endif

