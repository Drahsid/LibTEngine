#ifndef CSELECTIONLIST_LIB_H
#define CSELECTIONLIST_LIB_H

#include <inttypes.h>

extern void CSelectionList__ChooseItem(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CSelectionList__ChooseItem = 0x0026A9A8");
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

extern void CSelectionList__Construct(void* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CSelectionList__Construct = 0x0026A95C");
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

extern int CSelectionList_AddItem(void* pThis, int16_t Item, int16_t weight);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CSelectionList_AddItem = 0x0026a964");
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

extern void CSelectionList__AddItem(void* pThis, int16_t Item, int16_t weight);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CSelectionList__AddItem = 0x0026A964");
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

