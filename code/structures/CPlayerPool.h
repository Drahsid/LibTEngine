#ifndef CPLAYERPOOL_H
#define CPLAYERPOOL_H

#include <min.h>
#include "CPlayer.h"

typedef struct
{
    uint32_t unk_0x00;
    CPlayer* m_pPlayers[4];
    int m_nPlayers;

    // TODO: structure
    void* m_pFreeHead;
    void* m_pFreeTail;
    uint32_t m_nFreeTailOffset;
    uint32_t m_nFreeHeadOffset;
    uint32_t m_nNumFree;

    void* m_pActiveHead;
    void* m_pActiveTail;
    uint32_t m_nActiveTailOffset;
    uint32_t m_nActiveHeadOffset;
    uint32_t m_nNumActive;

    uint64_t unk_0x40;
} CPlayerPool; /* sizeof = 0x48 */

#endif

