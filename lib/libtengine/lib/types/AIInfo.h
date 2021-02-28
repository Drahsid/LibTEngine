#ifndef AIINFO_TYPE_H
#define AIINFO_TYPE_H

#include "../../../inttypes.h"
#include "CAnimationState.h"
#include "CVector3.h"

#ifdef GAME_TUROK3
struct CROMObjectInfo;
struct CROMNode;
struct CAnimDrawInfo;
struct CCollisionInfo;
struct CDamageInfo;
struct CAnimNodeInfo;
struct CAmmo;
struct CWeapon;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ CVector3 m_vMin;
	/* 0x0C */ CVector3 m_vMax;
	/* 0x18 */ int8_t m_HeadTrackStartNode;
	/* 0x19 */ int8_t m_HeadTrackEndNode;
	/* 0x1A */ int8_t m_HeadTrackFactor;
	/* 0x1B */ int8_t _pad;
	/* 0x1C */ uint16_t m_nVariation;
	/* 0x1E */ int16_t m_UnitScale;
} CROMObjectInfo; /* sizeof = 0x20 */

typedef struct {
	/* 0x00 */ CVector3 vBoundsCorners[8];
	/* 0x60 */ float m_MaxBounds;
	/* 0x64 */ int8_t m_ParentIndex;
	/* 0x65 */ uint8_t m_Symbol;
	/* 0x66 */ uint8_t m_MaterialType;
	/* 0x67 */ uint8_t _pad;
	/* 0x68 */ float m_DamageScaler;
	/* 0x6C */ int m_dwModelFlags;
} CROMNode; /* sizeof = 0x70 */

typedef struct {
	/* 0x00 */ int bDrawModel;
	/* 0x04 */ int bDrawShadow;
	/* 0x08 */ struct CCamera* pCamera;
	/* 0x0C */ struct CMemEntry* pmeGeometry;
	/* 0x10 */ struct CVector3* pvShadowOffset;
	/* 0x14 */ int nLOD;
	/* 0x18 */ int nModelIndex;
	/* 0x1C */ int nShadowModelIndex;
} CAnimDrawInfo; /* sizeof = 0x20 */

typedef struct {
	/* 0x00 */ int dwFlags;
	/* 0x04 */ int8_t InstanceBehavior;
	/* 0x05 */ int8_t WallBehavior;
	/* 0x06 */ int8_t GroundBehavior;
	/* 0x07 */ int8_t unusedpad;
	/* 0x08 */ float GravityAcceleration;
	/* 0x0C */ float BounceReturnEnergy;
	/* 0x10 */ float GroundFriction;
	/* 0x14 */ float AirFriction;
	/* 0x18 */ float WaterFriction;
} CCollisionInfo; /* sizeof = 0x1C */

typedef struct {
	/* 0x00 */ struct CInstanceHeader* m_pOrigin;
	/* 0x04 */ int m_Hits;
	/* 0x08 */ float m_Radius;
	/* 0x0C */ int m_dwAIDamageFlags;
	/* 0x10 */ struct CROMNode* m_pNode;
} CDamageInfo; /* sizeof = 0x14 */

typedef struct {
	/* 0x00 */ struct CGameObjectInstance* pThis;
	/* 0x04 */ struct Mtx* mStack;
	/* 0x08 */ struct CMtxF* mfStack;
	/* 0x0C */ struct CISet* pisNodes;
	/* 0x10 */ struct CISet* pisGeometry;
	/* 0x14 */ struct CROMObjectInfo* pROMObjectInfo;
	/* 0x18 */ struct CAnimationState* pGASCurrent;
	/* 0x1C */ struct CAnimationState* pGASBlend;
	/* 0x20 */ AnimInfo CurrentInfo;
	/* 0x44 */ AnimInfo BlendInfo;
	/* 0x68 */ int bRemoveRootXZ;
	/* 0x6C */ int bBlending;
	/* 0x70 */ int bSphericalBlend;
	/* 0x74 */ int bScaleHead;
	/* 0x78 */ int bScaleLeftFoot;
	/* 0x7C */ int bScaleRightFoot;
	/* 0x80 */ int bScaleLeftHand;
	/* 0x84 */ int bScaleRightHand;
	/* 0x88 */ int bScaleStick;
	/* 0x8C */ struct CROMNode* pROMNode;
	/* 0x90 */ int nNode;
} CAnimNodeInfo; /* sizeof = 0x94 */
#endif

#endif

