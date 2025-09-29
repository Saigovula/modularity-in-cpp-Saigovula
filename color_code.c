#include "color_code.h"
#include <stdio.h>
#include <assert.h>

const char* majorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

const char* majorColorToString(MajorColor color) {
    assert(color >= WHITE && color < MAX_MAJOR_COLORS);
    return majorColorNames[color];
}

const char* minorColorToString(MinorColor color) {
    assert(color >= BLUE && color < MAX_MINOR_COLORS);
    return minorColorNames[color];
}

int getPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->major * MAX_MINOR_COLORS + colorPair->minor + 1;
}

ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.major = zeroBasedPairNumber / MAX_MINOR_COLORS;
    colorPair.minor = zeroBasedPairNumber % MAX_MINOR_COLORS;
    return colorPair;
}
