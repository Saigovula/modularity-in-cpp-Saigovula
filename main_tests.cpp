#include "main_tests.h"
#include <stdio.h>
#include <assert.h>

void testNumberToPair(int pairNumber, enum MajorColor expMajor, enum MinorColor expMinor) {
    ColorPair cp = getColorFromPairNumber(pairNumber);
    printf("Got pair %s\n", colorPairToString(&cp));
    assert(getMajor(&cp) == expMajor && getMinor(&cp) == expMinor);
}

void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expected) {
    int pairNum = getPairNumberFromColor(major, minor);
    printf("Got pair number %d\n", pairNum);
    assert(pairNum == expected);
}
