#pragma once
#include "lib.h"

struct Weather
{
public:
	// setters
	void setDate(const string &d);
	void setTemperature(double t);
	void setPressure(double p);

	// getters
	string getDate() const;
	double getTemperature() const;
	double getPressure() const;

	// constructors
	Weather();
	explicit Weather(const string &d);
	Weather(const string &d, double t);
	Weather(const string &d, double t, double p);

	// destructors
	~Weather();

private:
	string date;
	double temperature;
	double pressure;
};

