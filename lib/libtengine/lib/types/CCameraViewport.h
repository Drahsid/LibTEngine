#ifndef CCAMERAVIEWPORT_TYPE_H
#define CCAMERAVIEWPORT_TYPE_H

// No version differences afaik
typedef struct {
	/* 0x00 */ float m_Width;
	/* 0x04 */ float m_Height;
	/* 0x08 */ float m_ScreenPosX;
	/* 0x0C */ float m_ScreenPosY;
} CCameraViewport; /* sizeof = 0x10 */

#endif

