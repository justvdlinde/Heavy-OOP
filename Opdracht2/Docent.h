#pragma once
#include <string>

using namespace std;

class Docent {
	public:
		string getName();
		Docent(string name);

		~Docent();

	private:
		string name;
};
