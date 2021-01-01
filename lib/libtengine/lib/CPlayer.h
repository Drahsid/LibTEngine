#ifndef CPLAYER_LIB_H
#define CPLAYER_LIB_H

#include "types/CPlayer.h"

extern void CPlayer__HaltAllLoopingSounds(CPlayer* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayer__HaltAllLoopingSounds = 0x0044DDD4");
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

extern void CPlayer__LevelStart(CPlayer* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayer__LevelStart = 0x0044CD5C");
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

extern void CPlayer__LoadCharacterObjectType(CPlayer* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayer__LoadCharacterObjectType = 0x002D778C");
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

extern void CPlayer__SetDeathmatchIntelligence(CPlayer* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayer__SetDeathmatchIntelligence = 0x002D76B8");
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

