/*
 * Soldier.h
 *
 *  Created on: Oct 10, 2017
 *      Author: JustLaptop
 */

#ifndef SOLDIER_H_
#define SOLDIER_H_

#include "Decorator.h"

class Soldier: public Decorator {
	public:
	Soldier(NPC* npc) : Decorator(npc) {
	role = "Soldier";
	}
};

#endif /* SOLDIER_H_ */
