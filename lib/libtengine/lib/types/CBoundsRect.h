#ifndef CBOUNDSRECT_TYPE_H
#define CBOUNDSRECT_TYPE_H

// No version differences afaik
typedef struct {
	/* 0x00 */ float m_MinX;
    /* 0x04 */ float m_MinZ;
	/* 0x08 */ float m_MaxX;
    /* 0x0C */ float m_MaxZ;
} CBoundsRect; /* sizeof = 0x10 */

#endif

