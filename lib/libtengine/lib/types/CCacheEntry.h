#ifndef CCACHEENTRY_TYPE_H
#define CCACHEENTRY_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef void (*pfnDecompressCallback)(void* pNotifyID, struct CCacheEntry* pCacheEntry);
typedef struct CCacheEntry_t {
    /* 0x00 */ struct CMemEntry* pMemEntry;
    /* 0x04 */ struct CMemEntry* pReferencedMemEntry;
    /* 0x08 */ void* pRequestID;
    /* 0x0C */ int RequestLength;
    /* 0x10 */ uint32_t dwFlags;
    /* 0x14 */ pfnDecompressCallback DecompressCallback;
    /* 0x18 */ void* pNotifyID;
    /* 0x1C */ uint32_t dwMemFlags;
    /* 0x20 */ struct OSMesgQueue* pDecompressReplyQueue;
    /* 0x24 */ struct CCacheEntry_t* pNext;
    /* 0x28 */ struct CCacheEntry_t* pLast;
} CCacheEntry; /* sizeof = 0x2C */

#endif

