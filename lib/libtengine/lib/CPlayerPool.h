#ifndef CPLAYERPOOL_LIB_H
#define CPLAYERPOOL_LIB_H

#include "types/CPlayerPool.h"

extern void CPlayerPool__AdvancePlayerWeapons(struct CPlayerPool* pThis);
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

#ifdef GAME_TUROK2
#ifdef RELEASE_US
#warning "This does not yet support US!"
#elif RELEASE_US11
#warning "This does not yet support US1.1!"
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_EX
#warning "This does not yet support EX!"
#elif RELEASE_GE
#warning "This does not yet support GE!"
#elif RELEASE_KIOSKUS
#warning "This does not yet support Kiosk US!"
#elif RELEASE_KIOSKEU
#warning "This does not yet support Kiosk EU!"
#endif
#endif

extern void CPlayerPool__GetSinglePlayer(struct CPlayerPool* pThis);
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

#ifdef GAME_TUROK2
#ifdef RELEASE_US
#warning "This does not yet support US!"
#elif RELEASE_US11
#warning "This does not yet support US1.1!"
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_EX
#warning "This does not yet support EX!"
#elif RELEASE_GE
#warning "This does not yet support GE!"
#elif RELEASE_KIOSKUS
#warning "This does not yet support Kiosk US!"
#elif RELEASE_KIOSKEU
#warning "This does not yet support Kiosk EU!"
#endif
#endif

extern void CPlayerPool__LevelStart(struct CPlayerPool* pThis);
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

#ifdef GAME_TUROK2
#ifdef RELEASE_US
#warning "This does not yet support US!"
#elif RELEASE_US11
#warning "This does not yet support US1.1!"
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_EX
#warning "This does not yet support EX!"
#elif RELEASE_GE
#warning "This does not yet support GE!"
#elif RELEASE_KIOSKUS
#warning "This does not yet support Kiosk US!"
#elif RELEASE_KIOSKEU
#warning "This does not yet support Kiosk EU!"
#endif
#endif

extern void CPlayerPool__NewGame(struct CPlayerPool* pThis, int nMaxPlayers);
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

#ifdef GAME_TUROK2
#ifdef RELEASE_US
#warning "This does not yet support US!"
#elif RELEASE_US11
#warning "This does not yet support US1.1!"
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_EX
#warning "This does not yet support EX!"
#elif RELEASE_GE
#warning "This does not yet support GE!"
#elif RELEASE_KIOSKUS
#warning "This does not yet support Kiosk US!"
#elif RELEASE_KIOSKEU
#warning "This does not yet support Kiosk EU!"
#endif
#endif

extern void CPlayerPool__PrepareForDraw(struct CPlayerPool* pThis);
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

#ifdef GAME_TUROK2
#ifdef RELEASE_US
#warning "This does not yet support US!"
#elif RELEASE_US11
#warning "This does not yet support US1.1!"
#elif RELEASE_EU
#warning "This does not yet support EU!"
#elif RELEASE_EX
#warning "This does not yet support EX!"
#elif RELEASE_GE
#warning "This does not yet support GE!"
#elif RELEASE_KIOSKUS
#warning "This does not yet support Kiosk US!"
#elif RELEASE_KIOSKEU
#warning "This does not yet support Kiosk EU!"
#endif
#endif

#endif

