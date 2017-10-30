#ifndef FACTORY_H_
#define FACTORY_H_
#include "Orc.h"
#include "Elf.h"

namespace std {

class Factory {
public:
	Factory();
	virtual ~Factory();

	static Orc * createOrc(int type) {
		Orc *orc = NULL;
		switch(type) {
			case 1: {
				orc = new Farmer;
				break;
			}
			case 2: {
				orc = new Shaman;
				break;
			}
			case 3: {
				orc = new Soldier;
				break;
			}
			default: {
				cout << "No NPC class assigned, try again" << endl;
				return NULL;
			}
		}
		return orc;
	}

	static Elf * createElf(int type) {
		Elf *elf = NULL;
		switch(type) {
			case 1: {
				elf = new Farmer;
				break;
			}
			case 2: {
				elf = new Shaman;
				break;
			}
			case 3: {
				elf = new Soldier;
				break;
			}
			default: {
				cout << "No NPC class assigned, try again" << endl;
				return NULL;
			}
		}
		return elf;
	}
};

} /* namespace std */

#endif /* FACTORY_H_ */
