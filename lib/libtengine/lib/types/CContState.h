#ifndef CCONTSTATE_TYPE_H
#define CCONTSTATE_TYPE_H

#include <inttypes.h>
#include "CVector3.h"
#include "CButton.h"
#include "CRumblePool.h"
#include "CGameRumble.h"
#include <libultra/PR/os.h>

#ifdef GAME_TUROK3
struct CContState;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x000 */ int m_bConnected;
	/* 0x004 */ int8_t m_nController;
	/* 0x005 */ int8_t _pad[3];
	/* 0x008 */ CVector3 m_vPos;
	/* 0x014 */ uint32_t m_InputButtonsLast;
	/* 0x018 */ uint32_t m_InputButtons;
	/* 0x01C */ uint32_t m_InputButtonsSingle;
	/* 0x020 */ uint32_t m_InputButtonsSingleNoHold;
	/* 0x024 */ uint32_t m_InputButtonsDouble;
	/* 0x028 */ uint32_t m_InputButtonsRepeat;
	/* 0x02C */ CButton m_ButtonStatus[32];
	/* 0x0AC */ uint32_t m_ButtonsLast;
	/* 0x0B0 */ uint32_t m_Buttons;
	/* 0x0B4 */ uint32_t m_ButtonsSingle;
	/* 0x0B8 */ uint32_t m_ButtonsSingleNoHold;
	/* 0x0BC */ uint32_t m_ButtonsDouble;
	/* 0x0C0 */ uint32_t m_ButtonsRepeat;
	/* 0x0C4 */ int8_t m_InputStickX;
	/* 0x0C5 */ int8_t m_InputStickY;
	/* 0x0C6 */ int8_t m_StickX;
	/* 0x0C7 */ int8_t m_StickY;
	/* 0x0C8 */ int m_bRumbleConnected;
	/* 0x0CC */ int m_bRumbleEnabled;
	/* 0x0D0 */ float m_RumbleSpeed;
	/* 0x0D4 */ float m_RumbleCount;
	/* 0x0D8 */ OSPfs m_pfs;
	/* 0x140 */ CRumblePool	m_RumblePool;
	/* 0x16C */ CGameRumble	m_RumbleVars[3];
	/* 0x220 */ int m_bMemoryConnected;
} CContState; /* sizeof = 0x224 */
#endif

#endif

