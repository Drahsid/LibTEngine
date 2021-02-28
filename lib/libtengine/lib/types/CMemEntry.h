#ifndef CMEMENTRY_TYPE_H
#define CMEMENTRY_TYPE_H

#include <inttypes.h>

#ifdef GAME_TUROK3
typedef struct {
    /* 0x00 */ void* pData;
    /* 0x04 */ int Size;
    /* 0x08 */ uint32_t Flags;
    /* 0x0C */ int Age;
    /* 0x10 */ struct CCacheEntry* pCacheEntry;
    /* 0x14 */ struct CMemEntry_t* unk_0x14;
    /* 0x18 */ struct CMemEntry_t* unk_0x18;
    /* 0x1C */ struct CMemEntry_t* unk_0x1C;
} CMemEntry; /* sizeof = 0x20 */
#endif

#ifdef GAME_TUROK2
typedef struct CMemEntry_t {
    /* 0x00 */ void* pData;
    /* 0x04 */ int Size;
    /* 0x08 */ int nLocks;
    /* 0x0C */ uint32_t dwFlags;
    /* 0x10 */ int Age;
    /* 0x14 */ struct CCacheEntry* pCacheEntry;
    /* 0x18 */ struct CMemEntry_t* pLast;
    /* 0x1C */ struct CMemEntry_t* pNext;
    /* 0x20 */ struct CMemEntry_t* pPosLast;
    /* 0x24 */ struct CMemEntry_t* pPosNext;
} CMemEntry; /* sizeof = 0x28 */
#endif

#endif

