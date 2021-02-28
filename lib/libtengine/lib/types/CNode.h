#ifndef CNODE_TYPE_H
#define CNODE_TYPE_H

// No version differences afaik
typedef struct CNode_t {
	/* 0x00 */ struct CNode_t* m_pPrev;
	/* 0x04 */ struct CNode_t* m_pNext;
} CNode; /* sizeof = 0x8 */

#endif

