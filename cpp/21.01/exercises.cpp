#include <iostream>
#include <Windows.h>
using namespace std;

void ex_1()
{
	int width, height;
	cout << "Input width -> ";
	cin >> width;
	cout << "Input height -> ";
	cin >> height;

	char symbol;
	cout << "Input symbol -> ";
	cin >> symbol;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << symbol;
		}
		cout << endl;
	}
}

void ex_2()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int width, height;
	cout << "Input width -> ";
	cin >> width;
	cout << "Input height -> ";
	cin >> height;

	char symbol;
	cout << "Input symbol -> ";
	cin >> symbol;

	int color;
	cout << "Input ANSI escape color code (0 - 255) -> ";
	cin >> color;

	SetConsoleTextAttribute(hConsole, color);
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
			{
				cout << symbol;
			}
			else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
	SetConsoleTextAttribute(hConsole, 7);
}

void ex_3()
{
	const int size = 6;
	int arr[size];

	int sum = 0;
	cout << "Input 6 values\n-> ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "Profit of the company: " << sum << endl;
}

void ex_4()
{
	const int size = 5;
	int arr[size];

	cout << "Input 5 elements of the arr\n-> ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << "Result: ";
	for (int i = size-1; i >= 0; i--)
	{
		cout << arr[i] << ' ';
	}
}

void ex_5()
{
	const int size = 5;
	int p[size];  // п'ятикутник
	int sum = 0;

	cout << "Input 5 sides of the pentagon\n-> ";
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
		sum += p[i];
	}
	cout << sum;
}

void ex_6()
{
	const int size = 12;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int min, max;
	min = max = arr[0];
	for (int i = 1; i < size; i++)
	{
		(arr[i] > max) ? max = arr[i] : true;
		(arr[i] < min) ? min = arr[i] : true;
	}

	cout << "min = " << min << endl;
	cout << "max = " << max << endl;

}


