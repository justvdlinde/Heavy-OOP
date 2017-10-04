#pragma once
#include <string>

using namespace std;

class Student {
	public:
		string getName();
		int numPoints;
		string name;
		Student(string name, int numPoints);

		~Student();

	private:


};
