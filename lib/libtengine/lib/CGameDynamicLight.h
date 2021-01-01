#ifndef CGAMEDYNAMICLIGHT_LIB_H
#define CGAMEDYNAMICLIGHT_LIB_H

extern void CGameDynamicLight__Construct(void* pThis)
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameDynamicLight__Construct = 0x00448A20");
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

