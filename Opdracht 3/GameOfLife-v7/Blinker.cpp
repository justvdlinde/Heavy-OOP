#include "Blinker.h"
#include "Shape.h"

Blinker::Blinker(char x, char y) {
	xCoord = x;
	yCoord = y;
	height = BLINKER_HEIGHT;
	width = BLINKER_WIDTH;
	figure = new char*[BLINKER_HEIGHT];
	for (char i = 0; i < BLINKER_HEIGHT; i++) {
		figure[i] = new char[BLINKER_WIDTH];
	}
	for (char i = 0; i < BLINKER_HEIGHT; i++) {
		for (char j = 0; j < BLINKER_WIDTH; j++) {
			figure[i][j] = 'X';
		}
	}
}

Blinker::~Blinker() {
	for (char i = 0; i < BLINKER_HEIGHT; i++) {
		delete[] figure[i];
	}
	delete[] figure;
}
