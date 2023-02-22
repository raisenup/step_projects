#include <iostream>
#include "exercises.h"
using std::cout, std::cin;

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
	}

	system("pause");
	return 0;
}



