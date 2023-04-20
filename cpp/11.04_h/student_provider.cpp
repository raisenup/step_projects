#include "student_provider.h"

void StudentProvider::addStudent(Student const *student, const string &filename) const
{
	std::fstream file(filename, std::ios::app);

	file << student->getSurname() << ',' << student->getName() << ',' << student->getAge() << ',' << student->getGPA() << '\n';
	file.close();
}

void StudentProvider::readStudentData(vector<Student> &studentdata, const string &filename) const
{
	std::ifstream file(filename);

	if (!file.is_open())
	{
		cout << "While opening file error occured...\n";
		return;
	}

	string line;
	while (getline(file, line))
	{
		stringstream ss(line);

		string surname;
		string name;
		int age;
		double gpa;

		getline(ss, surname, ',');
		getline(ss, name, ',');
		ss >> age;
		ss.ignore();
		ss >> gpa;
		ss.ignore();

		studentdata.emplace_back(surname, name, age, gpa);
	}
	file.close();
}

void StudentProvider::printStudent(Student const *student) const
{
	cout << "Surname : " << student->getSurname() << '\n';
	cout << "Name    : " << student->getName() << '\n';
	cout << "Age     : " << student->getAge() << '\n';
	cout << "GPA     : " << student->getGPA() << "\n\n";
}

