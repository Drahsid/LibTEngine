#ifndef CPLAYERLOADSAVEDATA_TYPE_H
#define CPLAYERLOADSAVEDATA_TYPE_H

#include <inttypes.h>
#include "CAmmo.h"
#include "CWeapon.h"

#ifdef GAME_TUROK3
struct CPlayerLoadSaveData;
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x000 */ int m_nDeathmatchCharacter;
    /* 0x004 */ int m_Health;
    /* 0x008 */ int16_t m_LifeForce;
    /* 0x00A */ int16_t m_Lives;
    /* 0x00C */ uint8_t m_SpecialPickupCount[1024];
    /* 0x40C */ int m_CheckPointWarpID;
    /* 0x410 */ int m_SavePointWarpID;
    /* 0x414 */ CAmmo m_AmmoList[31];
    /* 0x452 */ CWeapon m_WeaponList[35];
    /* 0x475 */ uint8_t _pad0;
    /* 0x476 */ int16_t m_CurrentWeapon;
    /* 0x478 */ int16_t m_LastWeapon[3];
    /* 0x47E */ uint8_t _pad1[2];
    /* 0x480 */ int m_AdonAmmoFlagHelped[6];
    /* 0x498 */ int m_AdonHealthFlagHelped[6];
    /* 0x4B0 */ int m_bLevel1TotemFlags;
    /* 0x4B4 */ int m_bLevel2TotemFlags;
    /* 0x4B8 */ int m_bLevel3TotemFlags;
    /* 0x4BC */ int m_bLevel4TotemFlags;
    /* 0x4C0 */ int m_bLevel5TotemFlags;
    /* 0x4C4 */ int m_bBlindBossComplete;
    /* 0x4C8 */ int m_bQueenBossComplete;
    /* 0x4CC */ int m_bMotherBossComplete;
    /* 0x4D0 */ int m_bPrimagenBossComplete;
    /* 0x4D4 */ uint32_t m_LevelIntroPlayedFlags;
    /* 0x4D8 */ uint32_t m_dwLevelFirstTimeFlags;
    /* 0x4DC */ uint32_t m_dwLevelMissionObjFlags;
    /* 0x4E0 */ uint8_t m_NukePartLevelFlags[6];
    /* 0x4E6 */ uint8_t m_KeySet6LevelFlags[6];
} CPlayerLoadSaveData; /* sizeof = 0x4EC */
#endif

#endif

