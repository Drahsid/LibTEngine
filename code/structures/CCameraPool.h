#ifndef CCAMERAPOOL_H
#define CCAMERAPOOL_H

#include <min.h>
#include "CCamera.h"

typedef struct
{
    void* unk_0x00;
    void* unk_0x04;
    int m_nCameras_0;
    uint32_t unk_0x0C[5];
    void* m_pHead;
    void* m_pTail;
    uint32_t unk_0x28[2];
    int m_nCameras_1;
    uint32_t unk_0x34[3];
    CCamera m_MainCamera;
} CCameraPool; /* sizeof = 0x40 + CCamera(?) */


#endif
