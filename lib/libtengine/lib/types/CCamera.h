#ifndef CCAMERA_TYPE_H
#define CCAMERA_TYPE_H

#include <inttypes.h>
#include "CVector3.h"
#include "CQuaternion.h"
#include "CMtxF.h"
#include "CMenu.h"
#include "CMenuPool.h"
#include "CRumblePool.h"
#include "CSkySystem.h"
#include "CList.h"
#include "CPlane.h"
#include "CCameraViewport.h"
#include "CCameraViewParams.h"
#include "CShake.h"
#include <libultra/PR/gbi.h>

#ifdef GAME_TUROK3
// TODO: Needs a lot more investigation
typedef struct {
    /* 0x000 */ int unk_0x00[14];
    /* 0x014 */ int16_t m_Mode;
    /* 0x016 */ int16_t _pad0;
    /* 0x018 */ float m_Time;
    /* 0x01C */ int16_t m_Stage; // Very interesting member organization here
    /* 0x01E */ int16_t _pad1;
    /* 0x020 */ float m_StageTime;
    /* 0x024 */ CCameraViewParams m_ViewParams;
    /* 0x068 */ int unk_0x68[6];
    /* 0x080 */ float m_PixelXScale;
    /* 0x084 */ float m_PixelYScale;

    /* 0x088 */ int unk_0x88[29];

    /* 0x0FC */ int m_WarpMode;
    /* 0x100 */ float m_WarpTime;
    /* 0x104 */ CVector3 m_vWarpPos;
    /* 0x110 */ float m_WarpXScale;
    /* 0x114 */ float m_WarpYScale;
    /* 0x118 */ float m_WarpSpin;

    /* 0x11C */ int unk_0x11C[9];

    /* 0x140 */ CQuaternion m_qViewAlign;
    /* 0x150 */ CQuaternion m_qViewAlignNoZ;
    /* 0x160 */ CMtxF m_mfViewOrient;
    /* 0x1A0 */ CMtxF m_mfInverseViewOrient;
    /* 0x1E0 */ CMtxF m_mfProjection;
    /* 0x220 */ CMtxF m_mfView;
    /* 0x260 */ CVector3 m_vTCorners[5];
    /* 0x29C */ CCameraViewport m_Viewport;
    /* 0x2AC */ Vp m_vp[2];
    /* 0x2CC */ Vp m_vpSecondary[2];

    /* 0x2E0 */ int unk_0x2E0[148];

    /* 0x518 */ int m_nCurrentRegionSet;
    /* 0x51C */ float m_cRegionSetBlend;
    /* 0x520 */ uint8_t m_FogColor[4];
    /* 0x524 */ uint8_t m_LastFogColor[4];
    /* 0x528 */ float m_FarClip;
    /* 0x52C */ float m_LastFarClip;
    /* 0x530 */ float m_FieldOfView;
    /* 0x534 */ float m_LastFieldOfView;
    /* 0x538 */ float unk_0x538;
    /* 0x53C */ int m_FogStart;
    /* 0x540 */ int m_LastFogStart;

    /* 0x544 */ int unk_0x544[574];

    /* 0xE3C */ CMtxF m_mfFaceScreen;
    /* 0xE7C */ CMtxF m_mfFaceScreenYAxisUp;
} CCamera; /* sizeof = 0xEBC */

#endif

#ifdef GAME_TUROK2
typedef struct CCamera_t {
	/* 0x000 */ struct CCamera_t* m_pLast;
	/* 0x004 */ struct CCamera_t* m_pNext;
	/* 0x008 */ int m_Index;
	/* 0x00C */ float m_PixelXScale;
	/* 0x010 */ float m_PixelYScale;
	/* 0x014 */ int16_t m_Mode;
    /* 0x016 */ int16_t _pad0;
	/* 0x018 */ float m_Time;
	/* 0x01C */ int16_t m_Stage;
    /* 0x01E */ int16_t _pad1;
	/* 0x020 */ float m_StageTime;
	/* 0x024 */ CCameraViewParams m_ViewParams;
	/* 0x068 */ uint16_t m_PerspNorm;
    /* 0x06A */ int16_t _pad2;
	/* 0x06C */ float m_Fov;
    /* 0x070 */ float m_AspectRatio;
	/* 0x074 */ float m_XScale;
    /* 0x078 */ float m_YScale;
	/* 0x07C */ float m_WaterWobbleXScale;
    /* 0x080 */ float m_WaterWobbleYScale;
	/* 0x084 */ float m_WaterWobbleXAngle;
    /* 0x088 */ float m_WaterWobbleYAngle;
	/* 0x08C */ float m_WaterWobbleXSpeed;
    /* 0x090 */ float m_WaterWobbleYSpeed;
	/* 0x094 */ CShake m_Shake;
	/* 0x0E8 */ float m_TremorAngle;
    /* 0x0EC */ float m_TremorHeight;
	/* 0x0F0 */ int m_WarpMode;
	/* 0x0F4 */ float m_WarpTime;
	/* 0x0F8 */ CVector3 m_vWarpPos;
	/* 0x104 */ float m_WarpXScale;
	/* 0x108 */ float m_WarpYScale;
	/* 0x10C */ float m_WarpSpin;
	/* 0x110 */ int m_Flags;
	/* 0x114 */ CVector3 m_vPos;
	/* 0x120 */ CVector3 m_vRotation;
	/* 0x12C */ CQuaternion m_qViewAlign;
	/* 0x13C */ CQuaternion m_qViewAlignNoZ;
	/* 0x14C */ CMtxF m_mfViewOrient;
	/* 0x18C */ CMtxF m_mfInverseViewOrient;
	/* 0x1CC */ CMtxF m_mfProjection;
	/* 0x20C */ CMtxF m_mfView;
	/* 0x24C */ CVector3 m_vTCorners[5];
	/* 0x288 */ CCameraViewport m_Viewport;
	/* 0x298 */ Vp m_vp[2];
	/* 0x2B8 */ Vp m_vpSecondary[2];
	/* 0x2D8 */ CPlane m_ViewVolume[6];
	/* 0x338 */ CVector3 m_ViewMin;
	/* 0x344 */ CVector3 m_ViewMax;
	/* 0x350 */ CVector3 m_AnimMin;
	/* 0x35C */ CVector3 m_AnimMax;
	/* 0x368 */ Mtx m_mProjection[2];
	/* 0x3E8 */ LookAt m_LookAt[2];
	/* 0x428 */ uint16_t m_OnScreenPerspNorm;
    /* 0x42A */ uint16_t _pad3;
	/* 0x430 */ Mtx m_mOnScreenProjection[2];
	/* 0x4B0 */ LookAt m_mOnScreenLookAt[2];
	/* 0x4F0 */ int m_ScreenLeft;
	/* 0x4F4 */ int m_ScreenRight;
	/* 0x4F8 */ int m_ScreenTop;
	/* 0x4FC */ int m_ScreenBottom;
	/* 0x500 */ int m_nCurrentRegionSet;
	/* 0x504 */ float m_cRegionSetBlend;
	/* 0x508 */ uint8_t m_FogColor[4];
	/* 0x50C */ uint8_t m_LastFogColor[4];
	/* 0x510 */ float m_FarClip;
	/* 0x514 */ float m_LastFarClip;
	/* 0x518 */ float m_FieldOfView;
	/* 0x51C */ float m_LastFieldOfView;
	/* 0x520 */ float m_FlashTimer;
	/* 0x524 */ int m_FogStart;
	/* 0x528 */ int m_LastFogStart;
	/* 0x52C */ int m_FlashMode;
	/* 0x530 */ uint8_t m_Flash;
	/* 0x531 */ uint8_t m_FlashDec;
	/* 0x532 */ uint8_t m_MaxOpacity;
	/* 0x533 */ uint8_t m_AttackTime;
	/* 0x534 */ uint8_t m_SustainTime;
	/* 0x535 */ uint8_t m_DecayTime;
	/* 0x536 */ uint8_t m_FlashColor[4];
	/* 0x53A */ uint8_t m_UnderWater;
	/* 0x53C */ CMenuPool m_MenuPool;
	/* 0x554 */ int _pad4; // Explicit padding
	/* 0x558 */ CSkySystem m_SkySystem;
	/* 0xE28 */ CList m_ActiveTextList;
	/* 0xE3C */ CMtxF m_mfFaceScreen;
	/* 0xE7C */ CMtxF m_mfFaceScreenYAxisUp;
} CCamera; /* sizeof = 0xEC0 */

enum {
    FLASH_MODE_OFF = 0,
    FLASH_MODE_ATTACK,
    FLASH_MODE_SUSTAIN,
    FLASH_MODE_DECAY
};

#endif




#endif

