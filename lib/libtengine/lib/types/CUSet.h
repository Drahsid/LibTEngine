#ifndef CUSET_TYPE_H
#define CUSET_TYPE_H

// Unindexed Set
// No version differences afaik
typedef struct {
    /* 0x00 */ int m_BlockSize;
    /* 0x04 */ int m_BlockCount;
    /* 0x08 */ int m_Data;
} CUSet; /* sizeof = 0xC */

#endif

