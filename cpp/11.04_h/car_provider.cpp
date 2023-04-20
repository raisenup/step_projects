#include "car_provider.h"

void CarProvider::addCar(Car const *car, const string &filename) const
{
	std::fstream file(filename, std::ios::app);

	file << car->getBrand() << ',' << car->getModel() << ',' << car->getYear() << ',' << car->getMileage() << '\n';
	file.close();
}

void CarProvider::readCarData(vector<Car> &cardata, const string &filename) const
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

		string brand;
		string model;
		int year;
		int mileage;

		getline(ss, brand, ',');
		getline(ss, model, ',');
		ss >> year;
		ss.ignore();
		ss >> mileage;
		ss.ignore();

		cardata.emplace_back(brand, model, year, mileage);
	}
	file.close();
}

void CarProvider::printCar(Car const *car) const
{
	cout << "Brand   : " << car->getBrand() << '\n';
	cout << "Model   : " << car->getModel() << '\n';
	cout << "Year    : " << car->getYear() << '\n';
	cout << "Mileage : " << car->getMileage() << "\n\n";
}

