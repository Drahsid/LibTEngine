#ifndef CINTELLIGNECE_LIB_H
#define CINTELLIGENCE_LIB_H

#include "types/CIntelligence.h"

extern void AI_UpdateAnimation(CGameObjectInstance* pThis, void* pAI);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("AI_UpdateAnimation = 0x002beb4c");
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

