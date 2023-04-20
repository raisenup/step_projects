#include "car.h"

// setters
void Car::setBrand(const string &b)
{
	brand = b;
}
void Car::setModel(const string &m)
{
	model = m;
}
void Car::setYear(int y)
{
	year = y;
}
void Car::setMileage(int mi)
{
	mileage = mi;
}

// getters
string Car::getBrand() const
{
	return brand;
}
string Car::getModel() const
{
	return model;
}
int Car::getYear() const
{
	return year;
}
int Car::getMileage() const
{
	return mileage;
}

// constructors
Car::Car()
{
	setBrand("null");
	setModel("null");
	setYear(0);
	setMileage(0);
}
Car::Car(const string &b) : Car()
{
	setBrand(b);
}
Car::Car(const string &b, const string &m) : Car(b)
{
	setModel(m);
}
Car::Car(const string &b, const string &m, int y) : Car(b,m)
{
	setYear(y);
}
Car::Car(const string &b, const string &m, int y, int mi) : Car(b,m,y)
{
	setMileage(mi);
}

// destructors
Car::~Car()
{
	brand.clear();
	model.clear();
	setYear(0);
	setMileage(0);
}

