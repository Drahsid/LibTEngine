#ifndef CSHAKEAXIS_TYPE_H
#define CSHAKEAXIS_TYPE_H

#ifdef GAME_TUROK3
struct CShakeAxis;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ int m_Type;
	/* 0x04 */ float m_Shake;
	/* 0x08 */ float m_LastShake;
	/* 0x0C */ float m_Amp;
	/* 0x10 */ float m_Angle;
} CShakeAxis; /* sizeof = 0x14 */
#endif

#endif

