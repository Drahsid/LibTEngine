#include <min.h>
#include <CVector3.h>

int main() {
    void (*CGameObjectInstance__Construct)(
        void* pThis, int nObjIndex,
        uint32_t param_3, uint32_t param_4, uint32_t param_5, int param_6,
        uint32_t param_7, float RotY, CVector3 vPos, uint32_t param_12,
        CVector3 vScale, CVector3 vVelocity);

    CGameObjectInstance__Construct = 0x00233770;

    CVector3 scale = {.x = 1.0f, .y = 1.0f, .z = 1.0f};
    CVector3 vel = {.x = 0.0f, .y = 0.0f, .z = 0.0f};
    CVector3 in_pos = {.x = 0.0f, .y = 0.0f, .z = 0.0f};

    uint8_t* m_pPlayer = (uint8_t*)(*((int*)(0x8013DDB4)));
    uint8_t* actor_object_heap = (uint8_t*)(*((int*)(0x8013DDA8)));
    int* numActors = (int*)(0x8013DDB0);

    for (int i = 0; i < 64; i++) {
        in_pos.x = 10 * i;
        CGameObjectInstance__Construct((actor_object_heap + (i * 368)),
        i, 0, 1, (*m_pPlayer + 0x18), 0, 0, 0, in_pos, 0, scale, vel);
    }
}
