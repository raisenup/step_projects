#include "weather.h"

// setters
void Weather::setDate(const string &d)
{
	date = d;
}
void Weather::setTemperature(double t)
{
	temperature = t;
}
void Weather::setPressure(double p)
{
	pressure = p;
}

// getters
string Weather::getDate() const
{
	return date;
}
double Weather::getTemperature() const
{
	return temperature;
}
double Weather::getPressure() const
{
	return pressure;
}

// constructors
Weather::Weather()
{
	setDate("null");
	setTemperature(0.0);
	setPressure(0.0);
}
Weather::Weather(const string &d) : Weather()
{
	setDate(d);
}
Weather::Weather(const string &d, double t) : Weather(d)
{
	setTemperature(t);
}
Weather::Weather(const string &d, double t, double p) : Weather(d,t)
{
	setPressure(p);
}

// destructors
Weather::~Weather()
{
	date.clear();
	setTemperature(0.0);
	setPressure(0.0);
}

