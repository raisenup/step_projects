#include "PhoneProvider.h"

void PhoneProvider::printMenuPhone(Phone const *phone) const
{
	cout << "#" << phone->getId() << ' ' << phone->getManufacturer() << ' ' << phone->getModel() << ' ' << phone->getYear() << '\n';
	cout << '\t' << phone->getPrice() << "$\n";
}
void PhoneProvider::printPhone(Phone const *phone) const
{
	cout << "Model        : " << phone->getModel() << '\n';
	cout << "Manufacturer : " << phone->getManufacturer() << '\n';
	cout << "OS           : " << phone->getOs() << '\n';
	cout << "Year         : " << phone->getYear() << '\n';
	cout << "Price        : " << phone->getPrice() << "$\n\n";
}
void PhoneProvider::readPhoneData(vector<Phone> &phonedata, const string &filename) const
{
	ifstream file(filename);
	
	if (file.is_open())
	{
		int i = 1;
		string line;
		while (getline(file, line))
		{
			string model, manuf, os;
			int year, price;

			stringstream ss(line);

			getline(ss, model, ',');
			getline(ss, manuf, ',');
			getline(ss, os, ',');
			ss >> year;
			ss.ignore();
			ss >> price;
			ss.ignore();

			phonedata.emplace_back(i, model, manuf, os, year, price);
			i++;
		}
	}
	file.close();

}


