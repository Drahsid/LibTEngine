#ifndef CRUMBLEPOOL_TYPE_H
#define CRUMBLEPOOL_TYPE_H

#include "CList.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CList m_RumbleFreeList;
	/* 0x14 */ CList m_RumbleActiveList;
	/* 0x28 */ float m_BaseSpeed;
} CRumblePool; /* sizeof = 0x2C */

#endif

