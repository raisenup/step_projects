#pragma once
#include "lib.h"

struct City
{
public:
	// setters
	void setName(const string &n);
	void setCountry(const string &c);
	void setPopulation(int p);
	void setSquare(int s);

	// getters
	string getName() const;
	string getCountry() const;
	int getPopulation() const;
	int getSquare() const;

	// constructors
	City();
	explicit City(const string &n);
	City(const string &n, const string &c);
	City(const string &n, const string &c, int p);
	City(const string &n, const string &c, int p, int s);

	// destructors
	~City();

private:
	string name;
	string country;
	int population;
	int square;
};
