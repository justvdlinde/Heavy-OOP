#include "Module.h"
#include <iostream>

Module::Module(string name, int ec) {
	this->name = name;
	this->ec = ec;
}

Module::~Module(){}

string Module::getName() {
	return name;
}

void Module::setDocent(Docent docent) {
	this->docent = &docent;
}

void Module::setStudent(Student student) {
	students.push_back(student);
}

void Module::expellStudent(Student student) {
	cout << "Removing student " << student.getName() << " from module " << name << endl << endl;
	vector<Student>::iterator it = students.begin();
	while (it != students.end()) {
		if (it->getName() == student.getName()) {
			students.erase(it);
			break;
		}
		it++;
	}
}

Docent Module::getTeacher() {
	return *docent;
}

vector<Student> Module::getStudents() {
	return students;
}

void Module::classInfo() {
	cout << "Module " << name << "(" << ec << "EC):" << endl;
	cout << "Students: " << endl;
	vector<Student>::iterator it = students.begin();
	while (it != students.end()) {
		cout << "-" << it->getName() <<endl;
		it++;
	}
	cout << endl;
}

void Module::changeEC(int newEc) {
	cout << "EC for " << name << " was changed from " << ec << " to " << newEc << endl;
	ec = newEc;
}
