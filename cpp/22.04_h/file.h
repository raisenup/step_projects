#pragma once
#include "lib.h"

struct File {
public:

	void open();
	void close();
	void write(const string &data);
	string read();
	void writeBinary(char *data, int size);
	char *readBinary(int size);

	File(const string &filename, std::ios_base::openmode mode = std::ios::out | std::ios::in);

private:
	fstream fs;
	string filename;
	std::ios_base::openmode mode;
};
