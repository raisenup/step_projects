#include <iostream>
#include <string>
using namespace std;

string change_spaces(const string &a)
{
	string buf = a;
	for (int i = 0; i < buf.size(); i++)
	{
		if (buf[i] == ' ')
		{
			buf[i] = '\t';
		}
	}
	return buf;
}

void ex_1()
{
	string a = "There are some spaces in this sentence.";
	cout << a << '\n';
	string b = change_spaces(a);
	cout << b << '\n';
}

void count_symbols(const string &a)
{
	int letters = 0, numbers = -1, other = 0; // null-terminator counts too, so numbers have to be -1
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] >= 65 && a[i] <= 90 || a[i] >= 97 && a[i] <= 122)
		{
			letters++;
		}
		else if (a[i] >= 48 && a[i] <= 57)
		{
			numbers++;
		}
		else
		{
			other++;
		}
	}
	cout << "Letters: " << letters << '\n';
	cout << "Numbers: " << numbers << '\n';
	cout << "Other symbols: " << other << '\n';
}

void ex_2()
{
	string a = "There are some letters and maybe some numbers like 1, 2, 3, 4, 5 and other symbols like &^@(0!";
	cout << a << '\n';
	count_symbols(a);
}

int count_words(const string &a)
{
	int words = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == ' ')
		{
			words++;
		}
	}
	return words;
}

void ex_3()
{
	string a = "There are 6 words in this sentence.";
	cout << a << '\n';
	cout << count_words(a) << '\n';
}

string reverse(const string &a)
{
	string reversed(a.size(), ' ');
	for (int i = 0, j = a.size() - 1; j >= 0; j--)
	{
		reversed[i] = a[j];
		i++;
	}
	return reversed;
}

bool is_palindrome(const string &a)
{
	if (reverse(a) == a)
	{
		return 1;
	}
	return 0;
}

void ex_4()
{
	string a = "ABABA";
	cout << a << '\n';
	cout << is_palindrome(a) << '\n';
}

