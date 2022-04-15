#ifndef CINTELLIGENCE_TYPE_H
#define CINTELLIGENCE_TYPE_H

#include <inttypes.h>

// TODO: organize redundant structs

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

#ifdef GAME_TUROK3

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ float m_CollisionHeightOffset;
	/* 0x10 */ uint32_t m_LODDistSquared;
} CIntelligenceStatic; /* sizeof = 0x14 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ uint32_t m_Health;
	/* 0x08 */ uint32_t m_StartAnim;
	/* 0x0C */ uint32_t m_dwDeathFlag1Pickups;
	/* 0x10 */ uint32_t m_dwDeathFlag2Pickups;
	/* 0x14 */ float m_CollisionRadius;
	/* 0x18 */ float m_CollisionWallRadius;
	/* 0x1C */ float m_CollisionHeight;
	/* 0x20 */ float m_CollisionDeadHeight;
	/* 0x24 */ float m_CollisionHeightOffset;
	/* 0x28 */ float m_LeashRadius;
	/* 0x2C */ uint8_t m_Aggression;
	/* 0x2D */ uint8_t m_TranqHealth;
	/* 0x2E */ uint8_t m_StartSound;
	/* 0x2F */ uint8_t _pad;
	/* 0x30 */ uint16_t m_StartSound;
	/* 0x32 */ uint16_t m_PainSound;
	/* 0x34 */ uint8_t m_HeadTextureIndex;
	/* 0x35 */ uint8_t m_BodyTextureIndex;
	/* 0x36 */ uint8_t m_ArmTextureIndex;
	/* 0x37 */ uint8_t m_BackOfHeadTextureIndex;
	/* 0x38 */ uint8_t m_LegTextureIndex;
	/* 0x39 */ uint8_t m_RightLegTextureIndex;
} CIntelligenceCommonEnemy; /* sizeof = 0x3A */

typedef struct {
	/* 0x00 */ CIntelligenceCommonEnemy m_Common;
	/* 0x3C */ uint32_t m_dwFlags;
	/* 0x40 */ float m_AttackCombatRadius
	/* 0x44 */ float m_AttackLeapRadius
	/* 0x48 */ float m_AttackDartRadius
	/* 0x4C */ float m_AttackProjectileRadius
	/* 0x50 */ float m_AttackWeaponRadius
	/* 0x54 */ float m_AggroRadius
	/* 0x58 */ uint8_t m_GroundBehavior;
	/* 0x59 */ uint8_t m_AirBehavior;
	/* 0x5A */ uint8_t m_UnderwaterBehavior;
	/* 0x5B */ int8_t m_ExtremeDeathModel;
	/* 0x5C */ int8_t m_PfmDeathModel;
	/* 0x5D */ int8_t m_HeadBlownOffDeathModel;
	/* 0x5E */ int8_t m_LeftArmBlownOffDeathModel;
	/* 0x5F */ int8_t m_RightArmBlownOffDeathModel;
	/* 0x60 */ int8_t m_BodyHoleDeathModel;
	/* 0x61 */ int8_t _pad0;
	/* 0x62 */ int16_t m_ExtremeDeathAnim
	/* 0x64 */ int16_t m_PfmDeathAnim
	/* 0x66 */ int16_t m_HeadBlownOffDeathAnim
	/* 0x68 */ int16_t m_LeftArmBlownOffDeathAnim
	/* 0x6A */ int16_t m_RightArmBlownOffDeathAnim
	/* 0x6C */ int16_t m_BodyHoleDeathAnim
	/* 0x6E */ uint16_t m_wIdleAnimFlags;
	/* 0x70 */ uint16_t m_wMoveAnimFlags;
	/* 0x72 */ uint16_t m_wPatroleAnimFlags;
	/* 0x74 */ uint16_t m_wEvadeAnimFlags;
	/* 0x76 */ uint16_t m_wCombatAnimFlags;
	/* 0x78 */ uint16_t m_wLeapAnimFlags;
	/* 0x7A */ uint16_t m_wDartAnimFlags;
	/* 0x7C */ uint16_t m_wProjectileAnimFlags;
	/* 0x7E */ uint16_t m_wWeaponAnimFlags;
	/* 0x80 */ uint16_t m_wComboEndAnimFlags;
	/* 0x82 */ uint16_t m_wNormalDeathAnimFlags;
	/* 0x84 */ uint16_t m_wMovingDeathAnimFlags;
	/* 0x86 */ uint16_t m_wViolentDeathAnimFlags;
	/* 0x88 */ uint16_t m_wExplosiveDeathAnimFlags;
	/* 0x8A */ uint16_t m_wAlertAnimFlags;
	/* 0x8C */ uint16_t m_wTakeCoverAnimFlags;
	/* 0x8E */ uint16_t m_wLeftArmWoundAnimFlags;
	/* 0x90 */ uint16_t m_wRightArmWoundAnimFlags;
	/* 0x92 */ uint16_t m_wFleeAnimFlags;
} CIntelligenceEnemy; /* sizeof = 0x94 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ uint16_t m_CollisionType;
	/* 0x06 */ uint16_t _pad;
	/* 0x08 */ float m_CollisionRadius;
	/* 0x0C */ float m_CollisionWidth;
	/* 0x10 */ float m_CollisionHeight;
	/* 0x14 */ float m_CollisionLength;
	/* 0x18 */ float m_CollisionXOffset;
	/* 0x1C */ float m_CollisionYOffset;
	/* 0x20 */ float m_CollisionZOffset;
} CIntelligenceCommonPlatform; /* sizeof = 0x24 */

typedef struct {
	/* 0x00 */ CIntelligenceCommonPlatform m_Common;
	/* 0x24 */ uint32_t m_dwFlags;
	/* 0x28 */ uint8_t m_Type;
	/* 0x29 */ uint8_t m_MotionStyle;
	/* 0x2A */ uint8_t m_RotationType;
	/* 0x2B */ uint8_t _pad;
	/* 0x2C */ float m_VertDist;
	/* 0x30 */ float m_HorizDist;
	/* 0x34 */ float m_HorizDir;
	/* 0x38 */ float m_MoveTime;
	/* 0x3C */ float m_Rotation;
	/* 0x40 */ float m_StartOffset; // 0 = start, 1 = end
	/* 0x44 */ float m_HoverAmplitude;
	/* 0x48 */ float m_HoverPeriod;
	/* 0x4C */ float m_GoDelayTime;
	/* 0x50 */ float m_ReturnDelayTime;
	/* 0x54 */ float m_SpecialDelay;
	/* 0x58 */ float m_SpecialSinkDist;
	/* 0x5C */ float m_SpecialSinkTime;
} CIntelligencePlatform; /* sizeof = 0x60 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ int32_t m_Type;
	/* 0x08 */ int16_t m_FiniteTotal;
	/* 0x0A */ int16_t m_MaxActive;
	/* 0x0C */ float m_IntervalTime0;
	/* 0x10 */ float m_IntervalTime1;
	/* 0x14 */ int16_t m_ObjectIndex;
	/* 0x16 */ int16_t m_VariationIndex;
	/* 0x18 */ float m_ScaleX;
	/* 0x1C */ float m_ScaleY;
	/* 0x20 */ float m_ScaleZ;
	/* 0x24 */ int16_t m_ParticleType;
	/* 0x26 */ int16_t _pad;
} CIntelligenceGenerator; /* sizeof = 0x28 */

typedef struct {
	/* 0x00 */ CIntelligenceCommonEnemy m_Common;
	/* 0x3C */ uint32_t m_dwFlags;
	/* 0x40 */ int32_t m_GunNode;
	/* 0x44 */ int32_t m_RotNode;
	/* 0x48 */ float m_RotSpeed;
	/* 0x4C */ float m_RotLimit;
	/* 0x50 */ float m_SightRadius;
	/* 0x54 */ float m_SightAngle;
	/* 0x58 */ float m_FireRadius;
	/* 0x5C */ float m_FireAngle;
	/* 0x60 */ float m_VertDist;
	/* 0x64 */ float m_HorizDist;
	/* 0x68 */ float m_HorizDir;
	/* 0x6C */ float m_MoveSpeed;
	/* 0x70 */ float m_StartOffset;
	/* 0x74 */ uint8_t m_TargetVisibleMotionType;
	/* 0x75 */ uint8_t m_TargetNotVisibleMotionType;
	/* 0x76 */ uint16_t _pad;
} CTurretIntelligence; /* sizeof = 0x78 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
} CIntelligenceThrowable; /* sizeof = 0x0C */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ float m_OpenDuration;
	/* 0x08 */ int8_t m_OpenDoorEvent;
	/* 0x09 */ int8_t m_CloseDoorEvent;
	/* 0x0A */ uint16_t _pad;
	/* 0x0C */ float m_AutoOpenRadius;
	/* 0x10 */ float m_AutoCloseRadius;
} CIntelligenceDoor; /* sizeof = 0x14 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ int16_t m_Health;
	/* 0x06 */ uint16_t _pad;
	/* 0x08 */ float m_CollisionRadius;
	/* 0x0C */ float m_CollisionHeight;
	/* 0x10 */ int32_t m_IdleAnim;
	/* 0x14 */ float m_AutoGoRadius;
	/* 0x18 */ int32_t m_GoAnim;
	/* 0x1C */ int32_t m_GoParticleEffect;
	/* 0x20 */ int32_t m_GoSoundEffect;
	/* 0x24 */ uint32_t m_dwGoPickupsFlag0;
	/* 0x28 */ uint32_t m_dwGoPickupsFlag1;
	/* 0x2C */ int32_t m_GoDeathAnim;
	/* 0x30 */ int32_t m_GoDeathParticleEffect;
	/* 0x34 */ int32_t m_GoDeathSoundEffect;
	/* 0x38 */ uint32_t m_dwGoDeathPickupsFlag0;
	/* 0x3C */ uint32_t m_dwGoDeathPickupsFlag1;
	/* 0x40 */ int32_t m_TotemMissionDuration; // these are leftovers from T2
	/* 0x44 */ int16_t m_EnemiesAttackingTurok;
	/* 0x46 */ int16_t m_EnemiesToKillToSaveTotem;
	/* 0x48 */ uint8_t m_ModelIndex[4];
	/* 0x4C */ uint8_t m_ModelFrame[4];
	/* 0x50 */ uint8_t m_ModelIndexHealthPercentage[4];
} CIntelligenceDestructible; /* sizeof = 0x54 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ float m_Time;
} CIntelligencePickup; /* sizeof = 0x10 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ int32_t m_StartAnim;
} CIntelligenceInteractiveAnim; /* sizeof = 0x08 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
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
	/* 0x1C */ uint16_t m_CantGoSound;
	/* 0x1E */ uint16_t m_GoSound;
} CIntelligenceAction; /* sizeof = 0x20 */

typedef struct {
	/* 0x000 */ int32_t m_dwFlags;
    /* 0x004 */ uint32_t m_StartHealth;
    /* 0x008 */ float m_SpeedScale;
    /* 0x00C */ float m_JumpScale;
	/* 0x010 */ float m_HealHealth;
	/* 0x014 */ float m_Aggressiveness;
	/* 0x018 */ float m_Accuracy;
	/* 0x01C */ float m_Awareness;
	/* 0x020 */ float m_Evasiveness;
	/* 0x024 */ float m_SeekKillZone;
	/* 0x028 */ float m_AvoidDeathZone;
	/* 0x02C */ float m_CloseAttackComfort;
	/* 0x030 */ float m_MediumAttackComfort;
	/* 0x034 */ float m_FarAttackComfort;
	/* 0x038 */ uint32_t m_WeaponList[8];
	/* 0x058 */ float m_WeaponAccuracy[8];
	/* 0x078 */ BOOL m_WeaponCloseList[8];
	/* 0x098 */ BOOL m_WeaponMediumList[8];
	/* 0x0B8 */ BOOL m_WeaponFarList[8];
	/* 0x0D8 */ float m_CollisionRadius;
	/* 0x0DC */ float m_CollisionWallRadius;
	/* 0x0E0 */ float m_CollisionHeight;
	/* 0x0E4 */ float m_CollisionDeadHeight;
	/* 0x0E8 */ float m_ScaleX;
	/* 0x0EC */ float m_ScaleY;
	/* 0x0D0 */ float m_ScaleZ;
	/* 0x0D4 */ int32_t m_AmmoMax[32];
	/* 0x154 */ float m_DuckHeight;
	/* 0x158 */ float m_FallingDamageMinVelocity;
	/* 0x15C */ float m_FallingDamageMaxVelocity;
	/* 0x160 */ float m_WalkCameraBobAmplitude;
	/* 0x164 */ float m_WalkCameraBobFrequency;
} CIntelligencePlayer; /* sizeof = 0x168 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ float m_AnimSpeed; // fps?
} CIntelligenceMorpher; /* sizeof = 0x10 */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ float m_CollisionRadius;
	/* 0x08 */ float m_CollisionHeight;
	/* 0x0C */ uint32_t m_DestinationID;
} CIntelligenceWarpEntrance; /* sizeof = 0x10 */

typedef struct {
	/* 0x00 */ uint16_t m_wFlags;
	/* 0x02 */ uint16_t m_NumParticles;
	/* 0x04 */ float m_Radius;
	/* 0x08 */ float m_StartHeight;
	/* 0x0C */ uint16_t m_MinFallVelocity;
	/* 0x0E */ uint16_t m_MaxFallVelocity;
	/* 0x10 */ uint16_t m_SlopeX;
	/* 0x12 */ uint16_t m_SlopeZ;
	/* 0x14 */ uint16_t m_MinLength;
	/* 0x16 */ uint16_t m_MaxLength;
	/* 0x18 */ uint8_t m_UpperColour[4];
	/* 0x1C */ uint8_t m_LowerColour[4];
	/* 0x20 */ uint16_t m_nTexture;
	/* 0x22 */ uint16_t m_nImpactParticle;
	/* 0x24 */ uint16_t m_MinWidth;
	/* 0x26 */ uint16_t m_MaxWidth;
	/* 0x28 */ float m_Timeout;
} CIntelligenceWeatherGenerator; /* sizeof = 0x2C */

typedef struct {
	/* 0x00 */ uint32_t m_dwFlags;
	/* 0x04 */ float m_RotX;
	/* 0x08 */ float m_RotY;
	/* 0x0C */ float m_RotZ;
} CIntelligenceCameraPlacement; /* sizeof = 0x10 */

typedef struct {
	/* 0x00 */ CIntelligenceBase base;
	union {
		/* 0x014 */ CIntelligenceStatic Static;
		/* 0x014 */ CIntelligenceEnemy Enemy;
		/* 0x014 */ CIntelligencePlatform Platform;
		/* 0x014 */ CIntelligenceGenerator Generator;
		/* 0x014 */ CIntelligenceTurret Turret;
		/* 0x014 */ CIntelligenceThrowable Throwable;
		/* 0x014 */ CIntelligenceDoor Door;
		/* 0x014 */ CIntelligenceDestructible Destructible;
		/* 0x014 */ CIntelligencePickup Pickup;
		/* 0x014 */ CIntelligenceInteractiveAnim InteractiveAnim;
		/* 0x014 */ CIntelligenceAction Action;
		/* 0x014 */ CIntelligencePlayer Player;
		/* 0x014 */ CIntelligenceMorpher Morpher;
		/* 0x014 */ CEntranceIntelligenceWarp WarpEntrance;
		/* 0x014 */ CGeneratorIntelligenceWeather WeatherGenerator;
		/* 0x014 */ CIntelligenceCameraPlacement CameraPlacement;
	};
} CIntelligence; /* sizeof = 0x168? */

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
    /* 0x00 */ CIntelligenceBase base;
    union {
        /* 0x14 */ CIntelligenceStatic Static;
        /* 0x14 */ CIntelligenceEnemy Enemy;
        /* 0x14 */ CIntelligencePlatform Platform;
        /* 0x14 */ CIntelligenceGenerator Generator;
        /* 0x14 */ CIntelligenceTurret Turret;
        /* 0x14 */ CIntelligenceThrowable Throwable;
        /* 0x14 */ CIntelligenceDoor Door;
        /* 0x14 */ CIntelligenceDestructible Destructible;
        /* 0x14 */ CIntelligencePickup Pickup;
        /* 0x14 */ CIntelligenceInteractiveAnim InteractiveAnim;
        /* 0x14 */ CIntelligenceAction Action;
        /* 0x14 */ CIntelligencePlayer Player;
        /* 0x14 */ CIntelligenceMorpher Morpher;
    };
    /* 0xA0 */
} CIntelligence; /* sizeof = 0xA0 */

#endif

#endif

