#ifndef CPLAYERPOOL_H
#define CPLAYERPOOL_H

#include <min.h>
#include "CPlayer.h"

typedef struct
{
    /* 0x00 */ uint32_t unk_0x00;
    /* 0x04 */ CPlayer* m_pPlayers[4];
    /* 0x14 */ int m_nPlayers;

    // TODO: structure
    /* 0x18 */ void* m_pFreeHead;
    /* 0x1C */ void* m_pFreeTail;
    /* 0x20 */ uint32_t m_nFreeTailOffset;
    /* 0x24 */ uint32_t m_nFreeHeadOffset;
    /* 0x28 */ uint32_t m_nNumFree;

    /* 0x2C */ void* m_pActiveHead;
    /* 0x30 */ void* m_pActiveTail;
    /* 0x34 */ uint32_t m_nActiveTailOffset;
    /* 0x38 */ uint32_t m_nActiveHeadOffset;
    /* 0x3C */ uint32_t m_nNumActive;

    /* 0x40 */ uint64_t unk_0x40;
} CPlayerPool; /* sizeof = 0x48 */

#endif

