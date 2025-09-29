#include "color_pair.h"
#include <stdio.h>
#include <string.h>

const char* MajorColorNames[] = {"White","Red","Black","Yellow","Violet"};
const char* MinorColorNames[] = {"Blue","Orange","Green","Brown","Slate"};

const int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

ColorPair makeColorPair(enum MajorColor major, enum MinorColor minor) {
    ColorPair pair = {major, minor};
    return pair;
}

enum MajorColor getMajor(ColorPair* pair) { return pair->major; }
enum MinorColor getMinor(ColorPair* pair) { return pair->minor; }

const char* colorPairToString(ColorPair* pair) {
    static char buffer[32];
    snprintf(buffer, sizeof(buffer), "%s %s",
             MajorColorNames[pair->major], MinorColorNames[pair->minor]);
    return buffer;
}
