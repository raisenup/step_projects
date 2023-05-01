#include "lib.h"
#include "file.h"

int main(int argc, char **argv)
{
	auto *fs{ new File("file.txt", std::ios::out )};

	string line;
	cout << "Input line you want to save in file\n-> ";
	cin >> line;

	fs->open();
	fs->write(line);
	fs->close();

	return 0;
}
