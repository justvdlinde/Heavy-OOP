#include "Module.h"
#include "Docent.h"
#include "Student.h"
#include <vector>
#include <iostream>

using namespace std;

Module* module1 = new Module("New Technologies", 10);
Module* module2 = new Module("Heavy OOP", 20);
Module* module3 = new Module("Kernmodule GDV", 30);

Student *student1 = new Student("Just", 0);
Student *student2 = new Student("Celine", 0);
Student *student3 = new Student("Jelle",0);
Student *student4 = new Student("Sten",0);
Student *student5 = new Student("Vincent",0);
Student *student6 = new Student("Frans",0);
Student *student7 = new Student("Marlon",0);
Student *student8 = new Student("Josien",0);
Student *student9 = new Student("Sergie",0);
Student *student10 = new Student("Alex",0);

Docent *teacher1 = new Docent("Valentijn");
Docent *teacher2 = new Docent("Aaron");
Docent *teacher3 = new Docent("Edwin");

void AppointTeachersToModules();
void AppointStudentsToModules();
void AppointTeachersToModules() {
	module1->setDocent(*teacher1);
	module2->setDocent(*teacher2);
	module3->setDocent(*teacher3);
}

void AppointStudentsToModules() {
	module1->setStudent(*student1);
	student1->numPoints += module1->ec;
	module1->setStudent(*student2);
	student2->numPoints += module1->ec;
	module1->setStudent(*student3);
	student3->numPoints += module1->ec;
	module1->setStudent(*student4);
	student4->numPoints += module1->ec;
	module1->setStudent(*student5);
	student5->numPoints += module1->ec;

	module2->setStudent(*student4);
	student4->numPoints += module2->ec;
	module2->setStudent(*student5);
	student5->numPoints += module2->ec;
	module2->setStudent(*student6);
	student6->numPoints += module2->ec;
	module2->setStudent(*student7);
	student7->numPoints += module2->ec;
	module2->setStudent(*student8);
	student8->numPoints += module2->ec;

	module3->setStudent(*student6);
	student6->numPoints += module3->ec;
	module3->setStudent(*student7);
	student7->numPoints += module3->ec;
	module3->setStudent(*student8);
	student8->numPoints += module3->ec;
	module3->setStudent(*student9);
	student9->numPoints += module3->ec;
	module3->setStudent(*student10);
	student10->numPoints += module3->ec;
}

int main() {
	AppointTeachersToModules();
	AppointStudentsToModules();

	module1->classInfo();
	module2->classInfo();
	module3->classInfo();

	cout << "Student " << student1->name << " has " << student1->numPoints << " points." << endl;
	cout << "Student " << student2->name << " has " << student2->numPoints << " points." << endl;
	cout << "Student " << student3->name << " has " << student3->numPoints << " points." << endl;
	cout << "Student " << student4->name << " has " << student4->numPoints << " points." << endl;
	cout << "Student " << student5->name << " has " << student5->numPoints << " points." << endl;
	cout << "Student " << student6->name << " has " << student6->numPoints << " points." << endl;
	cout << "Student " << student7->name << " has " << student7->numPoints << " points." << endl;
	cout << "Student " << student8->name << " has " << student8->numPoints << " points." << endl;
	cout << "Student " << student9->name << " has " << student9->numPoints << " points." << endl;
	cout << "Student " << student10->name << " has " << student10->numPoints << " points." << endl;
	cout << endl;
	module1->changeEC(30);

	module1->expellStudent(*student1);
	module1->classInfo();


	return 0;
}
