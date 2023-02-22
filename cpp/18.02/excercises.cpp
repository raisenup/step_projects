#include <iostream>
#include <ctime>
#include <vector>
using std::vector, std::cout, std::cin;

vector<int> init_arr(int size)
{
	vector<int> buf(size);
	for (int i = 0; i < size; i++)
	{
		buf[i] = rand() % 10;
	}
	return buf;
}

void print_arr(const vector<int> &a)
{
	for (const auto &i : a)
	{
		cout << i << ' ';
	}
	cout << '\n';
}

double min(vector<int> &a, vector<int> &b)
{
	int min = a[0];
	for (const auto& i : a)
	{
		(i < min) ? min = i : true;
	}
	for (const auto& i : b)
	{
		(i < min) ? min = i : true;
	}
	return min;
}

double max(vector<int> &a, vector<int> &b)
{
	int max = a[0];
	for (const auto& i : a)
	{
		(i > max) ? max = i : true;
	}
	for (const auto& i : b)
	{
		(i > max) ? max = i : true;
	}
	return max;
}

double avg(vector<int> &a, vector<int> &b)
{
	double sum = 0;
	for (const auto& i : a)
	{
		sum += i;
	}
	for (const auto& i : b)
	{
		sum += i;
	}
	return sum / (a.size() + b.size());
}

int ex_1()
{
	srand(time(0));
	const int size = 5;
	vector<int>	a = init_arr(size);
	vector<int>	b = init_arr(size);

	print_arr(a);
	print_arr(b);
	
	double (*fnc[3])(vector<int>&, vector<int>&) = { min, max, avg };
	
	int choice = 0;
	cout << "Input your choice (0 - min, 1 - max, 2 - avg) -> ";
	cin >> choice;

	if (choice < 0 || choice > 2)
	{
		cout << "Index out of range!" << '\n';
		return 0;
	}

	cout << fnc[choice](a, b) << '\n';
}

