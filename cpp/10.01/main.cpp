#include <iostream>

using namespace std;

void ex_1()
{
	int year, days;
	cout << "Input year -> ";
	cin >> year;
	days = 365 + (year % 4 == 0);
	cout << days << endl;
}

void ex_2()
{
	int grn, kop;
	cout << "Input grn -> ";
	cin >> grn;
	cout << "Input kop -> ";
	cin >> kop;
	if (kop >= 100)
	{
		grn += kop / 100;
		kop %= 100;
	}
	cout << grn << " grn " << kop << " kop" << endl;
}

void ex_3()
{
	double l, w, h, V;
	cout << "Calculation of parallelepiped volume.\nInput data:\n";
	cout << "\tLength (cm) -> ";
	cin >> l;
	cout << "\tWidth (cm) ->  ";
	cin >> w;
	cout << "\tHeight (cm) -> ";
	cin >> h;
	V = l * w * h;
	cout << "\tVolume: " << V << " cubic cm" << endl;
}

void ex_4()
{
	double scale, l, distance;
	cout << "Calculation of distance between towns.\nInput data:\n";
	cout << "\tMap scale (kilometers per centimeter) -> ";
	cin >> scale;
	cout << "\tDistance between dots (cm) -> ";
	cin >> l;
	distance = scale * l;
	cout << "\tDistance between the towns is " << distance << " km." << endl;
}

void ex_5()
{
	double pi = 3.141592, v, r;
	cout << "Input R of the ball -> ";
	cin >> r;
	v = pi * 4 / 3 * r * r * r;
	cout << "Volume of the ball is " << v << " cubic cm." << endl;
}

int main()
{
	int ex_num = 0;
	cout << "Input exercise number -> ";
	cin >> ex_num;
	switch (ex_num)
	{
	case 1:
		ex_1();
		break;
	case 2:
		ex_2();
		break;
	case 3:
		ex_3();
		break;
	case 4:
		ex_4();
		break;
	case 5:
		ex_5();
		break;
	}

	return 0;
}


