//if unspecified, the type of a member is int
//param_9 = vPos.x, param_10 = vPos.y, param_11 = vPos.z
//param_13 = vScale.x, param_14 = vScale.y, param_15 = vScale.z
//param_16 = vVelocity.x, param_17 = vVelocity.y, param_18 = vVelocity.z

#include <inttypes.h>
#include <CGameObjectInstance.h>
#include <CIntelligence.h>

void CGameObjectInstance__Construct(
    CGameObjectInstance* pThis, int nObjIndex,
    uint32_t draw_flags, uint32_t param_4, CIntelligence* intelligence, int param_6,
    void* unk_pointer, float RotY, CVector3 vPos, uint32_t flags,
    CVector3 vScale, CVector3 vVelocity
)
{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t* puVar6;
    int* piVar7;
    uint8_t unaff_s0;
    uint8_t unaff_s1;
    float in_stack_000003a3;
    float local_28;
    float local_24;
    float local_20;
    float scale;

    pThis->m_Flags &= 0xfffbffff;

    //FUN_8027de0c possibly returns the current number of CGameObjectInstances? TODO: Investigate address 0x8013dc70 and FUN_8027de0c (0x8013dc70 seems to be the global scene address)
    //FUN_8027de0c is some sort of binary search, though I cannot disassemble it 012E0C02
    if (nObjIndex == -1) nObjIndex = FUN_8027de0c(0x8013dc70);
    if (nObjIndex == -1) return;

    //Possibly some sort of constructor? TODO: Investigate
    FUN_802331a0(pThis, nObjIndex, draw_flags, (uint8_t)param_4, (char)local_28, (char)local_24, (char)local_20, scale, unaff_s0, unaff_s1, in_stack_000003a3);

    pThis->m_Type = 1;
    pThis->m_nObjType = nObjIndex;
    pThis->m_pIntelligence = intelligence;
    pThis->unk_0x14 = unk_pointer;
    pThis->m_RotY = RotY;
    pThis->m_vPos = vPos;
    pThis->m_Flags = flags;
    pThis->m_vScale = vScale;
    pThis->m_vVelocity = vVelocity;
    pThis->m_DrawFlags = (short)draw_flags;

    FUN_8023b2f8(&stack0xffffffd8, pThis);

    CVector3__Construct(&pThis->m_Rot, local_20, local_24, local_28);
    pThis->m_Scale = scale;
    pThis->unk_0x70 = 0;
    pThis->unk_0xfa = (short)0;
    pThis->unk_0x14c = (short)0;
    pThis->unk_0x364 = 0xc7800074;

    FUN_8024fe1c();
    FUN_8024fe1c();
    FUN_80238c80(pThis, 0); //I think this sets the animation index? TODO: Investigate

    pThis->m_Flags &= 0xfffffbff | 0x2100;

    FUN_80262768();

    pThis->unk_0xb4 = (short)0;
    pThis->unk_0xc0 = 0;
    pThis->unk_0xbc = (uint8_t)0;
    pThis->unk_0x14f = 0;

    pThis->m_Flags |= 0x30000;

    nObjIndex = **(int **)(pThis->m_pIntelligence);

    if (((nObjIndex == 0) || ((pThis->m_Flags & 1) != 0)) ||
    ((nObjIndex == 9 && (((*(int **)(pThis->m_pIntelligence))[6] & 2U) != 0))))
    {
        pThis->m_Flags &= 0xfffdffff;
    }

    if ((**(uint32_t**)(pThis->m_pIntelligence) == 0xb) && (nObjIndex = 0, puVar6 = *(0x80164774), 0 < *(0x8016478c)))
    {
        do {
            if (puVar6 == pThis) return;
            nObjIndex += 1;
            puVar6 = puVar6 + 0x15f8;
        } while (iVar4 < *(0x8016478c));
    }

    FUN_802be224();

    (pThis->m_pParent) = 0;

    if (param_6 == -1) {
        LAB_80033a3c:
        piVar7 = *(int **)(pThis->m_pIntelligence);
    }
    else {
        FUN_802c3780();
        piVar7 = *(int **)(pThis->m_pIntelligence);
        nObjIndex = *piVar7;
        if (nObjIndex != 1) goto LAB_80033a48;
        if ((piVar7[1] & 0x400000U) != 0) {
            pThis->unk_0x214 = 2;
            goto LAB_80033a3c;
        }
    }
    nObjIndex = *piVar7;

    LAB_80033a48:
    if ((nObjIndex == 0xd) && ((piVar7[6] & 4U) != 0)) *(uint32_t*)(pThis->unk_0x140) |= 0x800000;

    FUN_80233f24();
    nObjIndex = FUN_8023e9b0();
    *(int*)(pThis->unk_0x364) = nObjIndex << 10;
    if ((*(uint32_t*)(pThis->m_Flags) & 8) != 0) {
        *(uint32_t*)(pThis->unk_0x2c4) = 0x23807c;
        uVar3 = *(0x80103334);
        uVar2 = *(0x80103330);
        uVar1 = *(0x8010332c);
        *(uint32_t*)(pThis->unk_0x150) = *(0x80103328);
        *(uint32_t*)(pThis->unk_0x154) = uVar1;
        *(uint32_t*)(pThis->unk_0x158) = uVar2;
        *(uint32_t*)(pThis->unk_0x15c) = uVar3;
        uVar1 = *(0x8010333c);
        *(uint8_t**)(pThis->unk_0x160) = PTR_*(0x80103338);
        *(uint32_t*)(pThis->unk_0x164) = uVar1;
        uVar3 = *(0x80103334);
        uVar2 = *(0x80103330);
        uVar1 = *(0x8010332c);
        *(uint32_t*)(pThis->unk_0x168) = *(0x80103328);
        *(uint32_t*)(pThis->unk_0x16c) = uVar1;
        *(uint32_t*)(pThis->unk_0x170) = uVar2;
        *(uint32_t*)(pThis->unk_0x174) = uVar3;
        uVar1 = *(0x8010333c);
        *(uint8_t**)(pThis->unk_0x178) = **(0x80103338);
        *(uint32_t*)(pThis->unk_0x17c) = uVar1;
    }
    iVar4 = 4;
    pThis = pThis + 0x10;
    do {
        *(uint32_t*)(pThis->unk_0x2a0) = 0;
        iVar4 = iVar4 + -1;
        pThis = pThis + -4;
    } while (-1 < iVar4);
    return;
}
