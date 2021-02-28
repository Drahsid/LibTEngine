#ifndef RENDERPARAMS_TYPE_H
#define RENDERPARAMS_TYPE_H

typedef struct {
	/* 0x00 */ int m_bFilter;
	/* 0x04 */ int m_bAlias;
	/* 0x08 */ int m_bEdgeAlias;
	/* 0x0C */ int m_bInter;
	/* 0x10 */ int m_bBetter;
} RenderParams; /* sizeof = 0x14 */

// Begins at 0x80114AB8, VideoVals index % 3 = RenderVals index (Normal, HiRez, Letterbox)
/*const RenderParams RenderVals[3] = {
    {1,1,1,1,1},
	{0,0,0,1,0},
	{0,0,0,1,0}
};*/

#endif

