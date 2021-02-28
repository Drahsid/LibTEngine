#ifndef CROMOBJECTINFO_TYPE_H
#define CROMOBJECTINFO_TYPE_H

#ifdef GAME_TUROK3
struct CROMObjectInfo;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ CVector3 m_vMin;
	/* 0x0C */ CVector3 m_vMax;
	/* 0x18 */ int8_t m_HeadTrackStartNode;
	/* 0x19 */ int8_t m_HeadTrackEndNode;
	/* 0x1A */ int8_t m_HeadTrackFactor;
	/* 0x1B */ int8_t _pad;
	/* 0x1C */ uint16_t m_nVariation;
	/* 0x1E */ int16_t m_UnitScale;
} CROMObjectInfo; /* sizeof = 0x20 */
#endif

#endif

