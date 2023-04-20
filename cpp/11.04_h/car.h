#pragma once
#include "lib.h"

struct Car
{
public:
	// setters
	void setBrand(const string &b);
	void setModel(const string &m);
	void setYear(int y);
	void setMileage(int mi);

	// getters
	string getBrand() const;
	string getModel() const;
	int getYear() const;
	int getMileage() const;

	// constructors
	Car();
	explicit Car(const string &b);
	Car(const string &b, const string &m);
	Car(const string &b, const string &m, int y);
	Car(const string &b, const string &m, int y, int mi);

	// destructors
	~Car();

private:
	string brand;
	string model;
	int year;
	int mileage;
};


