#ifndef CGEOMETRY_LIB_H
#define CGEOMETRY_LIB_H

extern void CGeometry__Decompress(void* pVoid, void* pCacheEntry, int bAnimated, int bMorph);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGeometry__Decompress = 0x00259768");
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

extern void CGeometry__DecompressAnimatedObject(void* pVoid, void* pCacheEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGeometry__DecompressAnimatedObject = 0x0025DCAC");
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

extern void CGeometry__DecompressSimpleObject(void* pVoid, void* pCacheEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGeometry__DecompressSimpleObject = 0x0025DC8C");
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

extern void CGeometry__DecompressStaticObject(void* pVoid, void* pCacheEntry);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGeometry__DecompressStaticObject = 0x0025DC6C");
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

extern void CGeometry__ResetDrawModes(void);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGeometry__ResetDrawModes = 0x0025DDE8");
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

