# Turok 3 RAM Map

## Map

###### **Notes**

###### The game was compiled with O3
###### Values that begin with unk_ have not been cross referenced with CEngine source, and are thus unknown.

#### Character CPlayer pointers
These are the addresses for the player-character's data.
###### Joshua's has a different, but similar struct. Offsets for his struct are incorrect. This may be the case for Danielle vs Joseph; untested. Based on my observations, what I think happens is that Joshua's CPlayer structure is initialized during the opening cutscene, then trashed just before Danny or Joseph is choesn.
###### Starting addresses may be about 20 bytes off
| Address  | Character |
|----------|:----------|
|0x8068F450| Danielle  |
|0x8068F450| Joseph    |
|0x8068F290| Joshua    |


#### Character CCamera pointers
| Address  | Character |
|----------|:----------|
|0x80690A90| Danielle  |
|0x80690A90| Joseph    |
|0x806908D0| Joshua    |


| Address|Type|Name|Description|Character|
|----------|----------------------|--------------------------|--------------------------------------|-|
|0x80114974| u32                  | unk_CutsceneBlackBars    | Toggles black bars that are seen in cutscenes   |
|0x801149E0| int                  | screen_width             | Current X resolutuion                           |
|0x801149E4| int                  | screen_height            | Current Y resolutuion                           |
|0x801149E8| float                | unk_StretchX             | X stretch amount for the UI?                    |
|0x801149EC| float                | unk_StretchY             | Y stretch amount for the UI?                    |
|0x801149F0| int                  | video_mode               | Current video mode index                        |
|0x801149F4| int                  | old_mode                 | Last video mode index                           |
|0x801149F8| int                  | BlackoutCounter          | Time to black the screen, used when changing res|
|0x801149FC| int                  | filter                   | I think this toggles the filters?               |
|0x80114A00| int                  | unk_IsLowRes             | 1 when low-res                                  |
|0x80114A04| int                  | deflicker                | I think this toggles interlaced video?          |
|0x80114A08| int[2]               | nModes                   | Number of video modes for NTSC/PAL?             |
|0x80114A10| int[2][5][7]         | VideoVals                | Video settings for resolutions NTSC/PAL         |
|0x80114AB8| RenderParams[3]      | RenderVals               | RenderParams for each resolution option         |
|0x8013D8B0| float                | refresh_rate             | Game speed and physics scale to this            |
|0x801659B0| u8                   | m_bStereo                | Toggles stereo audio                            |
|0x801659B1| u8                   | m_MusicVolume            | Volume level of music                           |
|0x801659B2| u8                   | m_SfxVolume              | Volume level of sound effects                   |
|0x801659B2| u8                   | m_SpeechVolume           | Volume level of speech                          |
|0x801659BB| u8                   | unk_DeathmatchRadar      | Deathmatch Radar mode See: TODO                 |
|0x801659BC| u8                   | unk_video_mode           | Copy of video mode                              |
|0x801659C0| u32                  | unk_m_Mode               | Current game mode; probably a copy              |
|0x801659C4| u32                  | unk_unlockedSecrets      | Currently unlcoked cheats. Bitfield             |
|0x801659C8| u32                  | unk_Secrets              | Currently toggled cheats. Bitfield              |
|0x801659CC| int                  | m_Difficulty             | Game difficulty See: TODO                       |
|0x80165B10| u32                  | unk_DeathmatchMusic      | Deathmatch music?                               |
|0x80165B60| CString              | unk_CharacterName        | Character name? Player1                         |
|0x80166080| u8                   | unk_HorzSpeed            | Horizontal look-speed Player1                   |
|0x80166081| u8                   | unk_VertSpeed            | Vertical look-speed Player1                     |
|0x80166082| u16                  | unk_ControlStyle         | Current control style Player1                   |
|0x80166084| u8                   | unk_ReverseVert          | Toggles Reverse vertical look Player1           |
|0x80166085| u8                   | unk_LookSpring           | Toggles Look Spring Player1                     |
|0x80166086| u8                   | unk_AutoAim              | Toggles Auto Aim Player1                        |
|0x80166087| u8                   | unk_WeaponWheelSpeed     | Weapon Wheel Speed Player1                      |
|0x801660C7| u8                   | unk_Draw                 | When in game, setting to 1 stops rendering      |
|0x801660DF| u8                   | unk_RenderFlicker        | When changed, can flicker and unload the scene? |
|0x801660E8| float                | unk_Brightness           | Brightness level                                |
|0x801660EC| float                | unk_Volume               | Overall volume                                  |
|0x801660F7| u8                   | unk_IntroMode            | Has to do with the intro animations             |
|0x80166130| u32                  | unk_LagTimer             | Number of frames to lag the game for?           |
|0x8068F4DC| float                | unk_Yaw                  | Camera yaw in radians                           |
|0x8068F980| BOOL                 | m_bActive                | CPlayer | Joshua                                |
|0x8068F984| int                  | m_nController            | CPlayer | Joshua                                |
|0x8068F988| CPlayerOptions_t*    | m_pOptions               | CPlayer | Joshua                                |
|0x8068F98C| CCamera_t*           | m_pCamera                | CPlayer | Joshua                                |
|0x8068FB40| BOOL                 | m_bActive                | CPlayer | Danny/Joseph                          |
|0x8068FB44| int                  | m_nController            | CPlayer | Danny/Joseph                          |
|0x8068FB48| CPlayerOptions_t*    | m_pOptions               | CPlayer | Danny/Joseph                          |
|0x8068FB4C| CCamera_t*           | m_pCamera                | CPlayer | Danny/Joseph                          |
|0x806900CE| s16                  | m_RequestedWeapon        | CPlayer | Joshua                                |
|0x80690142| s16                  | m_Mode                   | CPlayer | Danny/Joseph                          |
|0x80690146| s16                  | m_ModeBefore             | CPlayer | Danny/Joseph                          |
|0x8069014A| s16                  | m_ModeLastFrame          | CPlayer | Danny/Joseph                          |
|0x8069014C| float                | m_ModeTime               | CPlayer | Danny/Joseph                          |
|0x80690150| u32                  | m_ModeLastFrameFlags     | CPlayer | Danny/Joseph                          |
|0x80690154| u32                  | m_ModeBeforeFlags        | CPlayer | Danny/Joseph                          |
|0x80690158| u32                  | m_ModeFlags              | CPlayer | Danny/Joseph                          |
|0x8069015C| BOOL                 | m_InSun                  | CPlayer | Danny/Joseph                          |
|0x80690160| float                | m_FrameIncrementScaled   | CPlayer | Danny/Joseph                          |
|0x806901D0| float                | m_Speed                  | CPlayer | Danny/Joseph                          |
|0x806901D4| float                | m_SideSpeed              | CPlayer | Danny/Joseph                          |
|0x806901D8| float                | m_TotalSpeed             | CPlayer | Danny/Joseph                          |
|0x806901DC| float                | m_YVelLastFrame          | CPlayer | Danny/Joseph                          |
|0x806901E0| BOOL                 | m_bOnGround              | CPlayer | Danny/Joseph                          |
|0x806901E4| float                | m_BurstSpeed             | CPlayer | Danny/Joseph                          |
|0x806901E8| float                | m_BurstSideSpeed         | CPlayer | Danny/Joseph                          |
|0x806901EC| float                | m_BurstTimer             | CPlayer | Danny/Joseph                          |
|0x806901F0| float                | m_HandSide               | CPlayer | Danny/Joseph                          |
|0x806901F4| float                | m_TimeOffGround          | CPlayer | Danny/Joseph                          |
|0x806901F8| CVector3             | m_vDesiredPos            | CPlayer | Danny/Joseph                          |
|0x80690204| CVector3             | m_vDesiredPos (Copy)     | CPlayer | Danny/Joseph                          |
|0x80690234| float                | m_DuckOffset             | CPlayer | Danny/Joseph                          |
|0x80690238| BOOL                 | m_bDuckMode              | CPlayer | Danny/Joseph                          |
|0x8069023C| float                | unk_yOffset              | CPlayer | Danny/Joseph                          |
|0x80690240| CVector3             | m_vHeadRotOffset         | CPlayer | Danny/Joseph                          |
|0x8069024C| CVector3             | m_vHeadWobbleRotOffset   | CPlayer | Danny/Joseph                          |
|0x80690258| CVector3             | m_vEyeOffset             | CPlayer | Danny/Joseph                          |
|0x80690278| float                | m_BreathAmp              | CPlayer | Danny/Joseph                          |
|0x8069028E| s16                  | m_RequestedWeapon        | CPlayer | Danny/Joseph                          |
|0x80690294| CVector3             | m_vWeaponFirePos         | CPlayer | Danny/Joseph                          |
|0x80690364| int                  | m_CrossHairMode          | CPlayer | Danny/Joseph                          |
|0x80690368| CVector3             | m_vOuterCrossHairPos     | CPlayer | Danny/Joseph                          |
|0x80690374| CVector3             | m_vOuterCrossHairVel     | CPlayer | Danny/Joseph                          |
|0x80690380| CGameObjectInstance* | m_pCrossHairTarget       | CPlayer | Danny/Joseph                          |
|0x80690384| int                  | m_SightIcon              | CPlayer | Danny/Joseph                          |
|0x80690388| float                | m_SightIconFrame         | CPlayer | Danny/Joseph                          |
|0x8069038C| CVector3             | m_vCrossHairPos          | CPlayer | Danny/Joseph                          |
|0x80690398| CVector3             | m_vCrossHairVel          | CPlayer | Danny/Joseph                          |
|0x806903B4| BOOL                 | m_SniperMode             | CPlayer | Danny/Joseph                          |
|0x806903B8| u32                  | unk_HasTarget            | CPlayer | Danny/Joseph                          |
|0x806903C4| float                | m_ZoomBlend              | CPlayer | Danny/Joseph                          |
|0x806903C8| float                | m_TargetZoomBlend        | CPlayer | Danny/Joseph                          |
|0x80690AC8| CVector3             | m_vPos                   | CCamera | Danny/Joseph                          |
|0x80690AD4| float                | unk_EyeHeight            | CCamera | Danny/Joseph                          |
|0x80690B10| float                | m_PixelXScale            | CCamera | Danny/Joseph                          |
|0x80690B14| float                | m_PixelYScale            | CCamera | Danny/Joseph                          |
|0x80690FC0| float                | m_Fov                    | CCamera | Danny/Joseph                          |
|0x80690FC4| float                | unk_m_Fov                | CCamera | Danny/Joseph                          |


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

#### unk_Difficulty
```c
enum unk_Difficulty {
    EASY = 0,
    MEDIUM = 1,
    HARD = 2,
    OBLIVION = 3
}
```

##### unk_WeaponId
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

##### unk_CrossHairModes
```c
//This seems to choose correlate to different graphics, and is not anything like a standard enum. Any int value fits
enum unk_CrossHairModes {
    NO_CROSSHAIR = 0,
    BORE_WEAPON = 710,
    BORE_WEAPON_FLASH = 711,
    DEFAULT = 730
}
```

##### unk_SightIcons
```c
//This seems to be incredibly similar to unk_CrossHairModes, but less specific
enum unk_SightIcons {
    NOT_BORE = -1,
    BORE_WEAPON = 810,
    BORE_WEAPON_FLASH = 811,
}
```

#### unk_Gamemodes
```c
enum unk_Gamemodes {
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

### Structs/Classes

##### CVector3
```c
typedef struct CVector3_t
{
	float		x, y, z;
} CVector3;
```

##### CQuatern
```c
typedef struct CQuatern_t
{
	float		x, y, z, w;
} CQuatern;
```

#### RenderParams
```c
typedef struct RenderParams_t
{
	BOOL filter;
	BOOL alias;
	BOOL edge_alias;
	BOOL inter;
	BOOL better;
} RenderParams;
```

##### CCamera
```c
typedef struct CCamera_t {
    CVector3 m_vPos; // 0x38; Current position of camera.
    float m_EyeYOffset; // 0x44; Vertical view offset, head height

    float m_PixelXScale; // 0x80; The viewport is distorted by this scale on the X axis
    float m_PixelYScale; // 0x84; The viewport is distorted by this scale on the Y axis

    float m_Fov; // 0x530; The field-of-view of the camera. Cannot go over 90, will zoom in
    float unk_Fov; // 0x534; Possibly weapon fov?
} CCamera;
```

##### CPlayer
```c
typedef struct CPlayer_t
{
    // 0x0 - 0x6F0; I know these are objects. One might be the character?
    CGameObjectInstance unk_Object;
    CGameObjectInstance unk_Object2;

    BOOL m_bActive; // 0x6F0; Player does not update when FALSE
    int m_nController; // 0x6F4; Controller to set on load
    struct CPlayerOptions_t* m_pOptions; // 0x6F8; Pointer to player options
    struct CCamera_t* m_pCamera; // 0x6FC; Pointer to current camera

    s16 m_Mode; // 0xCF2; Current mode
    s16 m_ModeBefore; // 0xCF6; Copy of mode before current mode
    s16 m_ModeLastFrame; // 0xCFA; Copy of mode from last frame
    float m_ModeTime; // 0xCFC; Current time in mode
    u32 m_ModeLastFrameFlags; // 0xD00; Copy of flags for mode from last frame
    u32 m_ModeBeforeFlags; // 0xD04; Copy of flags for mode that was before current mode
    u32 m_ModeFlags; // 0xD08; Current mode flags
    int unk; // 0xD0C; Probably a BOOL? Not sure what this does
    float m_FrameIncrementScaled; // 0xD10; Scaled timestep. Effects physics.

    float m_Speed; // 0xD80; Character's forward speed
    float m_SideSpeed; // 0xD84; Character's horizontal speed
    float m_TotalSpeed; // 0xD88; Character's absolute total speed
    float m_YVelLastFrame; // 0xD8C; Backbuffer of y-axis velocity from prior frame
    BOOL m_bOnGround; // 0xD90; set to 0x04 when on ground
    float m_BurstSpeed; // 0xD94; Character's forward 'burst' speed
    float m_BurstSideSpeed; // 0xD98; Character's horizontal 'burst' speed
    float m_BurstTimer; // 0xD9C; Decreases to 0 while moving
    float m_HandSide; // 0xDA0; Used for climbing, alternates signs
    float m_TimeOffGround; // 0xDA4; Total time off the ground
    CVector3 m_vDesiredPos; // 0xDA8; Desired position, used for collision
    CVector3 m_vDesiredPos2; // 0xDB4; Copy of m_vDesiredPos

    float m_DuckOffset; // 0xDE4; Current negative ducking offset
    BOOL m_bDuckMode; // 0xDE8; TRUE while ducking
    float unk_yOffset; // 0xDEC; Offset to view on Y axis
    CVector3 m_vHeadRotOffset; // 0xDF0; Rotation offset of character view in radians
    CVector3 m_vHeadWobbleRotOffset; // 0xDFC; Rotation offset of character view in radians
    CVector3 m_vEyeOffset; // 0xE08; Filtered Offset from bottom of instance?

    float m_BreathAmp; // 0xE28; Breathing amplitude, resets shortly after stopped
    
    s16 m_RequestedWeapon; // 0xE3E; Weapon requested to be held. See: TODO

    CVector3 m_vWeaponFirePos; // 0xE44; World particle position for weapon
    
    int m_CrossHairMode; // 0xF14; Current crosshair mode. See: TODO
    CVector3 m_vOuterCrossHairPos; // 0xF18; World-to-screen position for outer bore crosshair
    CVector3 m_vOuterCrossHairVel; // 0xF24; Velocity used by outer bore crosshair
    CGameObjectInstance* m_pCrossHairTarget; // 0xF30; Handle to target instance for bore weapons
    int m_SightIcon; // 0xF34; Screen icon
    int m_SightIconFrame; // 0xF38; Frame counter for crosshair
    CVector3 m_vCrossHairPos; // 0xF3C; World-to-screen position for bore crosshair
    CVector3 m_vCrossHairVel; // 0xF48; Velocity used by bore crosshair
    BOOL m_SniperMode; // 0xF64; Zoom mode
    BOOL unk_HasTarget; // 0xF68; Has target
    
    float m_ZoomBlend; // 0xF74; Current zoom blend
    float m_TargetZoomBlend; // 0xF78; Target zoom blend
} CPlayer;
```


