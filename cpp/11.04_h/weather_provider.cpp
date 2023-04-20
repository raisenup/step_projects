#include "weather_provider.h"


void WeatherProvider::addWeather(Weather const *weather, const string &filename) const
{
	std::fstream file(filename, std::ios::app);

	file << weather->getDate() << ',' << weather->getTemperature() << ',' << weather->getPressure() << '\n';
	file.close();
}

void WeatherProvider::readWeatherData(vector<Weather> &weatherdata, const string &filename) const
{
	std::ifstream file(filename);

	if (!file.is_open())
	{
		cout << "While opening file error occured...\n";
		return;
	}

	string line;
	while (getline(file, line))
	{
		stringstream ss(line);

		string date;
		double temperature;
		double pressure;
		
		getline(ss, date, ',');
		ss >> temperature;
		ss.ignore();
		ss >> pressure;
		ss.ignore();

		weatherdata.emplace_back(date, temperature, pressure);
	}
	file.close();

}

void WeatherProvider::printWeather(Weather const *weather) const
{
	cout << "Date        : " << weather->getDate() << '\n';
	cout << "Temperature : " << weather->getTemperature() << '\n';
	cout << "Pressure    : " << weather->getPressure() << "\n\n";
}



