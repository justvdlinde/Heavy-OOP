/*
 * NPC.h
 *
 *  Created on: Oct 10, 2017
 *      Author: JustLaptop
 */

#ifndef NPC_H_
#define NPC_H_

#include <string>

using namespace std;

class NPC {
public:
	NPC();
	virtual ~NPC();

	virtual void render() = 0;
	string name;
};

#endif /* NPC_H_ */
