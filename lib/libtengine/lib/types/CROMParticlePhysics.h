#ifndef CROMPARTICLEPHYSICS_TYPE_H
#define CROMPARTICLEPHYSICS_TYPE_H

#include <inttypes.h>
#include "CRandomShortPair.h"

// No version differences afaik
typedef struct {
	/* 0x00 */ CRandomShortPair m_Gravity;
	/* 0x04 */ CRandomShortPair m_Velocity;
	/* 0x08 */ int16_t m_BounceEnergy;
	/* 0x0A */ int16_t m_GroundFriction;
	/* 0x0C */ int16_t m_AirFriction;
	/* 0x0E */ int16_t m_WaterFriction;
	/* 0x10 */ int16_t m_Acceleration;
	/* 0x12 */ int16_t m_MinMaxVelocity;
} CROMParticlePhysics; /* sizeof = 0x14 */

#endif

