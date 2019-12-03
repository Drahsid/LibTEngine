# Turok 3 RAM Map

## Map

###### **Notes**

###### Values that begin with unk_ have not been cross referenced with CEngine source, and are thus unknown.

###### Joshua has a different base pointer; when I find it variables from the character struct will be displayed as offsets, where the individual character structs would be referenced.

| Address  | Type                 | Name                     | Description                                                  |
|----------|----------------------|--------------------------|--------------------------------------------------------------|
|0x8013D8B0| float                | refresh_rate             | Game speed and physics scale to this                         |
|0x801659CC| int                  | m_Difficulty             | Game difficulty. See: TODO                                   |
|0x8068F4DC| float                | unk_Yaw                  | Camera yaw in radians                                        |
|0x8068F4E4| CQuatern             | unk_Quat ***(?)***       | Quaternion rotation of the camera ***(?)***                  |
|0x806900CE| s16                  | m_RequestedWeapon(Josh)  | TODO: Get base pointers                                      |
|0x806901D0| float                | m_Speed                  | Character's forward speed                                    |
|0x806901D4| float                | m_SideSpeed              | Character's horizontal speed                                 |
|0x806901DC| float                | m_YVelLastFrame          | Backbuffer of y-axis velocity from prior frame               |
|0x806901E0| BOOL                 | m_bOnGround              | set to 0x04 when on ground                                   |
|0x806901E4| float                | m_BurstSpeed             | Character's forward 'burst' speed                            |
|0x806901E8| float                | m_BurstSideSpeed         | Character's horizontal 'burst' speed                         |
|0x806901EC| float                | m_BurstTimer             | Decreases to 0 while moving                                  |
|0x806901F0| float                | m_HandSide               | Used for climbing, alternates signs                          |
|0x806901F4| float                | m_TimeOffGround          | Total time off the ground, increases by 0.5 every game tick  |
|0x806901F8| CVector3             | m_vDesiredPos            | Desired position, used for collision.                        |
|0x80690204| CVector3             | m_vDesiredPos (Copy)     | Copy of m_vDesiredPos                                        |
|0x80690234| float                | m_DuckOffset             | Current negative ducking offset                              |
|0x80690238| BOOL                 | m_bDuckMode              | TRUE while ducking                                           |
|0x8069023C| float                | unk_yOffset              | Offset to view on Y axis                                     |
|0x80690240| CVector3             | m_vHeadRotOffset         | Rotation offset of character view in radians                 |
|0x8069024C| CVector3             | m_vHeadWobbleRotOffset   | Rotation offset of character view in radians                 |
|0x80690258| CVector3             | m_vEyeOffset             | Filtered Offset from bottom of instance?                     |
|0x80690264| CQuatern             | m_qGround                | Quaternion rotation of the current ground                    |
|0x80690278| float                | m_BreathAmp              | Breathing amplitude, resets shortly after stopped            |
|0x8069029C| s16                  | m_RequestedWeapon        | Weapon requested to be held. See: TODO                       |
|0x80690294| CVector3             | m_vWeaponFirePos         | World particle position for weapon                           |
|0x80690364| int                  | m_CrossHairMode          | Current crosshair mode. See: TODO                            |
|0x80690368| CVector3             | m_vOuterCrossHairPos     | World-to-screen position for outer bore crosshair            |
|0x80690374| CVector3             | m_vOuterCrossHairVel     | Velocity used by outer bore crosshair                        |
|0x80690380| CGameObjectInstance* | m_pCrossHairTarget       | Handle to target instance for bore weapons                   |
|0x80690384| int                  | m_SightIcon              | Screen icon                                                  |
|0x80690388| float                | m_SightIconFrame         | Frame counter for crosshair                                  |
|0x8069038C| CVector3             | m_vCrossHairPos          | World-to-screen position for bore crosshair                  |
|0x80690398| CVector3             | m_vCrossHairVel          | Velocity used by bore crosshair                              |
|0x806903B4| BOOL                 | m_SniperMode             | Zoom mode                                                    |
|0x806903B8| u32                  | unk_HasTarget            | Has target                                                   |
|0x806903C4| float                | m_ZoomBlend              | Current zoom blend                                           |
|0x806903C8| float                | m_TargetZoomBlend        | Target zoom blend                                            |



## Types, Enums, and Classes

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


### Classes

##### CVector3
```c
typedef struct CVector3_t
{
	float		x, y, z;
} CVector3;
```

##### CQuatern_t

```c
typedef struct CQuatern_t
{
	float		x, y, z, w;
} CQuatern;
```


