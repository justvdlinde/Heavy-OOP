#include <iostream>
#include "Glider.h"
#include "Blinker.h"
#include "Shape.h"

#define HEIGHT 4
#define WIDTH 4

class GameOfLife {
public:
	GameOfLife(Shape sh);
	void print();
	void update();
	char getState(char state, char xCoord, char yCoord, bool toggle);
	void iterate(unsigned int iterations);
	Shape shape;
	bool toggle;

private:
	char world[HEIGHT][WIDTH];
	char otherWorld[HEIGHT][WIDTH];

};

GameOfLife::GameOfLife(Shape sh) :
	shape(sh),
	toggle(true)
{
	for (char i = 0; i < HEIGHT; i++) {
		for (char j = 0; j < WIDTH; j++) {
			world[i][j] = '.';
		}
	}
	for (char i = shape.yCoord; i - shape.yCoord < shape.height; i++) {
		for (char j = shape.xCoord; j - shape.xCoord < shape.width; j++) {
			if (i < HEIGHT && j < WIDTH) {
				world[i][j] =
					shape.figure[i - shape.yCoord][j - shape.xCoord];
			}
		}
	}
}

void GameOfLife::print() {
	if (toggle) {
		for (char i = 0; i < HEIGHT; i++) {
			for (char j = 0; j < WIDTH; j++) {
				std::cout << world[i][j];
			}
			std::cout << std::endl;
		}
	}
	else {
		for (char i = 0; i < HEIGHT; i++) {
			for (char j = 0; j < WIDTH; j++) {
				std::cout << otherWorld[i][j];
			}
			std::cout << std::endl;
		}
	}
	for (char i = 0; i < WIDTH; i++) {
		std::cout << '=';
	}
	std::cout << std::endl;
}

void GameOfLife::update() {
	if (toggle) {
		for (char i = 0; i < HEIGHT; i++) {
			for (char j = 0; j < WIDTH; j++) {
				otherWorld[i][j] =
					GameOfLife::getState(world[i][j], i, j, toggle);
			}
		}
		toggle = !toggle;
	}
	else {
		for (char i = 0; i < HEIGHT; i++) {
			for (char j = 0; j < WIDTH; j++) {
				world[i][j] =
					GameOfLife::getState(otherWorld[i][j], i, j, toggle);
			}
		}
		toggle = !toggle;
	}
}

char GameOfLife::getState(char state, char yCoord, char xCoord, bool toggle) {
	char neighbors = 0;
	if (toggle) {
		for (char i = yCoord - 1; i <= yCoord + 1; i++) {
			for (char j = xCoord - 1; j <= xCoord + 1; j++) {
				if (i == yCoord && j == xCoord) {
					continue;
				}
				if (i > -1 && i < HEIGHT && j > -1 && j < WIDTH) {
					if (world[i][j] == 'X') {
						neighbors++;
					}
				}
			}
		}
	}
	else {
		for (char i = yCoord - 1; i <= yCoord + 1; i++) {
			for (char j = xCoord - 1; j <= xCoord + 1; j++) {
				if (i == yCoord && j == xCoord) {
					continue;
				}
				if (i > -1 && i < HEIGHT && j > -1 && j < WIDTH) {
					if (otherWorld[i][j] == 'X') {
						neighbors++;
					}
				}
			}
		}
	}
	if (state == 'X') {
		return (neighbors > 1 && neighbors < 4) ? 'X' : '.';
	}
	else {
		return (neighbors == 3) ? 'X' : '.';
	}
}

void GameOfLife::iterate(unsigned int iterations) {
	for (unsigned int i = 0; i < iterations; i++) {
		print();
		update();
	}
}



int main() {
	Glider glider(0, 0);
	GameOfLife gol(glider);
	gol.iterate(10);

	Blinker blinker(1, 0);
	GameOfLife gol2(blinker);
	gol2.iterate(10);
}
