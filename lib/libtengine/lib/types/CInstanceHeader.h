#ifndef CINSTANCEHEADER_TYPE_H
#define CINSTANCEHEADER_TYPE_H

#include <inttypes.h>
#include "CVector3.h"

#ifdef GAME_TUROK3
typedef struct {
    /* 0x000 */ uint8_t m_Type;
    /* 0x001 */ uint8_t m_State;
    /* 0x002 */ int16_t _pad0;
    /* 0x004 */ uint16_t m_nObjType;
    /* 0x006 */ uint16_t unk_0x06;
    /* 0x008 */ CVector3 m_vPos;
    /* 0x014 */ void* unk_0x14;
    /* 0x018 */ struct CIntelligence* m_pIntelligence;
} CInstanceHeader; /* sizeof = 0x1C */
#endif

#ifdef GAME_TUROK2
typedef struct {
    /*0x000 */ uint8_t m_Type;
    /*0x001 */ uint8_t _pad;
    /*0x002 */ uint16_t m_nObjType;
    /*0x004 */ CVector3 m_vPos;
    /*0x010 */ struct CGameRegion* m_pCurrentRegion;
    /*0x014 */ struct CIntelligence* m_pIntelligence;
} CInstanceHeader; /* sizeof = 0x18 */
#endif

#endif

