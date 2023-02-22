#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <unordered_map>
using std::unordered_map, std::vector, std::cout, std::cin, std::endl;

template <typename T>
vector<T> init_arr(const int size)
{
	vector<T> arr(size);
	for (auto& i : arr)
	{
		i = rand() % 10 - 5;
	}
	return arr;
}

template <typename T>
void print_arr(const vector<T> &arr)
{
	for (const auto& i : arr)
	{
		cout << i << ' ';
	}
	cout << endl;
}

template <typename T>
vector<T> merge_arrs(const vector<T> &a, const vector<T> &b)
{
	auto size{ a.size() + b.size() };
	vector <T> ans;
	ans.reserve(size);
	ans.insert(ans.end(), a.begin(), a.end());
	ans.insert(ans.end(), b.begin(), b.end());

	return ans;
}

void ex_1()
{
	srand(time(0));
	int m;
	cout << "Input M -> ";
	cin >> m;
	vector<int> a{ init_arr<int>(m) };

	int n;
	cout << "Input N -> ";
	cin >> n;
	vector<int> b{ init_arr<int>(n) };

	print_arr(a);
	print_arr(b);
	cout << endl;

	vector<int> c{ merge_arrs(a, b) };
	print_arr(c);
}

template <typename T>
vector<T> merge_nr(const vector<T> &a, const vector<T> &b)
{
	unordered_map<T, bool> mp{};
	vector <T> buf{ merge_arrs(a, b) };
	vector <T> ans{};
	for (int i = 0; i < buf.size(); i++)
	{
		if (mp.find(buf[i]) == mp.end())
		{
			ans.push_back(buf[i]);
		}
		mp[buf[i]] = true;
	}

	return ans;
}

void ex_2()
{
	srand(time(0));
	int m;
	cout << "Input M -> ";
	cin >> m;
	vector<int> a{ init_arr<int>(m) };

	int n;
	cout << "Input N -> ";
	cin >> n;
	vector<int> b{ init_arr<int>(n) };

	print_arr(a);
	print_arr(b);
	cout << endl;

	vector<int> c{ merge_nr(a, b) };
	print_arr(c);
}

bool is_even(int i)
{
	return i % 2 == 0;
}

bool is_odd(int i)
{
	return i % 2 != 0;
}

template<typename T>
vector<T> remove_smth(const vector<T>& a, std::function<bool(int)> fnc)
{
	vector<T> ans;
	std::copy_if(a.begin(), a.end(), std::back_inserter(ans), fnc);
	return ans;
}

void ex_3()
{
	srand(time(0));
	int m;
	cout << "Input M -> ";
	cin >> m;
	vector<int> a{ init_arr<int>(m) };
	print_arr(a);
	
	bool to_remove;
	cout << "Input what to remove (0 - even numbers, 1 - odd numbers)\n-> ";
	cin >> to_remove;

	std::function<bool(int)> fnc {is_odd};
	if (to_remove)
	{
		fnc = is_even;
	}
	vector<int> b{ remove_smth<int>(a, fnc) };
	print_arr(b);
}

int sum_mult_arr(const vector<int> &a, int &sum, int &mult)
{
	for (const auto& i : a)
	{
		sum += i;
		mult *= i;
	}
	return 0;
}

void ex_4()
{
	srand(time(0));
	const int size = 10;
	vector<int> a = init_arr<int>(size);
	print_arr(a);

	int sum = 0, mult = 1;
	sum_mult_arr(a, sum, mult);
	cout << sum << ' ' << mult << endl; 
}

void count_nums(const vector<int> &a)
{
	int pos = 0, neg = 0, zeros = 0;
	for (const auto &i : a)
	{
		if (i > 0)
		{
			pos++;
		}
		else if (i < 0)
		{
			neg++;
		}
		else
		{
			zeros++;
		}
	}
	cout << "Positive values: " << pos << "\nNegative values: " << neg << "\nZeros: " << zeros << "\n";
}

void ex_5()
{
	const int size = 10;
	vector<int> a = init_arr<int>(size);
	print_arr(a);
	count_nums(a);
}

bool check_subset(const vector<int> &a, const vector<int> &b)
{
	int i = 0, j = 0;
	for (i = 0; i < b.size(); i++)
	{
		for (j = 0; j < a.size(); j++)
		{
			if (b[i] == a[j])
			{
				break;
			}
		}

		if (j == a.size())
		{
			return 0;
		}
	}
	return 1;
}

void ex_6()
{
	srand(time(0));
	const int size_a = 10;
	vector<int> a = init_arr<int>(size_a);
	const int size_b = 2;
	vector<int> b = init_arr<int>(size_b);
	print_arr(a);
	print_arr(b);

	cout << check_subset(a, b) << '\n';
}

vector<int> delete_neg(const vector<int> &a)
{
	vector<int> buf;
	for (const auto& i : a)
	{
		if (i > 0)
		{
			buf.push_back(i);
		}
	}
	return buf;
}

void ex_7()
{
	srand(time(0));
	const int size = 10;
	vector<int> a = init_arr<int>(size);
	vector<int> b = delete_neg(a);
	print_arr(a);
	print_arr(b);
}

vector<int> push_block_back(vector<int> &a)
{
	vector<int> buf = a;

	cout << "Input elements till you're done (input 0 to end loop)\n-> ";
	int elem;
	while (cin >> elem)
	{
		if (elem == 0)
		{
			break;
		}
		buf.push_back(elem);
	}
	return buf;
}

void ex_8()
{
	const int size = 5;
	vector<int> a = init_arr<int>(size);
	print_arr(a);
	vector<int> b = push_block_back(a);
	print_arr(b);
}

vector<int> insert_block(vector<int> &a, int index)
{
	if (index < 0 || index > a.size())
	{
		cout << "Error: index out of range" << '\n';
		return a;
	}
	vector<int> buf;
	
	int i = 0;
	for (i = 0; i < index; i++)
	{
		buf.push_back(a[i]);
	}

	cout << "Input elements till you're done (input 0 to end loop)\n-> ";
	int elem;
	while (cin >> elem)
	{
		if (elem == 0)
		{
			break;
		}
		buf.push_back(elem);
	}

	for (; i < a.size(); i++)
	{
		buf.push_back(a[i]);
	}

	return buf;
}

void ex_9()
{
	const int size = 5;
	vector<int> a = init_arr<int>(size);
	print_arr(a);
	vector<int> b = insert_block(a, 2);
	print_arr(b);
}

vector<int> delete_block(vector<int> &a, int index, int elements)
{
	if (index < 0 || index > a.size())
	{
		cout << "Error: index out of range" << '\n';
		return a;
	}

	vector<int> buf;

	int i;
	for (i = 0; i < index; i++)
	{
		buf.push_back(a[i]);
	}
	i += elements;
	for (; i < a.size(); i++)
	{
		buf.push_back(a[i]);
	}
	return buf;
}

void ex_10()
{
	const int size = 10;
	vector<int> a = init_arr<int>(size);
	print_arr(a);
	vector<int> b = delete_block(a, 2, 3);
	print_arr(b);
}

