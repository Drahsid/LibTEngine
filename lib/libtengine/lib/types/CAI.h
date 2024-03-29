#ifndef CAI_TYPE_H
#define CAI_TYPE_H

#include <inttypes.h>
#include "CVector3.h"
#include "CPathTrack.h"
#include "AIFunc.h"
#include "health_helper.h"

#ifdef GAME_TUROK3
enum {
	LIMBSTATUS_R_LOWER_ARM = (1 << 0),
	LIMBSTATUS_R_UPPER_ARM = (1 << 1),
	LIMBSTATUS_L_LOWER_ARM = (1 << 2),
	LIMBSTATUS_L_UPPER_ARM = (1 << 3),
	LIMBSTATUS_R_LOWER_LEG = (1 << 4),
	LIMBSTATUS_R_UPPER_LEG = (1 << 5),
	LIMBSTATUS_L_LOWER_LEG = (1 << 6),
	LIMBSTATUS_L_UPPER_LEG = (1 << 7),
	LIMBSTATUS_HEAD		   = (1 << 8)
};

enum {
	LIMBDAMAGE_R_ARM = 0,
	LIMBDAMAGE_L_ARM,
	LIMBDAMAGE_R_LEG,
	LIMBDAMAGE_L_LEG,
	LIMBDAMAGE_HEAD,
	LIMBDAMAGE_COUNT
};

typedef struct { // -> is the offset from CGameObjectInstance
    /* 0x000 ->0x180 */ uint32_t m_dwFlags;
    /* 0x004 ->0x184 */ health_t m_Health;
    /* 0x008 ->0x188 */ health_t m_InitialHealth;
	/* 0x00C ->0x18C */ uint32_t m_dwModelFlags;
	/* 0x010 ->0x190 */ uint8_t m_TranqHealth;
	/* 0x011 ->0x191 */ int8_t _pad0;
	/* 0x012 ->0x192 */ int8_t m_FlinchCountdown;
	/* 0x013 ->0x193 */ int8_t m_FlinchTime;
	/* 0x014 ->0x194 */ int8_t m_FlinchNode[4];
	/* 0x018 ->0x198 */ CVector3 m_vFlinchAxis;
	/* 0x024 ->0x1A4 */ float m_HeadTurn;
	/* 0x028 ->0x1A8 */ float m_HeadTilt;
    /* 0x02C ->0x1AC */ struct CAIModeInfo** m_pModeTable;
    /* 0x030 ->0x1B0 */ struct CAIModeInfo* m_pModeCurrent;
    /* 0x034 ->0x1B4 */ int8_t m_Mode;
    /* 0x035 ->0x1B5 */ int8_t m_ModeLastFrame;
    /* 0x036 ->0x1B6 */ int8_t m_ModeBefore;
    /* 0x037 ->0x1B7 */ int8_t m_Action;
    /* 0x038 ->0x1B8 */ uint32_t m_ModeLastFrameFlags;
    /* 0x03C ->0x1BC */ uint32_t m_ModeFlags;
    /* 0x040 ->0x1C0 */ float m_ModeTime;
    /* 0x044 ->0x1C4 */ float m_ActionTime;
    /* 0x048 ->0x1C8 */ CVector3 m_vPosLastFrame;
    /* 0x054 ->0x1D4 */ CVector3 m_vDesiredPos;
    /* 0x060 ->0x1E0 */ float m_RotYLastFrame;
    /* 0x064 ->0x1E4 */ float m_ConditionTimer; // This is used for enemies that have certain movements, and as the timer that the bore uses when you are frozen
    /* 0x068 ->0x1E8 */ struct CGameObjectInstance_t* m_pParent;
	/* 0x06C ->0x1EC */ CVector3 m_vTargetOffset;
	/* 0x078 ->0x1F8 */ struct CGameObjectInstance_t* m_pTargetOverride;
	/* 0x07C ->0x1FC */ float m_TargetOverrideTime;
    /* 0x080 ->0x200 */ struct CGameObjectInstance_t* m_pSightTarget;
    /* 0x084 ->0x204 */ struct CGameRegion_t* m_pPathAvoidRegion;
    /* 0x088 ->0x208 */ struct CGameObjectInstance_t* m_pPathTarget;
    /* 0x08C ->0x20C */ float m_PathRotY;
    /* 0x090 ->0x210 */ float m_PathHeight;
	/* 0x094 ->0x214 */ CPathTrack m_PathTrack;
	/* 0x098 ->0x218 */ uint32_t unk_0x98; // TODO: This is a part of CPathTrack, must be different in T3
    /* 0x09C ->0x21C */ float m_StartRotY;
    /* 0x0A0 ->0x220 */ CVector3 m_vInitialPos;
    /* 0x0AC ->0x22C */ struct CGameRegion_t* m_pStartRegion; // TODO: reverse CGameRegion for T3
    /* 0x0B0 ->0x230 */ CVector3 m_vLeashPos;
    /* 0x0BC ->0x23C */ struct CGameRegion_t* m_pLeashRegion;
    /* 0x0C0 ->0x240 */ float m_AnimSpeed;
    /* 0x0C4 ->0x244 */ float m_AnimModeSpeed;
    /* 0x0C8 ->0x248 */ int16_t m_AnimType;
    /* 0x0CA ->0x24A */ int8_t m_AnimIndex;
    /* 0x0CB ->0x24B */ int8_t m_AnimRepeatedCount;
    /* 0x0CC ->0x24C */ uint8_t m_Aggression;
    /* 0x0CD ->0x24D */ uint8_t m_FreezeTime;
    /* 0x0CE ->0x24E */ int8_t m_PathFindCount;
    /* 0x0CF ->0x24F */ int8_t m_LastHurtSFXTimer;
    /* 0x0D0 ->0x250 */ float m_DeathRegionTimer;
    /* 0x0D4 ->0x254 */ float m_BurningTimer;
    /* 0x0D8 ->0x258 */ CVector3 m_vBoreTarget;
	/* 0x0E4 ->0x000 */ CVector3 m_vBoreCollNormal;
	/* 0x0F0 ->0x000 */ CVector3 m_vFlashlightRearPt;
	/* 0x0FC ->0x000 */ CVector3 m_vFlashlightFrontPt;
	/* 0x108 ->0x000 */ struct CDLight* m_pDLFlashlight1;
	/* 0x10C ->0x000 */ CVector3 m_vLaserSightSource;
	/* 0x118 ->0x000 */ struct CLoopingSoundData* m_pAttachedLoopingSound; // TODO: reverse CLoopingSoundData for T3
	/* 0x11C ->0x000 */ int16_t m_nClosestNavNode;
	/* 0x11E ->0x000 */ int16_t m_nPreviousNavNode;
	/* 0x120 ->0x000 */ int16_t m_nDestinationNavNode;
	/* 0x122 ->0x000 */ int16_t m_nLeashNavNode;
	/* 0x124 ->0x000 */ int16_t m_nPathNavNode;
	/* 0x126 ->0x000 */ int16_t m_wLimbStatus;
	/* 0x128 ->0x000 */ int8_t m_StuckDelay;
	/* 0x129 ->0x000 */ int8_t m_StuckCheckCountdown;
	/* 0x12A ->0x000 */ int16_t _pad1;
	/* 0x12C ->0x000 */ int32_t m_LimbDamageThisFrame[5];
    /* 0x140 ->0x2C0 */ stepFunc m_pfStep;
    /* 0x144 ->0x2C4 */ drawFunc m_pfDraw;
    /* 0x148 ->0x2C8 */ hurtFunc m_pfHurt;
    /* 0x14C ->0x2CC */ collFunc m_pfCollision;
    /* 0x150 ->0x2D0 */ phitFunc m_pfHit;
    /* 0x154 ->0x2D4 */ stepFunc m_pfCalculateOrientationMatrix;
    /* 0x158 ->0x2D8 */ effxFunc m_pfEffects;
	/* 0x15C ->0x2DC */ stepFunc m_pfFlagLink;
    /* 0x160 ->0x2E0 */ uint32_t m_VarBuffer[32];
} CAI; /* sizeof = 0x1E0 */

#endif

#ifdef GAME_TUROK2
typedef struct { // -> is the offset from CGameObjectInstance
	/* 0x000 ->0x140 */ int m_dwFlags;
	/* 0x004 ->0x144 */ health_t m_Health;
	/* 0x008 ->0x148 */ health_t m_InitialHealth;
	/* 0x00C ->0x14C */ int m_VisBits;
	/* 0x010 ->0x150 */ uint8_t m_TranqHealth;
	/* 0x011 ->0x151 */ int8_t m_nTexture;
	/* 0x012 ->0x152 */ int8_t m_FlinchCountdown;
	/* 0x013 ->0x153 */ int8_t m_FlinchTime;
	/* 0x014 ->0x154 */ int8_t m_FlinchNode[4];
	/* 0x018 ->0x158 */ CVector3 m_vFlinchAxis;
	/* 0x024 ->0x164 */ float m_HeadTurn;
	/* 0x028 ->0x168 */ float m_HeadTilt;
	/* 0x02C ->0x16C */ struct CAIModeInfo* m_pModeTable;
	/* 0x030 ->0x170 */ struct CAIModeInfo* m_pModeCurrent;
	/* 0x034 ->0x174 */ int8_t m_Mode;
	/* 0x035 ->0x175 */ int8_t m_ModeLastFrame;
	/* 0x036 ->0x176 */ int8_t m_ModeBefore;
	/* 0x037 ->0x177 */ int8_t m_Action;
	/* 0x038 ->0x178 */ uint32_t m_ModeLastFrameFlags;
	/* 0x03C ->0x17C */ uint32_t m_ModeFlags;
	/* 0x040 ->0x180 */ float m_ModeTime;
	/* 0x044 ->0x184 */ float m_ActionTime;
	/* 0x048 ->0x188 */ CVector3 m_vPosLastFrame;
	/* 0x054 ->0x194 */ CVector3 m_vDesiredPos;
	/* 0x060 ->0x1A0 */ float m_RotYLastFrame;
	/* 0x064 ->0x1A4 */ float m_ConditionTimer; // This is used for enemies that have certain movements, and as the timer that the bore uses when you are frozen
	/* 0x068 ->0x1A8 */ struct CGameObjectInstance_t* m_pParent;
	/* 0x06C ->0x1AC */ CVector3 m_vTargetOffset;
	/* 0x078 ->0x1B8 */ struct CGameObjectInstance_t* m_pTargetOverride;
	/* 0x07C ->0x1BC */ float m_TargetOverrideTime;
	/* 0x080 ->0x1C0 */ struct CGameObjectInstance_t* m_pSightTarget;
	/* 0x084 ->0x1C4 */ struct CGameRegion* m_pPathAvoidRegion;
	/* 0x088 ->0x1C8 */ struct CGameObjectInstance_t* m_pPathTarget;
	/* 0x08C ->0x1CC */ float m_PathRotY;
	/* 0x090 ->0x1D0 */ float m_PathHeight;
	/* 0x094 ->0x1D4 */ CPathTrack m_PathTrack;
	/* 0x098 ->0x1D8 */ float m_InitialRotY;
	/* 0x09C ->0x1DC */ CVector3 m_vInitialPos;
	/* 0x0A8 ->0x1E8 */ struct CGameRegion* m_pInitialRegion;
	/* 0x0AC ->0x1EC */ CVector3 m_vLeashPos;
	/* 0x0B8 ->0x1F8 */ struct CGameRegion* m_pLeashRegion;
	/* 0x0BC ->0x1FC */ float m_AnimSpeed;
	/* 0x0C0 ->0x200 */ float m_AnimModeSpeed;
	/* 0x0C4 ->0x204 */ int16_t m_AnimType;
	/* 0x0C6 ->0x206 */ int8_t m_AnimIndex;
	/* 0x0C7 ->0x207 */ int8_t m_AnimRepeatedCount;
	/* 0x0C8 ->0x208 */ uint8_t m_Aggression;
	/* 0x0C9 ->0x209 */ uint8_t m_FreezeTime;
	/* 0x0CA ->0x20A */ int8_t m_PathFindCount;
	/* 0x0CB ->0x20B */ int8_t m_LastHurtSFXTimer;
	/* 0x0CC ->0x20C */ float m_DeathRegionTimer;
	/* 0x0D0 ->0x210 */ float m_OnFireTimer;
	/* 0x0D4 ->0x214 */ CVector3 m_vBoreTarget;
	/* 0x0E0 ->0x220 */ CVector3 m_vBoreCollNormal;
	/* 0x0EC ->0x22C */ struct CLoopingSoundData* m_pAttachedLoopingSound;
	/* 0x0F0 ->0x230 */ stepFunc m_pfStep;
	/* 0x0F4 ->0x234 */ drawFunc m_pfDraw;
	/* 0x0F8 ->0x238 */ hurtFunc m_pfHurt;
	/* 0x0FC ->0x23C */ collFunc m_pfCollision;
	/* 0x100 ->0x240 */ phitFunc m_pfHit;
	/* 0x104 ->0x244 */ stepFunc m_pfCalculateOrientationMatrix;
	/* 0x108 ->0x248 */ effxFunc m_pfEffects;
	/* 0x10C ->0x24C */ uint32_t m_VarBuffer[12];
} CAI; /* sizeof = 0x13C */
#endif

#endif

