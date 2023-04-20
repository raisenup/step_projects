#include "city_provider.h"

void CityProvider::addCity(City const *city, const string &filename) const
{
	std::fstream file(filename, std::ios::app);

	file << city->getName() << ',' << city->getCountry() << ',' << city->getPopulation() << ',' << city->getSquare() << '\n';
	file.close();
}

void CityProvider::readCityData(vector<City> &citydata, const string &filename) const
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

		string name;
		string country;
		int population;
		int square;

		getline(ss, name, ',');
		getline(ss, country, ',');
		ss >> population;
		ss.ignore();
		ss >> square;
		ss.ignore();

		citydata.emplace_back(name, country, population, square);
	}
	file.close();
}

void CityProvider::printCity(City const *city) const
{
	cout << "Name       : " << city->getName() << '\n';
	cout << "Country    : " << city->getCountry() << '\n';
	cout << "Population : " << city->getPopulation() << '\n';
	cout << "Square     : " << city->getSquare() << "\n\n";
}


