#ifndef CROMPARTICLEIMPACT_TYPE_H
#define CROMPARTICLEIMPACT_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ uint64_t m_ImpactEventValue[14];
    /* 0x70 */ int16_t m_ImpactParticleType[14];
    /* 0x98 */ int16_t m_ImpactEventType[14];
    /* 0xB4 */ int16_t m_ImpactSoundType[14];
} CROMParticleImpact; /* sizeof = 0xD0 */

#endif

