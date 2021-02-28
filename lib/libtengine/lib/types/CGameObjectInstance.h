#ifndef CGAMEOBJECTINSTANCE_TYPE_H
#define CGAMEOBJECTINSTANCE_TYPE_H

#include <inttypes.h>
#include "CVector3.h"
#include "CQuaternion.h"
#include "CMtxF.h"
#include "CInstanceHeader.h"
#include "CAnimationState.h"
#include "CAI.h"
#include <libultra/PR/gbi.h>

#ifdef GAME_TUROK3
typedef struct CGameObjectInstance_t {
    /* 0x000 */ CInstanceHeader header;
    /* 0x01C */ CVector3 m_vVelocity;
    /* 0x024 */ CVector3 m_vWaterDisplacement;
    /* 0x030 */ int unk_0x30;
    /* 0x034 */ int unk_0x34;
    /* 0x038 */ uint32_t m_MoveFlags;
    /* 0x03C */ int unk_0x3C[5];
    /* 0x050 */ CVector3 m_vScale;
    /* 0x05C */ CVector3 m_Rot;
    /* 0x068 */ float m_Scale;
    /* 0x06C */ float m_RotY;
    /* 0x070 */ int unk_0x070;
    /* 0x074 */ CMtxF m_mfOrient;
    /* 0x0B4 */ struct Mtx* m_pmtDrawMtxs;
    /* 0x0B8 */ struct Mtx* m_pmtLastFrameDrawMtxs;
    /* 0x0BC */ int unk_0xBC;
    /* 0x0C0 */ struct CMtxF* m_pmtfShadow;
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
    /* 0x140 */ int16_t m_BlendLength;
    /* 0x142 */ uint16_t _pad1;
    /* 0x144 */ float m_Blend;
    /* 0x148 */ float m_BlendPercent;
    /* 0x14C */ uint8_t m_BlendStart;
    /* 0x14D */ uint8_t m_BlendFinish;
    /* 0x14E */ uint8_t m_ShadowAlpha;
    /* 0x14F */ uint8_t m_ActiveSwooshes;
    /* 0x150 */ Lights1 m_Lights[2];
    /* 0x180 */ CAI m_AI;
    /* 0x360 */ int m_dwHotPointFlags;
    /* 0x364 */ int m_dwUniqueID;
} CGameObjectInstance; /* sizeof =  0x368 */

#endif

#ifdef GAME_TUROK2
typedef struct CGameObjectInstance_t {
    /* 0x000 */ CInstanceHeader header;
    /* 0x018 */ CVector3 m_vVelocity;
    /* 0x024 */ CVector3 m_vWaterDisplacement;
    /* 0x030 */ struct CGameObjectInstance_t* m_pInstanceBelow;
    /* 0x034 */ CVector3 m_vScale;
    /* 0x040 */ CQuaternion m_qGround;
    /* 0x050 */ float m_RotY;
    /* 0x054 */ float m_CollisionYOffset;
    /* 0x058 */ CMtxF m_mfOrient;
    /* 0x098 */ struct Mtx* m_pmtDrawMtxs;
    /* 0x09C */ struct Mtx* m_pmtLastFrameDrawMtxs;
    /* 0x0A0 */ struct CMtxF* m_pmfShadow;
    /* 0x0A4 */ void* m_rpObject;
    /* 0x0A8 */ void* m_rpAnims;
    /* 0x0AC */ void* m_rpGeometryHeader;
    /* 0x0B0 */ uint32_t m_rpObjectHeader;
    /* 0x0B4 */ uint32_t m_rpGeometryHeaderSize;
    /* 0x0B8 */ int16_t m_nTypeFlag;
    /* 0x0BA */ int16_t m_nAnims;
    /* 0x0BC */ CVector3 m_vMin;
    /* 0x0C8 */ CVector3 m_vMax;
    /* 0x0D4 */ int m_dwFlags;
    /* 0x0D8 */ CAnimationState m_CurrentAnimation;
    /* 0x0EC */ CAnimationState m_BlendAnimation;
    /* 0x100 */ int16_t m_BlendLength;
    /* 0x102 */ uint16_t _pad1;
    /* 0x104 */ float m_Blend;
    /* 0x108 */ float m_BlendPercent;
    /* 0x10C */ uint8_t m_BlendStart;
    /* 0x10D */ uint8_t m_BlendFinish;
    /* 0x10E */ uint8_t m_ShadowAlpha;
    /* 0x10F */ uint8_t m_ActiveSwooshes;
    /* 0x110 */ Lights1 m_Lights[2];
    /* 0x140 */ CAI m_AI;
    /* 0x27C */ int m_dwHotPointFlags;
    /* 0x280 */ int m_dwUniqueID;
    /* 0x284 */ int _pad2;
} CGameObjectInstance; /* sizeof = 0x288 */

#endif


#endif

