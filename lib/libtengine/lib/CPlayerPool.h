#ifndef CPLAYERPOOL_LIB_H
#define CPLAYERPOOL_LIB_H

#include "types/CPlayerPool.h"

extern void CPlayerPool__AdvancePlayerWeapons(CPlayerPool* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayerPool__AdvancePlayerWeapons = 0x002D42CC");
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

extern void CPlayerPool__GetSinglePlayer(CPlayerPool* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayerPool__GetSinglePlayer = 0x002D52C8");
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

extern void CPlayerPool__LevelStart(CPlayerPool* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayerPool__LevelStart = 0x0044DAA8");
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

extern void CPlayerPool__NewGame(CPlayerPool* pThis, int nMaxPlayers);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayerPool__NewGame = 0x0044D598");
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

extern void CPlayerPool__PrepareForDraw(CPlayerPool* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CPlayerPool__PrepareForDraw = 0x002D4FB8");
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

