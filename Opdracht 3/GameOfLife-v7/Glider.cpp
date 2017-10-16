#include "Glider.h"

Glider::Glider(char x, char y) {
	xCoord  = x;
	yCoord  = y;
	height  = GLIDER_SIZE;
	width   = GLIDER_SIZE;
	figure  = new char*[GLIDER_SIZE];
	for (char i = 0; i < GLIDER_SIZE; i++) {
		figure[i] = new char[GLIDER_SIZE];
	}
	for (char i = 0; i < GLIDER_SIZE; i++) {
		for (char j = 0; j < GLIDER_SIZE; j++) {
			figure[i][j] = '.';
		}
	}
	figure[0][1] = 'X';
	figure[1][2] = 'X';
	figure[2][0] = 'X';
	figure[2][1] = 'X';
	figure[2][2] = 'X';
}

Glider::~Glider() {
	for (char i = 0; i < GLIDER_SIZE; i++) {
		delete[] figure[i];
	}
	delete[] figure;
}
