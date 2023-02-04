#include <iostream>
#include "exercises.h"
using namespace std;

int main()
{
	int ex_num = 0;
	cout << "Input exercise number -> ";
	cin >> ex_num;

	// randomized arr 
	const int length{ 10 };
	int arr[length];
	rand_arr(arr, length);

	switch (ex_num)
	{
	case 1:
	{
		cout << "Before:" << endl;
		printArr(arr, length);

		cout << "After:" << endl;
		ex_1(arr, length);
	} break;
	case 2:
	{
		cout << "Before:" << endl;
		printArr(arr, length);

		cout << "After:" << endl;
		ex_2(arr, length);
	} break;
	case 3:
	{
		ex_3();
	} break;
	case 4:
	{
		cout << "Before:" << endl;
		printArr(arr, length);

		quicksort(arr, 0, length - 1);
		cout << "After:" << endl;
		printArr(arr, length);
	} break;
	case 5:
	{
		cout << "Before:" << endl;
		printArr(arr, length);

		ex_5(arr, length);
		cout << "After:" << endl;
		printArr(arr, length);
	} break;
	}
	return 0;
}



