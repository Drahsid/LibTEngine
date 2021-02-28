#ifndef CHEAP_TYPE_H
#define CHEAP_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ uint32_t MemStart;
    /* 0x04 */ uint32_t MemEnd;
	/* 0x08 */ struct CHeapBlock* pFreeHead;
    /* 0x0C */ struct CHeapBlock* pFreeTail;
    /* 0x10 */ struct CHeapBlock* pUsedHead;
} CHeap; /* sizeof = 0x14 */

#endif

