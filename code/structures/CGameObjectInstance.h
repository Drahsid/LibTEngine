#ifndef CGAMEOBJECTINSTANCE_H
#define CGAMEOBJECTINSTANCE_H

#include <min.h>
#include <gbi.h> //Lights1
#include "CVector3.h"
#include "CMtxF.h"
#include "CIntelligence.h"
#include "CAnimationState.h"
#include "CAnimationData.h"

typedef void(*updateFunc)(struct CGameObjectInstance*, CIntelligenceBase*, uint8_t*);

typedef struct
{
    /* 0x000 */ uint8_t m_Type;
    /* 0x001 */ uint8_t m_State;
    /* 0x002 */ int16_t pad;
    /* 0x004 */ uint16_t m_nObjType;
    /* 0x006 */ uint16_t unk_0x06;
    /* 0x008 */ CVector3 m_vPos;
    /* 0x014 */ void* unk_0x14;
    /* 0x018 */ CIntelligence* m_pIntelligence;
    /* 0x01C */ CVector3 m_vVelocity;
    /* 0x028 */ int unk_0x28[4];
    /* 0x038 */ uint32_t m_MoveFlags;
    /* 0x03C */ int unk_0x3C[5];
    /* 0x050 */ CVector3 m_vScale;
    /* 0x05C */ CVector3 m_Rot;
    /* 0x068 */ float m_Scale;
    /* 0x06C */ float m_RotY;
    /* 0x070 */ int unk_0x070;
    /* 0x074 */ CMtxF m_mfOrient;
    /* 0x0B4 */ Mtx* m_pmtDrawMtxs;
    /* 0x0B8 */ Mtx* m_pmtLastFrameDrawMtxs;
    /* 0x0BC */ int unk_0xBC;
    /* 0x0C0 */ CMtxF* m_pmtfShadow;
    /* 0x0C4 */ int unk_0xC4;
    /* 0x0C8 */ void* m_rpObjectHeader;
    /* 0x0CC */ void* m_rpUnkHeader;
    /* 0x0D0 */ void* m_rpGeometryHeader;
    /* 0x0D4 */ uint32_t m_UnkSize_0;
    /* 0x0D8 */ uint32_t m_rpGeometryHeaderSize;
    /* 0x0DC */ int unk_0xDC;
    /* 0x0E0 */ void* m_rpGeometry;
    /* 0x0E4 */ uint32_t m_GeometrySize;
    /* 0x0E8 */ void* m_rpUnk_0;
    /* 0x0EC */ uint32_t m_UnkSize_1;
    /* 0x0F0 */ void* m_rpUnk_1;
    /* 0x0F4 */ int unk_0x0F4;
    /* 0x0F8 */ void* m_rpAnims;
    /* 0x0FC */ CVector3 m_vMin;
    /* 0x108 */ CVector3 m_vMax;
    /* 0x114 */ void* m_ppUnk;
    /* 0x118 */ CAnimationState m_CurrentAnimation;
    /* 0x12C */ CAnimationState m_BlendAnimation;
    /* 0x140 */ int unk_0x140[4];
    /* 0x050 */ Lights1 m_Lights[2];
    /* 0x180 */ int unk_0x180[12];
    /* 0x1B0 */ CAnimationData* m_pCurrentAnimation;
    /* 0x1B4 */ int unk_0x1B4[5];
    /* 0x1C8 */ CVector3 m_vPosLastFrame;
    /* 0x1D4 */ CVector3 m_vDesiredPos;
    /* 0x1E0 */ float m_RotYLastFrame;
    /* 0x1E4 */ int unk_0x000;
    /* 0x1E8 */ CGameObjectInstance* m_pParent;
    /* 0x1EC */ int unk_0x1EC[21];
    /* 0x240 */ float m_AnimSpeed;
    /* 0x244 */ float m_ModeAnimSpeed;
    /* 0x248 */ int unk_0x248[30]
    /* 0x2C0 */ updateFunc m_pfStep;
    /* 0x2C4 */ updateFunc m_pfDraw;
    /* 0x2C8 */ updateFunc m_pfHurt;
    /* 0x2CC */ updateFunc m_pfCollision;
    /* 0x2D0 */ updateFunc m_pfHit;
    /* 0x2D4 */ updateFunc m_pfCalculateOrientationMatrix;
    /* 0x2D8 */ updateFunc m_pfEffects;
    /* 0x2DC */ int unk_0x2DC[35];
} CGameObjectInstance; /* sizeof =  0x368 */

#endif

