#include <iostream>
#include <chrono>
using namespace std;

void ex_1()
{
	int num;
	cout << "Input number -> ";
	cin >> num;
	for (int i = 0; i <= num; i++)
	{
		cout << i << ' ';
	}
}

void ex_2()
{
	int begin, end;
	cout << "Input beginning of the range -> ";
	cin >> begin;
	cout << "Input ending of the range -> ";
	cin >> end;
	cout << "\nAll numbers: ";
	for (int i = begin; i <= end; i++)
	{
		cout << i << ' ';
	}
	cout << "\n\nEven numbers: ";
	for (int i = begin; i <= end; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << ' ';
		}
	}
	cout << "\n\nOdd numbers: ";
	for (int i = begin; i <= end; i++)
	{
		if (i % 2 == 1)
		{
			cout << i << ' ';
		}
	}
	cout << "\n\nMultiples of 7: ";
	for (int i = begin; i <= end ; i++)
	{
		if (i % 7 == 0)
		{
			cout << i << ' ';
		}
	}
}

void ex_3()
{
	int begin, end;
	cout << "Input beginning of the range -> ";
	cin >> begin;
	cout << "Input ending of the range -> ";
	cin >> end;

	int res = 0;
	for (int i = begin; i <= end; i++)
	{
		res += i;
	}
	cout << "Result: " << res << endl;
}

void ex_4()
{
	int x, res = 0;
	cout << "Input numbers (input 0 to end loop)\n-> ";
	while (cin >> x)
	{
		if (x == 0)
		{
			cout << "Result: " << res << endl;
			break;
		}
		res += x;
	}
}

void ex_5()
{
	auto start_time = chrono::high_resolution_clock::now();
	srand(time(0));
	int random = rand() % 500;
	int guess, tries = 0;

	cout << "Try your best!" << endl;
	while (cin >> guess)
	{
		tries += 1;
		if (guess == random)
		{
			auto end_time = chrono::high_resolution_clock::now();
			auto time = end_time - start_time;
			
			cout << "You've won!" << endl;
			cout << "It took you:\n\t" << tries << " tries\n\t" << time/std::chrono::seconds(1) << " seconds" << endl;
			break;
		}
		else if (guess < random)
		{
			cout << "Guess higher!" << endl;
		}
		else
		{
			cout << "Guess lower!" << endl;
		}
	}
}

int ex_6_convert(int &valute1, double &value, int &valute2, double &converted_value)
{
	double valute_eq = 0;
	
	switch (valute1)
	{
	case 1:
	{
		switch (valute2)
		{
		case 2:
		{
			valute_eq = 129.56;
		} break;
		case 3:
		{
			valute_eq = 36.74;
		} break;
		}
	} break;
	case 2:
	{
		switch (valute2)
		{
		case 1:
		{
			valute_eq = .0077;
		} break;
		case 3:
		{
			valute_eq = .28;
		} break;
		}
	} break;
	case 3:
	{
		switch (valute2)
		{
		case 1:
		{
			valute_eq = .027;
		} break;
		case 3:
		{
			valute_eq = 3.53;
		} break;
		}
	} break;
	}
	
	converted_value = value * valute_eq;
	
	return 0;
}

int ex_6()
{
	// USD, JPY, UAH
	int valute1, valute2;
	double value, converted_value;

	cout << "#---------------#\n|USD   JPY   UAH|\n| 1     2     3 |\n#---------------#\n";
	cout << "Input first valute -> ";
	cin >> valute1;
	cout << "Input second valute -> ";
	cin >> valute2;

	if ((valute1 > 3 || valute1 < 1) || (valute2 > 3 || valute2 < 1) || valute1 == valute2)
	{
		cout << "Error: wrong valute!";
		return 0;
	}

	system("cls");

	cout << "Input value -> ";
	cin >> value;

	ex_6_convert(valute1, value, valute2, converted_value);
	cout << "Converted: " << converted_value << endl;

	return 0;
}

