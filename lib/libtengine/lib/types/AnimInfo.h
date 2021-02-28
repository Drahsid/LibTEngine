#ifndef ANIMINFO_TYPE_H
#define ANIMINFO_TYPE_H

// No version differences afaik
typedef struct {
	/* 0x00 */ struct CROMNodeIndex* NodeAnimIndices;
	/* 0x04 */ struct CROMInitialOrientation* InitialOrients;
	/* 0x08 */ struct CISet* isTransSets;
	/* 0x0C */ struct CISet* isRotSets;
	/* 0x10 */ int RotIndex1;
	/* 0x14 */ int RotIndex2;
	/* 0x18 */ int TransIndex1;
	/* 0x1C */ int TransIndex2;
	/* 0x20 */ float Blend;
} AnimInfo; /* sizeof = 0x24 */

#endif

