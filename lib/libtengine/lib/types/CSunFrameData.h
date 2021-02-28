#ifndef CSUNFRAMEDATA_TYPE_H
#define CSUNFRAMEDATA_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ uint64_t m_DepthData[2];
	/* 0x10 */ int m_DepthPos;
	/* 0x14 */ int m_bVisible;
    /* 0x18 */ int m_bVisibleZ;
    /* 0x1C */ int _pad;
} CSunFrameData; /* sizeof = 0x20 */

#endif

