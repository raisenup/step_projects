#include "laundry_provider.h"

std::ostream &operator<<(std::ostream &stream, Laundry const *laundry)
{
	cout << "Company        : " << laundry->getCompany() << '\n';
	cout << "Color          : " << laundry->getColor() << '\n';
	cout << "Width          : " << laundry->getWidth() << '\n';
	cout << "Length         : " << laundry->getLength() << '\n';
	cout << "Height         : " << laundry->getHeight() << '\n';
	cout << "Power          : " << laundry->getPower() << '\n';
	cout << "Spin speed     : " << laundry->getSpinSpeed() << '\n';
	cout << "Max temperature: " << laundry->getMaxTemp() << "\n<---------------------------->\n";
	return stream;
}

void LaundryProvider::printLaundry(Laundry const *laundry) const
{
	cout << laundry;
}


