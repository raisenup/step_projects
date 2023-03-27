#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using std::cout, std::cin;
using std::vector, std::string;

void ex_1()
{
	// this thing won't work if there are more lines in second file
	// in that case you may use nested while loop and check if there are more lines in one or other file
	std::ifstream file1("files/ex_1/first.txt");
	std::ifstream file2("files/ex_1/second.txt");

	string line1;
	string line2;
	int i = 1;
	while (getline(file1, line1))
	{
		getline(file2, line2);
		if (line1 != line2)
		{
			cout << "Those lines are different:\n";
			cout << i << ' ' << line1 << '\n' << i << ' ' << line2 << "\n\n";
		}
		i++;
	}
}

void ex_2()
{
	std::ifstream rfile("files/ex_2/rfile.txt");
	int symbols = 0;
	int lines = 0;
	int vowels = 0;
	int consonants = 0;
	int numbers = 0;

	if (rfile.is_open())
	{
		string line;
		while (getline(rfile, line))
		{
			symbols += line.length() - 1;
			lines++;
			for (int i = 0; i < line.length(); i++)
			{
				if (isalpha(line[i]))
				{
					if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' || line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
					{
						vowels++;
					}
					else
					{
						consonants++;
					}
				}
				else if (isdigit(line[i]))
				{
					numbers++;
				}
			}
		}
		rfile.close();

		std::ofstream wfile("files/ex_2/wfile.txt");
		wfile << "Statistics of rfile.txt:\n" << "\tSymbols : " << symbols << '\n' << "\tLines : " << lines << '\n' << "\tVowels : " << vowels << '\n' << "\tConsonants : " << consonants << '\n' << "\tNumbers : " << numbers;
		wfile.close();
	}
	else
	{
		cout << "File didn't open!\n";
	}
}

string caeserCipher(const string &str, int shift)
{
	string output = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			char letter = str[i];

			if (isupper(letter))
			{
				letter += shift % 26;
				if (letter > 'Z')
				{
					letter -= 26;
				}
			}
			else if (islower(letter))
			{
				letter += shift % 26;
				if (letter > 'z')
				{
					letter -= 26;
				}
			}
			output += letter;
		}
		else
		{
			output += str[i];
		}
	}
	return output;
}

void ex_3()
{
	std::ifstream rfile("files/ex_3/rfile.txt");
	std::ofstream wfile("files/ex_3/wfile.txt");

	int shift;
	cout << "Enter number to shift the file by -> ";
	cin >> shift;
	
	if (rfile.is_open())
	{
		string line;
		while (getline(rfile, line))
		{
			wfile << caeserCipher(line, shift);
		}
	}
}

