#ifndef TUROK3_GAME_US
#define TUROK3_GAME_US

#include "../../inttypes.h"
#include "../lib/types/CVideoVals.h"
#include "../lib/types/RenderParams.h"
#include "../lib/types/CHeap.h"
#include "../lib/types/CScene.h"
#include "../lib/types/CPlayerPool.h"
#include "../lib/types/CCameraPool.h"

// Might want to use this for very game specific stuff, and have a more generic file for generic values

extern float refresh_rate_PAL;
asm("refresh_rate_PAL = 0x800FB0C0");

extern float refresh_rate_NTSC;
asm("refresh_rate_NTSC = 0x800FB0C4");

extern float FRAME_FPS;
asm("FRAME_FPS = 0x800FB120");

extern float frame_increment;
asm("frame_increment = 0x80104E78");

extern float time_scale_0;
asm("time_scale_0 = 0x80104E7C");

extern float time_scale_1;
asm("time_scale_1 = 0x80104E80");

extern uint32_t bCutsceneBlackBars;
asm("bCutsceneBlackBars = 0x80114974");

extern int nScreenWidth;
asm("nScreenWidth = 0x801149E0");

extern int nScreenHeight;
asm("nScreenHeight = 0x801149E4");

extern float stretchX;
asm("stretchX = 0x801149E8");

extern float stretchY;
asm("stretchY = 0x801149EC");

extern int nVideoMode;
asm("nVideoMode = 0x801149F0");

extern int nOldVideoMode;
asm("nOldVideoMode = 0x801149F4");

extern int nBlackoutCounter;
asm("nBlackoutCounter = 0x801149F8");

extern CVideoVals VideoValsNormal;
asm("VideoValsNormal = 0x80114A10");

extern CVideoVals VideoValsHiRez;
asm("VideoValsHiRez = 0x80114A2C");

extern CVideoVals VideoValsLetterbox;
asm("VideoValsLetterbox = 0x80114A48");

extern RenderParams RenderVals[3];
asm("RenderVals = 0x80114AB8");

extern CHeap GameHeap;
asm("GameHeap = 0x801280A0");

extern uint16_t controller_buttons_now;
asm("controller_buttons_now = 0x80131EEA");

extern int8_t joy_x_now;
asm("joy_x_now = 0x80131F94");

extern int8_t joy_y_now;
asm("joy_y_now = 0x80131F95");

extern float refresh_rate;
asm("refresh_rate = 0x8013D8B0");

#define GetApp() ((void*)0x8013D8C0)

extern CScene GameScene;
asm("GameScene = 0x8013DC70");
#define GetScene() (&GameScene)

extern CPlayerPool GamePlayerPool;
asm("GamePlayerPool = 0x80164778");
#define GetPlayerPool() (&GamePlayerPool)
#define GetFirstPlayer() (*((CPlayer**)0x8013DDB4))

extern CCameraPool GameCameraPool;
asm("GameCameraPool = 0x801647C0");
#define GetCameraPool() (&GameCameraPool)

#define GetCamera() ((CCamera*)(GetCameraPool()->m_pNext))

extern float main_camera_time;
asm("main_camera_time = 0x80164818");

#endif

