#ifndef CONSCREEN_LIB_H
#define CONSCREEN_LIB_H

#include <inttypes.h>
#include "types/COnScreen.h"

extern void COnScreen__Construct(struct COnScreen* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("COnScreen__Construct = 0x0040E140");
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

extern void COnScreen__DrawText(CString String, int nX, int nY, int Opacity, int centre, int shadow, float ScaleX, float ScaleY);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("COnScreen__DrawText = 0x0020C948");
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

extern void COnScreen__LevelStart(struct COnScreen* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("COnScreen__LevelStart = 0x0040E178");
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

extern void COnScreen__Reset(struct COnScreen* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("COnScreen__Reset = 0x0040E170");
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

extern void COnScreen__SetFontColor(int tr, int tg, int tb, int br, int bg, int bb);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("COnScreen__SetFontColor = 0x0020EFD0");
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

extern void COnScreen__SetFontScale(float XScale, float YScale);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("COnScreen__SetFontScale = 0x002D4668");
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

extern void COnScreen__SetFontIndex(int index);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("COnScreen__SetFontIndex = 0x0020C0F0");
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

