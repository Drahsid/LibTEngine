#ifndef COPTIONS_TYPE_H
#define COPTIONS_TYPE_H

#include "../../../inttypes.h"
#include "CPlayerOptions.h"

typedef struct
{
    /* 0x000 */ int unk_0x000[2];
    /* 0x008 */ char m_CharacterName[12];
    /* 0x014 */ int unk_0x014[62];
    /* 0x10C */ CMPPlayerOptions m_Player0MPOptions;
    /* 0x214 */ CMPPlayerOptions m_Player1MPOptions;
    /* 0x31C */ CMPPlayerOptions m_Player2MPOptions;
    /* 0x424 */ CMPPlayerOptions m_Player3MPOptions;
    /* 0x528 */ CPlayerControlOptions m_Player0ControlOptions;
    /* 0x530 */ CPlayerControlOptions m_Player1ControlOptions;
    /* 0x538 */ CPlayerControlOptions m_Player2ControlOptions;
    /* 0x540 */ CPlayerControlOptions m_Player3ControlOptions;
    /* 0x548 */ int unk_0x548[9];
    /* 0x56C */ uint8_t unk_0x56C[3];
    /* 0x56F */ uint8_t m_bDraw;
    /* 0x570 */ int unk_0x570[3];
    /* 0x57C */ float m_Time;
    /* 0x580 */ int unk_0x580;
    /* 0x584 */ uint8_t unk_0x584[3];
    /* 0x587 */ uint8_t m_RenderResetMode;
    /* 0x588 */ int unk_0x588[2];
    /* 0x590 */ float m_Brightness;
    /* 0x594 */ float m_Volume;
    /* 0x598 */ int unk_0x598;
    /* 0x59C */ uint8_t unk_0x59C[3];
    /* 0x59F */ uint8_t m_IntroResetMode;
    /* 0x5A0 */ int unk_0x5A0[14];
    /* 0x5D8 */ int m_nLagTimer;
    /* 0x5DC */ int unk_0x5DC[44];
    // Probably is more
} COptions; /* sizeof = TODO */


#endif