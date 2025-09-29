#ifndef MAIN_TESTS_H
#define MAIN_TESTS_H

#include "color_utils.h"

// Function declarations
void testNumberToPair(int pairNumber, enum MajorColor expMajor, enum MinorColor expMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expected);

#endif
