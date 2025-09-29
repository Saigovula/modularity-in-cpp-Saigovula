#include "color_utils.h"
#include <assert.h>

ColorPair getColorFromPairNumber(int pairNumber) {
    assert(pairNumber >= 1 && pairNumber <=
           numberOfMajorColors * numberOfMinorColors);
    int zeroBased = pairNumber - 1;
    enum MajorColor major = (enum MajorColor)(zeroBased / numberOfMinorColors);
    enum MinorColor minor = (enum MinorColor)(zeroBased % numberOfMinorColors);
    return makeColorPair(major, minor);
}

int getPairNumberFromColor(enum MajorColor major, enum MinorColor minor) {
    return major * numberOfMinorColors + minor + 1;
}
