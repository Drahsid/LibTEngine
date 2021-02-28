#ifndef CSWOOSHEDGE_TYPE_H
#define CSWOOSHEDGE_TYPE_H

#include "CNode.h"
#include "CVector3.h"
#include <libultra/PR/gbi.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ CNode m_Node;
	/* 0x08 */ float m_LifeTime;
	/* 0x0C */ float m_TotalLifeTime;
	/* 0x10 */ CVector3 m_vTranslation;
	/* 0x1C */ CVector3 m_vScale;
	/* 0x28 */ Mtx m_mAlign[2];
	/* 0xA8 */ float m_uTexture;
	/* 0xAC */ float m_Dist;
	/* 0xB0 */ struct CParticle* m_pParticle;
	/* 0xB8 */ int _pad; // Explicit padding
} CSwooshEdge; /* sizeof = 0xB8 */

#endif

