#ifndef CBULLETHOLE_TYPE_H
#define CBULLETHOLE_TYPE_H

#include <libultra/PR/gbi.h>

// No version differences afaik
typedef struct CBulletHole_t {
	/* 0x00 */ struct CBulletHole_t* m_pPrev;
	/* 0x04 */ struct CBulletHole_t* m_pNext;
	/* 0x08 */ Mtx m_mOrient;
	/* 0x48 */ struct CInstanceHeader* m_pInst;
	/* 0x4C */ int _pad; // Explicit paddding
} CBulletHole; /* 0x50 */

#endif

