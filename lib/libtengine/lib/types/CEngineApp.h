#ifndef CENGINEAPP_TYPE_H
#define CENGINEAPP_TYPE_H

#include <inttypes.h>
#include "CFrameData.h"
#include "CScene.h"
#include "COnScreen.h"
#include "CFxSystem.h"
#include "CPlayerPool.h"
#include "CCameraPool.h"
#include "CMap.h"
#include "COptions.h"
#include "CSun.h"
#include "CGameStatus.h"

#ifdef GAME_TUROK3
typedef struct {
	/* 0x00000 */ CFrameData m_FrameData[3];
	/* 0x003A8 */ struct CFrameData* m_pCurrentFrameData;
	/* 0x003AC */ void* m_pStaticSegment;
	/* 0x003B0 */ CScene m_Scene;
	/* 0x1D7E0 */ uint8_t unk_0x1D7E0[0xB024];
	/* 0x28804 */ int m_bDoIdle;
	/* 0x28818 */ int m_LastMode;
} CEngineApp; /* sizeof = big */
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00000 */ CFrameData m_FrameData[3];
	/* 0x003C0 */ struct CFrameData* m_pCurrentFrameData;
	/* 0x003C4 */ void* m_pStaticSegment;
	/* 0x003C8 */ CScene m_Scene;
	/* 0x19440 */ COnScreen m_OnScreen;
	/* 0x19608 */ CFxSystem m_FxSystem;
	/* 0x22BC0 */ CPlayerPool m_PlayerPool;
	/* 0x22C00 */ CCameraPool m_CameraPool;
	/* 0x23DF0 */ CMap m_Map;
	/* 0x23E28 */ COptions m_Options;
	/* 0x23FAC */ CSun m_Sun;
	/* 0x23FD0 */ float m_ModeTime;
	/* 0x23FD4 */ int m_LastMode;
	/* 0x23FD8 */ int m_Mode;
	/* 0x23FDC */ int m_NextMode;
	/* 0x23FE0 */ uint8_t m_FadeFast;
	/* 0x23FE1 */ uint8_t m_FadeStatus;
	/* 0x23FE2 */ uint8_t _pad0[2];
	/* 0x23FE4 */ float m_FadeAlpha;
	/* 0x23FE8 */ int m_bDoIdle;
	/* 0x23FEC */ int m_bSloMo;
	/* 0x23FF0 */ int m_bReset;
	/* 0x23FF4 */ int m_bPause;
	/* 0x23FF8 */ int m_GameStartWarpID;
	/* 0x23FFC */ int m_bWarpCheatLevelFlag;
	/* 0x24000 */ CGameStatus m_GameStatus;
	/* 0x2404C */ int _pad1;
} CEngineApp; /* sizeof = 0x24050 */
#endif
#endif

