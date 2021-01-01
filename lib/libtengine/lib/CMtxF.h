#ifndef CMTXF_LIB_H
#define CMTXF_LIB_H

#include "types/CMtxF.h"

extern void CMtxF__Identity(CMtxF mfThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CMtxF__Identity = 0x00262768");
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

extern void CMtxF__Rotate(CMtxF* mfThis, float Theta, float X, float Y, float Z)
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CMtxF__Rotate = 0x00262ca4");
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

