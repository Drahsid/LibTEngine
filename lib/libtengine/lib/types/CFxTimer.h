#ifndef CFXTIMER_TYPE_H
#define CFXTIMER_TYPE_H

#include "CNode.h"

// No version differences afaik
typedef void (*CFxTimerCallback)(struct CFxTimer_t* pThis);
typedef struct {
    /* 0x00 */ CNode m_Node;
    /* 0x08 */ float m_Time;
    /* 0x0C */ float m_Spacing;
    /* 0x10 */ int m_Count;
    /* 0x14 */ struct CGameObjectInstance* m_pInst;
    /* 0x18 */ CFxTimerCallback m_pfCallback;
} CFxTimer; /* sizeof = 0x1C */

#endif

