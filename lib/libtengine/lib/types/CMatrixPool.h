#ifndef CMATRIXPOOL_TYPE_H
#define CMATRIXPOOL_TYPE_H

// No version differences afaik
typedef struct {
    /* 0x00 */ struct Mtx* m_Matrices;
    /* 0x04 */ int m_nTotalDiv2;
    /* 0x08 */ int m_nFree;
    /* 0x0C */ struct Mtx* m_pmFree;
} CMatrixPool; /* sizeof = 0x10 */

#endif

