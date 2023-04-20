#pragma once
#include "lib.h";

struct Student
{
public:
	void setSurname(const string &s);
	void setName(const string &n);
	void setAge(int a);
	void setGPA(double g);

	string getSurname() const;
	string getName() const;
	int getAge() const;
	double getGPA() const;

	Student();
	explicit Student(const string &s);
	Student(const string &s, const string &n);
	Student(const string &s, const string &n, int a);
	Student(const string &s, const string &n, int a, double g);

	~Student();

private:
	string surname;
	string name;
	int age;
	double gpa;
};

