#include <iostream>
#include "exercises.h"
using namespace std;

int main()
{
	int ex_num = 0;
	cout << "Input exercise number -> ";
	cin >> ex_num;
	cout << endl;
	switch (ex_num)
	{
	case 1:
	{
		cout << "Drawing rectangle" << endl;
		int n, k;
		cout << "Input height of the rectangle -> ";
		cin >> n;
		cout << "Input width of the rectangle -> ";
		cin >> k;
		ex_1(n,k);
	} break;
	case 2:
	{
		cout << "Factorial of the number" << endl;
		int num;
		cout << "Input number -> ";
		cin >> num;
		ex_2(num);
	} break;
	case 3:
	{
		cout << "Is number prime" << endl;
		int num;
		cout << "Input number -> ";
		cin >> num;
		cout << ex_3(num) << endl; 
	} break;
	case 4:
	{
		cout << "Cube of the number" << endl;
		int num;
		cout << "Input number -> ";
		cin >> num;
		cout << ex_4(num) << endl;
	} break;
	case 5:
	{
		cout << "Max number of two" << endl;
		int num1, num2;
		cout << "Input first number -> ";
		cin >> num1;
		cout << "Input second number -> ";
		cin >> num2;
		cout << ex_5(num1, num2) << endl;
	} break;
	case 6:
	{
		cout << "Return true if number > 0 else false" << endl;
		int num;
		cout << "Input number -> ";
		cin >> num;
		cout << ex_6(num) << endl;
	} break;
	case 7:
	{
		srand(time(0));
		const int size = 10;
		int arr[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 50;
			cout << arr[i] << ' ';
		}
		ex_7(arr, size);
	} break;
	case 8:
	{
		srand(time(0));
		const int size = 10;
		int arr[size];
		cout << "Given arr:" << endl;
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 50;
			cout << arr[i] << ' ';
		}
		cout << endl;
		cout << "Reversed arr:" << endl;
		ex_8(arr, size);
	} break;
	case 9:
	{
		srand(time(0));
		const int size = 10;
		int arr[size];
		cout << "Given arr:" << endl;
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 50;
			cout << arr[i] << ' ';
		}
		cout << endl;
		cout << "Prime numbers count:" << endl;
		cout << ex_9(arr, size) << endl;
	} break;
	}

	return 0;
}



