#pragma once
#include "weather.h"

struct WeatherProvider
{
	void addWeather(Weather const *weather, const string &filename = "weatherdata.csv") const;
	void readWeatherData(vector<Weather> &weatherdata, const string &filename = "weatherdata.csv") const; 
	void printWeather(Weather const *weather) const;
};

