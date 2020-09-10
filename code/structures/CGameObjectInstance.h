#ifndef CGAMEOBJECTINSTANCE_H
#define CGAMEOBJECTINSTANCE_H

#include <min.h>
#include "CVector3.h"
#include "CIntelligence.h"
#include "CAnimationState.h"
#include "CAnimationData.h"

typedef struct
{
    /* 0x000 */ uint8_t m_Type;
    /* 0x001 */ uint8_t m_State;
    /* 0x002 */ int16_t pad;
    /* 0x004 */ uint16_t m_nObjType;
    /* 0x006 */ uint16_t unk_0x06;
    /* 0x008 */ CVector3 m_vPos;
    /* 0x014 */ void* unk_0x14;
    /* 0x018 */ CIntelligenceBase* m_pIntelligence;
    /* 0x01C */ CVector3 m_vVelocity;
    /* 0x028 */ int unk_0x28[4];
    /* 0x038 */ uint32_t m_MoveFlags;
    /* 0x03C */ int unk_0x3C[5];
    /* 0x050 */ CVector3 m_vScale;
    /* 0x05C */ CVector3 m_Rot;
    /* 0x068 */ float m_Scale;
    /* 0x06C */ float m_RotY;
    /* 0x070 */ int unk_0x70[41];
    /* 0x114 */ uint32_t m_Flags;
    /* 0x118 */ CAnimationState m_CurrentAnimation;
    /* 0x12C */ CAnimationState m_BlendAnimation;
    /* 0x140 */ int unk_0x00[28];
    /* 0x1B0 */ CAnimationData* m_pCurrentAnimation;
    /* 0x1B4 */ int unk_0x1B4[13];
    /* 0x1E8 */ CGameObjectInstance* m_pParent;
    /* 0x1EC */ int unk_0x1EC[95];
} CGameObjectInstance; /* sizeof =  0x368 */

#endif

