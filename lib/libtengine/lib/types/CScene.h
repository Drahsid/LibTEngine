#ifndef CSCENE_TYPE_H
#define CSCENE_TYPE_H

#include <inttypes.h>
#include "CMatrixPool.h"
#include "CList.h"
#include "CGameSection.h"
#include "CParticleSystem.h"
#include "CSimplePool.h"
#include "CAnimPool.h"
#include "CGameDynamicLight.h"
#include "CROMWarpPoint.h"
#include "CActiveLink.h"
#include "CActiveGridSection.h"

#ifdef GAME_TUROK3
typedef struct {
    /* 0x00000 */ int m_LevelStatus;
    /* 0x00004 */ int m_bPersistentDataLoaded;
    /* 0x00008 */ uint32_t m_LevelIntroPlayedFlags;
    /* 0x0000C */ int unk_0xC[4];
    /* 0x0001C */ void* m_rpLevels;
    /* 0x00020 */ void* m_rpLevel;
    /* 0x00024 */ void* m_rpTextureSets;
    /* 0x00028 */ void* m_rpObjects;
    /* 0x0002C */ void* m_rpBinaries;
    /* 0x00030 */ void* m_rpGraphicSet;
    /* 0x00034 */ void* m_rpGridSections;
    /* 0x00038 */ void* m_rpCinemas;
    /* 0x0003C */ void* m_rpLoadSavePersistentData;
    /* 0x00040 */ void* m_rpGamePersistentData;
    /* 0x00044 */ void* m_rpVisibility;
    /* 0x00048 */ int m_LoadSavePersistentDataSize;
    /* 0x0004C */ int m_GamePersistentDataSize;
    /* 0x00050 */ struct CISet* m_pisLevelsIndex;
    /* 0x00054 */ struct CISet* m_pisTextureSetsIndex;
    /* 0x00058 */ struct CISet* m_pisObjectsIndex;
    /* 0x0005C */ struct CISet* m_pisBinariesIndex;
    /* 0x00060 */ struct CISet* m_pisGraphicSetIndex;
    /* 0x00064 */ struct CISet* m_pisLevelIndex;
    /* 0x00068 */ struct CISet* unk_0x68;
    /* 0x0006C */ struct CISet* m_pisGridBounds;
    /* 0x00070 */ struct CISet* m_pisCollision;
    /* 0x00074 */ struct CISet* m_pisParticleSwooshes;
    /* 0x00078 */ struct CISet* m_pisCinemas;
    /* 0x0007C */ struct CISet* m_pisIntelligence;
    /* 0x00080 */ struct CISet* unk_0x80;
    /* 0x00084 */ struct CISet* m_pisLoadSavePersistentData;
    /* 0x00088 */ struct CISet* m_pisGamePersistentData;
    /* 0x0008C */ struct CISet* unk_0x8C;
    /* 0x00090 */ struct CISet* m_pisVisibilityIndex;
    /* 0x00094 */ struct CUSet* m_pusObjectTypes;
    /* 0x00098 */ struct CUSet* m_pusBinaryTypes;
    /* 0x0009C */ struct CUSet* m_pusGraphicSetType;
    /* 0x000A0 */ struct CUSet* m_pusDynamicLights;
    /* 0x000A4 */ struct CUSet* m_pusCurves;
    /* 0x000A8 */ struct CUSet* m_pusRumbleTypes;
    /* 0x000AC */ struct CUSet* m_pusRumbles;
    /* 0x000B0 */ struct CUSet* m_pusLinkGroupTypes;
    /* 0x000B4 */ struct CMemEntry* m_pmeParticleEffects;
    /* 0x000B8 */ struct CMemEntry* m_pmeLevelIndex;
    /* 0x000BC */ struct CMemEntry* m_pmeCollision;
    /* 0x000C0 */ struct CMemEntry* m_pmeGridBounds;
    /* 0x000C4 */ struct CMemEntry* m_pmeGridSectionsIndex;
    /* 0x000C8 */ struct CMemEntry* m_pmeLevelInfo;
    /* 0x000CC */ struct CMemEntry* m_pmeSkyLayers;
    /* 0x000D0 */ struct CMemEntry* m_pmeAnimInstances;
    /* 0x000D4 */ struct CMemEntry* m_pmeLinks;
    /* 0x000D8 */ struct CMemEntry* unk_0xD8;
    /* 0x000DC */ struct CMemEntry* unk_0xDC;
    /* 0x000E0 */ struct CMemEntry* unk_0xE0;
    /* 0x000E4 */ struct CMemEntry* unk_0xE4;
    /* 0x000E8 */ struct CMemEntry* m_pmeMatrices;
    /* 0x000EC */ struct CMemEntry* m_pmePaths;
    /* 0x000F0 */ struct CMemEntry* m_pmeLevelNavNodes;
    /* 0x000F4 */ struct CMemEntry* m_pmeLevelNavLinks;
    /* 0x000F8 */ struct CMemEntry* unk_0xF8;
    /* 0x000FC */ struct CMemEntry* m_pmeLevelNavVision;
    /* 0x00100 */ struct CMemEntry* m_pmeVisibility;
    /* 0x00104 */ int unk_0x104[9];
    /* 0x00128 */ CMatrixPool m_MatrixPool;
    /* 0x00138 */ struct CGameObjectInstance* m_AnimInstances;
    /* 0x0013C */ int m_nPlayerAnimInstances;
    /* 0x00140 */ int m_nAnimInstances;
    /* 0x00144 */ struct CInstanceHeader* m_pColInstances[512];
    /* 0x00944 */ int m_nColInstances;
    /* 0x00948 */ struct CGameObjectInstance* m_pNodeColInstances[128];
    /* 0x00B48 */ int m_nNodeColInstances;
    /* 0x00B4C */ struct CGameStaticInstance* m_pStaticEventsInstances[64]; // FIXME: OOPS!
    /* 0x00C4C */ int m_nStaticInstances;
    /* 0x00C50 */ struct CGameObjectInstance* m_pActiveAnimInstances[128];
    /* 0x00E50 */ int m_nActiveAnimInstances;
    /* 0x00E54 */ struct CGameObjectInstance* m_pActiveEnemies[64];
    /* 0x00F54 */ int m_nEnemyInstances;
    /* 0x00F58 */ int m_PathFindCount;
    /* 0x00F5C */ struct CGameObjectInstance* m_pAutoDevices[32];
    /* 0x00FDC */ int m_nAutoDevices;
    /* 0x00FE0 */ int unk_0x00FE0[55]; // Probably the same as T2 (I couldn't test, but it is the same size)
    /* 0x010BC */ int m_nTransparentInstances;
    /* 0x010C0 */ struct CInstanceHeader* m_pTransparentInstances[64];
    /* 0x011C0 */ int m_nInstanceLinks;
    /* 0x011C4 */ int m_nRegionLinks;
    /* 0x011C8 */ uint32_t* m_InstanceLinkIndices;
    /* 0x011CC */ uint32_t* m_RegionLinkIndices;
    /* 0x011D0 */ struct CROMLink* m_InstanceLinks;
    /* 0x011D4 */ struct CROMLink* m_RegionLinks;
    /* 0x011D8 */ CList m_ActiveLinkList;
    /* 0x011EC */ CList m_FreeLinkList;
    /* 0x01200 */ CActiveLink m_LinkVars[48];
    /* 0x015C0 */ int m_nActiveGridSections;
    /* 0x015C4 */ int unk_0x015C8; // seems like it has to do with grid sections
    /* 0x015C8 */ CActiveGridSection m_ActiveGridSections[128];
    /* 0x01BC8 */ CParticleSystem m_ParticleSystem;
    /* 0x12004 */ int unk_0x12004[13]; // These are likely part of CParticeSystem
    /* 0x12038 */ CSimplePool m_SimplePool;
    /* 0x15D48 */ CAnimPool m_AnimPool;
    /* 0x1CC70 */ struct CROMLevel* m_pLevelInfo;
    /* 0x1CC74 */ int16_t m_LightDirection[4];
    /* 0x1CC7C */ char m_ROMLevelName[64];
    /* 0x1CCBC */ char m_LevelName[64];
    /* 0x1CCFC */ float unk_0x1CCFC;
    /* 0x1CD00 */ struct CROMSkyLayer* m_pSkyLayers;
    /* 0x1CD04 */ int m_nSkyLayers;
    /* 0x1CD08 */ float unk_0x1CD08;
    /* 0x1CD0C */ CGameDynamicLight m_GameDynamicLights;
    /* 0x1CE34 */ int m_bIsBossLevel;
    /* 0x1CE38 */ int m_nLevel;
    /* 0x1CE3C */ int m_WarpFadeStyle;
    /* 0x1CE40 */ int m_WarpMode;
    /* 0x1CE44 */ float m_WarpTime;
    /* 0x1CE48 */ int m_bWarpFound;
    /* 0x1CE4C */ CROMWarpPoint m_CurrentWarpPoint;
    /* 0x1CE60 */ int m_CurrentWarpID;
    /* 0x1CE64 */ int m_DestWarpID;
    /* 0x1CE68 */ int m_bReturnWarpSaved;
    /* 0x1CE6C */ int m_ReturnWarpID;
    /* 0x1CE70 */ int m_LowestWeaponIndex;
    /* 0x1CE74 */ int m_HighestWeaponIndex;
    /* 0x1CE78 */ int m_copyEnabledCheatFlags;
    /* 0x1CE7C */ int unk_0x1CE7C;
    /* 0x1CE80 */ CGameSection unk_0x1CE9C[8];
    /* 0x1CF60 */ int unk_0x1CF60[290]; // Pointers, indexes, zeroes; TODO: Investigate!
    /* 0x1D3E8 */ void* m_pmeTempVisibility;
    /* 0x1D3EC */ int unk_0x1D3EC[17];
} CScene; /* sizeof = 0x1D430 */

#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x00000 */ int m_LevelStatus;
    /* 0x00004 */ int m_bPersistentDataLoaded;
    /* 0x00008 */ uint32_t m_LevelIntroPlayedFlags;
    /* 0x0000C */ void* m_rpLevels;
    /* 0x00010 */ void* m_rpTextureSets;
    /* 0x00014 */ void* m_rpObjects;
    /* 0x00018 */ void* m_rpBinaries;
    /* 0x0001C */ void* m_rpGraphicSet;
    /* 0x00020 */ void* m_rpGridSections;
    /* 0x00024 */ void* m_rpCinemas;
    /* 0x00028 */ void* m_rpLoadSavePersistentData;
    /* 0x0002C */ void* m_rpGamePersistentData;
    /* 0x00030 */ int m_LoadSavePersistentDataSize;
    /* 0x00034 */ int m_GamePersistentDataSize;
    /* 0x00038 */ struct CISet* m_pisLevelsIndex;
    /* 0x0003C */ struct CISet* m_pisTextureSetsIndex;
    /* 0x00040 */ struct CISet* m_pisObjectsIndex;
    /* 0x00044 */ struct CISet* m_pisBinariesIndex;
    /* 0x00048 */ struct CISet* m_pisGraphicSetIndex;
    /* 0x0004C */ struct CISet* m_pisLevelIndex;
    /* 0x00050 */ struct CISet* m_pisGridSectionsIndex;
    /* 0x00054 */ struct CISet* m_pisGridBounds;
    /* 0x00058 */ struct CISet* m_pisCollision;
    /* 0x0005C */ struct CISet* m_pisParticleSwooshes;
    /* 0x00060 */ struct CISet* m_pisCinemas;
    /* 0x00064 */ struct CISet* m_pisIntelligence;
    /* 0x00068 */ struct CISet* m_pisPaths;
    /* 0x0006C */ struct CISet* m_pisLoadSavePersistentData;
    /* 0x00070 */ struct CISet* m_pisGamePersistentData;
    /* 0x00074 */ struct CUSet* m_pusObjectTypes;
    /* 0x00078 */ struct CUSet* m_pusBinaryTypes;
    /* 0x0007C */ struct CUSet* m_pusGraphicSetType;
    /* 0x00080 */ struct CUSet* m_pusDynamicLights;
    /* 0x00084 */ struct CUSet* m_pusCurves;
    /* 0x00088 */ struct CUSet* m_pusRumbleTypes;
    /* 0x0008C */ struct CUSet* m_pusRumbles;
    /* 0x00090 */ struct CUSet* m_pusLinkGroupTypes;
    /* 0x00094 */ struct CMemEntry* m_pmeParticleEffects;
    /* 0x00098 */ struct CMemEntry* m_pmeLevelIndex;
    /* 0x0009C */ struct CMemEntry* m_pmeCollision;
    /* 0x000A0 */ struct CMemEntry* m_pmeGridBounds;
    /* 0x000A4 */ struct CMemEntry* m_pmeGridSectionsIndex;
    /* 0x000A8 */ struct CMemEntry* m_pmeLevelInfo;
    /* 0x000AC */ struct CMemEntry* m_pmeSkyLayers;
    /* 0x000B0 */ struct CMemEntry* m_pmeAnimInstances;
    /* 0x000B4 */ struct CMemEntry* m_pmeLinks;
    /* 0x000B8 */ struct CMemEntry* m_pmeCurves;
    /* 0x000BC */ struct CMemEntry* m_pmeRumbleTypes;
    /* 0x000C0 */ struct CMemEntry* m_pmeRumbles;
    /* 0x000C4 */ struct CMemEntry* m_pmeVisData;
    /* 0x000C8 */ struct CMemEntry* m_pmeMatrices;
    /* 0x000CC */ struct CMemEntry* m_pmePaths;
    /* 0x000D0 */ CMatrixPool m_MatrixPool;
    /* 0x000E0 */ struct CGameObjectInstance* m_AnimInstances;
    /* 0x000E4 */ int m_nPlayerAnimInstances;
    /* 0x000E8 */ int m_nAnimInstances;
    /* 0x000EC */ struct CInstanceHeader* m_pColInstances[512];
    /* 0x008EC */ int m_nColInstances;
    /* 0x008F0 */ struct CGameObjectInstance* m_pNodeColInstances[128];
    /* 0x00AF0 */ int m_nNodeColInstances;
    /* 0x00AF4 */ struct CGameStaticInstance* m_pStaticEventsInstances[64];
    /* 0x00BF4 */ int m_nStaticEventsInstances;
    /* 0x00BF8 */ struct CGameObjectInstance* m_pActiveAnimInstances[128];
    /* 0x00DF8 */ int m_nActiveAnimInstances;
    /* 0x00DFC */ struct CGameObjectInstance* m_pActiveEnemies[64];
    /* 0x00EFC */ int m_nActiveEnemies;
    /* 0x00F00 */ int m_PathFindCount;
    /* 0x00F04 */ struct CGameObjectInstance* m_pAutoDevices[32];
    /* 0x00F84 */ int m_nAutoDevices;
    /* 0x00F88 */ struct CGameObjectInstance* m_pThrowableInstances[16];
    /* 0x00FC8 */ int m_nThrowableInstances;
    /* 0x00FCC */ struct CGameObjectInstance* m_pTakeCoverInstances[32];
    /* 0x0104C */ int m_nTakeCoverInstances;
    /* 0x01050 */ struct CGameObjectInstance* m_pSpecialTargetInstances[4];
    /* 0x01060 */ int m_nSpecialTargetInstances;
    /* 0x01064 */ int m_nTransparentInstances;
    /* 0x01068 */ struct CInstanceHeader* m_pTransparentInstances[64];
    /* 0x01168 */ int m_nInstanceLinks;
    /* 0x0116C */ int m_nRegionLinks;
    /* 0x01170 */ uint32_t* m_InstanceLinkIndices;
    /* 0x01174 */ uint32_t* m_RegionLinkIndices;
    /* 0x01178 */ struct CROMLink* m_InstanceLinks;
    /* 0x0117C */ struct CROMLink* m_RegionLinks;
    /* 0x01180 */ CList m_ActiveLinkList;
    /* 0x01194 */ CList m_FreeLinkList;
    /* 0x011A8 */ CActiveLink m_LinkVars[48];
    /* 0x014A8 */ int m_nActiveGridSections;
    /* 0x014AC */ CActiveGridSection m_ActiveGridSections[128];
    /* 0x018B0 */ CParticleSystem m_ParticleSystem; // CHECK
    /* 0x10518 */ CSimplePool m_SimplePool;
    /* 0x13B28 */ CAnimPool m_AnimPool;
    /* 0x18E50 */ struct CROMLevel* m_pLevelInfo;
    /* 0x18E54 */ int16_t m_LightDirection[4];
    /* 0x18E5C */ char m_LevelName[64];
    /* 0x18E9C */ struct CROMSkyLayer* m_pSkyLayers;
    /* 0x18EA0 */ int m_nSkyLayers;
    /* 0x18EA4 */ float m_RotYPickup;
    /* 0x18EA8 */ CQuaternion m_qRotYPickup;
    /* 0x18EB8 */ float m_cSendStaticEventsFrame;
    /* 0x18EBC */ CGameDynamicLight m_GameDynamicLights;
    /* 0x18FA4 */ int m_bIsBossLevel;
    /* 0x18FA8 */ int m_nLevel;
    /* 0x18FAC */ int m_WarpFadeStyle;
    /* 0x18FB0 */ int m_WarpMode;
    /* 0x18FB4 */ float m_WarpTime;
    /* 0x18FB8 */ int m_bWarpFound;
    /* 0x18FBC */ CROMWarpPoint m_CurrentWarpPoint;
    /* 0x18FD0 */ int m_CurrentWarpID;
    /* 0x18FD4 */ int m_DestWarpID;
    /* 0x18FD8 */ int m_bReturnWarpSaved;
    /* 0x18FDC */ int m_ReturnWarpID;
    /* 0x18FE0 */ int m_LowestWeaponIndex;
    /* 0x18FE4 */ int m_HighestWeaponIndex;
    /* 0x18FE8 */ int m_copyEnabledCheatFlags;
    /* 0x18FEC */ CGameSection m_ShockTextureMap;
    /* 0x19008 */ CGameSection m_ReflectionTextureMap;
    /* 0x19024 */ CGameSection m_DeathWipeTextureMap;
    /* 0x19040 */ CGameSection m_FreezeTextureMap;
    /* 0x1905C */ CGameSection m_CloakTextureMap;
} CScene; /* sizeof = 0x19078 */
#endif



#endif

