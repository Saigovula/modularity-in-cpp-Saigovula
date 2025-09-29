#include "color_code_manual.h"
#include "color_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getColorCodeManual() {
    int total = numberOfMajorColors * numberOfMinorColors;

    // Estimate size: each line ~30 chars, total 25 -> ~750 + header/footer
    int bufferSize = total * 40 + 100;
    char* buffer = (char*)malloc(bufferSize);
    if (buffer == NULL) return NULL;

    strcpy(buffer, "----- Telecom Color Code Manual -----\n");

    for (int i = 1; i <= total; i++) {
        ColorPair cp = getColorFromPairNumber(i);
        char line[50];
        snprintf(line, sizeof(line), "Pair %2d -> %s\n", i, colorPairToString(&cp));
        strcat(buffer, line);
    }

    strcat(buffer, "-------------------------------------\n");
    return buffer;
}

