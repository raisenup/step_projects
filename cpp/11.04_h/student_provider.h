#pragma once
#include "lib.h"
#include "student.h"

struct StudentProvider
{
	void addStudent(Student const *student, const string &filename = "studentdata.csv") const;
	void readStudentData(vector<Student> &studentdata, const string &filename = "studentdata.csv") const; 
	void printStudent(Student const *student) const;
};


