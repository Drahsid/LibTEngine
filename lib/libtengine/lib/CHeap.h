#ifndef CHEAP_LIB_H
#define CHEAP_LIB_H

#include "types/CHeap.h"

extern void* CHeap__Alloc(CHeap* pThis, uint32_t Length);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CHeap__Alloc = 0x00242B9C");
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

extern void* CHeap__AllocTop(CHeap* pThis, uint32_t Length);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CHeap__AllocTop = 0x00242CB0");
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

extern void CHeap__Construct(CHeap* pThis, void* pAddress, uint32_t Length);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CHeap__Construct = 0x00242B30");
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

extern void CHeap__Dealloc(CHeap* pThis, void* pAddress);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CHeap__Dealloc = 0x00242A10");
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

extern void CHeap__DeallocAll(CHeap* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CHeap__DeallocAll = 0x00242DA8");
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

// Not to be confused with Dealloc; this returns the total free mem in pTotal, and the sizeof the largest block in pLargest
extern void CHeap__FreeMem(CHeap* pThis, uint32_t* pTotal, uint32_t* pLargest);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CHeap__FreeMem = 0x00242DE8");
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

