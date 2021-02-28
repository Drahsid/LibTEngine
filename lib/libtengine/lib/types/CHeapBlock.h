#ifndef CHEAPBLOCK_TYPE_H
#define CHEAPBLOCK_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct CHeapBlock_t {
	/* 0x00 */ struct CHeapBlock_t* pFreeLast;
    /* 0x04 */ struct CHeapBlock_t* pFreeNext;
    /* 0x08 */ struct CHeapBlock_t* pUsedLast;
    /* 0x0C */ struct CHeapBlock_t* pUsedNext;
	/* 0x10 */ uint32_t Used;
    /* 0x14 */ uint32_t Free;
} CHeapBlock; /* sizeof = 0x18 */

#endif

