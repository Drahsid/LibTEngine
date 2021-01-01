#ifndef CGAMEOBJECTINSTANCE_LIB_H
#define CGAMEOBJECTINSTANCE_LIB_H

#include "types/CGameObjectInstance.h"

extern void CGameObjectInstance__ChooseRandomAnim(CGameObjectInstance* pThis, void* pAnimList, int nSkipIndex);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__ChooseRandomAnim = 0x00238D5C");
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

extern void CGameObjectInstance__Construct(CGameObjectInstance* pThis, int nObjIndex, uint32_t unk_0, uint32_t unk_1, CIntelligence* pIntel, uint32_t unk_2, float RotY, CVector3 vPos, uint32_t dwFlags, CVector3 vScale, CVector3 vVelocity, int InstanceFlag);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__Construct = 0x00233770");
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

extern void CGameObjectInstance__LookupAIAnimType(CGameObjectInstance* pThis, int nType, int nSkipIndex);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__LookupAIAnimType = 0x00233D60");
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

extern void CGameObjectInstance__RestartAnim(CGameObjectInstance* pThis);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__RestartAnim = 0x00238CA0");
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

extern void CGameObjectInstance__SetDesiredAnim(CGameObjectInstance* pThis, int nAnim);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__SetDesiredAnim = 0x00238C80");
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

extern void CGameObjectInstance__SetDesiredAnimByIndex(CGameObjectInstance* pThis, int nAnim, int InterruptBlend);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__SetDesiredAnimByIndex = 0x00238D18");
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

extern void CGameObjectInstance__SetDesiredAnimByType(CGameObjectInstance* pThis, int nAnim, int InterruptBlend);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__SetDesiredAnimByType = 0x00238CC4");
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

extern void CGameObjectInstance__Draw_0(CGameObjectInstance* pThis, CIntelligence* pAI, uint8_t* pDrawInfo);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__Draw_0 = 0x00296F1C");
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

extern void CGameObjectInstance__Draw_1(CGameObjectInstance* pThis, CIntelligence* pAI, uint8_t* pDrawInfo);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__Draw_1 = 0x002C6788");
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

extern void CGameObjectInstance__Draw_2(CGameObjectInstance* pThis, CIntelligence* pAI, uint8_t* pDrawInfo);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__Draw_2 = 0x002C696C");
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

extern void CGameObjectInstance__Draw_Player(CGameObjectInstance* pThis, CIntelligence* pAI, uint8_t* pDrawInfo);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__Draw_Player = 0x00238EF0");
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

extern void CGameObjectInstance__Draw_Weapon(CGameObjectInstance* pThis, CIntelligence* pAI, uint8_t* pDrawInfo);
#ifdef GAME_TUROK3
#ifdef RELEASE_US
asm("CGameObjectInstance__Draw_Weapon = 0x002DA48C");
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

