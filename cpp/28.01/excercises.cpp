#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

// rand

int rand_int(int range = 10)
{
    return rand() % range;
}

double rand_double(int range = 10)
{
    return (rand() % range) + ((rand() % 1000000) * .00001);
}

char rand_char()
{
    return rand() % 255;
}

// arr init

template <typename T>
T arr_init(T arr[][5], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (typeid(arr[0][0]) == typeid(int))
			{
				arr[i][j] = rand_int();
			}
			else if (typeid(arr[0][0]) == typeid(double))
			{
				arr[i][j] = rand_double();
			}
			else if (typeid(arr[0][0]) == typeid(char))
			{
				arr[i][j] = rand_char();
			}
		}
	}
	return 0;
}

// arr output

template <typename T>
T arr_out(T arr[][5], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	return 0;
}

// arr min and max on main diagonal

template <typename T>
T arr_min_max(T arr[][5], const int size)
{
	T min, max;
	min = max = arr[0][0];
	for (size_t i = 0, j = 0; i < size; i++)
	{
		(arr[i][j] > max) ? max = arr[i][j] : true;
		(arr[i][j] < min) ? min = arr[i][j] : true;
		j++;
	}
	cout << "Min on diagonal: " << min << endl;
	cout << "Max on diagonal: " << max << endl;

	return 0;
}

// arr sort and output 

template <typename T>
T arr_sort(T arr[][5], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::sort(std::begin(arr[i]), std::end(arr[i]));
	}
	cout << "\nSorted array: " << endl;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	return 0;
}

void ex_1()
{
	srand(time(0));
	const int size = 5;
	int arr1[size][size];
	double arr2[size][size];
	char arr3[size][size];

	cout << "\n\n\n";
	arr_init(arr1, size);
	arr_out(arr1, size);
	arr_min_max(arr1, size);
	arr_sort(arr1, size);


	cout << "\n\n\n";
	arr_init(arr2, size);
	arr_out(arr2, size);
	arr_min_max(arr2, size);
	arr_sort(arr2, size);

	cout << "\n\n\n";
	arr_init(arr3, size);
	arr_out(arr3, size);
	arr_min_max(arr3, size);
	arr_sort(arr3, size);
}

