#include <iostream>
#include <ctime>
using namespace std;

void ex_1()
{
	srand(time(0));
	const int x = 5, y = 5;
	int arr[y][x];

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

	int sum = 0;
	int min, max;
	min = max = arr[0][0];
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			sum += arr[i][j];

			(arr[i][j] > max) ? max = arr[i][j] : true;
			(arr[i][j] < min) ? min = arr[i][j] : true;

			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "sum = " << sum << endl;
	cout << "avg = " << sum/(x*y) << endl;
	cout << "min = " << min << endl;
	cout << "max = " << max << endl;
}

void ex_2()
{
	srand(time(0));
	const int x = 6, y = 5;
	int arr[y][x];

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			arr[i][j] = rand() % 50;
		}
	}

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (i == 3) {
				cout << "\t" << "-";
			}
			else if (j == 4) {
				cout << "\t" << "|";
			}
			else if (j == 5) {
				arr[i][j] = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3];
				cout << "\t" << arr[i][j];
			}
			else if (i == 4 && j < 5) {
				arr[i][j] = arr[0][j] + arr[1][j] + arr[2][j];
				cout << "\t" << arr[i][j];
			}
			else {
				cout << "\t" << arr[i][j];
			}
		}
		cout << endl;
	}
}

void ex_3()
{
	srand(time(0));
	const int x1 = 5, y1 = 10;
	int arr1[y1][x1];

	const int x2 = 5, y2 = 5;
	int arr2[y2][x2];

	for (int i = 0; i < y1; i++)
	{
		for (int j = 0; j < x1; j++)
		{
			arr1[i][j] = rand() % 50;
			cout << arr1[i][j] << '\t';
		}
		cout << endl;
	}

	cout << "\n\n\n";

	// i, j - arr2
	// m, k - arr1
	for (int i = 0, m = 0; i < y2; i++)
	{
		for (int j = 0, k = 0; j < x2; j++)
		{
			arr2[i][j] = arr1[m][k] + arr1[m][k+1];
			cout << arr2[i][j] << '\t';
			k += 2;
		}
		cout << endl;
		m += 2;
	}
}

