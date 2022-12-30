#include <iostream>

using namespace std;

void ex_1() 
{
	double r0, r1, r2, r3;
	cout << "Input R1, R2, R3:" << endl;
	cin >> r1 >> r2 >> r3;
	r0 = 1 / (1 / r1 + 1 / r2 + 1 / r3);
	cout << r0 << endl;
}

void ex_2()
{
	double pi = 3.14, l, s, r;
	cout << "Input length of the circle:" << endl;
	cin >> l;
	r = l / (2 * pi);
	cout << r << endl;
	s = pi * r * r;
	cout << s << endl;
}

void ex_3()
{
	double s, v, t, a;
	cout << "Input v, t, a:" << endl;
	cin >> v >> t >> a;	
	s = v * t + (a * t * t) / 2;
	cout << s << endl;
}

int main() 
{
	int ex_num = 0;
	cout << "Input number of the exercise:" << endl;
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
	}
	return 0;
}


