#include <min.h>
#include <CPlayer.h>

// Main function starts at 800844a8

#define current_fields (*((uint32_t*)0x801661E0))
#define next_fields (*((uint32_t*)0x80166120))
#define next_l_fields (*((uint32_t*)0x80139350))
#define next_ll_fields (*((uint32_t*)0x80139360))
#define next_lll_fields (*((uint32_t*)0x80139370))
#define next_pending (*((uint32_t*)0x8013930))
#define current_waiting (*((uint32_t*)0x801393B0))
#define next_waiting (*((uint32_t*)0x801393C0))
#define current_finished (*((uint32_t*)0x80166180))
#define pCurrentFB (*((uint8_t**)0x801393A0))
#define pNextFB (*((uint8_t**)0x80139330))
#define nScreenWidth (*((int*)0x801149E0))
#define nScreenHeight (*((int*)0x801149E4))
#define refresh_rate (*((float*)0x80138B0))

// A0 is pointer to the CEngineApp object, need to typedef this
void CEngineApp__Main(uint8_t* pThis)
{
    CPlayer* pPlayer;
    int index;
    int stack[6];

    InitializeSystemResources_802439F0();
    osCreateViManager_802E5380();
    osViBlack_802E4DD0(TRUE);

    // if NTSC, goto this label. I thnk this is wrong? Does this ever run?
    if (((int*)0x80000300) - 1 == 0) {
        goto 0x802844EC;
    }

    CPool__Construct_80406044((uint8_t*)0x801775E0);
    CPool__AllocateStandardBuffers_80405C70((uint8_t*)0x801775E0);
    osViSwapBuffer_802E4E30();
    osViBlack_802E4DD0(FALSE);

    // If PAL then set refresh_rate to 50.0, otherwise 60.0
    if (*((int*)0x80000300) == 0) refresh_rate = *((float*)0x800FB0C0);
    else refresh_rate = *((float*)0x800FB0C4);

    *((int**)0x8013940) = 0; // Looks like this is the pointer to the current cfb
    pPlayer->m_pOptions->m_nLagTimer = 0; // In context, this doesn't seem right

    current_fields = 0;
    next_fields = 0;
    next_l_fields = 0;
    next_ll_fields = 0;
    next_lll_fields = 0;
    next_pending = 0;
    current_waiting = 0;
    next_waiting = 0;
    current_finished = 0;
    pCurrentFB = 0;
    pNextFB = 0;

    CEngineApp__Construct__80284208(pThis);

    FUN_802199EC((void*)0x00287068); // looks like A1 is a function pointer, not sure what this does
    osSendMesg_802DDD50((uint8_t*)0x801282F0, 0xBEEFDEAD, 0);

    // I think this clears the cfb
    for (index = 2; index < *((int*)0x801149D0); index++) {
        memset_0x8021E500(((uint16_t*)0x80177660)[index], 0, nScreenWidth * nScreenHeight * 2);
    }

    // I am pretty confident that all of these are constructing individual game modules

    FUN_8044C284(pThis + 0x26F00);
    FUN_8044DA48(pThis + 0x26EB0);
    FUN_80229054();

    index = FUN_8025338();

    *(int*)(pThis + 0x3AC) = index & 0x3fffffff; // This looks like it is setting the header of CScene

    FUN_8044BFD8(pThis + 0x26F00);
    FUN_8044D598(pThis + 0x26EB0);
    CScene__Construct_80449118((uint8_t *)0x8013DC70, *(uint8_t**)(pThis + 0x3AC));
    FUN_8026AEEE0(pThis + 0x28854);

    if (*(int*)(0x80103281) == 0) FUN_804487A0();

    FUN_8040E140(pThis + 0x1D7E0);
    FUN_80405150();
    FUN_8041FBF8();
    FUN_802523A4();
    FUN_80285FC4();

    FUN_802DDE80(*((int*)0x8013D3D0), *((int*)0x80139340));

    // This condition might be wrong, and I don't know how to interpret its disassembly
    if (*((int*)0x80149340) == 2) {
        pPlayer = pThis;
        // Inside some a nested if chain, pPlayer can get set to other values
    }
    else if (*((int*)0x80149340) < 3) {
        if (*((int*)0x80149340) == 1) {
            FUN_8028620C(pThis);
        }
    }
    else {
        if (*((int*)0x80149340) == 4) {
            *((uint8_t*)0x800FFE10) = 0;
            FUN_80252414();
            FUN_8025245C();
            pThis[0x28824] = 1;
            FUN_80286058();
            *(int*)(pThis + 0x28830) = 1;
        }
    }

    while (TRUE) {
        // TODO: reverse engineer this
    }
}