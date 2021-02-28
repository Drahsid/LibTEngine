#ifndef CBARRELWEAPON_TYPE_H
#define CBARRELWEAPON_TYPE_H

// No version differences afaik
typedef struct {
    /* 0x00 */ int m_Weapon;
    /* 0x04 */ struct CWeaponInfo* m_pInfo;
    /* 0x08 */ int m_bEnabled;
    /* 0x0C */ float m_Rot;
    /* 0x10 */ float m_Spin;
    /* 0x14 */ float m_Scale;
} CBarrelWeapon; /* sizeof = 0x18 */

#endif

