#include <iostream>
using namespace std;

void ex_1()
{
	int x;
	cout << "Input x -> ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "It's even number!" << endl;
	}
	else
	{
		cout << "It's odd number!" << endl;
	}
}

void ex_2()
{
	int x, y;
	cout << "Input x -> ";
	cin >> x;
	cout << "Input y -> ";
	cin >> y;
	if (x > y)
	{
		cout << y << endl;
	}
	else
	{
		cout << x << endl;
	}

}

void ex_3()
{
	int x;
	cout << "Input x -> ";
	cin >> x;
	if (x > 0)
	{
		cout << "X is positive number!" << endl;
	}
	else if (x < 0)
	{
		cout << "X is negative number!" << endl;
	}
	else
	{
		cout << "X is zero!" << endl;
	}
}

void ex_4()
{
	int x, y;
	cout << "Input x -> ";
	cin >> x;
	cout << "Input y -> ";
	cin >> y;
	if (x == y)
	{
		cout << x << " == " << y << endl;
	}
	else if (x > y)
	{
		cout << y << ' ' << x << endl;
	}
	else
	{
		cout << x << ' ' << y << endl;
	}
}

void ex_5()
{
	double x = 0, marks_count = 5, res = 0;
	for (int i = 0; i < marks_count; ++i)
	{
		cin >> x;
		res += x;
	}
	res /= marks_count;
	if (res >= 4)
	{
		cout << "Student got the admission to exams!" << endl;
	}
	else
	{
		cout << "Student DIDN'T get the admission to exams!" << endl;
	}
}

void ex_6()
{
	int x;
	cout << "Input x -> ";
	cin >> x;
	(x % 2 == 0) ? x *= 3 : x /= 2;
	cout << x << endl;
}

void ex_7()
{
	double x, y;
	int operation;
	cout << "Input x\n-> ";
	cin >> x;
	cout << "Input operation\n(1 - +; 2 - -; 3 - *; 4 - /)\n-> ";
	cin >> operation;
	cout << "Input y\n-> \n";
	cin >> y;
	switch (operation)
	{
	case 1:
		x += y;
		break;
	case 2:
		x -= y;
		break;
	case 3:
		x *= y;
		break;
	case 4:
		x /= y;
		break;
	}
	cout << x << endl;
}

