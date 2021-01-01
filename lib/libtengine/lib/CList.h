#ifndef CLIST_LIB_H
#define CLIST_LIB_H

#include "../../inttypes.h"

extern void CList__AddHead(void* pThis, void* pEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__AddHead = 0x00242E58");
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

extern void CList__AddTail(void* pThis, void* pEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__AddTail = 0x00242EB4");
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

extern void CList__Construct(void* pThis, uint32_t LastOffset, uint32_t NextOffset);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__Construct = 0x00242E40");
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

extern void CList__InsertAfter(void* pThis, void* pTarget, void* pNewEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__InsertAfter = 0x00242FC4");
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

extern void CList__InsertBefore(void* pThis, void* pTarget, void* pNewEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__InsertBefore = 0x00242F10");
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

extern void CList__Remove(void* pThis, void* pEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__Remove = 0x00243078");
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

extern void CList__RemoveHead(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__RemoveHead = 0x00243110");
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

extern void CList__RemoveTail(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CList__RemoveTail = 0x00243134");
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

