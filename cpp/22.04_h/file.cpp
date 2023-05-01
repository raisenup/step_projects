#include "file.h"

void File::open() 
{
	fs.open(filename, mode);
}

void File::close() 
{
	fs.close();
}

void File::write(const string &data) 
{
	fs << data;
}

string File::read() 
{
	string data;
	fs >> data;
	return data;
}

void File::writeBinary(char *data, int size) 
{
	fs.write(data, size);
}

char *File::readBinary(int size) 
{
	char *data = new char[size];
	fs.read(data, size);
	return data;
}

File::File(const string &f, std::ios_base::openmode m) : filename(f), mode(m) {}

