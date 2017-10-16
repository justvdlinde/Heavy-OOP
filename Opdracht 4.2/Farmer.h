/*
 * Farmer.h
 *
 *  Created on: Oct 10, 2017
 *      Author: JustLaptop
 */

#ifndef FARMER_H_
#define FARMER_H_

#include "Decorator.h"

class Farmer: public Decorator {
public:
	Farmer(NPC* npc) : Decorator(npc) {
	role = "Farmer";
	}
};

#endif /* FARMER_H_ */
