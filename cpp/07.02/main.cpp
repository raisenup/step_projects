#include <iostream>
#include "exercises.h"
using namespace std;

int main()
{
	int ex_num = 0;
	cout << "Input exercise number -> ";
	cin >> ex_num;

	// ptrs
	int x = 1, y = 2;
	char op = '+';
	int *x_ptr = &x, *y_ptr = &y;
	char *op_ptr = &op;

	switch (ex_num)
	{
	case 1:
		cout << ex_1(x_ptr, y_ptr) << endl;
		break;
	case 2:
		cout << ex_2(x_ptr) << endl;
		break;
	case 3:
		ex_3(x_ptr, y_ptr);
		cout << *x_ptr << *y_ptr << endl;
		break;
	case 4:
		cout << ex_4(x_ptr, op_ptr, y_ptr) << endl;
		break;
	case 5:
		int arr[4] = { 1, 2, 3, 4 };
		cout << ex_5(arr, 4) << endl;
		break;
	}
	system("pause");

	return 0;
}



