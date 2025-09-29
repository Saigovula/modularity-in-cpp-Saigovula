#include "manual.h"
#include "color_utils.h"
#include <stdio.h>

void printColorCodeManual() {
    printf("----- Telecom Color Code Manual -----\n");
    int total = numberOfMajorColors * numberOfMinorColors;
    for (int i = 1; i <= total; i++) {
        ColorPair cp = getColorFromPairNumber(i);
        printf("Pair %2d -> %s\n", i, colorPairToString(&cp));
    }
    printf("-------------------------------------\n");
}
