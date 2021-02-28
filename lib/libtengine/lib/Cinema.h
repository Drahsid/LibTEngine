#ifndef CINEMA_LIB_H
#define CINEMA_LIB_H

extern int CinemaMoveHook(void);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CinemaMoveHook = 0x002327f8");
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

extern int CIN_PathPlaying(void);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CIN_PathPlaying = 0x0023272c");
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

extern int CIN_Playing(void);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CIN_Playing = 0x00232718");
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

extern void CIN_Update_Time(void);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CIN_Update_Time = 0x00231ddc");
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

