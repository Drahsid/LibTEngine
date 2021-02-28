#ifndef CPLAYEROVERLAY_TYPE_H
#define CPLAYEROVERLAY_TYPE_H

#include "CVector3.h"
#include <libultra/PR/gbi.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ int m_ObjectType;
    /* 0x04 */ int m_DesiredObjectType;
    /* 0x08 */ void* m_rpObject;
    /* 0x0C */ Mtx m_mOrient[2];
    /* 0x8C */ CVector3 m_vScale;
    /* 0x98 */ CVector3 m_vRot;
    /* 0xA4 */ CVector3 m_vPos;
    /* 0xB0 */ int m_Mode;
    /* 0xB4 */ float m_ModeTime;
} CPlayerOverlay; /* sizeof = 0xB8 */

#endif

