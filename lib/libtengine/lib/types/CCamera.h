#ifndef CCAMERA_TYPE_H
#define CCAMERA_TYPE_H

#include "../../../inttypes.h"
#include "CVector3.h"
#include "CMtxF.h"
#include "CQuaternion.h"
#include <libultra/PR/gbi.h> // Vp

typedef struct
{
	/* 0x00 */ float m_Width;
	/* 0x04 */ float m_Height;
	/* 0x08 */ float m_ScreenPosX;
	/* 0x0C */ float m_ScreenPosY;
} CCameraViewport; /* sizeof = 0x10 */

typedef struct {
    /* 0x00 */ int m_nType;
    /* 0x04 */ float m_RotY;
    /* 0x08 */ CVector3 m_vRotOffset;
    /* 0x14 */ CVector3 m_vPos;
    /* 0x20 */ float m_YPosOffset;
    /* 0x24 */ CQuaternion m_qGround;
    /* 0x34 */ void* unk_0x34;
    /* 0x38 */ float m_ZoomBlend;
    /* 0x3C */ float m_ZoomFov;
    /* 0x40 */ uint32_t m_VisBits;
} CCameraViewParams; /* sizeof = 0x44 */

// TODO: Needs a lot more investigation
typedef struct {
    /* 0x000 */ int unk_0x00[14];
    /* 0x014 */ int16_t m_Mode;
    /* 0x016 */ int16_t _pad_0x016;
    /* 0x018 */ float m_Time;
    /* 0x01C */ int16_t m_Stage; // Very interesting member organization here
    /* 0x01E */ int16_t _pad_0x018;
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

