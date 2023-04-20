#include "lib.h"

int main(int argc, char *argv[])
{
	int num = 0;
	cout << "Input number of the exercise\n-> ";
	cin >> num;

	switch (num)
	{
	case 1: {
		ex_1();
	} break;
	case 2: {
		ex_2();
	} break;
	case 3: {
		ex_3();
	} break;
	case 4: {
		ex_4();
	} break;
	case 5: {
		ex_5();
	} break;
	case 6: {
		ex_6();
	} break;
	case 7: {
		ex_7();
	} break;
	default:
		break;
	}

	system("pause>0");
	return 0;
}


