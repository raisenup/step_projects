#include <iostream>
#include <array>
using namespace std;

int ex_1(int num, int pow, int i = 0)
{
	i++;
	if (i < pow)
	{
		return num *= ex_1(num, pow, i);
	}
	return num;
}

int ex_2(int n, int i = 0)
{
	i++;
	if (i <= n)
	{
		cout << '*';
		return ex_2(n, i);
	}
	return 0;
}

int ex_3(int a, int b, int sum = 0, int i = 0)
{
	if (i == 0)
	{
		i = a;
	}
	sum += i;
	i++;
	if (i <= b)
	{
		return ex_3(a, b, sum, i);
	}

	return sum;
}

int ex_4(array<int, 100>& arr, int curr_sum = 0, int res_index = 0, int i = 0)
{
	// uncomment couts to see the whole table
	//cout << endl;
	curr_sum = 0;
	if (i > 90)
	{
		return res_index;
	}
	for (size_t j = i; j < i + 10; j++)
	{
		curr_sum += arr[j];
		//cout << arr[j] << '\t';
	}
	//cout << curr_sum << ' ' << i;
	static int min_sum = curr_sum;
	if (min_sum > curr_sum)
	{
		res_index = i;
		min_sum = curr_sum;
	}
	i++;
	return ex_4(arr, curr_sum, res_index, i);
}

template <typename T>
T arr_max(const T* arr, const int size)
{
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		(arr[i] > max) ? max = arr[i] : true;
	}
	return max;
}

template <typename T>
T arr_max(const T arr[][5], const int Ysize, const int Xsize)
{
	int max = arr[0][0];
	for (size_t i = 0; i < Ysize; i++)
	{
		for (size_t j = 0; j < Xsize; j++)
		{
			(arr[i][j] > max) ? max = arr[i][j] : true;
		}
	}
	return max;
}

template <typename T>
T arr_max(const T arr[][5][5], const int Zsize, const int Ysize, const int Xsize)
{
	int max = arr[0][0][0];
	for (size_t z = 0; z < Zsize; z++)
	{
		for (size_t y = 0; y < Ysize; y++)
		{
			for (size_t x = 0; x < Xsize; x++)
			{
				(arr[z][y][x] > max) ? max = arr[z][y][x] : true;
			}
		}
	}
	return max;
}

template <typename T>
T Max(const T a, const T b)
{
	return a > b ? a : b;
}

template <typename T>
T Max(const T a, const T b, const T c)
{
	return a > b && a > c ? a : b > a && b > c ? b : c;
}


int ex_5()
{
	srand(time(0));
	const int size = 5;

	// 1D
	int arr1D[size];
	for (size_t x = 0; x < size; x++)
	{
		arr1D[x] = rand() % 50;
	}
	cout << arr_max(arr1D, size) << endl;

	// 2D
	int arr2D[size][size];
	for (size_t y = 0; y < size; y++)
	{
		for (size_t x = 0; x < size; x++)
		{
			arr2D[y][x] = rand() % 50;
		}
	}
	cout << arr_max(arr2D, size, size) << endl;

	// 3D
	int arr3D[size][size][size];
	for (size_t z = 0; z < size; z++)
	{
		for (size_t y = 0; y < size; y++)
		{
			for (size_t x = 0; x < size; x++)
			{
				arr3D[z][y][x] = rand() % 50;
			}
		}
	}
	cout << arr_max(arr3D, size, size, size) << endl;
	
	cout << Max(10, 15) << endl;
	cout << Max(1, 3, 2) << endl;

	return 0;
}

