#ifndef CPARTICLESYSTEM_LIB_H
#define CPARTICLESYSTEM_LIB_H

extern void CParticleSystem__Advance(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CParticleSystem__Advance = 0x00274744");
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

extern void CParticleSystem__Construct(void* pThis, void* pParticleData);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CParticleSystem__Construct = 0x00448D40");
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