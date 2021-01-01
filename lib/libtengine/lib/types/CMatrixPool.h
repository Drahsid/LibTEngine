#ifndef CMATRIXPOOL_TYPE_H
#define CMATRIXPOOL_TYPE_H

#include "../../../inttypes.h"
#include "../../../libultra/PR/gbi.h"

typedef struct
{
 /* 0x00 */ Mtx* m_Matrices;
 /* 0x04 */ int m_nTotalDiv2;
 /* 0x08 */ int m_nFree;
 /* 0x0C */ Mtx* m_pmFree;
} CMatrixPool; /* sizeof = 0x10 */


#endif

