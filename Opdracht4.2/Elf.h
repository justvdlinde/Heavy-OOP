/*
 * Elf.h
 *
 *  Created on: Oct 10, 2017
 *      Author: JustLaptop
 */

#ifndef ELF_H_
#define ELF_H_

#include "NPC.h"
#include <iostream>

class Elf : public NPC{
	public:
	Elf() {
		name = "Elf";
	}
	void render() {
		cout << "Name: " << name << endl;
	}
};

#endif /* ELF_H_ */
