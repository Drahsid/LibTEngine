#ifndef CLIST_TYPE_H
#define CLIST_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ void* m_pHead;
    /* 0x04 */ void* m_pTail;
	/* 0x08 */ uint32_t m_LastOffset;
    /* 0x0C */ uint32_t m_NextOffset;
	/* 0x10 */ uint32_t m_Size;
} CList; /* sizeof = 0x14 */

#endif

