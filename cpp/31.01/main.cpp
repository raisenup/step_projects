#include <iostream>
#include <array>
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
		int num, pow;
		cout << "Input number -> ";
		cin >> num;
		cout << "Input power of the number -> ";
		cin >> pow;
		cout << ex_1(num, pow) << endl;
		break;
	case 2:
		int n;
		cout << "Input N -> ";
		cin >> n;
		ex_2(n);
		break;
	case 3:
		int a, b;
		cout << "Input a, b -> ";
		cin >> a >> b;
		cout << ex_3(a, b) << endl;
		break;
	case 4:
		srand(time(0));
		array<int, 100> arr;
		for (auto& i : arr)
		{
			i = rand() % 50;
			//cout << i << ' ';
		}
		//cout << endl;
		cout << ex_4(arr) << endl;
		break;
	case 5:
		ex_5();
		break;
	}
	return 0;
}



