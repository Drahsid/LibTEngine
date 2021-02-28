#ifndef CROMPARTICLE_TYPE_H
#define CROMPARTICLE_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ uint32_t m_dwFlags;
    /* 0x04 */ int16_t m_nTextureSet;
    /* 0x06 */ int8_t m_nSwoosh;
    /* 0x07 */ int8_t m_nDynamicLight;
    /* 0x08 */ int8_t m_Playback;
    /* 0x09 */ int8_t m_InstanceBehavior;
    /* 0x0A */ int8_t m_WallBehavior;
    /* 0x0B */ int8_t m_GroundBehavior;
    /* 0x0C */ int16_t m_SoundType;
    /* 0x0E */ int16_t m_MaxAngleChangePerFrame;
    /* 0x10 */ uint8_t m_bFlags2;
    /* 0x11 */ uint8_t _pad[3];
    /* 0x14 */ void* m_rpObject;
    /* 0x18 */ struct CROMParticleImpact* m_rpImpact;
    /* 0x1C */ struct CROMParticleOffset* m_rpOffset;
    /* 0x20 */ struct CROMParticleRot* m_rpRot;
    /* 0x24 */ struct CROMParticleScale* m_rpScale;
    /* 0x28 */ struct CROMParticleDir* m_rpDir;
    /* 0x2C */ struct CROMParticleSineWave* m_rpSineWave;
    /* 0x30 */ struct CROMParticlePhysics* m_rpPhysics;
    /* 0x34 */ struct CROMParticleColor* m_rpColor;
    /* 0x38 */ struct CROMParticleGeneral* m_rpGeneral;
} CROMParticle; /* sizeof = 0x3C */

#endif

