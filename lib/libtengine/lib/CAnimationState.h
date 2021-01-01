#ifndef CANIMATIONSTATE_LIB_H
#define CANIMATIONSTATE_LIB_H

#include "types/CAnimationState.h"
#include "types/CAnimationData.h"

// no, that is not a typo
extern void GAS_Construct(CAnimationState* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("GAS_Construct = 0x0024FE1C");
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

#define CAnimationState__Construct GAS_Construct

#endif

