#ifndef CAIMODEINFO_TYPE_H
#define CAIMODEINFO_TYPE_H

#include <inttypes.h>
#include "AIFunc.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ uint32_t m_Mode ;
	/* 0x04 */ stepFunc m_pSetupFunction;
	/* 0x08 */ stepFunc m_pAdvanceFunction;
	/* 0x0C */ struct CCollisionInfo* m_pCollInfo;
	/* 0x10 */ uint32_t m_Anim;
	/* 0x14 */ float m_AnimSpeed;
	/* 0x18 */ uint32_t m_AnimEndOffset;
	/* 0x1C */ uint32_t m_Flags;
} CAIModeInfo; /* sizeof = 0x20 */

#endif

