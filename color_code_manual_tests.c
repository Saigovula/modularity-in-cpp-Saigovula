#include "color_code_manual.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

void testGetColorCodeManual() {
    char* manual = getColorCodeManual();
    assert(manual != NULL);

    // Optional simple checks: manual contains known strings
    assert(strstr(manual, "White Blue") != NULL);
    assert(strstr(manual, "Violet Slate") != NULL);

    printf("getColorCodeManual() test passed.\n");

    free(manual);
}
