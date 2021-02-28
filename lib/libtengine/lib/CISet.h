#ifndef CISET_LIB_H
#define CISET_LIB_H

extern void* CISet__GetBlock(void* pISet, int nBlock);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CISet__GetBlock = 0x00232718");
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

// length returned in pLength, v0 is address of block
extern void* CISet__GetBlockAndSize(void* pISet, int nBlock, int* pLength);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CISet__GetBlockAndSize = 0x00282E78");
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

extern void* CISet__GetROMAddress(void* pISet, void* pBase, int nBlock);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CISet__GetROMAddress = 0x00282ED8");
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

// length returned in pLength, v0 is rom address
extern void* CISet__GetROMAddressAndSize(void* pISet, void* pBase, int nBlock, int* pLength);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CISet__GetROMAddressAndSize = 0x00282EEC");
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

