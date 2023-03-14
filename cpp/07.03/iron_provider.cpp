#include "iron_provider.h"

std::ostream &operator<<(std::ostream &stream, Iron const *iron)
{
	cout << "Company        : " << iron->getCompany() << '\n';
	cout << "Model          : " << iron->getModel() << '\n';
	cout << "Color          : " << iron->getColor() << '\n';
	cout << "Min temperature: " << iron->getMinTemp() << '\n';
	cout << "Max temperature: " << iron->getMaxTemp() << '\n';
	cout << "Steam          : " << iron->getSteam() << '\n';
	cout << "Power          : " << iron->getPower() << "\n<---------------------------->\n";
	return stream;
}

void IronProvider::printIron(Iron const *iron) const
{
	cout << iron;
}


