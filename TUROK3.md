# Turok 3 RAM Map

## Map

###### **Notes**

###### The game was compiled with O3
###### Values that begin with unk_ have not been cross referenced with CEngine source, and are thus unknown.

#### Character CPlayer pointers
These are the addresses for the player-character's data.
###### Joshua's has a different, but similar struct. Offsets for his struct are incorrect. This may be the case for Danielle vs Joseph; untested. Based on my observations, what I think happens is that Joshua's CPlayer structure is initialized during the opening cutscene, then trashed just before Danny or Joseph is choesn.
| Address  | Character |
|----------|:----------|
|0x8068F470| Danielle  |
|0x8068F470| Joseph    |
|0x8068F2B0| Joshua    |


#### Character CCamera pointers
| Address  | Character |
|----------|:----------|
|0x80690A90| Danielle  |
|0x80690A90| Joseph    |
|0x806908D0| Joshua    |


| Address|Type|Name|Description|Character|
|----------|----------------------|--------------------------|--------------------------------------|-|
|0x80114974| u32                  | unk_CutsceneBlackBars    | Toggles black bars that are seen in cutscenes        |
|0x801149E0| int                  | screen_width             | Current X resolutuion                                |
|0x801149E4| int                  | screen_height            | Current Y resolutuion                                |
|0x801149E8| float                | unk_StretchX             | X stretch amount for the UI?                         |
|0x801149EC| float                | unk_StretchY             | Y stretch amount for the UI?                         |
|0x801149F0| int                  | video_mode               | Current video mode index                             |
|0x801149F4| int                  | old_mode                 | Last video mode index                                |
|0x801149F8| int                  | BlackoutCounter          | Time to black the screen, used when changing res     |
|0x801149FC| int                  | filter                   | I think this toggles the filters?                    |
|0x80114A00| int                  | unk_IsLowRes             | 1 when low-res                                       |
|0x80114A04| int                  | deflicker                | I think this toggles interlaced video?               |
|0x80114A08| int[2]               | nModes                   | Number of video modes for NTSC/PAL?                  |
|0x80114A10| int[2][5][7]         | VideoVals                | Video settings for resolutions NTSC/PAL              |
|0x80114AB8| RenderParams[3]      | RenderVals               | RenderParams for each resolution option              |
|0x8013D8B0| float                | refresh_rate             | Game speed and physics scale to this                 |
|0x801659B0| u8                   | m_bStereo                | Toggles stereo audio                                 |
|0x801659B1| u8                   | m_MusicVolume            | Volume level of music                                |
|0x801659B2| u8                   | m_SfxVolume              | Volume level of sound effects                        |
|0x801659B2| u8                   | m_SpeechVolume           | Volume level of speech                               |
|0x801659BB| u8                   | unk_DeathmatchRadar      | Deathmatch Radar mode See: TODO                      |
|0x801659BC| u8                   | unk_video_mode           | Copy of video mode                                   |
|0x801659C0| u32                  | unk_m_Mode               | Current game mode; probably a copy                   |
|0x801659C4| u32                  | unk_unlockedSecrets      | Currently unlcoked cheats. Bitfield                  |
|0x801659C8| u32                  | unk_Secrets              | Currently toggled cheats. Bitfield                   |
|0x801659CC| int                  | m_Difficulty             | Game difficulty See [unk_Difficulty](#difficulty)    |
|0x80165B10| u32                  | unk_DeathmatchMusic      | Deathmatch music?                                    |
|0x80165B60| CString              | unk_CharacterName        | Character name? Player1                              |
|0x80166080| u8                   | unk_HorzSpeed            | Horizontal look-speed Player1                        |
|0x80166081| u8                   | unk_VertSpeed            | Vertical look-speed Player1                          |
|0x80166082| u16                  | unk_ControlStyle         | Current control style Player1                        |
|0x80166084| u8                   | unk_ReverseVert          | Toggles Reverse vertical look Player1                |
|0x80166085| u8                   | unk_LookSpring           | Toggles Look Spring Player1                          |
|0x80166086| u8                   | unk_AutoAim              | Toggles Auto Aim Player1                             |
|0x80166087| u8                   | unk_WeaponWheelSpeed     | Weapon Wheel Speed Player1                           |
|0x801660C7| u8                   | unk_Draw                 | When in game, setting to 1 stops rendering           |
|0x801660DF| u8                   | unk_RenderFlicker        | When changed, can flicker and unload the scene?      |
|0x801660E8| float                | unk_Brightness           | Brightness level                                     |
|0x801660EC| float                | unk_Volume               | Overall volume                                       |
|0x801660F7| u8                   | unk_IntroMode            | Has to do with the intro animations                  |
|0x80166130| u32                  | unk_LagTimer             | Number of frames to lag the game for?                |
|0x8068F2B0| CPlayer              | unk_m_pPlayer            | [CPlayer](#player) | Joshua                          |
|0x8068F470| CPlayer              | unk_m_pPlayer            | [CPlayer](#player) | Danny/Joseph                    |
|0x8068F470| CGameObjectInstance  | ca                       | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F478| CVector3             | m_vCurrent               | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F488| void*                | unk_Pointer              | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F48C| CVector3             | m_vVelocity              | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F4C0| CVector3             | m_vScale                 | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F4CC| CVector3             | m_Rot                    | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F4D8| float                | unk_m_vScale1            | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F4DC| float                | m_RotY                   | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F7D8| CGameObjectInstance  | wa                       | [CGameObjectInstance](#gameobject) | Danny/Joseph    |
|0x8068F980| BOOL                 | m_bActive                | [CPlayer](#player) | Joshua                          |
|0x8068F984| int                  | m_nController            | [CPlayer](#player) | Joshua                          |
|0x8068F988| CPlayerOptions_t*    | m_pOptions               | [CPlayer](#player) | Joshua                          |
|0x8068F98C| CCamera_t*           | m_pCamera                | [CPlayer](#player) | Joshua                          |
|0x8068FB40| BOOL                 | m_bActive                | [CPlayer](#player) | Danny/Joseph                    |
|0x8068FB44| int                  | m_nController            | [CPlayer](#player) | Danny/Joseph                    |
|0x8068FB48| CPlayerOptions_t*    | m_pOptions               | [CPlayer](#player) | Danny/Joseph                    |
|0x8068FB4C| CCamera_t*           | m_pCamera                | [CPlayer](#player) | Danny/Joseph                    |
|0x806900CE| s16                  | m_RequestedWeapon        | [CPlayer](#player) | Joshua                          |
|0x80690142| s16                  | m_Mode                   | [CPlayer](#player) | Danny/Joseph                    |
|0x80690146| s16                  | m_ModeBefore             | [CPlayer](#player) | Danny/Joseph                    |
|0x8069014A| s16                  | m_ModeLastFrame          | [CPlayer](#player) | Danny/Joseph                    |
|0x8069014C| float                | m_ModeTime               | [CPlayer](#player) | Danny/Joseph                    |
|0x80690150| u32                  | m_ModeLastFrameFlags     | [CPlayer](#player) | Danny/Joseph                    |
|0x80690154| u32                  | m_ModeBeforeFlags        | [CPlayer](#player) | Danny/Joseph                    |
|0x80690158| u32                  | m_ModeFlags              | [CPlayer](#player) | Danny/Joseph                    |
|0x8069015C| BOOL                 | m_InSun                  | [CPlayer](#player) | Danny/Joseph                    |
|0x80690160| float                | m_FrameIncrementScaled   | [CPlayer](#player) | Danny/Joseph                    |
|0x806901D0| float                | m_Speed                  | [CPlayer](#player) | Danny/Joseph                    |
|0x806901D4| float                | m_SideSpeed              | [CPlayer](#player) | Danny/Joseph                    |
|0x806901D8| float                | m_TotalSpeed             | [CPlayer](#player) | Danny/Joseph                    |
|0x806901DC| float                | m_YVelLastFrame          | [CPlayer](#player) | Danny/Joseph                    |
|0x806901E0| BOOL                 | m_bOnGround              | [CPlayer](#player) | Danny/Joseph                    |
|0x806901E4| float                | m_BurstSpeed             | [CPlayer](#player) | Danny/Joseph                    |
|0x806901E8| float                | m_BurstSideSpeed         | [CPlayer](#player) | Danny/Joseph                    |
|0x806901EC| float                | m_BurstTimer             | [CPlayer](#player) | Danny/Joseph                    |
|0x806901F0| float                | m_HandSide               | [CPlayer](#player) | Danny/Joseph                    |
|0x806901F4| float                | m_TimeOffGround          | [CPlayer](#player) | Danny/Joseph                    |
|0x806901F8| CVector3             | m_vDesiredPos            | [CPlayer](#player) | Danny/Joseph                    |
|0x80690204| CVector3             | m_vDesiredPos (Copy)     | [CPlayer](#player) | Danny/Joseph                    |
|0x80690234| float                | m_DuckOffset             | [CPlayer](#player) | Danny/Joseph                    |
|0x80690238| BOOL                 | m_bDuckMode              | [CPlayer](#player) | Danny/Joseph                    |
|0x8069023C| float                | unk_yOffset              | [CPlayer](#player) | Danny/Joseph                    |
|0x80690240| CVector3             | m_vHeadRotOffset         | [CPlayer](#player) | Danny/Joseph                    |
|0x8069024C| CVector3             | m_vHeadWobbleRotOffset   | [CPlayer](#player) | Danny/Joseph                    |
|0x80690258| CVector3             | m_vEyeOffset             | [CPlayer](#player) | Danny/Joseph                    |
|0x80690278| float                | m_BreathAmp              | [CPlayer](#player) | Danny/Joseph                    |
|0x8069028E| s16                  | m_RequestedWeapon        | [CPlayer](#player) | Danny/Joseph                    |
|0x80690294| CVector3             | m_vWeaponFirePos         | [CPlayer](#player) | Danny/Joseph                    |
|0x80690364| int                  | m_CrossHairMode          | [CPlayer](#player) | Danny/Joseph                    |
|0x80690368| CVector3             | m_vOuterCrossHairPos     | [CPlayer](#player) | Danny/Joseph                    |
|0x80690374| CVector3             | m_vOuterCrossHairVel     | [CPlayer](#player) | Danny/Joseph                    |
|0x80690380| CGameObjectInstance* | m_pCrossHairTarget       | [CPlayer](#player) | Danny/Joseph                    |
|0x80690384| int                  | m_SightIcon              | [CPlayer](#player) | Danny/Joseph                    |
|0x80690388| float                | m_SightIconFrame         | [CPlayer](#player) | Danny/Joseph                    |
|0x8069038C| CVector3             | m_vCrossHairPos          | [CPlayer](#player) | Danny/Joseph                    |
|0x80690398| CVector3             | m_vCrossHairVel          | [CPlayer](#player) | Danny/Joseph                    |
|0x806903B4| BOOL                 | m_SniperMode             | [CPlayer](#player) | Danny/Joseph                    |
|0x806903B8| u32                  | unk_HasTarget            | [CPlayer](#player) | Danny/Joseph                    |
|0x806903C4| float                | m_ZoomBlend              | [CPlayer](#player) | Danny/Joseph                    |
|0x806903C8| float                | m_TargetZoomBlend        | [CPlayer](#player) | Danny/Joseph                    |
|0x80690AC8| CVector3             | m_vPos                   | [CCamera](#camera) | Danny/Joseph                    |
|0x80690AD4| float                | unk_EyeHeight            | [CCamera](#camera) | Danny/Joseph                    |
|0x80690B10| float                | m_PixelXScale            | [CCamera](#camera) | Danny/Joseph                    |
|0x80690B14| float                | m_PixelYScale            | [CCamera](#camera) | Danny/Joseph                    |
|0x80690FC0| float                | m_Fov                    | [CCamera](#camera) | Danny/Joseph                    |
|0x80690FC4| float                | unk_m_Fov                | [CCamera](#camera) | Danny/Joseph                    |


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

##### unk_CrossHairModes <a name="chairmodes"></a>
```c
//This seems to choose correlate to different graphics, and is not anything like a standard enum. Any int value fits
enum unk_CrossHairModes {
    NO_CROSSHAIR = 0,
    BORE_WEAPON = 710,
    BORE_WEAPON_FLASH = 711,
    DEFAULT = 730
}
```

##### unk_SightIcons <a name="sighticons"></a>
```c
//This seems to be incredibly similar to unk_CrossHairModes, but less specific
enum unk_SightIcons {
    NOT_BORE = -1,
    BORE_WEAPON = 810,
    BORE_WEAPON_FLASH = 811,
}
```

#### unk_Gamemodes <a name="gamemodes"></a>
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
    int PADDING; // 0x04; Just padding
    CVector3 m_vPos; // 0x08; Position of the object
    void* unk_Pointer; // 0x18; Pointer to something, not sure what this is for
    CVector3 m_vVelocity; // 0x1C; Velocity of the object. This seems to be separate from the velocity used for the player character
    CVector3 m_vScale; // 0x50; Scale of the object
    CVector3 m_Rot; // 0x5C; Rotation of the object. This seems to be separate from the actual rotation in the player character
    float unk_m_vScale1; // 0x68; XYZ scale of the object. scales with m_vScale
    float m_RotY; // 0x6C; Yaw rotation of the object
    int unk_end; // 0x364; just so I can remember the sizeof: 0x368
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



