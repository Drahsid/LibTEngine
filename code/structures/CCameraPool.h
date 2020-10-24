#ifndef CCAMERAPOOL_H
#define CCAMERAPOOL_H

#include <min.h>
#include "CCamera.h"

typedef struct
{
    /* 0x00 */ void* unk_0x00;
    /* 0x04 */ void* unk_0x04;
    /* 0x08 */ int m_nCameras_0;
    /* 0x0C */ uint32_t unk_0x0C[5];
    /* 0x20 */ void* m_pHead;
    /* 0x24 */ void* m_pTail;
    /* 0x28 */ uint32_t unk_0x28[2];
    /* 0x30 */ int m_nCameras_1;
    /* 0x34 */ uint32_t unk_0x34[3];
    /* 0x40 */ CCamera m_MainCamera;
} CCameraPool; /* sizeof = 0x40 + CCamera(?) */


#endif
