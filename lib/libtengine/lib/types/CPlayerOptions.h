#ifndef CPLAYEROPTS_TYPE_H
#define CPLAYEROPTS_TYPE_H

#include <inttypes.h>

#ifdef GAME_TUROK3
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
    /* 0x00 */ uint8_t m_HorzSpeed;
    /* 0x01 */ uint8_t m_VertSpeed;
    /* 0x02 */ uint16_t m_ControlStyle;
    /* 0x04 */ uint8_t m_bReverseVert;
    /* 0x05 */ uint8_t m_bLookSpring;
    /* 0x06 */ uint8_t m_bAutoAim;
    /* 0x07 */ uint8_t m_nWeaponWheelSpeed;
} CPlayerControlOptions; /* sizeof = 0x08 */

typedef int CPlayerOptions;

#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ uint16_t m_TotalSuicide;
	/* 0x02 */ uint16_t m_TotalDeaths;
	/* 0x04 */ uint16_t m_TotalKills;
	/* 0x06 */ uint16_t m_TotalTags;
	/* 0x08 */ uint16_t m_WhoTaggedMe[4];
	/* 0x10 */ uint16_t m_WhoITagged[4];
	/* 0x18 */ uint16_t m_WhoKilledMe[4];
	/* 0x20 */ uint16_t m_WhoIKilled[4];
	/* 0x28 */ uint8_t m_Active;
	/* 0x29 */ uint8_t m_HorzSpeed;
	/* 0x2A */ uint8_t m_VertSpeed;
	/* 0x2B */ int8_t m_ControlStyle;
	/* 0x2C */ uint8_t m_ControlSide;
	/* 0x2D */ uint8_t m_LookSpring;
	/* 0x2E */ uint8_t m_AutoAim;
	/* 0x2F */ int8_t m_nController;
	/* 0x30 */ int8_t m_nCharacter;
	/* 0x31 */ uint8_t m_WeaponSelect;
	/* 0x32 */ uint8_t m_Handicap;
	/* 0x33 */ uint8_t m_Name[9];
	/* 0x3C */ uint8_t m_StatsChanged;
	/* 0x3D */ uint8_t m_DeathmatchDone;
	/* 0x3E */ uint8_t m_FragTagIsIt;
	/* 0x3F */ uint8_t m_FragTagWasIt;
} CPlayerOptions; /* sizeof = 0x40 */
#endif

#endif

