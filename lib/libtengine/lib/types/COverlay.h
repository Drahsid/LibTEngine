#ifndef COVERLAY_TYPE_H
#define COVERLAY_TYPE_H

#ifdef GAME_TUROK3
struct COverlay;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ int m_bOnScreen;
	/* 0x04 */ int* m_pScript;
	/* 0x08 */ int m_Mode;
	/* 0x0C */ int m_Time;
	/* 0x10 */ float m_PositionX;
	/* 0x14 */ float m_PositionY;
	/* 0x18 */ float m_FinalX;
	/* 0x1C */ float m_FinalY;
	/* 0x20 */ float m_VelX;
	/* 0x24 */ float m_VelY;
	/* 0x28 */ float m_AccelX;
	/* 0x2C */ float m_AccelY;
	/* 0x30 */ float m_ZoomFactor;
	/* 0x34 */ float m_Alpha;
	/* 0x38 */ int m_Value;
} COverlay; /* sizeof = 0x3C */
#endif

#endif

