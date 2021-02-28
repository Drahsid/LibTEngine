#ifndef CBUTTON_TYPE_H
#define CBUTTON_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ int8_t m_SingleCount;
    /* 0x01 */ int8_t m_Time;
    /* 0x02 */ int8_t m_RepeatTime;
    /* 0x03 */ uint8_t m_HeldTime;
} CButton; /* sizeof = 0x04 */

#endif

