#ifndef CCAMERAPOOL_TYPE_H
#define CCAMERAPOOL_TYPE_H

#include <inttypes.h>
#include "CList.h"
#include "CCamera.h"
#include "CCameraText.h"
#include "CShake.h"

#ifdef GAME_TUROK3
typedef struct {
    /* 0x0000 */ void* m_pLast;
    /* 0x0004 */ void* m_pNext;
    /* 0x0008 */ int m_nCameras_0;
    /* 0x000C */ uint32_t unk_0x0C[5];
    /* 0x0020 */ void* m_pHead;
    /* 0x0024 */ void* m_pTail;
    /* 0x0028 */ uint32_t unk_0x28[2];
    /* 0x0030 */ int m_nCameras_1;
    /* 0x0034 */ int unk_0x34;
    /* 0x0038 */ int m_bActiveChanged;
    /* 0x003C */ int unk_0x3C;
    /* 0x0040 */ CCamera m_MainCamera;
    /* 0x0EFC */ int unk_0xEFC;
    /* 0x0F00 */ void* m_pmeTexts;
    /* 0x0F04 */ void* m_pTexts;
    /* 0x0F08 */ int m_nTexts;
    /* 0x0F0C */ int unk_0xF0C[183];
    /* 0x11E8 */ int m_bOnlyUseMainCameraForSound;
} CCameraPool; /* sizeof = 0x11EC */
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x0000 */ struct CMemEntry* m_pmeCameras;
	/* 0x0004 */ struct CCamera* m_Cameras;
	/* 0x0008 */ int m_nCameras;
	/* 0x000C */ CList m_FreeList;
	/* 0x0020 */ CList m_ActiveList;
	/* 0x0034 */ int m_ActiveLastFrame;
	/* 0x0038 */ int m_bActiveChanged;
    /* 0x003C */ int _pad0;
	/* 0x0040 */ CCamera m_MainCamera;
	/* 0x0F00 */ struct CMemEntry* m_pmeTexts;
	/* 0x0F04 */ struct CCameraText* m_Texts;
	/* 0x0F08 */ int m_nTexts;
	/* 0x0F0C */ CList m_FreeTextList;
	/* 0x0F20 */ CShake m_ShakeVars[8];
	/* 0x11C0 */ CList m_ShakeFreeList;
	/* 0x11D4 */ CList m_ShakeActiveList;
	/* 0x11E8 */ int m_bOnlyUseMainCameraForSound;
    /* 0x11EC */ int _pad1;
} CCameraPool; /* sizeof = 0x11F0 */
#endif




#endif
