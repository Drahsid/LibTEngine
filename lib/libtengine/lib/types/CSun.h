#ifndef CSUN_TYPE_H
#define CSUN_TYPE_H

#include <inttypes.h>
#include "CSunFrameData.h"
#include "CVector3.h"

#ifdef GAME_TUROK3
struct CSun;
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x00 */ int m_nBuffer;
    /* 0x04 */ int m_nReceived;
    /* 0x08 */ float m_ScreenX;
    /* 0x0C */ float m_ScreenY;
    /* 0x10 */ float m_Opacity;
    /* 0x14 */ CVector3 m_vDir;
    /* 0x20 */ int m_Visible;
} CSun; /* sizeof = 0x24 */
#endif

#endif

