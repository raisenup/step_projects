#include <iostream>
#include "exercises.h"
using std::cout, std::cin;

int main()
{
	int exercise = 0;
	cout << "Input exercise number -> ";
	cin >> exercise;
	switch (exercise)
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
	default:
		break;
	}

	system("pause>0");
	return 0;
}



