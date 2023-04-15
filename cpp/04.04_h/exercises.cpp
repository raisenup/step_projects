#include "exercises.h"

void readFile(const string &filename)
{
	ifstream file(filename);

	string line;
	while (getline(file, line))
	{
		cout << line << '\n';
	}
	file.close();
}

int countWords(const string &filename)
{
	int count = 0;
	ifstream file(filename);

	string line;
	while (getline(file, line))
	{
		stringstream ss(line);
		string word;
		while (ss >> word)
		{
			count++;
		}
	}
	file.close();
	return count;
}

void copyFile(const string &filename1, const string &filename2)
{
	ifstream file1(filename1);
	ofstream file2(filename2);


	string line;
	while (getline(file1, line))
	{
		file2 << line << '\n';
	}
	file1.close();
	file2.close();

	cout << "Copied successfully!\n";
}

void mergeFiles(const string &filename1, const string &filename2, const string &filename3)
{
	ifstream file1(filename1);
    ifstream file2(filename2);
    ofstream merged_file(filename3);

	string line1;
	string line2;

    while (getline(file1, line1) && getline(file2, line2)) {
		merged_file << line1 << '\n';
		merged_file << line2 << '\n';
    }
    file1.close();
    file2.close();
    merged_file.close();

	cout << "Files merged successfully!\n";
}

int findTheBiggestNumber(const string &filename)
{
	ifstream file(filename);

    int max_num = INT_MIN; 

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        int num;
        while (ss >> num) {
            if (num > max_num) {
                max_num = num;
            }
        }
    }
	return max_num;
}

void removeComments(const string &filename1, const string &filename2)
{
	ifstream file1(filename1);
	ofstream file2(filename2);

	string line;
	while (getline(file1, line))
	{
		if (int found = line.find_first_of("//"); found != string::npos)
		{
			line = line.substr(0, found);
		}
		file2 << line << '\n';
	}
	file1.close();
	file2.close();

	cout << "Comments removed!\n";
}

void getStats(const string &filename1)
{
	ifstream file(filename1);
    map<char, int> stats;
    int total = 0;

    char ch;
    while (file >> std::noskipws >> ch) {
        if (isdigit(ch) || isalpha(ch)) {
            stats[ch]++;
            total++;
        }
    }

    for (auto it = stats.begin(); it != stats.end(); ++it) {
        cout << it->first << " : " << it->second << " (" << (double)it->second / total * 100 << "%)\n";
    }
	cout << "Total : " << total << '\n';
	
}
