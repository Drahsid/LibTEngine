#ifndef CPLAYER_TYPE_H
#define CPLAYER_TYPE_H

#include <inttypes.h>
#include "CGameObjectInstance.h"
#include "CPlayerLoadSaveData.h"
#include "CPlayerContState.h"
#include "CWeaponInfo.h"
#include "CPlayerOverlay.h"
#include "CBarrel.h"
#include "COverlay.h"
#include "CVector3.h"
#include "CQuaternion.h"

#ifdef GAME_TUROK3
typedef struct {
    /* 0x000 */ CGameObjectInstance m_CharacterActor;
    /* 0x368 */ CGameObjectInstance m_WeaponActor;

    /* 0x6D0 */ int m_bActive;
    /* 0x6D4 */ int m_nController;
    /* 0x6D8 */ struct COptions* m_pOptions;
    /* 0x6DC */ struct CCamera* m_pCamera;
    /* 0x6E0 */ int unk_0x6E0;
    /* 0x6E4 */ int unk_0x6E4;
    /* 0x6E8 */ int m_Health; // 24:8 Health:SubHealth (16777215, 255 fractional)
    /* 0x6EC */ int16_t m_LifeForce;
    /* 0x6EE */ uint16_t m_bDrawWeapon;
    /* 0x6F0 */ int16_t m_MaxHealth; // Max health is 16-bit, why didn't they just 16:16 health and subhealth?
    /* 0x6F4 */ CVector3 m_vInitialPosition;
    /* 0x700 */ int unk_0x700[372];

    /* Given the abundance of what seems to be allocable memory between the data,
    I am inclined to believe that what is below is a gamemode actor or something
    I have no other evidence for this at the moment though */

    /* 0xCD0 */ int16_t unk_0xCD0;
    /* 0xCD2 */ int16_t m_Mode;
    /* 0xCD4 */ int16_t unk_0xCD4;
    /* 0xCD6 */ int16_t m_ModeBefore;
    /* 0xCD8 */ int16_t unk_0xCD8;
    /* 0xCDA */ int16_t m_ModeLastFrame;
    /* 0xCDC */ float m_ModeTime;
    /* 0xCE0 */ uint32_t m_ModeLastFrameFlags;
    /* 0xCE4 */ uint32_t m_ModeBeforeFlags;
    /* 0xCE8 */ uint32_t m_ModeFlags;
    /* 0xCEC */ int unk_0xCEC;
    /* 0xCF0 */ float m_FrameIncrementScaled; // Scaled timestep. Effects physics.
    /* 0xCF4 */ int unk_0xCF4[13];
    /* 0xD28 */ float m_ScaledJoyX_0;
    /* 0xD2C */ float m_ScaledJoyY_0;
    /* 0xD30 */ float m_MoveX_0;
    /* 0xD34 */ float m_MoveY_0;
    /* 0xD38 */ void* m_pControllerInfo; // I think? It has some controller data, but also some position data TODO: Investigate
    /* 0xD3C */ float m_ScaledJoyX_1;
    /* 0xD40 */ float m_ScaledJoyY_1;
    /* 0xD44 */ float m_MoveX_1;
    /* 0xD48 */ float m_MoveY_1;
    /* 0xD4C */ int m_Controller;
    /* 0xD50 */ int m_Controller_Pressed;
    /* 0xD54 */ int m_Controller_unk_0;
    /* 0xD58 */ int m_Controller_unk_1;
    /* 0xD5C */ int unk_0xD5C;
    /* 0xD60 */ float m_Speed; // Realtive forward speed
    /* 0xD64 */ float m_SideSpeed; // Relative horz speed
    /* 0xD68 */ float m_TotalSpeed;
    /* 0xD6C */ float m_YVelLastFrame;
    /* 0xD70 */ int m_bOnGround; // == 4 when on ground
    /* 0xD74 */ float m_BurstSpeed; // Relative forward 'burst' speed
    /* 0xD78 */ float m_BurstSideSpeed; // Relative horizontal 'burst' speed
    /* 0xD7C */ float m_BurstTimer; // Decreases to 0 while moving
    /* 0xD80 */ float m_HandSide; // Used for climbing, alternates signs
    /* 0xD84 */ float m_TimeOffGround;
    /* 0xD88 */ CVector3 m_vDesiredPos;
    /* 0xD94 */ CVector3 m_vDesiredPos2; // Copy of m_vDesiredPos
    /* 0xDA0 */ int unk_0xDB0[9];
    /* 0xDC4 */ float m_DuckOffset; // Current negative ducking offset
    /* 0xDC8 */ int m_bDuckMode; // TRUE while ducking
    /* 0xDCC */ float m_YOffset; // Offset to view on Y axis
    /* 0xDD0 */ CVector3 m_vHeadRotOffset; // Rotation offset of character view in radians
    /* 0xDDC */ CVector3 m_vHeadWobbleRotOffset; // Rotation offset of character view in radians, used for effects
    /* 0xDE8 */ CVector3 m_vEyeOffset; // Filtered Offset from bottom of instance?
    /* 0xDF4 */ CQuaternion m_qGround;
    /* 0xE04 */ int unk_0xE04;
    /* 0xE08 */ float m_BreathAmp; // Breathing amplitude, resets shortly after stopped
    /* 0xE0C */ int unk_0xE0C[4];
    /* 0xE1C */ int16_t unk_0xE1C;
    /* 0xE1E */ int16_t m_RequestedWeapon; // Weapon requested to be held. See: TODO
    /* 0xE20 */ int unk_0xE20;
    /* 0xE24 */ CVector3 m_vWeaponFirePos; // World particle position for weapon
    /* 0xE30 */ int unk_0xE30[49];
    /* 0xEF4 */ int m_CrossHairMode; // Current crosshair mode. See: TODO
    /* 0xEF8 */ CVector3 m_vOuterCrossHairPos; // World-to-screen position for outer bore crosshair
    /* 0xF04 */ CVector3 m_vOuterCrossHairVel; // Velocity used by outer bore crosshair
    /* 0xF10 */ struct CGameObjectInstance* m_pCrossHairTarget; // Handle to target instance for bore weapons
    /* 0xF14 */ int m_SightIcon;
    /* 0xF18 */ int m_SightIconFrame;
    /* 0xF1C */ CVector3 m_vCrossHairPos; // World-to-screen position for bore crosshair
    /* 0xF28 */ CVector3 m_vCrossHairVel; // Velocity used by bore crosshair
    /* 0xF34 */ int unk_0xF34[4];
    /* 0xF44 */ int m_SniperMode; // Zoom mode
    /* 0xF48 */ int unk_HasTarget; // Has target
    /* 0xF4C */ int unk_0xF4C[2];
    /* 0xF54 */ float m_ZoomBlend; // Current zoom blend
    /* 0xF58 */ float m_TargetZoomBlend; // Target zoom blend
    /* 0xF5C */ int unk_0xF5C[424];
} CPlayer; /* sizeof =  0x15F8 */


enum {
    WEAPONID_TOMAHAWK            = 0,
    WEAPONID_RAZORWIND           = 1,
    WEAPONID_BLADE               = 2,
    WEAPONID_RAZORWIND2          = 3,
    WEAPONID_BOW                 = 5,
    WEAPONID_STORMBOW            = 6,
    WEAPONID_TEKBOW              = 7,
    WEAPONID_PISTOL              = 8,
    WEAPONID_MAG60               = 9,
    WEAPONID_SILENCEDPISTOL      = 10,
    WEAPONID_ASSAULTRIFLE        = 11,
    WEAPONID_FIRESTORMCANON      = 12,
    WEAPONID_SNIPERRIFLE         = 13,
    WEAPONID_SHOTGUN             = 14,
    WEAPONID_FIRESWARM           = 15,
    WEAPONID_SHREDDER            = 16,
    WEAPONID_VAMPIRE             = 17,
    WEAPONID_GRENADELAUNCHER     = 18,
    WEAPONID_RPG                 = 19,
    WEAPONID_NAPALMCANON         = 20,
    WEAPONID_CEREBRALBORE        = 21,
    WEAPONID_CEREBRALBURST       = 22,
    WEAPONID_CEREBRALPROCESSOR   = 23,
    WEAPONID_PSG                 = 24,
    WEAPONID_ENERGYGRAPPLE       = 25
};

// I think this is actually supposed to be a bitfield with different flag defines
enum {
    CROSSHAIRMODE_NO_CROSSHAIR = 0,
    CROSSHAIRMODE_BORE_WEAPON = 710,
    CROSSHAIRMODE_BORE_WEAPON_FLASH = 711,
    CROSSHAIRMODE_DEFAULT = 730
};

// I think this is actually supposed to be a bitfield with different flag defines
enum {
    CHROSSHAIRICON_NOT_BORE = -1,
    CHROSSHAIRICON_BORE_WEAPON = 810,
    CHROSSHAIRICON_BORE_WEAPON_FLASH = 811,
};
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x0000 */ CGameObjectInstance m_CharacterActor;
    /* 0x0288 */ CGameObjectInstance m_WeaponActor;
    /* 0x0510 */ int m_bActive;
    /* 0x0514 */ int m_nController;
    /* 0x0518 */ struct CPlayerOptions* m_pOptions;
    /* 0x051C */ struct CCamera* m_pCamera;
    /* 0x0520 */ CPlayerLoadSaveData m_Data;
    /* 0x0A0C */ int16_t m_Mode;
    /* 0x0A0E */ int16_t m_ModeBefore;
    /* 0x0A10 */ int16_t m_ModeLastFrame;
    /* 0x0A12 */ int16_t _pad0;
    /* 0x0A14 */ float m_ModeTime;
    /* 0x0A18 */ uint32_t m_ModeLastFrameFlags;
    /* 0x0A1C */ uint32_t m_ModeBeforeFlags;
    /* 0x0A20 */ uint32_t m_ModeFlags;
    /* 0x0A24 */ int m_InSun;
    /* 0x0A28 */ float m_FrameIncrementScaled;
    /* 0x0A30 */ float m_InvincibilityTime;
    /* 0x0A34 */ float m_PlaneWalkerTime;
    /* 0x0A38 */ float m_FlashlightTime;
    /* 0x0A3C */ struct CDLight* m_pDLFlashlight1;
    /* 0x0A40 */ struct CDLight* m_pDLFlashlight2;
    /* 0x0A44 */ struct CDLight* m_pDLDarkCityLight;
    /* 0x0A48 */ CPlayerContState m_ContState;
    /* 0x0A80 */ float m_Speed;
    /* 0x0A84 */ float m_SideSpeed;
    /* 0x0A88 */ float m_TotalSpeed;
    /* 0x0A8C */ float m_YVelLastFrame;
    /* 0x0A90 */ int m_bOnGround;
    /* 0x0A94 */ float m_BurstSpeed;
    /* 0x0A98 */ float m_BurstSideSpeed;
    /* 0x0A9C */ float m_BurstTimer;
    /* 0x0AA0 */ float m_HandSide;
    /* 0x0AA4 */ float m_TimeOffGround;
    /* 0x0AA8 */ CVector3 m_vDesiredPos;
    /* 0x0AB4 */ float m_FleeTime;
    /* 0x0AB8 */ float m_JumpAngle;
    /* 0x0ABC */ float m_StartJumpAngle;
    /* 0x0AC0 */ float m_DesiredJumpAngle;
    /* 0x0AC4 */ float m_JumpU;
    /* 0x0AC8 */ float m_DuckOffset;
    /* 0x0ACC */ int m_bDuckMode;
    /* 0x0AD0 */ CVector3 m_vHeadRotOffset;
    /* 0x0ADC */ CVector3 m_vHeadWobbleRotOffset;
    /* 0x0AE8 */ CVector3 m_vEyeOffset;
    /* 0x0AF4 */ CQuaternion m_qGround;
    /* 0x0B04 */ float m_BreathAmp;
    /* 0x0B08 */ float m_BreathSpeed;
    /* 0x0B0C */ CQuaternion PreviousCameraQuatern;
    /* 0x0B1C */ int16_t m_RequestedWeapon;
    /* 0x0B1E */ int16_t _pad1;
    /* 0x0B20 */ CVector3 m_vWeaponFirePos;
    /* 0x0B2C */ float m_ActualCameraVertEyeOffset;
    /* 0x0B30 */ float m_CameraMovementScaler;
    /* 0x0B34 */ int m_CrossHairMode;
    /* 0x0B38 */ float m_CrossHairTimer;
    /* 0x0B3C */ float m_CrossHairAlpha;
    /* 0x0B40 */ struct CGameObjectInstance* m_pCrossHairTarget;
    /* 0x0B44 */ int m_CrossHairIcon;
    /* 0x0B48 */ CVector3 m_vCrossHairPos;
    /* 0x0B54 */ CVector3 m_vCrossHairVel;
    /* 0x0B60 */ struct CGameObjectInstance* m_pSightTarget;
    /* 0x0B64 */ int m_SightIcon;
    /* 0x0B68 */ float m_SightIconFrame;
    /* 0x0B6C */ CVector3 m_vSightPos;
    /* 0x0B78 */ CVector3 m_vSightVel;
    /* 0x0B84 */ CQuaternion m_qAutoAim;
    /* 0x0B94 */ int m_SniperMode;
    /* 0x0B98 */ float m_ZoomBlend;
    /* 0x0B9C */ float m_TargetZoomBlend;
    /* 0x0BA0 */ float m_JumpPadCurrentTime;
    /* 0x0BA4 */ float m_JumpPadAngleDirection;
    /* 0x0BA8 */ struct CROMRegionSet* m_pJumpPadRegionSet;
    /* 0x0BAC */ CVector3 m_vJumpPadStart;
    /* 0x0BB8 */ struct CGameObjectInstance* m_pOnEnemy;
    /* 0x0BBC */ int m_OnEnemyObjectType;
    /* 0x0BC0 */ CVector3 m_vOnEnemyScale;
    /* 0x0BCC */ CVector3 m_vOnEnemyOffset;
    /* 0x0BD8 */ CVector3 m_vOnEnemyOriginalScale;
    /* 0x0BE4 */ float m_RideEnemyTime;
    /* 0x0BE8 */ float m_OnEnemyStompTime;
    /* 0x0BEC */ float m_Oxygen;
    /* 0x0BF0 */ float m_OutOfAirSfxTimer;
    /* 0x0BF4 */ int m_bOxygenOut;
    /* 0x0BF8 */ int m_DoDeathCin;
    /* 0x0BFC */ int m_nDeathmatchTeamSelected;
    /* 0x0C00 */ int m_bEnteringDeathmatch;
    /* 0x0C04 */ float m_WaitDeathmatchTimer;
    /* 0x0C08 */ int m_bLevelNotCompleteExit;
    /* 0x0C0C */ int m_bLevelStarting;
    /* 0x0C10 */ int m_CharAnim;
    /* 0x0C14 */ int m_LastCharAnim;
    /* 0x0C18 */ CPlayerOverlay m_Overlay;
    /* 0x0CD0 */ CBarrel m_Barrel;
    /* 0x1064 */ COverlay m_AmmoOverlay;
    /* 0x10A0 */ COverlay m_HealthOverlay;
    /* 0x10DC */ COverlay m_LivesOverlay;
    /* 0x1118 */ COverlay m_TokensOverlay;
    /* 0x1154 */ COverlay m_WeaponOverlay;
    /* 0x1190 */ COverlay m_AirOverlay;
    /* 0x11CC */ COverlay m_BossOverlay;
    /* 0x1208 */ COverlay m_TotalKillsOverlay;
    /* 0x1244 */ COverlay m_TotalTagsOverlay;
    /* 0x1280 */ struct CGameRumble_t* m_pRumble;
    /* 0x1284 */ int m_bHeadMovementDisabled;
    /* 0x1288 */ struct CLoopingSoundData* m_pLoopingSound_WeaponBackground;
    /* 0x128C */ struct CLoopingSoundData* m_pLoopingSound_WeaponFiring;
    /* 0x1290 */ float m_SfxTimer;
    /* 0x1294 */ float weapon_particle_damage_scaler;
    /* 0x1298 */ float m_ShockedTimer;
    /* 0x129C */ int m_LastFrameAllowedWeaponType;
    /* 0x12A0 */ int m_CurrentAllowedWeaponType;
    /* 0x12A4 */ int m_UseLowerAmmo;
    /* 0x12A8 */ struct CInstanceHeader* m_pHitMeWithCBore;
    /* 0x12AC */ struct CInstanceHeader* m_pHitMeWithChargeDart;
    /* 0x12B0 */ int m_nNumArrowsStuckInMe;
    /* 0x12B4 */ int m_nDeathmatchString;
    /* 0x12B8 */ char m_DeathMatchString[4][25];
    /* 0x131C */ struct CPlayer_t* m_pLast;
    /* 0x1320 */ struct CPlayer_t* m_pNext;
} CPlayer; /* sizeof = 0x1324 */

#endif

#endif

