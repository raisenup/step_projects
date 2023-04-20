#pragma once
#include "car.h";

struct CarProvider
{
	void addCar(Car const *car, const string &filename = "cardata.csv") const;
	void readCarData(vector<Car> &cardata, const string &filename = "cardata.csv") const; 
	void printCar(Car const *car) const;
};

