#ifndef TUROK3_GAME_US
#define TUROK3_GAME_US

#include <inttypes.h>
#include "../lib/types/CVideoVals.h"
#include "../lib/types/RenderParams.h"
#include "../lib/types/CHeap.h"
#include "../lib/types/CScene.h"
#include "../lib/types/CPlayerPool.h"
#include "../lib/types/CCameraPool.h"

asm("refresh_rate_PAL = 0x800FB0C0");
asm("refresh_rate_NTSC = 0x800FB0C4");
asm("FRAME_FPS = 0x800FB120");
asm("frame_increment = 0x80104E78");
asm("time_scale_0 = 0x80104E7C");
asm("time_scale_1 = 0x80104E80");
asm("bCutsceneBlackBars = 0x80114974");
asm("nScreenWidth = 0x801149E0");
asm("nScreenHeight = 0x801149E4");
asm("stretchX = 0x801149E8");
asm("stretchY = 0x801149EC");
asm("nVideoMode = 0x801149F0");
asm("nOldVideoMode = 0x801149F4");
asm("nBlackoutCounter = 0x801149F8");
asm("VideoValsNormal = 0x80114A10");
asm("VideoValsHiRez = 0x80114A2C");
asm("VideoValsLetterbox = 0x80114A48");
asm("RenderVals = 0x80114AB8");
asm("GameHeap = 0x801280A0");
asm("controller_buttons_now = 0x80131EEA");
asm("joy_x_now = 0x80131F94");
asm("joy_y_now = 0x80131F95");
asm("refresh_rate = 0x8013D8B0");

asm("GameApp = 0x8013D8C0");
#define GetApp() (&GameApp);

asm("GameScene = 0x8013DC70");
#define GetScene() (&GameScene)

asm("GamePlayerPool = 0x80164778");
#define GetPlayerPool() (&GamePlayerPool)
#define GetFirstPlayer() (*((CPlayer**)0x8013DDB4))

asm("GameCameraPool = 0x801647C0");
#define GetCameraPool() (&GameCameraPool)
#define GetCamera() ((CCamera*)(GetCameraPool()->m_pNext))

asm("main_camera_time = 0x80164818");

#endif

