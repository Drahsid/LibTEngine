#ifndef CISET_TYPE_H
#define CISET_TYPE_H

// Indexed Set
// No version differences afaik
typedef struct {
    /* 0x00 */ int m_BlockCount;
    /* 0x04 */ int m_Offset;
} CISet; /* sizeof = 0x8 */

#endif

