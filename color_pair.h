#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H


#include "color_defs.h"

typedef struct {
    enum MajorColor major;
    enum MinorColor minor;
} ColorPair;

ColorPair makeColorPair(enum MajorColor major, enum MinorColor minor);
enum MajorColor getMajor(ColorPair* pair);
enum MinorColor getMinor(ColorPair* pair);
const char* colorPairToString(ColorPair* pair);

#endif
