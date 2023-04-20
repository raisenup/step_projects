#include "city.h"

// setters
void City::setName(const string &n)
{
	name = n;
}
void City::setCountry(const string &c)
{
	country = c;
}
void City::setPopulation(int p)
{
	population = p;
}
void City::setSquare(int s)
{
	square = s;
}

// getters
string City::getName() const
{
	return name;
}
string City::getCountry() const
{
	return country;
}
int City::getPopulation() const
{
	return population;
}
int City::getSquare() const
{
	return square;
}

// constructors
City::City()
{
	setName("null");
	setCountry("null");
	setPopulation(0);
	setSquare(0);
}
City::City(const string &n) : City()
{
	setName(n);
}
City::City(const string &n, const string &c) : City(n)
{
	setCountry(c);
}
City::City(const string &n, const string &c, int p) : City(n,c)
{
	setPopulation(p);
}
City::City(const string &n, const string &c, int p, int s) : City(n,c,p)
{
	setSquare(s);
}

// destructors
City::~City()
{
	name.clear();
	country.clear();
	setPopulation(0);
	setSquare(0);
}
