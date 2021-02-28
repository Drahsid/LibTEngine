#ifndef CSWOOSH_TYPE_H
#define CSWOOSH_TYPE_H

#include <inttypes.h>
#include "CNode.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CNode m_Node;
	/* 0x08 */ struct CROMSwoosh* m_pROMSwoosh;
	/* 0x0C */ struct CROMHotPoint* m_pHotPoints;
	/* 0x10 */ struct CROMHotPoint* m_pEndHotPoints;
	/* 0x14 */ void* rpTextureSet;
	/* 0x18 */ uint32_t TextureSetSize;
	/* 0x1C */ void* m_pOwner;
	/* 0x20 */ int m_OwnerType;
	/* 0x24 */ float m_LifeTime;
	/* 0x28 */ float m_uCurrentTexture;
	/* 0x2C */ float m_cFrame;
	/* 0x30 */ float m_cFramePos;
	/* 0x34 */ int m_nTextureSet;
	/* 0x38 */ int m_nRandomFrame;
	/* 0x3C */ uint32_t m_dwFlags;
	/* 0x40 */ CNodeList m_EdgeList;
	/* 0x4C */ float m_Length;
	/* 0x50 */ int m_AddEdgeTime;
} CSwoosh; /* sizeof = 0x54 */

#endif

