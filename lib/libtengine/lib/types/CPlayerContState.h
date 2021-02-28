#ifndef CPLAYERCONTSTATE_TYPE_H
#define CPLAYERCONTSTATE_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ float m_LookX;
    /* 0x04 */ float m_LookY;
    /* 0x08 */ float m_MoveX;
    /* 0x0C */ float m_MoveY;
    /* 0x10 */ struct CContState* m_pContState;
    /* 0x14 */ float m_FinalLookX;
    /* 0x18 */ float m_FinalLookY;
    /* 0x1C */ float m_FinalMoveX;
    /* 0x20 */ float m_FinalMoveY;
    /* 0x24 */ uint32_t m_dwButtons;
    /* 0x28 */ uint32_t m_dwButtonsSingle;
    /* 0x2C */ uint32_t m_dwButtonsSingleNoHold;
    /* 0x30 */ uint32_t m_dwButtonsDouble;
    /* 0x34 */ uint32_t m_dwButtonsRepeat;
} CPlayerContState; /* sizeof = 0x38 */

#endif

