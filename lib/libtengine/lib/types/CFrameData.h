#ifndef CFRAMEDATA_TYPE_H
#define CFRAMEDATA_TYPE_H

#include <inttypes.h>
#include "CSun.h"
#include "CSunFrameData.h"
#include <libultra/PR/os.h>
#include <libultra/PR/sptask.h>
#include <libultra/PR/sched.h>

#ifdef GAME_TUROK3
typedef struct {
    /* 0x000 */ CSunFrameData m_SunFrame;
    /* 0x020 */ OSScTask m_Task;
    /* 0x088 */ OSScTask m_LineTask;
    /* 0x0F0 */ OSScMsg m_Msg;
    /* 0x110 */ void* m_pFrameBuffer;
    /* 0x114 */ struct Gfx* m_pDisplayList;
    /* 0x118 */ struct Gfx* m_pLineList;
    /* 0x11C */ uint32_t m_DisplayListSize;
    /* 0x120 */ uint32_t m_LineListSize;
    /* 0x124 */ uint32_t m_nPredictFields;
    /* 0x128 */ struct CFrameData_t* m_pPrev;
    /* 0x12C */ struct CFrameData_t* m_pNext;
    /* 0x130 */ uint32_t _pad[2];
} CFrameData; /* sizeof = 0x138 */
#endif

#ifdef GAME_TUROK2
typedef struct CFrameData_t {
    /* 0x000 */ CSunFrameData m_SunFrame;
    /* 0x020 */ OSScTask m_Task;
    /* 0x088 */ OSScTask m_LineTask;
    /* 0x0F0 */ OSScMsg m_Msg;
    /* 0x110 */ void* m_pFrameBuffer;
    /* 0x114 */ struct Gfx* m_pDisplayList;
    /* 0x118 */ struct Gfx* m_pLineList;
    /* 0x11C */ uint32_t m_DisplayListSize;
    /* 0x120 */ uint32_t m_LineListSize;
    /* 0x124 */ uint32_t m_nPredictFields;
    /* 0x128 */ int m_bDrawMap;
    /* 0x12C */ struct CFrameData_t* m_pPrev;
    /* 0x130 */ struct CFrameData_t* m_pNext;
    /* 0x134 */ uint32_t _pad[2];
} CFrameData; /* sizeof = 0x140 */
#endif

#endif

