#ifndef AIFUNC_TYPE_H
#define AIFUNC_TYPE_H

#include "CMtxF.h"

typedef void(*stepFunc)(struct CGameObjectInstance* pThis, struct CAI* pAI);
typedef void(*drawFunc)(struct CGameObjectInstance* pThis, struct CAI* pAI, struct CAnimDrawInfo* pInfo);
typedef void(*hurtFunc)(struct CGameObjectInstance* pThis, struct CAI* pAI, struct CDamageInfo* pInfo);
typedef void(*collFunc)(struct CGameObjectInstance* pThis, struct CAI* pAI, struct CCollisionInfo* pCollInfo);
typedef void(*phitFunc)(struct CGameObjectInstance* pThis, struct CAI* pAI, struct CParticle* pParticle);
typedef void(*effxFunc)(CMtxF mfLocal, struct CAnimNodeInfo* pAnimNodeInfo);

#endif

