#include <iostream>
#include <chrono>
#include <thread>
#include <time.h>
using namespace std;
void ex_1()
{
	int width;
	cout << "Input line width -> ";
	cin >> width;

	char symbol;
	cout << "Input line symbol -> ";
	cin >> symbol;

	bool direction;
	cout << "Input line direction\n0 - horizontal; 1 - vertical;\n-> ";
	cin >> direction;

	int speed;
	cout << "Input speed of the output(in milliseconds) -> ";
	cin >> speed;

	switch (direction)
	{
	case 0:
	{
		for (int i = 0; i < width; i++)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(speed));
			cout << symbol;
		}
	} break;
	case 1:
	{
		for (int i = 0; i < width; i++)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(speed));
			cout << symbol;
			cout << endl;
		}
	} break;
	}
}

int dice()
{
	int roll;
	int min = 1, max = 6;

	roll = rand() % (max - min + 1) + min;

	return roll;
}

int wait(int t)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(t));
	return 0;
}

void ex_2()
{
	srand(time(0));
	int computer = 0, player = 0;
	int throws = 0;

	int first_throw, second_throw;
	while (throws < 3)
	{
		wait(500);
		cout << "Computer throws cubes..." << endl;
		wait(1000);
		
		first_throw = dice();
		second_throw = dice();

		cout << first_throw << " and " << second_throw << '!' << endl;
		computer += first_throw + second_throw;

		wait(500);
		cout << "Player throws cubes... " << endl;
		wait(1000);

		first_throw = dice();
		second_throw = dice();

		cout << first_throw << " and " << second_throw << '!' << endl;
		player += first_throw + second_throw;
		
		throws++;
	}
	cout << "Computer score: " << computer << endl;
	cout << "Player score: " << player << endl;
	if (computer > player)
	{
		cout << "Computer wins!" << endl;
	}
	else
	{
		cout << "Player wins!" << endl;
	}
}

void ex_3()
{
	srand(time(0));
	const int size = 12;
	int arr[size];

	cout << "Arr: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 50;  // [-50 - 50]
		cout << arr[i] << ' ';
	}
	cout << endl;

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
void ex_4()
{
	const int size = 12;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int begin, end;
	cout << "Input beginning of the range -> ";
	cin >> begin;
	cout << "Input ending of the range -> ";
	cin >> end;

	int min, max;
	min = max = arr[begin-1];
	for (int i = begin-1; i < end; i++)
	{
		(arr[i] > max) ? max = arr[i] : true;
		(arr[i] < min) ? min = arr[i] : true;
	}
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
}

int min(int r, int l)
{
	return r < l ? r : l;
}

int max(int r, int l)
{
	return r > l ? r : l;
}

void ex_5()
{
	int size;
	cout << "Input size of the array -> ";
	cin >> size;

	int* arr = new int[size];

	cout << "Input " << size << " elements of the array\n-> ";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int neg_sum = 0;

	int min_max_mult = 1;
	int min_index = 0, max_index = 0;

	int even_mult = 1;
	
	int neg_neg_sum = 0;
	int first_neg_index = 0, second_neg_index = 0;

	int min, max;
	min = max = arr[0];
	// neg_sum, even mult, min, max
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			neg_sum += arr[i];
		}

		if (arr[i] % 2 == 0)
		{
			even_mult *= arr[i];
		}

		if (arr[i] > max)
		{
			max = arr[i];
			max_index = i;
		}
		else if (arr[i] < min)
		{
			min = arr[i];
			min_index = i;
		}

	}

	// min max mult
	for (int i = ::min(min_index, max_index) + 1; i < ::max(min_index, max_index); i++)
	{
		min_max_mult *= arr[i];
	}
	
	// neg neg sum
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			first_neg_index = i;
			break;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0 && i > first_neg_index)
		{
			second_neg_index = i;
		}
	}
	for (int i = first_neg_index + 1; i < second_neg_index; i++)
	{
		neg_neg_sum += arr[i];
	}

	cout << endl;

	cout << "neg sum = " << neg_sum << endl;
	cout << "min = " << min << "; max = " << max << endl;
	cout << "min max mult = " << min_max_mult << endl;
	cout << "even mult = " << even_mult << endl;
	cout << "neg neg sum = " << neg_neg_sum << endl;
}

