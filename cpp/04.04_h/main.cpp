#include "exercises.h"

int main(int argc, char *argv[])
{
	int num = 0;
	cout << "Input number of the exercise\n-> ";
	cin >> num;

	string filename1 = argv[1];  // rfile.txt
	string filename2 = argv[2];  // wfile.txt
	
	switch (num)
	{
	case 1: {
		readFile(filename1);
	} break;
	case 2: {
		cout << "Words in " << filename1 << " : " << countWords(filename1) << '\n';
	} break;
	case 3: {
		copyFile(filename1, filename2);
	} break;
	case 4: {
		string filename3 = "merged_file.txt";
		mergeFiles(filename1, filename2, filename3);
	} break;
	case 5: {
		cout << "The biggest number in " << filename1 << " : " << findTheBiggestNumber(filename1) << '\n';
	} break;
	case 6: {
		removeComments(filename1, filename2);
	} break;
	case 7: {
		getStats(filename1);
	} break;
	default:
		break;
	}

	system("pause>0");
	return 0;
}

