#ifndef RENDERPARAMS_H
#define RENDERPARAMS_H

#include <min.h>

typedef struct
{
	BOOL m_bFilter;
	BOOL m_bAlias;
	BOOL m_bEdgeAlias;
	BOOL m_bInter;
	BOOL m_bBetter;
} RenderParams;

// Begins at 0x80114AB8, VideoVals index % 3 = RenderVals index (Normal, HiRez, Letterbox)
const RenderParams RenderVals[3] = {
    {1,1,1,1,1},
	{0,0,0,1,0},
	{0,0,0,1,0}
};

#endif

