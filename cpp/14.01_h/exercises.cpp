#include <iostream>
using namespace std;

void ex_1()
{
	int x;
	cout << "Input 6-digit number -> ";
	cin >> x;
	if (x / 100000 + x / 10000 % 10 + x / 1000 % 10 == x % 1000 / 100 + x % 100 / 10 + x % 10)
	{
		cout << "It's happy number!" << endl;
	}
	else if (x < 100000 || x > 999999)
	{
		cout << "Error: wrong value" << endl;
	}
	else
	{
		cout << "It's not a happy number!" << endl;
	}
}

void ex_2()
{
	int x;
	cout << "Input 4-digit number -> ";
	cin >> x;
	if (x > 1000 || x < 10000)
	{
		cout << x % 1000 / 100 << x / 1000 % 10 << x % 10 << x % 100 / 10;
	}
	else
	{
		cout << "Error: wrong value" << endl;
	}
}

void ex_3()
{
	int curr_num = 0, res = 0;  // works with positive numbers only (bc res is 0)
	cout << "Input 7 values\n-> ";
	for (int i = 0; i < 7; ++i)
	{
		cin >> curr_num;
		(curr_num > res) ? res = curr_num : true;
	}
	cout << res << endl;
}

int ex_4()
{
	int volume = 300, cargo, fuel_usage, AB_fuel, BC_fuel, AB, BC;

	cout << "Input amount of cargo (kg) -> ";
	cin >> cargo;
	cout << "Input AB distance -> ";
	cin >> AB;
	cout << "Input BC distance -> ";
	cin >> BC;

	if (cargo >= 0 && cargo < 500)
	{
		fuel_usage = 1;
	}
	else if (cargo >= 500 && cargo < 1000)
	{
		fuel_usage = 4;
	}
	else if (cargo >= 1000 && cargo < 1500)
	{
		fuel_usage = 7;
	}
	else if (cargo >= 1500 && cargo < 2000)
	{
		fuel_usage = 9;
	}
	else
	{
		cout << "It's impossible!";
		return 0;
	}

	AB_fuel = AB * fuel_usage;  // fuel needed to pass to the points
	BC_fuel = BC * fuel_usage;

	if (AB_fuel > volume || BC_fuel > volume)
	{
		cout << "It's impossible!";
		return 0;
	} 

	int needed_fuel = BC_fuel - (volume - AB_fuel);
	if (needed_fuel < 0)
	{
		needed_fuel = 0;
	}

	cout << "You'll need to fuel up: " << needed_fuel << " liters in the B point." << endl;

	return 0;
}

void ex_5()
{
	double day1, month1, year1;
	cout << "First date:" << endl;
	cout << "\tInput year ->  ";
	cin >> year1;
	cout << "\tInput month -> ";
	cin >> month1;
	cout << "\tInput day ->   ";
	cin >> day1;
	system("cls");
	
	double day2, month2, year2;
	cout << "Second date:" << endl;
	cout << "\tInput year ->  ";
	cin >> year2;
	cout << "\tInput month -> ";
	cin >> month2;
	cout << "\tInput day ->   ";
	cin >> day2;
	system("cls");

	double days = (((year2 - 1) - year1) * 365.25 + ((12 - month1) + month2) * 365.25/12);  // +- several days :)
	cout << "Your total days: " << days << endl;
}

int ex_6_calc(double &manager)
{
	if (manager >= 0 && manager < 500)
	{
		manager *= 0.03;
	}
	else if (manager >= 500 && manager < 1000)
	{
		manager *= 0.05;
	}
	else
	{
		manager *= 0.08;
	}
	manager += 200;

	return 0;
}

void ex_6()
{
	// 3 managers' salaries
	double manager1, manager2, manager3;
	cout << "Managers' sales input:" << endl;
	cout << "\tInput first manager sales ->  ";
	cin >> manager1;
	ex_6_calc(manager1);
	cout << "\tInput second manager sales -> ";
	cin >> manager2;
	ex_6_calc(manager2);
	cout << "\tInput third manager sales ->  ";
	cin >> manager3;
	ex_6_calc(manager3);

	if (manager1 > manager2 && manager1 > manager3)
	{
		manager1 += 200;
	}
	else if (manager2 > manager1 && manager2 > manager3)
	{
		manager2 += 200;
	}
	else if (manager3 > manager1 && manager3 > manager2)
	{
		manager3 += 200;
	}

	cout << "First manager's salary:  " << manager1 << '$' << endl;
	cout << "Second manager's salary: " << manager2 << '$' << endl;
	cout << "Third manager's salary:  " << manager3 << '$' << endl;
}

