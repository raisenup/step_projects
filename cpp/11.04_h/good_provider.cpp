#include "good_provider.h"

void GoodProvider::addGood(Good const *good, const string &filename) const
{
	std::fstream file(filename, std::ios::app);

	file << good->getName() << ',' << good->getAmount() << ',' << good->getPrice() << '\n';
	file.close();
}

void GoodProvider::readGoodData(vector<Good> &gooddata, const string &filename) const
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
		int amount;
		double price;

		getline(ss, name, ',');
		ss >> amount;
		ss.ignore();
		ss >> price;
		ss.ignore();

		gooddata.emplace_back(name, amount, price);
	}
	file.close();
}

void GoodProvider::printGood(Good const *good) const
{
	cout << "Name   : " << good->getName() << '\n';
	cout << "Amount : " << good->getAmount() << '\n';
	cout << "Price  : " << good->getPrice() << "\n\n";
}


