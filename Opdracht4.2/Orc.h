/*
 * Orc.h
 *
 *  Created on: Oct 10, 2017
 *      Author: JustLaptop
 */

#ifndef ORC_H_
#define ORC_H_

#include "NPC.h"
#include <iostream>

class Orc: public NPC {
	public:
	Orc() {
		name = "Orc";
	}
	void render() {
		cout << "Name: " << name << endl;
	}
};

#endif /* ORC_H_ */
