#ifndef CINTELLIGENCE_TYPE_H
#define CINTELLIGENCE_TYPE_H

#include <inttypes.h>

#ifdef GAME_TUROK3
typedef struct {
    /* 0x00 */ int unk_0x00[6];
    /* 0x18 */ int m_flags_0;
    /* 0x1C */ uint32_t m_Health;
    /* 0x20 */ uint64_t m_DeathFlags;
} CIntelligenceBase; /* sizeof = 0x28? (Is possibly smaller!) */

typedef struct {
    /* 0x00 */ float m_SpeedScale;
    /* 0x04 */ float m_JumpScale;
    //TODO: Needs more research!!
} CIntelligencePlayer; /* sizeof = TODO */

typedef struct {
    /* 0x00 */ float m_CollisionRadius;
    /* 0x04 */ float m_Scale;
    /* 0x08 */ float m_CollisionHeight;
    /* 0x0C */ float m_unk_Death;
    /* 0x10 */ float m_CollisionOffsetY;
    /* 0x14 */ float unk_0x14;
    /* 0x18 */ float unk_0x18;
    /* 0x1C */ void* unk_0x1C;
    /* 0x20 */ float unk_0x20;
    /* 0x24 */ uint32_t unk_0x24[2];
    /* 0x2C */ float unk_0x2C;
    /* 0x30 */ float m_SightRadius; // Unsure
    /* 0x34 */ float m_MeleeRadius; // Very Unsure
    /* 0x38 */ float unk_0x38;
    /* 0x3C */ float unk_0x3C;
    /* 0x40 */ float m_AggressionRadius;
    /* 0x48 */ float unk_0x48;
    /* 0x4C */ float unk_0x4C;
    /* 0x50 */ uint64_t m_Flags_1;
    /* 0x58 */ uint32_t m_Flags_2;
    /* 0x5C */ uint64_t unk_0x5C;
    /* 0x64 */ uint32_t unk_0x64[10];
    /* 0x8C */
} CIntelligenceEnemy; /* sizeof = TODO (Probably 0x88?) */

typedef struct {
    /* 0x00 */ CIntelligenceBase base;
    union {
        /* 0x28 */ CIntelligencePlayer player;
        /* 0xB0? */
        /* 0x28 */ CIntelligenceEnemy enemy;
        /* 0xB0? */
    };

    /* 0xB0? */
} CIntelligence; /* sizeof = 0xB0 */

#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ float m_CollisionHeightOffset;
} CIntelligenceStatic; /* sizeof = 0x10 */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ uint32_t m_Health;
	/* 0x08 */ uint32_t m_StartAnim;
	/* 0x0C */ int m_dwDeathFlag1Pickups;
	/* 0x10 */ int m_dwDeathFlag2Pickups;
	/* 0x14 */ float m_CollisionRadius;
	/* 0x18 */ float m_CollisionWallRadius;
	/* 0x1C */ float m_CollisionHeight;
	/* 0x20 */ float m_CollisionDeadHeight;
	/* 0x24 */ float m_CollisionHeightOffset;
	/* 0x28 */ float m_LeashRadius;
	/* 0x2C */ uint8_t m_Aggression;
	/* 0x2D */ uint8_t m_TranqHealth;
	/* 0x2E */ uint16_t m_StartSound;
	/* 0x30 */ uint16_t m_PainSound;
	/* 0x32 */ int16_t _pad;
} CCommonEnemyIntelligence; /* sizeof = 0x34 */

typedef struct {
	/* 0x00 */ CCommonEnemyIntelligence m_Common;
	/* 0x34 */ int m_dwFlags;
	/* 0x38 */ float m_AttackCombatRadius;
	/* 0x3C */ float m_AttackLeapRadius;
	/* 0x40 */ float m_AttackDartRadius;
	/* 0x44 */ float m_AttackProjectileRadius;
	/* 0x48 */ float m_AttackWeaponRadius;
	/* 0x4C */ uint8_t m_GroundBehavior;
	/* 0x4D */ uint8_t m_AirBehavior;
	/* 0x4E */ uint8_t m_UnderwaterBehavior;
	/* 0x4F */ int8_t m_ExtremeDeathModel;
	/* 0x50 */ int8_t m_PfmDeathModel;
	/* 0x51 */ int8_t m_HeadBlownOffDeathModel;
	/* 0x52 */ int8_t m_LeftArmBlownOffDeathModel;
	/* 0x53 */ int8_t m_RightArmBlownOffDeathModel;
	/* 0x54 */ int8_t m_BodyHoleDeathModel;
	/* 0x55 */ int8_t _pad;
	/* 0x56 */ int16_t m_ExtremeDeathAnim;
	/* 0x58 */ int16_t m_PfmDeathAnim;
	/* 0x5A */ int16_t m_HeadBlownOffDeathAnim;
	/* 0x5C */ int16_t m_LeftArmBlownOffDeathAnim;
	/* 0x5E */ int16_t m_RightArmBlownOffDeathAnim;
	/* 0x60 */ int16_t m_BodyHoleDeathAnim;
	/* 0x62 */ int16_t m_wIdleAnimFlags;
	/* 0x64 */ int16_t m_wMoveAnimFlags;
	/* 0x68 */ int16_t m_wPatroleAnimFlags;
	/* 0x6C */ int16_t m_wEvadeAnimFlags;
	/* 0x6E */ int16_t m_wCombatAnimFlags;
	/* 0x70 */ int16_t m_wLeapAnimFlags;
	/* 0x72 */ int16_t m_wDartAnimFlags;
	/* 0x74 */ int16_t m_wProjectileAnimFlags;
	/* 0x76 */ int16_t m_wWeaponAnimFlags;
	/* 0x78 */ int16_t m_wComboEndAnimFlags;
	/* 0x7A */ int16_t m_wNormalDeathAnimFlags;
	/* 0x7C */ int16_t m_wMovingDeathAnimFlags;
	/* 0x7E */ int16_t m_wViolentDeathAnimFlags;
	/* 0x80 */ int16_t m_wExplosiveDeathAnimFlags;
	/* 0x82 */ int16_t m_wAlertAnimFlags;
	/* 0x84 */ int16_t m_wTakeCoverAnimFlags;
	/* 0x86 */ int16_t m_wLeftArmWoundAnimFlags;
	/* 0x88 */ int16_t m_wRightArmWoundAnimFlags;
	/* 0x8A */ int16_t m_wFleeAnimFlags;
} CIntelligenceEnemy; /* sizeof = 0x8C */

typedef struct {
	/* 0x00 */ int m_dwFlags0;
	/* 0x04 */ uint16_t m_CollisionType;
	/* 0x06 */ uint16_t _pad0;
	/* 0x08 */ float m_CollisionRadius;
	/* 0x0C */ float m_CollisionWidth;
	/* 0x10 */ float m_CollisionHeight;
	/* 0x14 */ float m_CollisionLength;
	/* 0x18 */ float m_CollisionXOffset;
	/* 0x1C */ float m_CollisionYOffset;
	/* 0x20 */ float m_CollisionZOffset;
	/* 0x24 */ int m_dwFlags1;
	/* 0x28 */ uint8_t m_Type;
	/* 0x29 */ uint8_t m_MotionStyle;
	/* 0x2A */ uint8_t m_RotationType;
	/* 0x2B */ uint8_t _pad1;
	/* 0x2C */ float m_VertDist;
	/* 0x30 */ float m_HorizDist;
	/* 0x34 */ float m_HorizDir;
	/* 0x38 */ float m_MoveTime;
	/* 0x3C */ float m_Rotation;
	/* 0x40 */ float m_StartOffset;
	/* 0x44 */ float m_HoverAmplitude;
	/* 0x48 */ float m_HoverPeriod;
	/* 0x4C */ float m_GoDelayTime;
	/* 0x50 */ float m_ReturnDelayTime;
	/* 0x54 */ float m_SpecialDelay;
	/* 0x58 */ float m_SpecialSinkDist;
	/* 0x5C */ float m_SpecialSinkTime;
} CIntelligencePlatform; /* sizeof = 0x60 */

typedef struct {
    /* 0x00 */ int m_dwFlags;
    /* 0x04 */ int m_Type;
    /* 0x08 */ int16_t m_FiniteTotal;
    /* 0x0A */ int16_t m_MaxActive;
    /* 0x0C */ float m_IntervalTime1;
    /* 0x10 */ float m_IntervalTime2;
    /* 0x14 */ int16_t m_ObjectIndex;
    /* 0x16 */ int16_t m_VariationIndex;
    /* 0x18 */ float m_ScaleX;
    /* 0x1C */ float m_ScaleY;
    /* 0x20 */ float m_ScaleZ;
    /* 0x24 */ int16_t m_ParticleType;
    /* 0x26 */ int16_t _pad;
} CIntelligenceGenerator; /* sizeof = 0x28 */

typedef struct {
	/* 0x00 */ CCommonEnemyIntelligence m_Common;
	/* 0x34 */ int m_dwFlags;
	/* 0x38 */ int m_GunNode;
	/* 0x3C */ int m_RotNode;
	/* 0x40 */ float m_RotSpeed;
	/* 0x44 */ float m_RotLimit;
	/* 0x48 */ float m_SightRadius;
	/* 0x4C */ float m_SightAngle;
	/* 0x50 */ float m_FireRadius;
	/* 0x54 */ float m_FireAngle;
	/* 0x58 */ float m_VertDist;
	/* 0x5C */ float m_HorizDist;
	/* 0x60 */ float m_HorizDir;
	/* 0x64 */ float m_MoveSpeed;
	/* 0x68 */ float m_StartOffset;
	/* 0x6C */ uint8_t m_TargetVisibleMotionType;
	/* 0x6D */ uint8_t m_TargetNotVisibleMotionType;
	/* 0x6E */ uint8_t _pad0;
    /* 0x6F */ uint8_t _pad1;
} CIntelligenceTurret; /* sizeof = 0x70 */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
} CIntelligenceThrowable; /* sizeof = 0xC */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ float m_OpenDuration;
	/* 0x08 */ int8_t m_OpenDoorEventType;
	/* 0x09 */ int8_t m_CloseDoorEventType;
	/* 0x0A */ uint8_t _pad0;
    /* 0x0B */ uint8_t _pad1;
	/* 0x0C */ float m_AutoOpenRadius;
	/* 0x10 */ float m_AutoCloseRadius;
} CIntelligenceDoor; /* sizeof = 0x14 */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ int16_t _Health;
	/* 0x06 */ int16_t pad;
	/* 0x08 */ float m_CollisionRadius;
	/* 0x0C */ float m_CollisionHeight;
	/* 0x10 */ int m_IdleAnim;
	/* 0x14 */ float m_AutoGoRadius;
	/* 0x18 */ int m_GoAnim;
	/* 0x1C */ int m_GoParticleEffect;
	/* 0x20 */ int m_GoSoundEffect;
	/* 0x24 */ int m_dwGoPickupsFlag1;
	/* 0x28 */ int m_dwGoPickupsFlag2;
	/* 0x2C */ int m_GoDeathAnim;
	/* 0x30 */ int m_GoDeathParticleEffect;
	/* 0x34 */ int m_GoDeathSoundEffect;
	/* 0x38 */ int m_dwGoDeathPickupsFlag1;
	/* 0x3C */ int m_dwGoDeathPickupsFlag2;
	/* 0x40 */ int m_TotemMissionDuration;
	/* 0x44 */ int16_t m_EnemiesAttackingTurok;
	/* 0x46 */ int16_t m_EnemiesToKillToSaveTotem;
} CIntelligenceDestructible; /* sizeof = 0x48 */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ float m_Time;
} CIntelligencePickup; /* sizeof = 0x10 */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ int m_StartAnim;
} CIntelligenceInteractiveAnim; /* sizeof = 0x08 */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ int16_t m_IdleAnim;
	/* 0x0E */ int8_t m_IdleModel;
	/* 0x0F */ int8_t m_IdleTexture;
	/* 0x10 */ float m_AutoGoRadius;
	/* 0x14 */ int16_t m_GoAnim;
	/* 0x16 */ int16_t m_GoPickupNeeded;
	/* 0x18 */ int16_t m_GoPickupNeededText;
	/* 0x1A */ int8_t m_GoModel;
	/* 0x1B */ int8_t m_GoTexture;
} CIntelligenceAction; /* sizeof = 0x1C */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ uint32_t m_StartHealth;
	/* 0x08 */ float m_SpeedScaler;
	/* 0x0C */ float m_JumpScaler;
	/* 0x10 */ float m_HealHealth;
	/* 0x14 */ float m_CollisionRadius;
	/* 0x18 */ float m_CollisionWallRadius;
	/* 0x1C */ float m_CollisionHeight;
	/* 0x20 */ float m_CollisionDeadHeight;
	/* 0x24 */ float m_ScaleX;
    /* 0x28 */ float m_ScaleY;
    /* 0x2C */ float m_ScaleZ;
} CIntelligencePlayer; /* sizeof = 0x30 */

typedef struct {
	/* 0x00 */ int m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ float m_AnimSpeed;
} CIntelligenceMorpher; /* sizeof = 0x10 */

typedef struct {
    /* 0x00 */ int m_nType;
    /* 0x04 */ int m_dwFlags;
    /* 0x08 */ float m_LOD2Dist;
    /* 0x0C */ int16_t m_Id;
    /* 0x0E */ int8_t m_nModel;
    /* 0x0F */ int8_t m_nModelLOD2;
    /* 0x10 */ int8_t m_nShadowModel;
    /* 0x11 */ int8_t m_nShadowModelLOD2;
    /* 0x12 */ int8_t m_nTexture;
    /* 0x13 */ int8_t _pad;
} CIntelligenceBase; /* sizeof = 0x14 */

typedef struct {
    /* 0x00 */ CIntelligenceBase base;
    union {
        /* 0x14 */ CIntelligenceStatic             Static;
        /* 0x24 */
        /* 0x14 */ CIntelligenceEnemy              Enemy;
        /* 0xA0 */
        /* 0x14 */ CIntelligencePlatform           Platform;
        /* 0x74 */
        /* 0x14 */ CIntelligenceGenerator          Generator;
        /* 0x3C */
        /* 0x14 */ CIntelligenceTurret             Turret;
        /* 0x84 */
        /* 0x14 */ CIntelligenceThrowable          Throwable;
        /* 0x20 */
        /* 0x14 */ CIntelligenceDoor               Door;
        /* 0x28 */
        /* 0x14 */ CIntelligenceDestructible       Destructible;
        /* 0x3C */
        /* 0x14 */ CIntelligencePickup             Pickup;
        /* 0x24 */
        /* 0x14 */ CIntelligenceInteractiveAnim    InteractiveAnim;
        /* 0x1C */
        /* 0x14 */ CIntelligenceAction             Action;
        /* 0x30 */
        /* 0x14 */ CIntelligencePlayer             Player;
        /* 0x44 */
        /* 0x14 */ CIntelligenceMorpher            Morpher;
        /* 0x24 */
    };
    /* 0xA0 */
} CIntelligence; /* sizeof = 0xA0 */

#endif

#endif

