#ifndef CROMSWOOSHPOINT_TYPE_H
#define CROMSWOOSHPOINT_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ uint32_t m_StartColor;
	/* 0x04 */ uint32_t m_EndColor;
	/* 0x08 */ uint16_t m_StartHotPointIndex;
	/* 0x0A */ uint16_t m_EndHotPointIndex;
} CROMSwooshPoint; /* sizeof = 0xC */

#endif

