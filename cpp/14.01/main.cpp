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
	}

	return 0;
}
