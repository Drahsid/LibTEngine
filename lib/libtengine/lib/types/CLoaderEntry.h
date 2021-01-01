#ifndef CLOADERENTRY_TYPE_H
#define CLOADERENTRY_TYPE_H

#include "../../../inttypes.h"

typedef struct CLoaderEntry_t {
    /* 0x00 */ void* m_pAddress;
    /* 0x04 */ void* m_pDest;
    /* 0x08 */ int m_nLength;
    /* 0x0C */ void* m_pReplyQueue;
    /* 0x10 */ void* m_pReplyMessage;
    /* 0x14 */ uint32_t m_dwFlags;
    /* 0x18 */ struct CLoaderEntry_t* m_pLast;
    /* 0x1C */ struct CLoaderEntry_t* m_pNext;
} CLoaderEntry; /* sizeof = 0x20 */

#endif
