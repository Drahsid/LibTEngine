#ifndef LIBTENGINE_H
#define LIBTENGINE_H

#ifndef GAME_TUROK3 || GAME_TUROK2
#warning "Only Turok 2 and Turok 3 are supported at this time!"
#endif

#ifndef RELEASE_US
#warning "Only US is supported at this time!"
#endif

#ifdef LIBTENGINE_INCLUDE_ALL_TYPES
#warning "Are you sure you want to include all types?"
#include "lib/types/AIFunc.h"
#include "lib/types/AnimInfo.h"
#include "lib/types/CActiveGridSection.h"
#include "lib/types/CActiveLink.h"
#include "lib/types/CAI.h"
#include "lib/types/CAIModeInfo.h"
#include "lib/types/CAmmo.h"
#include "lib/types/CAnimationState.h"
#include "lib/types/CAnimDrawInfo.h"
#include "lib/types/CAnimNodeInfo.h"
#include "lib/types/CAnimPool.h"
#include "lib/types/CBarrel.h"
#include "lib/types/CBarrelWeapon.h"
#include "lib/types/CBoundsRect.h"
#include "lib/types/CBulletHole.h"
#include "lib/types/CButton.h"
#include "lib/types/CCacheEntry.h"
#include "lib/types/CCamera.h"
#include "lib/types/CCameraPool.h"
#include "lib/types/CCameraText.h"
#include "lib/types/CCameraViewParams.h"
#include "lib/types/CCameraViewport.h"
#include "lib/types/CCollisionInfo.h"
#include "lib/types/CContState.h"
#include "lib/types/CDamageInfo.h"
#include "lib/types/CDLight.h"
#include "lib/types/CDynamicAnim.h"
#include "lib/types/CDynamicList.h"
#include "lib/types/CDynamicSimple.h"
#include "lib/types/CEngineApp.h"
#include "lib/types/CFrameData.h"
#include "lib/types/CFxSystem.h"
#include "lib/types/CFxTimer.h"
#include "lib/types/CGameCurve.h"
#include "lib/types/CGameDynamicLight.h"
#include "lib/types/CGameObjectInstance.h"
#include "lib/types/CGameRegion.h"
#include "lib/types/CGameRumble.h"
#include "lib/types/CGameSection.h"
#include "lib/types/CGameSimpleInstance.h"
#include "lib/types/CGameStaticInstance.h"
#include "lib/types/CGameStatus.h"
#include "lib/types/CHeap.h"
#include "lib/types/CHeapBlock.h"
#include "lib/types/CInstanceHeader.h"
#include "lib/types/CIntelligence.h"
#include "lib/types/CISet.h"
#include "lib/types/CList.h"
#include "lib/types/CLoaderEntry.h"
#include "lib/types/CLoopingSoundData.h"
#include "lib/types/CMap.h"
#include "lib/types/CMatrixPool.h"
#include "lib/types/CMemEntry.h"
#include "lib/types/CMenu.h"
#include "lib/types/CMenuPool.h"
#include "lib/types/CMtxF.h"
#include "lib/types/CNode.h"
#include "lib/types/CNodeList.h"
#include "lib/types/COnScreen.h"
#include "lib/types/COptions.h"
#include "lib/types/COverlay.h"
#include "lib/types/CParticle.h"
#include "lib/types/CParticleSystem.h"
#include "lib/types/CPathTrack.h"
#include "lib/types/CPlane.h"
#include "lib/types/CPlayer.h"
#include "lib/types/CPlayerContState.h"
#include "lib/types/CPlayerLoadSaveData.h"
#include "lib/types/CPlayerOptions.h"
#include "lib/types/CPlayerOverlay.h"
#include "lib/types/CPlayerPool.h"
#include "lib/types/CQuaternion.h"
#include "lib/types/CRandomShortPair.h"
#include "lib/types/CROMCorner.h"
#include "lib/types/CROMCurve.h"
#include "lib/types/CROMDynamicLight.h"
#include "lib/types/CROMHotPoint.h"
#include "lib/types/CROMInitialOrientation.h"
#include "lib/types/CROMLevel.h"
#include "lib/types/CROMLink.h"
#include "lib/types/CROMNode.h"
#include "lib/types/CROMNodeIndex.h"
#include "lib/types/CROMObjectInfo.h"
#include "lib/types/CROMParticle.h"
#include "lib/types/CROMParticleColor.h"
#include "lib/types/CROMParticleDir.h"
#include "lib/types/CROMParticleGeneral.h"
#include "lib/types/CROMParticleImpact.h"
#include "lib/types/CROMParticleOffset.h"
#include "lib/types/CROMParticlePhysics.h"
#include "lib/types/CROMParticleRot.h"
#include "lib/types/CROMParticleScale.h"
#include "lib/types/CROMParticleSineWave.h"
#include "lib/types/CROMRumble.h"
#include "lib/types/CROMSkyLayer.h"
#include "lib/types/CROMSwoosh.h"
#include "lib/types/CROMSwooshPoint.h"
#include "lib/types/CROMWarpPoint.h"
#include "lib/types/CRumblePool.h"
#include "lib/types/CScene.h"
#include "lib/types/CShake.h"
#include "lib/types/CShakeAxis.h"
#include "lib/types/CSimplePool.h"
#include "lib/types/CSkyLayer.h"
#include "lib/types/CSkySystem.h"
#include "lib/types/CSun.h"
#include "lib/types/CSunFrameData.h"
#include "lib/types/CSwoosh.h"
#include "lib/types/CSwooshEdge.h"
#include "lib/types/CUSet.h"
#include "lib/types/CVector3.h"
#include "lib/types/CVideoVals.h"
#include "lib/types/CWeapon.h"
#include "lib/types/CWeaponAmmoInfo.h"
#include "lib/types/CWeaponInfo.h"
#include "lib/types/health_helper.h"
#include "lib/types/RenderParams.h"
#endif

#ifdef LIBTENGINE_INCLUDE_ALL
#warning "Are you sure you want to include all of lib?"
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

// Globals
#include <inttypes.h>
#include "lib/types/CVideoVals.h"
#include "lib/types/RenderParams.h"
#include "lib/types/CHeap.h"
#include "lib/types/CEngineApp.h"
#include "lib/types/CScene.h"
#include "lib/types/CPlayerPool.h"
#include "lib/types/CCameraPool.h"

extern float refresh_rate_PAL;
extern float refresh_rate_NTSC;
extern float FRAME_FPS;
extern float frame_increment;
extern float time_scale_0;
extern float time_scale_1;
extern uint32_t bCutsceneBlackBars;
extern int nScreenWidth;
extern int nScreenHeight;
extern float stretchX;
extern float stretchY;
extern int nVideoMode;
extern int nOldVideoMode;
extern int nBlackoutCounter;
extern CVideoVals VideoValsNormal;
extern CVideoVals VideoValsHiRez;
extern CVideoVals VideoValsLetterbox;
extern RenderParams RenderVals[3];
extern CHeap GameHeap;
extern uint16_t controller_buttons_now;
extern int8_t joy_x_now;
extern int8_t joy_y_now;
extern float refresh_rate;
extern CEngineApp GameApp;
extern CScene GameScene;
extern CPlayerPool GamePlayerPool;
extern CCameraPool GameCameraPool;
extern float main_camera_time;

#ifdef GAME_TUROK3
#ifdef RELEASE_US
#include "turok3/release_us.h"
#endif
#endif

#ifdef GAME_TUROK2
#ifdef RELEASE_US
#include "turok2/release_us.h"
#endif
#endif



#endif

