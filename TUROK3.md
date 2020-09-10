# Turok 3 RAM Map

## Map

###### **Notes**

###### The US release of the game was compiled with O3
###### The virtual address of a function is: address - 0x200000 + 0x80000000


|Address|Type|Name|
|-------|----|----|
80033770|code|[CGameObjectInstance__Construct](#gameobject)|
80114974|uint32_t|bCutsceneBlackBars|
801149E0|int|nScreenWidth|
801149E4|int|nScreenHeight|
801149E8|float|stretchX|
801149EC|float|stretchY|
801149F0|int|nVideoMode|
801149F4|int|nOldVideoMode|
801149F8|int|nBlackoutCounter|
801149FC|int|filter|
80114A00|BOOL|bIsLowRes|
80114A04|int|deflicker|
80114A08|int[2]|nModes|
80114A10|[CVideoVals[6]](#videovals)|[VideoVals](#videovals)|
80114AB8|[RenderParams[3]](#renderparams)|[RenderVals](#renderparams)
80131EEA|uint16_t|nController|
80131F94|int8_t|nJoyX|
80131F95|int8_t|nJoyY|
8013D8B0|float|refreshRate|
8013DC70|int|levelStatus|
8013DC74|int|bPersistentDataLoaded|
8013DC78|int|levelCutsceneFlags|
8013DD9C|uint32_t|savePersistentDataSize|
8013DDA0|uint32_t|gamePersistentDataSize|
8013DDA8|[CGameObjectInstance*](#gameobject)|pActorList|
8013DDB0|uint32_t|nNumActors|
8013DDB4|[CPlayer*](#player)|pPlayer|
801659B0|uint8_t|bStereo|
801659B1|uint8_t|nMusicVolume|
801659B2|uint8_t|nSfxVolume|
801659B3|uint8_t|nSpeechVolume|
801659BB|uint8_t|deathmatchRadarMode|
801659BC|uint8_t|nVideoModeCopy|
801659C0|uint32_t|nGameMode|
801659C4|uint32_t|unlockedSecrets|
801659C8|uint32_t|enabledSecrets|
801659CC|uint32_t|difficulty|
801659D8|uint32_t|nGameModeCopy|
801659DC|uint32_t|nScoreLimit|
801659E0|uint32_t|nTimeLimit|
801659E8|BOOL|bTeamDamage|
801659EC|BOOL|bSuddenDeath|
801659F0|uint32_t|nArena|
80165A00|uint32_t|nWeaponPreset|
80165A0C|uint32_t|nMPBowSetting|
80165A10|uint32_t|nMPPistolSetting|
80165A14|uint32_t|nMPARSetting|
80165A18|uint32_t|nMPShotgunSetting|
80165A1C|uint32_t|nMPVampSetting|
80165A20|uint32_t|nMPGrenadeSetting|
80165A24|uint32_t|nMPBoreSetting|
80165A54|int32_t|nMPDamageScale|
80165A58|uint32_t|nMPMaxHealth|
80165A5C|float|mpPickupDelay|
80165A60|float|mpHealthPickupValueScale|
80165A64|float|mpInitialAmmoScale|
80165A68|float|mpAmmoCapacityScale|
80165A6C|float|mpAmmoPickupValueScale|
80165A70|float|mpSpecialPickupValueScale|
80165A74|float|mpGravityScale|
80165A78|float|mpMovementSpeedScale|
80165B10|uint32_t|mpDeathmatchMusic|
80165B58|[COptions](#opts)|gameOptions|



## Types, Enums, and Structs/Classes

### CAnimationData <a name="animdat"></a>
|File|Definitions|
|----|-----------|
|[CAnimationData.h](code/structures/CAnimationData.h)|void(fAnimStep), CAnimationData|

### CAnimationState <a name="animstate"></a>
|File|Definitions|
|----|-----------|
|[CAnimationState.h](code/structures/CAnimationState.h)|CAnimationState|

### CCamera <a name="camera"></a>
|File|Definitions|
|----|-----------|
|[CCamera.h](code/structures/CCamera.h)|CCamera|

### CGameObjectInstance <a name="gameobject"></a>
|File|Definitions|
|----|-----------|
|[CGameObjectInstance.h](code/structures/CGameObjectInstance.h)|CGameObjectInstance|
|[CGameObjectInstance__Construct.c](code/nonmatching/CGameObjectInstance__Construct.c)|void(CGameObjectInstance__Construct)|
|[ObjectInstanceId.h](code/unorganized/ObjectInstanceId.h)|ObjectInstanceId|

### CIntelligence <a name="intelligence"></a>
|File|Definitions|
|----|-----------|
|[CIntelligence.h](code/structures/CIntelligence.h)|CIntelligenceBase, CIntelligencePlayer, CIntelligenceEnemy|

### COptions <a name="opts"></a>
|File|Definitions|
|----|-----------|
|[COptions.h](code/structures/COptions.h)|COptions|


### CPlayer <a name="player"></a>
|File|Definitions|
|----|-----------|
|[CPlayer.h](code/structures/CPlayer.h)|WeaponId, CrossHairMode, CrossHairSightIcon, CPlayer|

### CPlayerOptions <a name="playeropts"></a>
|File|Definitions|
|----|-----------|
|[CPlayerOptions.h](code/structures/CPlayerOptions.h)|GameDifficulty, GameMode, CMPPlayerOptions, CPlayerControlOptions|

### CQuaternion <a name="quat"></a>
|File|Definitions|
|----|-----------|
|[CQuaternion.h](code/structures/CQuaternion.h)|CQuaternion|

### CVector3 <a name="vector3"></a>
|File|Definitions|
|----|-----------|
|[CVector3.h](code/structures/CVector3.h)|CVector3|

### CVideoVals <a name="videovals"></a>
|File|Definitions|
|----|-----------|
|[CVideoVals.h](code/structures/CVideoVals.h)|CVideoVals, VideoVals|

### RenderParams <a name="renderparams"></a>
|File|Definitions|
|----|-----------|
|[RenderParams.h](code/structures/RenderParams.h)|RenderParams, RenderVals|

