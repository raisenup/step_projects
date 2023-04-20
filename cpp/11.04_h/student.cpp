#include "student.h"


// Setters
void Student::setSurname(const string &s)
{
	surname = s;
}

void Student::setName(const string &n)
{
	name = n;
}

void Student::setAge(int a)
{
	age = a;
}

void Student::setGPA(double g)
{
	gpa = g;
}

// Getters
string Student::getSurname() const
{
	return surname;
}

string Student::getName() const
{
	return name;
}

int Student::getAge() const
{
	return age;
}

	;
double Student::getGPA() const
{
	return gpa;
}

// Constructors
Student::Student()
{
	setSurname("null");
	setName("null");
	setAge(0);
	setGPA(0.0);
}
Student::Student(const string &s): Student()
{
	setSurname(s);
}
Student::Student(const string &s, const string &n): Student(s)
{
	setName(n);
}
Student::Student(const string &s, const string &n, int a): Student(s,n)
{
	setAge(a);
}
Student::Student(const string &s, const string &n, int a, double g) : Student(s,n,a)
{
	setGPA(g);
}

Student::~Student()
{
	surname.clear();
	name.clear();
	age = 0;
	gpa = 0.0;
}
