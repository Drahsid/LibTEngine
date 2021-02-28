#ifndef CNODELIST_TYPE_H
#define CNODELIST_TYPE_H

// No version differences afaik
typedef struct {
	/* 0x00 */ struct CNode* m_pHead;
	/* 0x04 */ struct CNode* m_pTail;
	/* 0x08 */ int m_Length;
} CNodeList; /* sizeof = 0xC */

#endif

