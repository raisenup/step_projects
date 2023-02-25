#include <iostream>
#include "str_lib.h"
using std::cout, std::cin;

void ex_1()
{
	char str[] = "Hello";
	cout << mystrlen(str) << '\n';
}

void ex_2()
{
	const int size = 100;
	char str1[size] = "Some old c-style string";
	char str2[size];

	mystrcpy(str2, str1);
	cout << str2 << '\n';
}

void ex_3()
{
	const int size = 100;
	char str1[size] = "Some old c-style string";
	char str2[size] = " and another cstring";

	mystrcat(str1, str2);
	cout << str1 << '\n';
}

void ex_4()
{
	const int size = 100;
	char str[size] = "Sphinx of black quartz judge my vow";
	char *found = mystrchr(str, 'b');
	cout << *found << '\n';
}

void ex_5()
{
	const int size = 100;
	char str[size] = "Sphinx of black quartz judge my vow";
	char substr[size] = "black";
	char *found = mystrstr(str, substr);
	cout << *found << '\n';
}
