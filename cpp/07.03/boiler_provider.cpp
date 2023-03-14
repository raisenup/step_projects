#include "boiler_provider.h"

std::ostream &operator<<(std::ostream &stream, Boiler const *boiler)
{
	cout << "Company         : " << boiler->getCompany() << '\n';
	cout << "Color           : " << boiler->getColor() << '\n';
	cout << "Power           : " << boiler->getPower() << '\n';
	cout << "Volume          : " << boiler->getVolume() << '\n';
	cout << "Max temperature : " << boiler->getMaxTemp() << "\n<---------------------------->\n";
	return stream;
}

void BoilerProvider::printBoiler(Boiler const *boiler) const
{
	cout << boiler;
}

