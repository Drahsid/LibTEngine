#ifndef VIDEOVALS_H
#define VIDEOVALS_H

typedef struct {
    /* 0x00 */ int m_nResX;
    /* 0x04 */ int m_nResY;
    /* 0x08 */ int m_nXOffset;
    /* 0x0C */ int m_nYOffset;
    /* 0x10 */ int m_nWOffset;
    /* 0x14 */ int m_nHOffset;
    /* 0x18 */ int m_nOffset4;
} CVideoVals; /* sizeof = 0x1C */

/*
The game stores NTSC, then PAL options for six total, the order being
    Normal, HiRez, Letterbox
    for each
begins at 0x80114A10

const VideoVals VideoVals_Normal = (VideoVals) {
    284, 222,
    97, 62,
    -127, -89,
    1
};

const VideoVals VideoVals_HiRez = (VideoVals) {
    480, 360,
    29, 18,
    -41, -32,
    1
};

const VideoVals VideoVals_Letterbox = (VideoVals) {
    480, 240,
    27, 14,
    -45, -30,
    0
};*/

//extern CVideoVals VideoVals[6];

#endif

