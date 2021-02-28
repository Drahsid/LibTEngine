#ifndef CROMCURVE_TYPE_H
#define CROMCURVE_TYPE_H

#include <inttypes.h>

// No version differences afaik
typedef struct {
    /* 0x00 */ int8_t m_Points[16];
    /* 0x10 */ float m_Time;
} CROMCurvePoints; /* sizeof = 0x14 */

typedef struct {
    /* 0x00 */ float m_Interval;
    /* 0x04 */ int8_t m_Min;
    /* 0x05 */ int8_t m_Max;
} CROMCurveRandom; /* sizeof = 0x06 */

typedef struct {
	/* 0x00 */ int m_nType;
	union {
        /* 0x04 */ CROMCurvePoints Points;
        /* 0x18 */
        /* 0x04 */ CROMCurveRandom Random;
        /* 0x0A */
	};
    /* 0x18 */
} CROMCurve; /* sizeof = 0x18 */

#endif

