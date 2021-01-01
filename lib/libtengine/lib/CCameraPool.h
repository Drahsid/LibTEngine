#ifndef CCAMERAPOOL_LIB_H
#define CCAMERAPOOL_LIB_H

#include "../../inttypes.h"
#include "types/CCameraPool.h"
#include "types/CCamera.h"
#include "types/CScene.h"

extern void CCameraPool__AddMultiLineText(CCameraPool* pThis, CCamera* pCamera, CString pString, float Secs);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CCameraPool__AddMultiLineText = 0x00293614");
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_N4TKER18
#warning "This does not yet support N4TKER18!"
#elif RELEASE_N4TKER15
#warning "This does not yet support N4TKER15!"
#elif RELEASE_N4TKER10
#warning "This does not yet support N4TKER10!"
#elif RELEASE_N4TKER09
#warning "This does not yet support N4TKER09!"
#endif
#endif

extern void CCameraPool__AdvanceText(CCameraPool* pThis, CCamera* pCamera);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CCameraPool__AdvanceText = 0x00291794");
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_N4TKER18
#warning "This does not yet support N4TKER18!"
#elif RELEASE_N4TKER15
#warning "This does not yet support N4TKER15!"
#elif RELEASE_N4TKER10
#warning "This does not yet support N4TKER10!"
#elif RELEASE_N4TKER09
#warning "This does not yet support N4TKER09!"
#endif
#endif

extern void CCameraPool__DrawScene(CCameraPool* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CCameraPool__DrawScene = 0x0029094C");
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_N4TKER18
#warning "This does not yet support N4TKER18!"
#elif RELEASE_N4TKER15
#warning "This does not yet support N4TKER15!"
#elif RELEASE_N4TKER10
#warning "This does not yet support N4TKER10!"
#elif RELEASE_N4TKER09
#warning "This does not yet support N4TKER09!"
#endif
#endif

extern void CCameraPool__DrawTints(CCameraPool* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CCameraPool__DrawTints = 0x0029331c");
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_N4TKER18
#warning "This does not yet support N4TKER18!"
#elif RELEASE_N4TKER15
#warning "This does not yet support N4TKER15!"
#elif RELEASE_N4TKER10
#warning "This does not yet support N4TKER10!"
#elif RELEASE_N4TKER09
#warning "This does not yet support N4TKER09!"
#endif
#endif

extern void CCameraPool__NewGame(CCameraPool* pThis, int nMaxCameras);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CCameraPool__NewGame = 0x0044BFD8");
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_N4TKER18
#warning "This does not yet support N4TKER18!"
#elif RELEASE_N4TKER15
#warning "This does not yet support N4TKER15!"
#elif RELEASE_N4TKER10
#warning "This does not yet support N4TKER10!"
#elif RELEASE_N4TKER09
#warning "This does not yet support N4TKER09!"
#endif
#endif

extern void CCameraPool__Construct(CCameraPool* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CCameraPool__Construct = 0x0044C284");
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_N4TKER18
#warning "This does not yet support N4TKER18!"
#elif RELEASE_N4TKER15
#warning "This does not yet support N4TKER15!"
#elif RELEASE_N4TKER10
#warning "This does not yet support N4TKER10!"
#elif RELEASE_N4TKER09
#warning "This does not yet support N4TKER09!"
#endif
#endif

#endif

