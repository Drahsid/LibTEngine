#ifndef CACTIVEGRIDSECTION_TYPE_H
#define CACTIVEGRIDSECTION_TYPE_H

#ifdef GAME_TUROK3
typedef struct {
    /* 0x00 */ struct CMemEntry* m_pmeGridSection;
    /* 0x04 */ struct CBoundsRect* m_pBoundsRect;
    /* 0x08 */ int unk_0x08;
} CActiveGridSection; /* sizeof = 0xC */
#endif

#ifdef GAME_TUROK2
typedef struct {
    /* 0x00 */ struct CMemEntry* m_pmeGridSection;
    /* 0x04 */ struct CBoundsRect* m_pBoundsRect;
} CActiveGridSection; /* sizeof = 0x8 */
#endif

#endif

