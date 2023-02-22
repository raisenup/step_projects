#include <iostream>
using namespace std;

int ex_1(int *a, int *b)
{
	return (*a > *b) ? *a : *b;
}

char ex_2(int *a)
{
	return (*a >= 0) ? '+' : '-';
}

void ex_3(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int add(int *a, int *b)
{
	return *a + *b;
}

int sub(int *a, int *b)
{
	return *a - *b;
}

int div(int *a, int *b)
{
	return *a / *b;
}

int mult(int *a, int *b)
{
	return *a * *b;
}

int ex_4(int *a, char *op, int *b)
{
	int (*func)(int*, int*) = add;
	switch (*op)
	{
	case '+':
		func = add;
		break;
	case '-':
		func = sub;
		break;
	case '/':
		func = div;
		break;
	case '*':
		func = mult;
		break;
	}
	return func(a, b);
}

int ex_5(int *arr, int length)
{
	int sum = 0;
	for (int *i = arr; i < arr + length; i++)
	{
		sum += *i;
	}
	return sum;
}
