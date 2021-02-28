#ifndef COPTIONS_TYPE_H
#define COPTIONS_TYPE_H

#include <inttypes.h>
#include "CPlayerOptions.h"

#ifdef GAME_TUROK3
// TODO: merge mp structs into correct CPlayerOptions struct
typedef struct {
    /* 0x000 */ int unk_0x000[2];
    /* 0x008 */ char m_CharacterName[12];
    /* 0x014 */ int unk_0x014[62];
    /* 0x10C */ CMPPlayerOptions m_Player0MPOptions;
    /* 0x214 */ CMPPlayerOptions m_Player1MPOptions;
    /* 0x31C */ CMPPlayerOptions m_Player2MPOptions;
    /* 0x424 */ CMPPlayerOptions m_Player3MPOptions;
    /* 0x528 */ CPlayerControlOptions m_Player0ControlOptions;
    /* 0x530 */ CPlayerControlOptions m_Player1ControlOptions;
    /* 0x538 */ CPlayerControlOptions m_Player2ControlOptions;
    /* 0x540 */ CPlayerControlOptions m_Player3ControlOptions;
    /* 0x548 */ int unk_0x548[9];
    /* 0x56C */ uint8_t unk_0x56C[3];
    /* 0x56F */ uint8_t m_bDraw;
    /* 0x570 */ int unk_0x570[3];
    /* 0x57C */ float m_Time;
    /* 0x580 */ int unk_0x580;
    /* 0x584 */ uint8_t unk_0x584[3];
    /* 0x587 */ uint8_t m_RenderResetMode;
    /* 0x588 */ int unk_0x588[2];
    /* 0x590 */ float m_Brightness;
    /* 0x594 */ float m_Volume;
    /* 0x598 */ int unk_0x598;
    /* 0x59C */ uint8_t unk_0x59C[3];
    /* 0x59F */ uint8_t m_IntroResetMode;
    /* 0x5A0 */ int unk_0x5A0[14];
    /* 0x5D8 */ int m_nLagTimer;
    /* 0x5DC */ int unk_0x5DC[44];
    // Probably is more
} COptions; /* sizeof = TODO */

enum {
    DIFFICULTY_EASY = 0,
    DIFFICULTY_MEDIUM,
    DIFFICULTY_HARD,
    DIFFICULTY_OBLIVION,
    DIFFICULTY_COUNT
};

enum {
    GAMEMODE_SINGLE_PLAYER = 0,
    GAMEMODE_BLOODLUST,
    GAMEMODE_CAPTURE_THE_FLAG,
    GAMEMODE_LAST_STAND,
    GAMEMODE_GOLDEN_ARROW,
    GAMEMODE_MONKEY_TAG,
    GAMEMODE_ARSENAL_OF_WAR,
    GAMEMODE_COLOR_TAG,
    GAMEMODE_WEAPON_MASTER,
    GAMEMODE_COUNT
};
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x000 */ uint32_t m_dwCheatFlags;
    /* 0x004 */ uint32_t m_dwCheatEnabledFlags;
    /* 0x008 */ uint32_t m_Difficulty;
    /* 0x00C */ uint32_t m_LightingGamma;
    /* 0x010 */ uint16_t m_RealOpacity;
    /* 0x012 */ uint8_t m_Opacity;
    /* 0x013 */ uint8_t m_bStereo;
    /* 0x014 */ uint8_t m_MusicVolume;
    /* 0x015 */ uint8_t m_SfxVolume;
    /* 0x016 */ uint8_t m_SpeechVolume;
    /* 0x017 */ uint8_t m_Blood;
    /* 0x018 */ uint8_t m_bDebug;
    /* 0x019 */ uint8_t m_bMultiPlayer;
    /* 0x01A */ uint8_t m_MaxPlayers;
    /* 0x01B */ uint8_t m_TwoPlayerScreenPref;
    /* 0x01C */ float m_MultiplayerSpeedScaler;
    /* 0x020 */ int8_t m_BloodLustTimedGame;
    /* 0x021 */ int8_t m_BloodLustFragLimit;
    /* 0x022 */ int8_t m_BloodLustLevel;
    /* 0x023 */ int8_t m_BloodLustLevelTextureSet;
    /* 0x024 */ uint8_t m_bBloodLustCrosshairs;
    /* 0x025 */ int8_t m_FragTagTimedGame;
    /* 0x026 */ int8_t m_FragTagTagLimit;
    /* 0x027 */ int8_t m_FragTagLevel;
    /* 0x028 */ int8_t m_FragTagLevelTextureSet;
    /* 0x029 */ uint8_t m_bFragTagCrosshairs;
    /* 0x02A */ int8_t m_TeamBloodTimedGame;
    /* 0x02B */ int8_t m_TeamBloodFragLimit;
    /* 0x02C */ int8_t m_TeamBloodLevel;
    /* 0x02D */ int8_t m_TeamBloodLevelTextureSet;
    /* 0x02E */ uint8_t m_bTeamBloodCrosshairs;
    /* 0x02F */ uint8_t _pad0;
    /* 0x030 */ uint8_t m_MultiWeapon[10];
    /* 0x03A */ uint8_t _pad1;
    /* 0x03B */ uint8_t _pad2;
    /* 0x03C */ int8_t m_SingleTrainingLevel;
    /* 0x03D */ int8_t m_SingleTrainingNoOfLaps;
    /* 0x03E */ int8_t m_MultiTrainingLevel;
    /* 0x03F */ int8_t m_MultiTrainingNoOfLaps;
    /* 0x040 */ CPlayerOptions m_SinglePlayerOptions;
    /* 0x080 */ CPlayerOptions m_MultiPlayerOptions[4];
    /* 0x180 */ uint8_t m_Resolution;
    /* 0x181 */ uint8_t m_Language;
    /* 0x182 */ uint16_t _pad3;
} COptions; /* sizeof = 0x184 */

enum {
    MULTI_WEAPON_CROSSBOW = 0,
    MULTI_WEAPON_CHARGE_DART,
    MULTI_WEAPON_FIRESTORM,
    MULTI_WEAPON_SHREDDER,
    MULTI_WEAPON_PLASMA_RIFLE,
    MULTI_WEAPON_CEREBRAL_BORE,
    MULTI_WEAPON_GRENADE_LAUNCHER,
    MULTI_WEAPON_SCORPION_LAUNCHER,
    MULTI_WEAPON_UW_SPEAR_GUN,
    MULTI_WEAPON_UW_TORPEDO_LAUNCHER,
    MULTI_WEAPON_COUNT
};
#endif




#endif