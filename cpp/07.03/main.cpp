#include "lib.h"
#include "laundry.h"
#include "laundry_provider.h"
#include "iron.h"
#include "iron_provider.h"
#include "boiler.h"
#include "boiler_provider.h"

void laundry_example()
{
	auto *laundry = new Laundry("Lenovo", "white", 60, 110, 70, 7200, 90);
	auto const *laundry_provider = new LaundryProvider();
	laundry_provider->printLaundry(laundry);
	laundry->setCompany("myCorparation");
	laundry->setColor("black");
	laundry->setPower(9600);
	laundry_provider->printLaundry(laundry);
}

void iron_example()
{
	auto *iron = new Iron("Philips", "Azur", "black", 30, 90, true, 3000);
	auto const *iron_provider = new IronProvider();
	iron_provider->printIron(iron);
	iron->setColor("white");
	iron->setModel("X-3000");
	iron->setSteam(false);
	iron->setPower(2000);
	iron_provider->printIron(iron);
}

void boiler_example()
{
	auto *boiler = new Boiler("Atlantic", "white", 1200, 80, 65);
	auto const *boiler_provider = new BoilerProvider();
	boiler_provider->printBoiler(boiler);
	boiler->setCompany("LG");
	boiler->setColor("black");
	boiler->setPower(1500);
	boiler_provider->printBoiler(boiler);
}

int main()
{
	int ex_num{ 0 };
	cout << "Input number of the exercise -> ";
	cin >> ex_num;

	switch (ex_num)
	{
	case 1:
		laundry_example();
		break;
	case 2:
		iron_example();
		break;
	case 3:
		boiler_example();
		break;
	default:
		break;
	}


	return 0;
}

