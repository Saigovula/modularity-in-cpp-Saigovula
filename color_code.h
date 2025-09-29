#ifndef COLOR_CODE_H
#define COLOR_CODE_H

#define MAX_MAJOR_COLORS 5
#define MAX_MINOR_COLORS 5

typedef enum {
    WHITE, RED, BLACK, YELLOW, VIOLET
} MajorColor;

typedef enum {
    BLUE, ORANGE, GREEN, BROWN, SLATE
} MinorColor;

typedef struct {
    MajorColor major;
    MinorColor minor;
} ColorPair;

int getPairNumberFromColor(const ColorPair* colorPair);
ColorPair getColorFromPairNumber(int pairNumber);

const char* majorColorToString(MajorColor color);
const char* minorColorToString(MinorColor color);

#endif
