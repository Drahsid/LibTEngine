#ifndef CPARTICLESYSTEM_LIB_H
#define CPARTICLESYSTEM_LIB_H

#include "types/CParticleSystem.h"

extern void CParticleSystem__Advance(struct CParticleSystem* pThis);
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

extern void CParticleSystem__Construct(struct CParticleSystem* pThis, void* pParticleData);
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