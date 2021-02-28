#ifndef CCOLLISIONINFO_TYPE_H
#define CCOLLISIONINFO_TYPE_H

#include <inttypes.h>

#ifdef GAME_TUROK3
struct CCollisionInfo;
#endif

#ifdef GAME_TUROK2
typedef struct {
	/* 0x00 */ int dwFlags;
	/* 0x04 */ int8_t InstanceBehavior;
	/* 0x05 */ int8_t WallBehavior;
	/* 0x06 */ int8_t GroundBehavior;
	/* 0x07 */ int8_t unusedpad;
	/* 0x08 */ float GravityAcceleration;
	/* 0x0C */ float BounceReturnEnergy;
	/* 0x10 */ float GroundFriction;
	/* 0x14 */ float AirFriction;
	/* 0x18 */ float WaterFriction;
} CCollisionInfo; /* sizeof = 0x1C */
#endif

#endif

