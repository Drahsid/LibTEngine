#ifndef TUROK2_GAME_US
#define TUROK2_GAME_US

#include <inttypes.h>
#include "../lib/types/CVideoVals.h"
#include "../lib/types/RenderParams.h"
#include "../lib/types/CHeap.h"
#include "../lib/types/CScene.h"
#include "../lib/types/CPlayerPool.h"
#include "../lib/types/CCameraPool.h"

asm("refresh_rate_PAL = 0x800a9d5c");
asm("refresh_rate_NTSC = 0x800a9d60");
asm("FRAME_FPS = 0x00000000");
asm("frame_increment = 0x00000000");
asm("time_scale_0 = 0x00000000");
asm("time_scale_1 = 0x00000000");
asm("bCutsceneBlackBars = 0x00000000");
asm("nScreenWidth = 0x00000000");
asm("nScreenHeight = 0x00000000");
asm("stretchX = 0x00000000");
asm("stretchY = 0x00000000");
asm("nVideoMode = 0x00000000");
asm("nOldVideoMode = 0x00000000");
asm("nBlackoutCounter = 0x00000000");
asm("VideoValsNormal = 0x00000000");
asm("VideoValsHiRez = 0x00000000");
asm("VideoValsLetterbox = 0x00000000");
asm("RenderVals = 0x00000000");
asm("GameHeap = 0x800D1CC0");
asm("controller_buttons_now = 0x00000000");
asm("joy_x_now = 0x00000000");
asm("joy_y_now = 0x00000000");
asm("refresh_rate = 0x8011b0a4");
asm("GameApp = 0x800F6CB0");

#define GetApp() ((CEngineApp*)&GameApp)
#define GetScene() ((CScene*)&GetApp()->m_Scene)
#define GetPlayerPool() ((CPlayerPool*)&GetApp()->m_PlayerPool)
#define GetFirstPlayer() ((CPlayer*)&GetPlayerPool()->m_Players)
#define GetCameraPool() ((CCameraPool*)&GetApp()->m_CameraPool)
#define GetCamera() ((CCamera*)(GetCameraPool()->m_ActiveList.m_pHead))

#endif

