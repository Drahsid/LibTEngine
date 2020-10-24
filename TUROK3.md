# Turok 3 RAM Map

## Map

###### **Notes**

###### The US release of the game was compiled with O3
###### The virtual address of a function is: address - 0x200000 + 0x80000000


|Address|Type|Name|
|-------|----|----|
8000AA50|code|CEngineApp__Main_0|
8001E500|code|memset|
80025440|code|VM_Initialize|
80033770|code|[CGameObjectInstance__Construct](#gameobject)|
80033D60|code|[CGameObjectInstance__LookupAIAnimType](#gameobject)|
80038C80|code|[CGameObjectInstance__SetDesiredAnim](#gameobject)|
80038CA0|code|[CGameObjectInstance__RestartAnim](#gameobject)|
80038CC4|code|[CGameObjectInstance__SetDesiredAnimByType](#gameobject)|
80038D18|code|[CGameObjectInstance__SetDesiredAnimByIndex](#gameobject)|
80038D5C|code|[CGameObjectInstance__ChooseRandomAnim](#gameobject)|
80038EF0|code|[CGameObjectInstance__Draw_Player](#gameobject)|
8003ECF0|code|CCache__Construct|
80042360|code|CDecompressor__Construct|
80042B30|code|CHeap__Construct|
80042B9C|code|CHeap__Alloc|
80042CB0|code|CHeap__AllocTop|
80042DA8|code|CHeap__DeallocAll|
80042DE8|code|CHeap__FreeMem|
80042E58|code|CList__AddHead|
80042EB4|code|CList__AddTail|
80042F10|code|CList__InsertBefore|
80042FC4|code|CList__InsertAfter|
80043078|code|CList__Remove|
80043110|code|CList__RemoveHeap|
80043134|code|CList__RemoveTail|
80043420|code|CLoader__Construct|
8004351C|code|CLoader__LoadSync|
800435F4|code|CLoader__LoadAsync|
8004371C|code|CLoader__Main|
8004383C|code|CLoader__AllocLoaderEntry|
800438A8|code|CLoader__DeallocLoaderEntry|
800439F0|code|InitializeSystemResources|
8004B604|code|Sound__Initialize|
8004FE1C|code|GAS_Construct|
80052414|code|InitAllRumblePaks|
8005245C|code|EnableAllRumblePaks|
800526B0|code|CCrash__Construct|
80052C80|code|osGetMemSize|
80062768|code|CMtxF__Identity|
8006A95C|code|CSelectionList__Construct|
8006A964|code|CSelectionList__AddItem|
8006A9A8|code|CSelectionList__ChooseItem|
8007DE0C|code|CScene__LookupObjectType|
8008280C|code|osCreateScheduler|
8008291C|code|osScAddClient|
80084208|code|CEngineApp__Construct|
800844A8|code|CEngineApp__Main_1|
8008577C|code|CEngineApp__Update|
80085BBC|code|boot|
80085BE0|code|CEngineApp__Boot|
80085C58|code|CEngineApp__Idle|
80085CD8|code|CEngineApp__AdvanceFrameData|
80086058|code|CEngineApp__SetupFadeTo|
8008620C|code|CEngineApp__Retrace|
80096F1C|code|[CGameObjectInstance__Draw_0](#gameobject)|
800C6788|code|[CGameObjectInstance__Draw_1](#gameobject)|
800C696C|code|[CGameObjectInstance__Draw_2](#gameobject)|
800DA48C|code|[CGameObjectInstance__Draw_Weapon](#gameobject)|
800DDA10|code|osStartThread|
800DDB30|code|osCreateThread|
800DDD20|code|osCreateMesgQueue|
800DDD50|code|osSendMesg|
800DDE80|code|osRecvMesg|
800DEE10|code|osInvalDCache|
800DEF00|code|__osDisableInt|
800DEF20|code|__osRestoreInt|
800DEF40|code|osJamMesg|
800DF150|code|osSetTimer|
800DF1E0|code|osWritebackDCache|
800DF250|code|osPiRawStartDma|
800E4DD0|code|osViBlack|
800E4E30|code|osViSwapBuffer|
800E5380|code|osCreateViManager|
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
80164778|[CPlayerPool](#ppool)|playerPool|
801647C0|[CCameraPool](#cpool)|cameraPool|


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

### CCameraPool <a name="cpool"></a>
|File|Definitions|
|----|-----------|
|[CCameraPool.h](code/structures/CCameraPool.h)|CCameraPool|


### CGameObjectInstance <a name="gameobject"></a>
|File|Definitions|
|----|-----------|
|[CGameObjectInstance.h](code/structures/CGameObjectInstance.h)|CGameObjectInstance|
|[CGameObjectInstance__Construct.c](code/nonmatching/CGameObjectInstance__Construct.c)|void(CGameObjectInstance__Construct)|
|[ObjectInstanceId.h](code/unorganized/ObjectInstanceId.h)|ObjectInstanceId|

### CIntelligence <a name="intelligence"></a>
|File|Definitions|
|----|-----------|
|[CIntelligence.h](code/structures/CIntelligence.h)|CIntelligenceBase, CIntelligencePlayer, CIntelligenceEnemy, CIntelligence|

### COptions <a name="opts"></a>
|File|Definitions|
|----|-----------|
|[COptions.h](code/structures/COptions.h)|COptions|


### CPlayer <a name="player"></a>
|File|Definitions|
|----|-----------|
|[CPlayer.h](code/structures/CPlayer.h)|WeaponId, CrossHairMode, CrossHairSightIcon, CPlayer|

### CPlayerPool <a name="ppool"></a>
|File|Definitions|
|----|-----------|
|[CPlayerPool.h](code/structures/CCPlayerPool.h)|CPlayerPool|

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

