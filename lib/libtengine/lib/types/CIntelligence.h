#ifndef CINTELLIGENCE_TYPE_H
#define CINTELLIGENCE_TYPE_H

#include "../../../inttypes.h"

typedef struct {
    /* 0x00 */ int unk_0x00[6];
    /* 0x18 */ int m_flags_0;
    /* 0x1C */ uint32_t m_Health;
    /* 0x20 */ uint64_t m_DeathFlags;
} CIntelligenceBase; /* sizeof = 0x28 */

typedef struct {
    /* 0x00 */ CIntelligenceBase base;
    /* 0x28 */ float m_SpeedScale;
    /* 0x2C */ float m_JumpScale;
    //TODO: Needs more research
} CIntelligencePlayer; /* sizeof = TODO (Probably B0?) */

typedef struct {
    /* 0x00 */ CIntelligenceBase base;
    /* 0x28 */ float m_CollisionRadius;
    /* 0x2C */ float m_Scale;
    /* 0x30 */ float m_CollisionHeight;
    /* 0x34 */ float m_unk_Death;
    /* 0x38 */ float m_CollisionOffsetY;
    /* 0x3C */ float unk_0x3C;
    /* 0x40 */ float unk_0x40;
    /* 0x44 */ void* unk_0x44;
    /* 0x48 */ float unk_0x48;
    /* 0x4C */ uint32_t unk_0x4C[2];
    /* 0x54 */ float unk_0x54;
    /* 0x58 */ float m_SightRadius; // Unsure
    /* 0x5C */ float m_MeleeRadius; // Very Unsure
    /* 0x60 */ float unk_0x60;
    /* 0x64 */ float unk_0x64;
    /* 0x68 */ float m_AggressionRadius;
    /* 0x6C */ float unk_0x6C;
    /* 0x70 */ float unk_0x70;
    /* 0x74 */ uint64_t m_Flags_1;
    /* 0x7C */ uint32_t m_Flags_2;
    /* 0x80 */ uint64_t unk_0x80;
    /* 0x88 */ uint32_t unk_0x88[10];
} CIntelligenceEnemy; /* sizeof = B0 */

typedef struct
{
    union
    {
        CIntelligenceBase base;
        CIntelligencePlayer player;
        CIntelligenceEnemy enemy;
    };
} CIntelligence;


#endif

