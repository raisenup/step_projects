#include <iostream>
#include <vector>;
using std::vector, std::cout, std::cin;

vector<vector<int>> init_arr(const int sizeX, const int sizeY)
{
	vector<vector<int>> buf(sizeY, vector<int>(sizeX));
	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
		{
			buf[i][j] = rand() % 10;
		}
	}
	return buf;
}

void print_arr(const vector<vector<int>> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < a[i].size(); j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}
}

vector<vector<int>> add_col(const vector<vector<int>> &a, const vector<int> &col, int index = 0)
{
	if (index < 0 || index > a.size() || col.size() != a.size())
	{
		cout << "Something went wrong...\n";
		return a;
	}
	
	vector<vector<int>> buf(a.size(), vector<int>(a[0].size()+1));

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < index; j++)
		{
			buf[i][j] = a[i][j];
		}
	}
	
	for (int i = 0; i < col.size(); i++)
	{
		buf[i][index] = col[i];
	}

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = index; j < a[i].size(); j++)
		{
			buf[i][j+1] = a[i][j];
		}
	}

	return buf;
}

void ex_1()
{
	srand(time(0));
	const int sizeX = 7, sizeY = 5;
	vector<vector<int>> a = init_arr(sizeX, sizeY);

	vector<int> col = { 1, 2, 3, 4, 5 };
	vector<vector<int>> b = add_col(a, col, 2);

	print_arr(a);
	cout << "\n\n\n";
	print_arr(b);
}

vector<vector<int>> delete_col(const vector<vector<int>> &a, int index)
{
	vector<vector<int>> buf(a.size(), vector<int>(a[0].size()-1));

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < index; j++)
		{
			buf[i][j] = a[i][j];
		}
	}

	for (int i = 0; i < buf.size(); i++)
	{
		for (int j = index; j < buf[i].size(); j++)
		{
			buf[i][j] = a[i][j+1];
		}
	}

	return buf;
}

void ex_2()
{
	srand(time(0));
	const int sizeX = 7, sizeY = 5;
	vector<vector<int>> a = init_arr(sizeX, sizeY);
	vector<vector<int>> b = delete_col(a, 2);
	print_arr(a);
	cout << "\n\n\n";
	print_arr(b);
}

void swap(int &l, int &r)
{
	int tmp = l;
	l = r;
	r = tmp;
}

void swap(vector<int> &l, vector<int> &r)
{
	vector<int> tmp = l;
	l = r;
	r = tmp;
}

vector<vector<int>> shift(const vector<vector<int>> &a, char direction, int to_shift)
{
	vector<vector<int>> buf = a;

	switch (direction)
	{
	case 'l': {
		
		for (int k = 0; k < to_shift; k++)
		{
			for (int i = 0; i < buf.size(); i++)
			{
				for (int j = 1; j < buf[i].size(); j++)
				{
					swap(buf[i][j-1], buf[i][j]);
				}
			}
		}

	} break;
	case 'r': {

		for (int k = 0; k < to_shift ; k++)
		{
			for (int i = 0; i < buf.size(); i++)
			{
				for (int j = buf[i].size()-1; j > 0; j--)
				{
					swap(buf[i][j-1], buf[i][j]);
				}
			}
		}

	} break;
	case 'u': {

		for (int k = 0; k < to_shift; k++)
		{
			for (int i = 0; i < buf.size()-1; i++)
			{
				swap(buf[i], buf[i + 1]);
			}
		}

	} break;
	case 'd': {

		for (int k = 0; k < to_shift; k++)
		{
			for (int i = buf.size()-1; i > 0; i--)
			{
				swap(buf[i-1], buf[i]);
			}
		}

	} break;
	}

	return buf;
}

void ex_3()
{
	srand(time(0));
	const int sizeX = 3, sizeY = 3;
	vector<vector<int>> a = init_arr(sizeX, sizeY);
	print_arr(a);

	// choice means row or col
	char choice, direction;
	cout << "Rows or columns? (r - row, c - column)\n-> ";
	cin >> choice;

	switch (choice)
	{
	case 'r':
		cout << "Input direction (u - up, d - down)\n-> ";
		cin >> direction;
		break;
	case 'c':
		cout << "Input direction (l - left, r - right)\n-> ";
		cin >> direction;
		break;
	default:
		cout << "Wrong input!" << '\n';
		return;
	}

	int to_shift;
	cout << "Input number to shift by\n-> ";
	cin >> to_shift;
	
	vector<vector<int>> b = shift(a, direction, to_shift);
	print_arr(b);
}

