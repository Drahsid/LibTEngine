#ifndef CROMPARTICLEGENERAL_TYPE_H
#define CROMPARTICLEGENERAL_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
	/* 0x00 */ int16_t m_nFrames;
	/* 0x02 */ int16_t m_nFramesRnd;
	/* 0x04 */ int8_t m_Probability;
	/* 0x05 */ int8_t m_Visibility;
	/* 0x06 */ int8_t m_nParticles;
	/* 0x07 */ int8_t m_nParticlesRnd;
	/* 0x08 */ int8_t m_nPriority;
	/* 0x09 */ int8_t m_nFadeIn;
	/* 0x0A */ int8_t m_nFadeOut;
	/* 0x0B */ int8_t m_Framerate;
	/* 0x0C */ int8_t m_nInBetweens;
	/* 0x0D */ int8_t m_nMaxDelay;
	/* 0x0E */ int8_t m_Alignment;
	/* 0x0F */ uint8_t m_Alert;
} CROMParticleGeneral; /* sizeof = 0x10 */

#endif

