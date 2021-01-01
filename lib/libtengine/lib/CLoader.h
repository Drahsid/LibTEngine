#ifndef CLOADER_LIB_H
#define CLOADER_LIB_H

#include "types/CLoaderEntry.h"

extern CLoaderEntry* CLoader__AllocLoaderEntry(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoader__AllocLoaderEntry = 0x0024383C");
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

extern void CLoader__Construct(void* pThis, int ThreadID);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoader__Construct = 0x00243420");
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

extern void CLoader__DeallocLoaderEntry(void* pThis, CLoaderEntry* pEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoader__DeallocLoaderEntry = 0x002348A8");
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

extern void CLoader__LoadAsync(void* pThis, void* pAddress, int Length, void* pDest, void* pReplyQueue, void* pReplyMessage, int HighPriority);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoader__LoadAsync = 0x002435F4");
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

extern void CLoader__LoadSync(void* pThis, void* pAddress, int Length, void* pDest);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoader__LoadSync = 0x0024351C");
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

extern void CLoader__Main(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CLoader__Main = 0x0024371C");
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

