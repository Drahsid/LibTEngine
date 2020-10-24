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
#define pMsg (*((osMesg*)0x80139340))
#define nDisplayLists (*((int*)0x80166130))
#define nTotalFrameBuffers (*((uint32_t*)0x801149D0))
#define cfb_16 (((uint16_t*)0x80177660))
#define boot_signature = ((char*)0x800FFE10)
#define pFrameData ((void*)0x8013D3F0)

// A0 is pointer to the CEngineApp object, need to typedef this
void CEngineApp__Main(uint8_t* pThis)
{
    short msg_type;
    void* pFrameData_0;
    void* pFrameData_1;
    int index;

    InitializeSystemResources_800439F0();
    osCreateViManager_800E5380(0xFE);
    osViBlack_800E4DD0(TRUE);

    // if NTSC, goto this label. I thnk this is wrong? Does this ever run?
    if (((int*)0x80000300) - 1 == 0) {
        goto 0x800844EC;
    }

    CPool__Construct_80406044((uint8_t*)0x801775E0);
    CPool__AllocateStandardBuffers_80405c70((uint8_t*)0x801775E0);
    osViSwapBuffer_800E4E30();
    osViBlack_800E4dd0(FALSE);

    // If PAL then set refresh_rate to 50.0, otherwise 60.0
    if (*((int*)0x80000300) == 0) refresh_rate = *((float*)0x800FB0C0);
    else refresh_rate = *((float*)0x800FB0C4);

    pMsg = 0;

    nDisplayLists = 2;

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

    CEngineApp__Construct_80084208(pThis);

    index = 0;

    FUN_800199EC((void*)0x00287068); // looks like A1 is a function pointer, not sure what this does
    osSendMesg_800DDD50((uint8_t*)0x801282F0, 0xBEEFDEAD, 0);

    for (index = 0; index < nTotalFrameBuffers; index++) {
        memset_8001E500(((cfb_16[index], 0, nScreenWidth * nScreenHeight * 2);
    }

    // I am pretty confident that all of these are constructing individual game modules

    FUN_8044C284(pThis + 0x26F00);
    FUN_8044DA48(pThis + 0x26EB0);
    FUN_800291A0();

    index = FUN_80053338(0x18);

    *(int*)(pThis + 0x3AC) = index & 0x3fffffff; // This looks like it is setting the header of CScene

    FUN_8044BFD8(pThis + 0x26F00);
    FUN_8044D598(pThis + 0x26EB0);
    CScene__Construct_80449118((uint8_t *)0x8013DC70, *(uint8_t**)(pThis + 0x3AC));
    FUN_8006AEE0(pThis + 0x28854);

    if (*(int*)(0x80103281) == 0) FUN_804487A0();

    FUN_8040E140(pThis + 0x1D7E0);
    FUN_80405150();
    FUN_8041FBF8();
    FUN_800523A4();
    FUN_80085FC4(pThis, 2);

    while (TRUE) {
        osRecvMesg_800DDE80((void*)0x8013D3D0, &pMsg, 1);
        msg_type = pMsg->gen.type;

        switch(msg_type) {
            case 1:
                CEngineApp__Retrace_8008620C(pThis);
                break;
            case 2: // This is very odd behaviour?
                break;
            case 4:
                boot_signature[0] = 0;
                InitAllRumblePaks_80052414();
                EnableAllRumblePaks_8005245C();
                pThis[0x28824] = 1; // Fades to black
                CEngineApp__SetupFadeTo_80086058(pThis, 3);
                *((uint32_t*)(pThis + 0x28830)) = 1; // Tells the game we are resetting
                break;
        }

        pFrameData_0 = pThis;
        if (pMsg == (short*)(pThis + 0xF0)) {
            if (pMsg == (short*)(pThis + 0x228)) {
                pFrameData_1 = pThis + 0x138;
            }
            else {
                pFrameData_1 = pThis + 0x270;
                pFrameData_0 = pFrameData;

                if (pMsg != (pThis + 0x360)) goto label_0x800847C8;
            }

            pFrameData_0 = pFrameData_1;
        }

        label_0x800847C8:
        pFrameData = pFrameData_0;
        if ((*(int*)(pThis + 0x2881C)) == 3) {
            nDisplayLists++;
        }
        else {
            CEngineApp__Update_8008577C(pThis);
        }
    }
}