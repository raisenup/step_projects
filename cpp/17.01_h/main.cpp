#include <iostream>
#include "exercises.h"
using namespace std;

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
	case 6:
		ex_6();
		break;
	case 7:
		ex_7();
		break;
	case 8:
		ex_8();
		break;
	case 9:
		ex_9();
		break;
	case 10:
		ex_10();
		break;
	case 11:
		ex_11();
		break;
	case 12:
		ex_12();
		break;
	}

	return 0;
}
