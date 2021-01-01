#ifndef CFXSYSTEM_LIB_H
#define CFXSYSTEM_LIB_H

extern void CFxSystem__Construct(void* pThis)
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CFxSystem__Construct = 0x0040DA20");
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

