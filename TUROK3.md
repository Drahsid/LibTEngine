# Turok 3 RAM Map

## Map

###### **Notes**

###### The game was compiled with O3
###### Values that begin with unk_ have not been cross referenced with CEngine source, and are thus unknown.
###### Data of type void, or with any paramaters (void if none) are functions
###### Function parameters may be wrong
###### Functions also include the physical address

|Address|Type|Name|Description|Parameters|
|----------|----------------------|--------------------------|--------------------------------------|-|
|0x80033770<br>0x00233770| void                 | CGameObjectInstance__Construct  | Constructs [CGameObjectInstance](#gameobject). See [code](#cgoiconstruct)  |CGameObjectInstance* pThis, int nObjIndex, uint32_t param_3, uint32_t param_4, uint32_t param_5, int param_6, uint32_t param_7, float RotY, CVector3 vPos, uint32_t param_12, CVector3 vScale, CVector3 vVelocity|
|~~0x8009FFC4~~| void                 | CPlayer__Construct              | Constructs [CPlayer](#player)                         ||
|0x80114974| u32                  | unk_CutsceneBlackBars           | Toggles black bars that are seen in cutscenes         |
|0x801149E0| int                  | screen_width                    | Current X resolutuion                                 |
|0x801149E4| int                  | screen_height                   | Current Y resolutuion                                 |
|0x801149E8| float                | unk_StretchX                    | X stretch amount for the UI?                          |
|0x801149EC| float                | unk_StretchY                    | Y stretch amount for the UI?                          |
|0x801149F0| int                  | video_mode                      | Current video mode index                              |
|0x801149F4| int                  | old_mode                        | Last video mode index                                 |
|0x801149F8| int                  | BlackoutCounter                 | Time to black the screen, used when changing res      |
|0x801149FC| int                  | filter                          | I think this toggles the filters?                     |
|0x80114A00| int                  | unk_IsLowRes                    | 1 when low-res                                        |
|0x80114A04| int                  | deflicker                       | I think this toggles interlaced video?                |
|0x80114A08| int[2]               | nModes                          | Number of video modes for NTSC/PAL?                   |
|0x80114A10| int[2][5][7]         | VideoVals                       | Video settings for resolutions NTSC/PAL               |
|0x80114AB8| RenderParams[3]      | RenderVals                      | RenderParams for each resolution option               |
|0x8013D8B0| float                | refresh_rate                    | Game speed and physics scale to this                  |
|0x8013DC70| s32                  | m_LevelStatus                   | Level load status?                                    |
|0x8013DC74| s32                  | m_bPersistentDataLoaded         | Set to 1 when persistent scene data is loaded         |
|0x8013DC78| u32                  | m_LevelIntroPlayedFlags         | Various functions related to cutscenes?               |
|0x8013DDA8| CGameObjectInstance* | unk_ActorList                   | Pointer to list of [CGameObjectInstance](#gameobject)s|
|0x8013DDB4| CPlayer*             | m_pPlayer                       | Pointer to current [CPlayer](#player) structure       |
|0x801659B0| u8                   | m_bStereo                       | Toggles stereo audio                                  |
|0x801659B1| u8                   | m_MusicVolume                   | Volume level of music                                 |
|0x801659B2| u8                   | m_SfxVolume                     | Volume level of sound effects                         |
|0x801659B2| u8                   | m_SpeechVolume                  | Volume level of speech                                |
|0x801659BB| u8                   | unk_DeathmatchRadar             | Deathmatch Radar mode See: TODO                       |
|0x801659BC| u8                   | unk_video_mode                  | Copy of video mode                                    |
|0x801659C0| u32                  | unk_GameMode                    | Current game mode; probably a copy                    |
|0x801659C4| u32                  | unk_unlockedSecrets             | Currently unlcoked cheats. Bitfield                   |
|0x801659C8| u32                  | unk_Secrets                     | Currently toggled cheats. Bitfield                    |
|0x801659CC| int                  | m_Difficulty                    | Game difficulty See [unk_Difficulty](#difficulty)     |
|0x801659D8| u32                  | unk_GameMode2                   | Copy of unk_GameMode                                  |
|0x801659DC| u32                  | unk_ScoreLimit                  | Score limit for multiplayer                           |
|0x801659E0| u32                  | unk_TimeLimit                   | Time limit for multiplayer                            |
|0x801659E8| u32                  | unk_TeamDamage                  | Is there team damage? Possibly is the scale           |
|0x801659EC| u32                  | unk_SuddenDeath                 | Sudden death option for multiplayer                   |
|0x801659F0| u32                  | unk_Arena                       | Selected arena index for multiplayer                  |
|0x80165A00| u32                  | unk_WeaponsPreset               | Selected weapon preset index for multiplayer          |
|0x80165A0C| u32                  | unk_MPBowSetting                | Bow Off/On/Start with option for multiplayer          |
|0x80165A10| u32                  | unk_MPPistolSetting             | Pistol Off/On/Start with option for multiplayer       |
|0x80165A14| u32                  | unk_MPARSetting                 | AR Off/On/Start with option for multiplayer           |
|0x80165A18| u32                  | unk_MPShotgunSetting            | Shotgun Off/On/Start with option for multiplayer      |
|0x80165A1C| u32                  | unk_MPVampSetting               | Vampire Gun Off/On/Start with option for multiplayer  |
|0x80165A20| u32                  | unk_MPGrenadeSetting            | Grenade Launcher Off/On/Start with option for multiplayer |
|0x80165A24| u32                  | unk_MPBoreSetting               | Cerebral Bore Off/On/Start with option for multiplayer    |
|0x80165A54| s32                  | unk_DamageScale                 | Damage scale for multiplayer, not linear              |
|0x80165A58| u32                  | unk_MPMaxHealth                 | Max health for multiplayer                            |
|0x80165A5C| float                | unk_PickupDelay                 | Pickup respawn delay scale for multiplayer            |
|0x80165A60| float                | unk_HealthPickupValue           | Health pickup amount scale for multiplayer            |
|0x80165A64| float                | unk_InitialAmmo                 | Initial ammo amount scale for multiplayer             |
|0x80165A68| float                | unk_AmmoCapacity                | Ammo capacity scale for multiplayer                   |
|0x80165A6C| float                | unk_AmmoPickupValue             | Ammo pickup amount scale for multiplayer              |
|0x80165A70| float                | unk_SpecialPickupValue          | Special pickup related scale for multiplayer          |
|0x80165A74| float                | unk_Gravity                     | Gravity scale for multiplayer                         |
|0x80165A78| float                | unk_MovementSpeed               | Movement speed scale for multiplayer                  |
|0x80165B10| u32                  | unk_DeathmatchMusic             | Deathmatch music?                                     |
|0x80165B60| CString              | unk_CharacterName               | Character name? Player1                               |
|0x80165C64| u8                   | unk_p1Active                    | Is player 1 active in multiplayer? (possibly index)   |
|0x80165C65| u8                   | unk_p1Active2                   | Is player 1 active in multiplayer?                    |
|0x80165C66| u8                   | unk_p1IsBot                     | Is player 1 a bot?                                    |
|0x80165C68| u8                   | unk_p1Character                 | Selected character index of player 1                  |
|0x80165C69| s8                   | unk_p1Hanicap                   | Handicap amount for player 1                          |
|0x80165C78| u32                  | unk_p1Team                      | Selected team of player 1                             |
|0x80165D6C| u8                   | unk_p2Active                    | Is player 2 active in multiplayer? (possibly index)   |
|0x80165D6D| u8                   | unk_p2Active2                   | Is player 2 active in multiplayer?                    |
|0x80165D6E| u8                   | unk_p2IsBot                     | Is player 2 a bot?                                    |
|0x80165D70| u8                   | unk_p2Character                 | Selected character index of player 2                  |
|0x80165D71| s8                   | unk_p2Hanicap                   | Handicap amount for player 2                          |
|0x80165D80| u32                  | unk_p2Team                      | Selected team of player 2                             |
|0x80165E74| u8                   | unk_p3Active                    | Is player 3 active in multiplayer? (possibly index)   |
|0x80165E75| u8                   | unk_p3Active2                   | Is player 3 active in multiplayer?                    |
|0x80165E76| u8                   | unk_p3IsBot                     | Is player 3 a bot?                                    |
|0x80165E78| u8                   | unk_p3Character                 | Selected character index of player 3                  |
|0x80165E79| s8                   | unk_p3Hanicap                   | Handicap amount for player 3                          |
|0x80165E88| u32                  | unk_p3Team                      | Selected team of player 3                             |
|0x80165F7C| u8                   | unk_p4Active                    | Is player 4 active in multiplayer? (possibly index)   |
|0x80165F7D| u8                   | unk_p4Active2                   | Is player 4 active in multiplayer?                    |
|0x80165F7E| u8                   | unk_p4IsBot                     | Is player 4 a bot?                                    |
|0x80165F80| u8                   | unk_p4Character                 | Selected character index of player 4                  |
|0x80165F81| s8                   | unk_p4Hanicap                   | Handicap amount for player 4                          |
|0x80165F90| u32                  | unk_p4Team                      | Selected team of player 4                             |
|0x80166080| u8                   | unk_HorzSpeed                   | Horizontal look-speed Player1                         |
|0x80166081| u8                   | unk_VertSpeed                   | Vertical look-speed Player1                           |
|0x80166082| u16                  | unk_ControlStyle                | Current control style Player1                         |
|0x80166084| u8                   | unk_ReverseVert                 | Toggles Reverse vertical look Player1                 |
|0x80166085| u8                   | unk_LookSpring                  | Toggles Look Spring Player1                           |
|0x80166086| u8                   | unk_AutoAim                     | Toggles Auto Aim Player1                              |
|0x80166087| u8                   | unk_WeaponWheelSpeed            | Weapon Wheel Speed Player1                            |
|0x801660C7| u8                   | unk_Draw                        | When in game, setting to 1 stops rendering            |
|0x801660DF| u8                   | unk_RenderFlicker               | When changed, can flicker and unload the scene?       |
|0x801660E8| float                | unk_Brightness                  | Brightness level                                      |
|0x801660EC| float                | unk_Volume                      | Overall volume                                        |
|0x801660F7| u8                   | unk_IntroMode                   | Has to do with the intro animations                   |
|0x80166130| u32                  | unk_LagTimer                    | Number of frames to lag the game for?                 |

## Types, Enums, and Structs/Classes

### Types

| Typename | Type               |
|----------|--------------------|
| u8       | unsinged char      |
| u16      | unsinged short     |
| u32      | unsinged int       |
| u64      | unsinged long long |
| s8       | char               |
| s16      | short              |
| s64      | long long          |
| BOOL     | int                |
| char*    | CString            |

### Enums

#### unk_Difficulty <a name="difficulty"></a>
```c
enum unk_Difficulty {
    EASY = 0,
    MEDIUM = 1,
    HARD = 2,
    OBLIVION = 3
}
```

##### unk_WeaponId <a name="weapid"></a>
```c
enum unk_WeaponId {
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
    ENERGYGRAPPLE       = 25,
}
```

##### unk_CrossHairMode <a name="chairmodes"></a>
```c
//This seems to choose correlate to different graphics, and is not anything like a standard enum. Any int value fits
enum unk_CrossHairMode {
    NO_CROSSHAIR = 0,
    BORE_WEAPON = 710,
    BORE_WEAPON_FLASH = 711,
    DEFAULT = 730
}
```

##### unk_SightIcon <a name="sightIcon"></a>
```c
//This seems to be incredibly similar to unk_CrossHairMode, but less specific
enum unk_SightIcon {
    NOT_BORE = -1,
    BORE_WEAPON = 810,
    BORE_WEAPON_FLASH = 811,
}
```

#### unk_Gamemode <a name="gamemode"></a>
```c
enum unk_Gamemode {
    SINGLE_PLAYER = 0,
    BLOODLUST,
    CAPTURE_THE_FLAG,
    LAST_STAND,
    GOLDEN_ARROW,
    MONKEY_TAG,
    ARSENAL_OF_WAR,
    COLOR_TAG,
    WEAPON_MASTER
}
```

#### unk_ObjectId
```c
//Used when consturcting a CGameObjectInstance
enum _unk_ObjectId {
    PlayerCharacter = 0,
    Raptor = 2,
    Monkey = 3,
    Brick0 = 5,
    Danielle = 6,
    MP_PlayerCharacter = 7, //Possibly only humanoid characters
    Joseph = 8,
    Brick1 = 0x000B,
    Brick2 = 0x000C,
    Door = 0x0185, //Boiler room
    ElevatorDoor = 0x018E,
    ElevatorDoorOpen = 0x018F,
    CubePrimitive0 = 0x019C,
    Tentacle0 = 0x019E,
    Tentacle1 = 0x019F,
    Tentacle2 = 0x01A0,
    Tentacle3 = 0x01A1,
    PoliceHeli = 0x01BA, //Not sure what to call this
    CubePrimitive1 = 0x01B0,
    PoliceMobile = 0x01B9,
    PoliceWalker = 0x01BF,
    Crate0 = 0x025B,
    LadderMan = 0x02B9, //Come over here, quick! I won't hurt you!
    Hound = 0x02BD,
    FireExtinguisher = 0x08AC, //Explodes when shot
    BridgeBroken = 0x90C, //Debris from the bridge that breaks at the very start
    TowerBridge = 0x090F //The one that breaks at the very start
}
```

### Structs/Classes

##### CCamera <a name="camera"></a>
```cpp
typedef struct CCamera_t {
    CVector3 m_vPos; // 0x38; Current position of camera.
    float m_EyeYOffset; // 0x44; Vertical view offset, head height

    float m_PixelXScale; // 0x80; The viewport is distorted by this scale on the X axis
    float m_PixelYScale; // 0x84; The viewport is distorted by this scale on the Y axis

    float m_Fov; // 0x530; The field-of-view of the camera. Cannot go over 90, will zoom in
    float unk_Fov; // 0x534; Possibly weapon fov?
} CCamera;
```

##### CGameObjectInstance <a name="gameobject"></a>
```cpp
typedef struct CGameObjectInstance_t
{
    u8 m_Type; // 0x00; Not sure exactly what this does
    u8 unk_m_State // 0x01; Only effects certain objects (for example, set to 1 to break crates)
    s16 PADDING; // 0x02; Sometimes is set to things like 0x00FE, 0x00FF. Doesn't seem to effect anything
    u16 m_nObjType; // 0x04; Object type. This effects many things such as the model, hit effect, etc; however, it does not effect the AI.
    CVector3 m_vPos; // 0x08; Position of the object
    void* unk_Pointer; // 0x18; Pointer to something, not sure what this is for
    CVector3 m_vVelocity; // 0x1C; Velocity of the object. This seems to be separate from the velocity used for the player character
    CVector3 m_vScale; // 0x50; Scale of the object
    CVector3 m_Rot; // 0x5C; Rotation of the object. This seems to be separate from the actual rotation in the player character
    float unk_m_vScale1; // 0x68; XYZ scale of the object. scales with m_vScale
    float m_RotY; // 0x6C; Yaw rotation of the object
    int unk_end; // 0x364; just so I can remember the sizeof: 0x360-0x368?
} CGameObjectInstance;
```

##### CPlayer <a name="player"></a>
```cpp
typedef struct CPlayer_t
{
    CGameObjectInstance ca; // 0x00, ca likely means "Character Actor"
    CGameObjectInstance wa; // 0x368, wa likely means "Weapon Actor"

    BOOL m_bActive; // 0x6D0; Player does not update when FALSE
    int m_nController; // 0x6D4; Controller to set on load
    struct CPlayerOptions_t* m_pOptions; // 0x6D8; Pointer to player options
    struct CCamera_t* m_pCamera; // 0x6DC; Pointer to current camera

    int m_Health; //0x6E7??; Current health. Why is it not aligned?!
    u8 unk_m_SubHealth; //0x6EB??; Health between ticks. Why is it not aligned?!
    s16 m_LifeForce; //0x6EC; Number of life force tokens
    s16 m_MaxHealth; //0x6F0; a smaller data type than m_Health?
    CVector3 unk_SpawnPointCopy; //0x6F4; copy of the point you spawn at?

    s16 m_Mode; // 0xCD2; Current mode
    s16 m_ModeBefore; // 0xCD6; Copy of mode before current mode
    s16 m_ModeLastFrame; // 0xCDA; Copy of mode from last frame
    float m_ModeTime; // 0xCDC; Current time in mode
    u32 m_ModeLastFrameFlags; // 0xCE0; Copy of flags for mode from last frame
    u32 m_ModeBeforeFlags; // 0xCE4; Copy of flags for mode that was before current mode
    u32 m_ModeFlags; // 0xCE8; Current mode flags
    int unk; // 0xCEC; Probably a BOOL? Not sure what this does
    float m_FrameIncrementScaled; // 0xCF0; Scaled timestep. Effects physics.

    float m_Speed; // 0xD60; Character's forward speed
    float m_SideSpeed; // 0xD64; Character's horizontal speed
    float m_TotalSpeed; // 0xD68; Character's absolute total speed
    float m_YVelLastFrame; // 0xD6C; Backbuffer of y-axis velocity from prior frame
    BOOL m_bOnGround; // 0xD70; set to 0x04 when on ground
    float m_BurstSpeed; // 0xD74; Character's forward 'burst' speed
    float m_BurstSideSpeed; // 0xD78; Character's horizontal 'burst' speed
    float m_BurstTimer; // 0xD7C; Decreases to 0 while moving
    float m_HandSide; // 0xD80; Used for climbing, alternates signs
    float m_TimeOffGround; // 0xD84; Total time off the ground
    CVector3 m_vDesiredPos; // 0xD88; Desired position, used for collision
    CVector3 m_vDesiredPos2; // 0xD94; Copy of m_vDesiredPos

    float m_DuckOffset; // 0xDC4; Current negative ducking offset
    BOOL m_bDuckMode; // 0xDC8; TRUE while ducking
    float unk_yOffset; // 0xDCC; Offset to view on Y axis
    CVector3 m_vHeadRotOffset; // 0xDD0; Rotation offset of character view in radians
    CVector3 m_vHeadWobbleRotOffset; // 0xDDC; Rotation offset of character view in radians
    CVector3 m_vEyeOffset; // 0xDE8; Filtered Offset from bottom of instance?

    float m_BreathAmp; // 0xE08; Breathing amplitude, resets shortly after stopped
    
    s16 m_RequestedWeapon; // 0xE1E; Weapon requested to be held. See: TODO

    CVector3 m_vWeaponFirePos; // 0xE24; World particle position for weapon
    
    int m_CrossHairMode; // 0xEF4; Current crosshair mode. See: TODO
    CVector3 m_vOuterCrossHairPos; // 0xEF8; World-to-screen position for outer bore crosshair
    CVector3 m_vOuterCrossHairVel; // 0xF04; Velocity used by outer bore crosshair
    CGameObjectInstance* m_pCrossHairTarget; // 0xF10; Handle to target instance for bore weapons
    int m_SightIcon; // 0xF14; Screen icon
    int m_SightIconFrame; // 0xF18; Frame counter for crosshair
    CVector3 m_vCrossHairPos; // 0xF1C; World-to-screen position for bore crosshair
    CVector3 m_vCrossHairVel; // 0xF28; Velocity used by bore crosshair
    BOOL m_SniperMode; // 0xF44; Zoom mode
    BOOL unk_HasTarget; // 0xF48; Has target
    
    float m_ZoomBlend; // 0xF54; Current zoom blend
    float m_TargetZoomBlend; // 0xF58; Target zoom blend
} CPlayer;
```

##### CQuatern <a name="quat"></a>
```cpp
typedef struct CQuatern_t
{
	float		x, y, z, w;
} CQuatern;
```

##### CVector3 <a name="vector3"></a>
```cpp
typedef struct CVector3_t
{
	float		x, y, z;
} CVector3;
```

##### RenderParams <a name="renderparams"></a>
```cpp
typedef struct RenderParams_t
{
	BOOL filter;
	BOOL alias;
	BOOL edge_alias;
	BOOL inter;
	BOOL better;
} RenderParams;
```

## Rewritten code
###### I rewrote these from the game's disassembly. They are not likely 1:1.

##### CGameObjectInstance__Construct <a name="cgoiconstruct"></a>
This is incomplete, I need to investigate the functions called by this method to get a better understanding of it, and the CGameObjectInstance structure.
```c
//if unspecified, the type of a member is int
//param_9 = vPos.x, param_10 = vPos.y, param_11 = vPos.z
//param_13 = vScale.x, param_14 = vScale.y, param_15 = vScale.z
//param_16 = vVelocity.x, param_17 = vVelocity.y, param_18 = vVelocity.z

void CGameObjectInstance__Construct(
    CGameObjectInstance* pThis, int nObjIndex,
    uint32_t param_3, uint32_t param_4, uint32_t param_5, int param_6,
    uint32_t param_7, float RotY, CVector3 vPos, uint32_t param_12, 
    CVector3 vScale, CVector3 vVelocity
)
{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t* puVar6;
    int* piVar7;
    uint8_t unaff_s0;
    uint8_t unaff_s1;
    float in_stack_000003a3;
    float local_28;
    float local_24;
    float local_20;
    uint32_t local_1c;

    pThis->unk_0x144 &= 0xfffbffff;

    //FUN_8027de0c possibly returns the current number of CGameObjectInstances? TODO: Investigate address 0x8013dc70 and FUN_8027de0c (0x8013dc70 seems to be the global scene address)
    if (nObjIndex == -1) nObjIndex = FUN_8027de0c(0x8013dc70);
    if (nObjIndex == -1) return;

    //Possibly some sort of constructor? TODO: Investigate
    FUN_802331a0(pThis, nObjIndex, (uint8_t)param_3, (uint8_t)param_4, (char)local_28, (char)local_24, (char)local_20, (char)local_1c, unaff_s0, unaff_s1, in_stack_000003a3);

    pThis->m_Type = 1;
    pThis->m_nObjType = nObjIndex;
    pThis->unk_Pointer = param_5;
    pThis->unk_0x14 = param_7;
    pThis->m_RotY = RotY;
    pThis->m_vPos = vPos;
    pThis->unk_0x114 = param_12;
    pThis->m_vScale = vScale;
    pThis->m_vVelocity = vVelocity;
    pThis->unk_0xf8 = (short)param_3;

    FUN_8023b2f8(&stack0xffffffd8, pThis);

    CVector3__Construct(&pThis->m_Rot, local_20, local_24, local_28);
    pThis->unk_0x68 = local_1c; //The context of this implies that m_Rot is a Quaternion?
    pThis->unk_0x70 = 0;
    pThis->unk_0xfa = (short)0;
    pThis->unk_0x14c = (short)0;
    pThis->unk_end = 0xc7800074;

    FUN_8024fe1c();
    FUN_8024fe1c();
    FUN_80238c80(pThis, 0); //I think this sets the animation index? TODO: Investigate

    pThis->unk_0x114 &= 0xfffffbff | 0x2100;

    FUN_80262768();

    pThis->unk_0xb4 = (short)0;
    pThis->unk_0xc0 = 0;
    pThis->unk_0xbc = (uint8_t)0;
    pThis->unk_0x14f = 0;

    pThis->unk_0x114 |= 0x30000;

    nObjIndex = **(int **)(pThis->unk_Pointer);

    if (((nObjIndex == 0) || ((pThis->unk_0x114 & 1) != 0)) ||
    ((nObjIndex == 9 && (((*(int **)(pThis->unk_Pointer))[6] & 2U) != 0))))
    {
        pThis->unk_0x114 &= 0xfffdffff;
    }

    if ((**(uint32_t**)(pThis->unk_0x18) == 0xb) && (nObjIndex = 0, puVar6 = *(0x80164774), 0 < *(0x8016478c)))
    {
        do {
            if (puVar6 == pThis) return;
            nObjIndex += 1;
            puVar6 = puVar6 + 0x15f8;
        } while (iVar4 < *(0x8016478c));
    }

    FUN_802be224();

    (pThis->unk_0x1e8) = 0;

    if (param_6 == -1) {
        LAB_80033a3c:
        piVar7 = *(int **)(pThis->unk_0x18);
    }
    else {
        FUN_802c3780();
        piVar7 = *(int **)(pThis->unk_0x18);
        nObjIndex = *piVar7;
        if (nObjIndex != 1) goto LAB_80033a48;
        if ((piVar7[1] & 0x400000U) != 0) {
            pThis->unk_0x214 = 2;
            goto LAB_80033a3c;
        }
    }
    nObjIndex = *piVar7;
    
    LAB_80033a48:
    if ((nObjIndex == 0xd) && ((piVar7[6] & 4U) != 0)) *(uint32_t*)(pThis->unk_0x180) |= 0x800000;

    FUN_80233f24();
    nObjIndex = FUN_8023e9b0();
    *(int*)(pThis->unk_end) = nObjIndex << 10;
    if ((*(uint32_t*)(pThis->unk_0x114) & 8) != 0) {
        *(uint32_t*)(pThis->unk_0x2c4) = 0x23807c;
        uVar3 = *(0x80103334);
        uVar2 = *(0x80103330);
        uVar1 = *(0x8010332c);
        *(uint32_t*)(pThis->unk_0x150) = *(0x80103328);
        *(uint32_t*)(pThis->unk_0x154) = uVar1;
        *(uint32_t*)(pThis->unk_0x158) = uVar2;
        *(uint32_t*)(pThis->unk_0x15c) = uVar3;
        uVar1 = *(0x8010333c);
        *(uint8_t**)(pThis->unk_0x160) = PTR_*(0x80103338);
        *(uint32_t*)(pThis->unk_0x164) = uVar1;
        uVar3 = *(0x80103334);
        uVar2 = *(0x80103330);
        uVar1 = *(0x8010332c);
        *(uint32_t*)(pThis->unk_0x168) = *(0x80103328);
        *(uint32_t*)(pThis->unk_0x16c) = uVar1;
        *(uint32_t*)(pThis->unk_0x170) = uVar2;
        *(uint32_t*)(pThis->unk_0x174) = uVar3;
        uVar1 = *(0x8010333c);
        *(uint8_t**)(pThis->unk_0x178) = **(0x80103338);
        *(uint32_t*)(pThis->unk_0x17c) = uVar1;
    }
    iVar4 = 4;
    pThis = pThis + 0x10;
    do {
        *(uint32_t*)(pThis->unk_0x2a0) = 0;
        iVar4 = iVar4 + -1;
        pThis = pThis + -4;
    } while (-1 < iVar4);
    return;
}
```

