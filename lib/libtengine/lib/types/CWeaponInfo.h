#ifndef CWEAPONINFO_TYPE_H
#define CWEAPONINFO_TYPE_H

#include <inttypes.h>
#include "CVector3.h"
#include "AIFunc.h"

#ifdef GAME_TUROK3
struct CWeaponInfo;
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x00 */ char** m_ppName;
    /* 0x04 */ uint16_t m_ObjectType;
    /* 0x06 */ uint16_t m_BarrelGraphicSet;
    /* 0x08 */ uint16_t m_OverlayObject;
    /* 0x0A */ uint16_t m_PickupInfoType;
    /* 0x0C */ int16_t m_UpgradeWeapon;
    /* 0x0E */ int16_t m_TrackingCrossHairGraphicSet;
    /* 0x10 */ int16_t m_LockedCrossHairGraphicSet;
    /* 0x12 */ int16_t _pad;
    /* 0x14 */ uint32_t m_Flags;
    /* 0x18 */ float m_MinFireInterval;
    /* 0x1C */ float m_MaxAutoAimAngle;
    /* 0x20 */ struct CWeaponAmmoInfo* m_pAmmoInfo[3];
    /* 0x2C */ CVector3 m_vDisplayOffset;
    /* 0x38 */ float m_ZBuffMinX;
    /* 0x3C */ float m_ZBuffMinY;
    /* 0x40 */ float m_ZBuffMaxX;
    /* 0x44 */ float m_ZBuffMaxY;
    /* 0x48 */ struct CAIModeInfo* m_pModeTable;
    /* 0x4C */ effxFunc m_SpecialEffectsFunc;
    /* 0x50 */ stepFunc m_AdvanceFunc;
} CWeaponInfo; /* sizeof = 0x54 */
#endif

#endif

