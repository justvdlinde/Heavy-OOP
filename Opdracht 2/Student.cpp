#include "Student.h"
#include "Module.h"
#include <iostream>

Student::Student(string name, int numPoints) {
	this->name = name;
	this->numPoints = numPoints;
}

Student::~Student() { }

string Student::getName() {
	return name;
}

