#ifndef CLOOPINGSOUNDPOOL_LIB_H
#define CLOOPINGSOUNDPOOL_LIB_H

extern void CLoopingSoundPool__Construct(void* pThis, void* pLoopingSoundDataVars, int nSounds);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoopingSoundPool__Construct = 0x00249EF8");
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

extern void CLoopingSoundPool__HaltAll(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoopingSoundPool__HaltAll = 0x0024A204");
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

extern void* GetLoopingSoundPool(void);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("GetLoopingSoundPool = 0x0024A284");
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

