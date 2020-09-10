#ifndef CCAMERA_H
#define CCAMERA_H

#include <min.h>
#include "CVector3.h"

// TODO: Needs a lot more investigation
typedef struct {
    /* 0x000 */ int unk_0x00[14];
    /* 0x038 */ CVector3 m_vPos;
    /* 0x03C */ int unk_0x3C[2];
    /* 0x044 */ float m_EyeYOffset; // Or "m_HeadHeight"
    /* 0x048 */ int unk_0x48[14];
    /* 0x080 */ float m_PixelXScale;
    /* 0x084 */ float m_PixelYScale;
    /* 0x088 */ int unk_0x88[298]; // Not sure if this and below is _actually_ on the camera struct, see TODO
    /* 0x530 */ float m_Fov; // Cannot go over 90, will zoom in
    /* 0x534 */ float m_unk_Fov;
    /* Pretty sure it doesn't here, or ended long ago, see TODO */
} CCamera; /* sizeof = TODO */


#endif

