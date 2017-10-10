/*
 * Decorator.h
 *
 *  Created on: Oct 10, 2017
 *      Author: JustLaptop
 */

#ifndef DECORATOR_H_
#define DECORATOR_H_

#include "NPC.h"
#include <iostream>

class Decorator : public NPC{
public:
	void render() {
		cout << "Name: " << npc->name << " Role: " << role << endl;
	}

protected:
	string role = "blank";
	Decorator(NPC* npc) {
		this->npc = npc;
	}

private:
	NPC *npc;
};

#endif /* DECORATOR_H_ */
