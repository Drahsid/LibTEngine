#ifndef CPLAYER_H
#define CPLAYER_H

#include <min.h>
#include "CGameObjectInstance.h"
#include "COptions.h"
#include "CQuaternion.h"
#include "CCamera.h"


enum WeaponId {
    TOMAHAWK            = 0,
    RAZORWIND           = 1,
    BLADE               = 2,
    RAZORWIND2          = 3,
    BOW                 = 5,
    STORMBOW            = 6,
    TEKBOW              = 7,
    PISTOL              = 8,
    MAG60               = 9,
    SILENCEDPISTOL      = 10,
    ASSAULTRIFLE        = 11,
    FIRESTORMCANON      = 12,
    SNIPERRIFLE         = 13,
    SHOTGUN             = 14,
    FIRESWARM           = 15,
    SHREDDER            = 16,
    VAMPIRE             = 17,
    GRENADELAUNCHER     = 18,
    RPG                 = 19,
    NAPALMCANON         = 20,
    CEREBRALBORE        = 21,
    CEREBRALBURST       = 22,
    CEREBRALPROCESSOR   = 23,
    PSG                 = 24,
    ENERGYGRAPPLE       = 25
};

// I think this is actually supposed to be a bitfield with different flag defines
enum CrossHairMode {
    NO_CROSSHAIR = 0,
    BORE_WEAPON = 710,
    BORE_WEAPON_FLASH = 711,
    DEFAULT = 730
};

// I think this is actually supposed to be a bitfield with different flag defines
enum CrossHairSightIcon {
    NOT_BORE = -1,
    BORE_WEAPON = 810,
    BORE_WEAPON_FLASH = 811,
};


typedef struct
{
    /* 0x000 */ CGameObjectInstance m_CharacterActor;
    /* 0x368 */ CGameObjectInstance m_WeaponActor;

    /* 0x6D0 */ BOOL m_bActive;
    /* 0x6D4 */ int m_nController;
    /* 0x6D8 */ COptions* m_pOptions;
    /* 0x6DC */ CCamera* m_pCamera;
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
    /* 0xD70 */ BOOL m_bOnGround; // == 4 when on ground
    /* 0xD74 */ float m_BurstSpeed; // Relative forward 'burst' speed
    /* 0xD78 */ float m_BurstSideSpeed; // Relative horizontal 'burst' speed
    /* 0xD7C */ float m_BurstTimer; // Decreases to 0 while moving
    /* 0xD80 */ float m_HandSide; // Used for climbing, alternates signs
    /* 0xD84 */ float m_TimeOffGround;
    /* 0xD88 */ CVector3 m_vDesiredPos;
    /* 0xD94 */ CVector3 m_vDesiredPos2; // Copy of m_vDesiredPos
    /* 0xDA0 */ int unk_0xDB0[9];
    /* 0xDC4 */ float m_DuckOffset; // Current negative ducking offset
    /* 0xDC8 */ BOOL m_bDuckMode; // TRUE while ducking
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
    /* 0xF10 */ CGameObjectInstance* m_pCrossHairTarget; // Handle to target instance for bore weapons
    /* 0xF14 */ int m_SightIcon;
    /* 0xF18 */ int m_SightIconFrame;
    /* 0xF1C */ CVector3 m_vCrossHairPos; // World-to-screen position for bore crosshair
    /* 0xF28 */ CVector3 m_vCrossHairVel; // Velocity used by bore crosshair
    /* 0xF34 */ int unk_0xF34[4];
    /* 0xF44 */ BOOL m_SniperMode; // Zoom mode
    /* 0xF48 */ BOOL unk_HasTarget; // Has target
    /* 0xF4C */ int unk_0xF4C[2];
    /* 0xF54 */ float m_ZoomBlend; // Current zoom blend
    /* 0xF58 */ float m_TargetZoomBlend; // Target zoom blend

    // There is probably more, needs more investigation
} CPlayer; /* sizeof =  TODO */

#endif

