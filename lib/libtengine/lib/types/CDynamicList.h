#ifndef CDYNAMICLIST_TYPE_H
#define CDYNAMICLIST_TYPE_H

#include "CNodeList.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CNodeList m_FreeList;
	/* 0x0C */ CNodeList m_ActiveList;
} CDynamicList; /* sizeof = 0x18 */

#endif

