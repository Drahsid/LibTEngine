#ifndef CGAMECURVE_TYPE_H
#define CGAMECURVE_TYPE_H

// No version differences afaik
typedef struct {
	/* 0x00 */ struct CROMCurve* m_pROMCurve;
	/* 0x04 */ float m_Time;
	/* 0x08 */ float m_Value;
} CGameCurve; /* sizeof = 0x0C */

#endif

