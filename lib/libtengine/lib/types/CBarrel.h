#ifndef CBARREL_TYPE_H
#define CBARREL_TYPE_H

#include "CBarrelWeapon.h"

// No version differences afaik
typedef struct {
    /* 0x000 */ int m_Mode;
    /* 0x004 */ float m_Time;
    /* 0x008 */ float m_Alpha;
    /* 0x00C */ float m_Rot;
    /* 0x100 */ int m_Dir;
    /* 0x104 */ float m_Glow;
    /* 0x108 */ int CurrentWeaponListSize;
    /* 0x10C */ CBarrelWeapon m_WeaponList[36];
    /* 0x37C */ int m_Selected;
    /* 0x380 */ int m_QuickSelect;
    /* 0x384 */ int m_ButtonAWheel;
    /* 0x388 */ int m_BothButtonsPressed;
    /* 0x38C */ int m_UnderwaterWhenSetup;
    /* 0x390 */ int m_WheelIndexLastFrame;
} CBarrel; /* sizeof = 0x394 */

#endif

