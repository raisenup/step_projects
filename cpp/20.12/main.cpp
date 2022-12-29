#include <iostream>
#include <string>

using namespace std;

int ex_1() 
{
	
	string name, avtor, izdatelstvo, pages;

	cout << "Input the name of the book: \n"; 
	getline(cin, name);
	cout << "Input avtor of the book: \n";
	getline(cin, avtor);
	cout << "Input izdatelstvo of the book: \n";
	getline(cin, izdatelstvo);
	cout << "Input pages of the book: \n";
	getline(cin, pages);

	cout << '\n';
	cout << "\tName       : " << "\"" << name << "\"" << endl;
	cout << "\tAvtor      : " << avtor << endl;
	cout << "\tIzdatelstvo: " << izdatelstvo << endl;
	cout << "\tPages      : " << pages << '.' << endl;

	return 0;
}

int ex_2() 
{
	cout << "\"Krai lukomor\'a dub zelenyj," << endl;
	cout << "I zolotyj lanchuh na nim:" << endl;
	cout << "Shodnya, shonochi kit uchenyj" << endl;
	cout << "Na lancyuhu kruzhl\'aje tim\"" << endl;

	return 0;
}


int main() 
{
	int task_num;

	cout << "Input the number of the task:" << endl;
	cin >> task_num;

	switch (task_num)
	{
	case 1:
		ex_1();
		break;
	case 2:
		ex_2();
		break;
	}

	return 0;
}

