#ifndef BLINKER_H
#define BLINKER_H
#include "Shape.h"

struct Blinker : public Shape {
    public:
    Blinker(char x, char y);
    ~Blinker();

    static const char BLINKER_HEIGHT = 3;
    static const char BLINKER_WIDTH = 1;

    char xCoord;
    char yCoord;
    char height;
    char width;
    char **figure;
};

#endif // BLINKER_H
