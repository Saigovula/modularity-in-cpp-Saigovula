#include "color_utils.h"
#include "manual.h"
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

int main(int argc, char* argv[]) {
    if (argc > 1 && strcmp(argv[1], "--manual") == 0) {
        // This path is for wiring personnel
        printColorCodeManual();
        return 0;
    }

    // Default path: developer/test mode
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}

