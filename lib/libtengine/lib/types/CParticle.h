#ifndef CPARTICLE_TYPE_H
#define CPARTICLE_TYPE_H

#include <inttypes.h>
#include "CVector3.h"
#include "CInstanceHeader.h"
#include "CCollisionInfo.h"
#include <libultra/PR/gbi.h>

#ifdef GAME_TUROK3
typedef struct CParticle_t {
    /* 0x000 */ CInstanceHeader header;
    /* 0x01C */ CVector3 m_vVelocity;
    /* 0x028 */ int unk_0x28[72];
    /* 0x1F0 */ struct CList* m_pActiveList;
    /* 0x1F4 */ struct CParticle_t* m_pLast;
    /* 0x1F8 */ struct CParticle_t* m_pNext;
    /* 0x1FC */ struct CParticle_t* m_pDrawLast;
    /* 0x200 */ struct CParticle_t* m_pDrawNext;
    /* 0x204 */ int _pad;
} CParticle; /* sizeof = 0x208 */
#endif

#ifdef GAME_TUROK2
typedef struct CParticle_t {
    /* 0x000 */ CInstanceHeader header;
    /* 0x018 */ CVector3 m_vVelocity;
    /* 0x024 */ CVector3 m_vWaterDisplacement;
    /* 0x030 */ struct CInstanceHeader* m_pInstanceBelow;
    /* 0x034 */ CVector3 m_vLocalPos;
    /* 0x040 */ int m_dwFlags;
    /* 0x044 */ int _pad0; // putting this here explicitly, the compiler otherwise pads this because of Mtx?
    /* 0x048 */ Mtx m_mOrientation[2];
    /* 0x0C8 */ Lights1 m_Lights[2];
    /* 0x0F8 */ struct CROMParticle* m_rpParticle;
    /* 0x0FC */ void* rpTextureSet;
    /* 0x100 */ uint32_t TextureSetSize;
    /* 0x104 */ int m_dwSourceID;
    /* 0x108 */ struct CInstanceHeader* m_pParent;
    /* 0x10C */ struct CInstanceHeader* m_pSource;
    /* 0x110 */ int* m_pOwnerCount;
    /* 0x114 */ struct CInstanceHeader* m_pTarget;
    /* 0x118 */ struct CDLight* m_pDLight;
    /* 0x11C */ float m_cFrame;
    /* 0x120 */ float m_cFramePos;
    /* 0x124 */ float m_Framerate;
    /* 0x128 */ int16_t m_nFrames;
    /* 0x12A */ int8_t m_cAnimFrame;
    /* 0x12B */ int8_t m_nRandomFrame;
    /* 0x12C */ CVector3 m_vScale;
    /* 0x138 */ CVector3 m_vScaleInc;
    /* 0x144 */ CVector3 m_vLastPos;
    /* 0x150 */ CVector3 m_vDir;
    /* 0x15C */ CVector3 m_vRot;
    /* 0x168 */ CVector3 m_vRotInc;
    /* 0x174 */ float m_Alpha;
    /* 0x178 */ float m_XSineAngle;
    /* 0x17C */ float m_YSineAngle;
    /* 0x180 */ float m_XSineAngleInc;
    /* 0x184 */ float m_YSineAngleInc;
    /* 0x188 */ float m_XSineAmp;
    /* 0x18C */ float m_YSineAmp;
    /* 0x190 */ CCollisionInfo m_pCollInfo;
    /* 0x1AC */ int8_t m_Alignment;
    /* 0x1AD */ int8_t m_nCollisionNode;
    /* 0x1AE */ uint8_t m_StartWhiteColor[3];
    /* 0x1B1 */ uint8_t m_StartBlackColor[3];
    /* 0x1B4 */ uint8_t m_AlphaScaler;
    /* 0x1B5 */ uint8_t m_ActiveSwooshes;
    /* 0x1B6 */ uint16_t _pad1;
    /* 0x1B8 */ struct CLoopingSoundData* m_LoopingSound;
    /* 0x1BC */ float m_DamageScaler;
    /* 0x1C0 */ struct CList* m_pActiveList;
    /* 0x1C4 */ struct CParticle_t* m_pLast;
    /* 0x1C8 */ struct CParticle_t* m_pNext;
    /* 0x1CC */ struct CParticle_t* m_pDrawLast;
    /* 0x1D0 */ struct CParticle_t* m_pDrawNext;
    /* 0x1D4 */ int _pad2; // putting this here explicitly, the compiler otherwise pads this?
} CParticle; /* sizeof = 0x1D8 */
#endif

#endif

