#pragma once

#include <string>
#include <vector>
#include "Docent.h"
#include "Student.h"

using namespace std;

class Module {
	public:
		string getName();
		Module(string name, int ec);

		int ec;

		void setDocent(Docent docent);
		void setStudent(Student student);
		void expellStudent(Student student);
		void classInfo();
		void changeEC(int newEc);

		Docent getTeacher();
		vector<Student> getStudents();

		~Module();

	private:
		string name;
		Docent* docent;
		vector<Student> students;

};
