#include <iostream>
using namespace std;

void ex_1()
{
	int a, res = 0;
	cout << "Input a -> ";
	cin >> a;
	for (; a <= 500; a++)
	{
		res += a;
	}
	cout << res << endl;
}

void ex_2()
{
	int x, y;
	cout << "Input x -> ";
	cin >> x;
	cout << "Input y -> ";
	cin >> y;
	int res = x;
	for (; y > 1; --y)
	{
		res *= x;
	}
	cout << res << endl;
}

void ex_3()
{
	double sum = 0, count = 1000;
	for (int i = 0; i <= count; i++)
	{
		sum += i;
	}
	cout << sum / count << endl;
}

void ex_4()
{
	int a, res = 1;
	cout << "Input a -> ";
	cin >> a;
	if (a >= 1 && a <= 20)
	{
		for (; a <= 20; a++)
		{
			res *= a;
		}
		cout << res << endl;
	}
	else
	{
		cout << "Error: wrong value!";
	}
}

void ex_5()
{
	int k;
	cout << "Input k -> ";
	cin >> k;
	for (int i = 1; i <= 10; i++)
	{
		cout << k << " x " << i << " = " << k * i << ';' << endl;
	}
}

void ex_6()
{
	int res = 0;
	int hundreds, tens, ones;
	for (int i = 100; i <= 999; i++)
	{
		hundreds = i / 100 % 100;
		tens = i / 10 % 10;
		ones = i % 100 % 10;
		if (hundreds == tens || hundreds == ones)
		{
			res += 1;
		}
	}
	cout << res << endl;
}

void ex_7()
{
	int res = 0;
	int hundreds, tens, ones;
	for (int i = 100; i <= 999; i++)
	{
		hundreds = i / 100 % 100;
		tens = i / 10 % 10;
		ones = i % 100 % 10;
		if ((hundreds != tens && hundreds != ones) && tens != ones)
		{
			res += 1;
		}
	}
	cout << res << endl;
}

void ex_8()
{
	int num;
	cout << "Input number -> ";
	cin >> num;
	for (int i = 1000000000; i >= 10; i /= 10)
	{
		if (!(num / i % 10 == 3) && !(num / i % 10 == 6))
		{
			cout << num / i % 10;
		}
		if (i == 10)
		{
			cout << num % i % 10;
		}
	}
}

void ex_9()
{
	int a;
	cout << "Input a -> ";
	cin >> a;

	cout << "Result numbers: ";
	for (int i = 1; i <= a; i++)
	{
		if (a % (i*i) == 0 && a % (i*i*i) != 0 && a != 1)
		{
			cout << i << endl;
		}
	}
}

void ex_10()
{
	// виконання умови, описаної у задачі неможливе
}

void ex_11()
{
	int num;
	cout << "Input number -> ";
	cin >> num;
	cout << "Result numbers: ";
	for (int i = 2; i <= num; i++)
	{
		if (num % i == 0) 
		{
			cout << i << ' ';
		}
	}
}

void ex_12()
{
	int num1, num2;
	cout << "Input first number -> ";
	cin >> num1;
	cout << "Input second number -> ";
	cin >> num2;
	cout << "Result numbers: ";
	for (int i = 2; i <= max(num1, num2); i++)
	{
		if (num1 % i == 0 && num2 % i == 0) 
		{
			cout << i << ' ';
		}
	}
}

