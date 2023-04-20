#pragma once
#include "city.h"

struct CityProvider
{
	void addCity(City const *city, const string &filename = "citydata.csv") const;
	void readCityData(vector<City> &citydata, const string &filename = "citydata.csv") const; 
	void printCity(City const *city) const;
};

