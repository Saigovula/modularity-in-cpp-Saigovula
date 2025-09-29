#include "color_utils.h"
#include "color_code_manual_tests.h"
#include "number2color_color2number_tests.h"
#include <stdio.h>
#include <assert.h>

int main() 
{
    // Default path: developer/test mode
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

   // Test manual generation
    testGetColorCodeManual();

    return 0;
}

