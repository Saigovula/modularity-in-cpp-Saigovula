#ifndef COLOR_UTILS_H
#define COLOR_UTILS_H

#include "color_pair.h"

ColorPair getColorFromPairNumber(int pairNumber);

int getPairNumberFromColor(enum MajorColor major, enum MinorColor minor);

#endif
