#ifndef CWEAPONAMMOINFO_TYPE_H
#define CWEAPONAMMOINFO_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ int16_t m_AmmoType;
    /* 0x02 */ int16_t m_AmmoMax;
    /* 0x04 */ int16_t m_AmmoParticleType;
    /* 0x08 */ int16_t m_AmmoPerParticle;
} CWeaponAmmoInfo; /* sizeof = 0x0A */

#endif

