/*
 * Shaman.h
 *
 *  Created on: Oct 10, 2017
 *      Author: JustLaptop
 */

#ifndef SHAMAN_H_
#define SHAMAN_H_

#include "Decorator.h"

class Shaman: public Decorator {
	public:
	Shaman(NPC* npc) : Decorator(npc) {
	role = "Shaman";
	}
};

#endif /* SHAMAN_H_ */
