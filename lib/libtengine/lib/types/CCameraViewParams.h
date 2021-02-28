#ifndef CCAMERAVIEWPARAMS_TYPE_H
#define CCAMERAVIEWPARAMS_TYPE_H

// TODO: These may be the same

#ifdef GAME_TUROK3
typedef struct {
    /* 0x00 */ int m_nType;
    /* 0x04 */ float m_RotY;
    /* 0x08 */ CVector3 m_vRotOffset;
    /* 0x14 */ CVector3 m_vPos;
    /* 0x20 */ float m_YPosOffset;
    /* 0x24 */ CQuaternion m_qGround;
    /* 0x34 */ void* unk_0x34;
    /* 0x38 */ float m_ZoomBlend;
    /* 0x3C */ float m_ZoomFov;
    /* 0x40 */ uint32_t m_VisBits;
} CCameraViewParams; /* sizeof = 0x44 */
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ int m_nType;
	/* 0x04 */ float m_RotY;
	/* 0x08 */ CVector3 m_vRotOffset;
	/* 0x14 */ CVector3 m_vPos;
	/* 0x20 */ float m_YPosOffset;
	/* 0x24 */ CQuaternion m_qGround;
	/* 0x34 */ struct CGameRegion* m_pCurrentRegion;
	/* 0x38 */ float m_ZoomBlend;
	/* 0x3C */ float m_ZoomFov;
	/* 0x40 */ uint32_t m_VisBits;
} CCameraViewParams; /* sizeof = 0x44 */
#endif

#endif

