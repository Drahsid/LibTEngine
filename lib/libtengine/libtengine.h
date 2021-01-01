#ifndef LIBTENGINE_H
#define LIBTENGINE_H

#ifndef GAME_TUROK3
#warning "Only Turok 3 is supported at this time!"
#endif

#ifndef RELEASE_US
#warning "Only US is supported at this time!"
#endif

#ifdef LIBTENGINE_INCLUDE_ALL_TYPES
#warning "Are you sure you want to include all types?"
#include "lib/types/CAnimationData.h"
#include "lib/types/CAnimationState.h"
#include "lib/types/CCamera.h"
#include "lib/types/CCameraPool.h"
#include "lib/types/CGameObjectInstance.h"
#include "lib/types/CHeap.h"
#include "lib/types/CIntelligence.h"
#include "lib/types/CLoaderEntry.h"
#include "lib/types/CMatrixPool.h"
#include "lib/types/CMtxF.h"
#include "lib/types/COptions.h"
#include "lib/types/CPlayer.h"
#include "lib/types/CPlayerOptions.h"
#include "lib/types/CPlayerPool.h"
#include "lib/types/CQuaternion.h"
#include "lib/types/CScene.h"
#include "lib/types/CVector3.h"
#include "lib/types/CVideoVals.h"
#include "lib/types/RenderParams.h"
#endif

#ifdef LIBTENGINE_INCLUDE_ALL
#warning "Are you sure you want to include everything?!"
#include "lib/CAnimationState.h"
#include "lib/CAnimPool.h"
#include "lib/CAudioWorld.h"
#include "lib/CCache.h"
#include "lib/CCamera.h"
#include "lib/CCameraPool.h"
#include "lib/CCameraText.h"
#include "lib/CCollisionInfo.h"
#include "lib/CCrash.h"
#include "lib/CDecompressor.h"
#include "lib/CEngineApp.h"
#include "lib/CFxSystem.h"
#include "lib/CGameDynamicLight.h"
#include "lib/CGameObjectInstance.h"
#include "lib/CGeometry.h"
#include "lib/CHashTable.h"
#include "lib/CHeap.h"
#include "lib/Cinema.h"
#include "lib/CIntelligence.h"
#include "lib/CISet.h"
#include "lib/clib.h"
#include "lib/CList.h"
#include "lib/CLoader.h"
#include "lib/CLoopingSoundPool.h"
#include "lib/CMatrixPool.h"
#include "lib/CMenuPool.h"
#include "lib/CMtxF.h"
#include "lib/CMutex.h"
#include "lib/COnScreen.h"
#include "lib/COptions.h"
#include "lib/CParticleSystem.h"
#include "lib/CPlayer.h"
#include "lib/CPlayerPool.h"
#include "lib/CQuaternion.h"
#include "lib/CScene.h"
#include "lib/CSelectionList.h"
#include "lib/CSimplePool.h"
#include "lib/CVector3.h"
#include "lib/generic.h"
#include "lib/libultra.h"
#include "lib/Sound.h"
#endif

#ifdef GAME_TUROK3
#ifdef RELEASE_US
#include "turok3/release_us.h"
#endif
#endif



#endif

