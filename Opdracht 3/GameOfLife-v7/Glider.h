#ifndef GLIDER_H
#define GLIDER_H
#include "Shape.h"

struct Glider : public Shape {
    public:
    Glider(char x, char y);
	~Glider();

	static const char GLIDER_SIZE = 3;

    char xCoord;
    char yCoord;
    char height;
    char width;
    char **figure;
};

#endif // GLIDER_H
