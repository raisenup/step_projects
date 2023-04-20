#pragma once
#include "lib.h"

struct Book
{
public:
	// setters
	void setAuthor(const string &a);
	void setName(const string &n);
	void setYear(int y);
	void setPages(int p);

	// getters
	string getAuthor() const;
	string getName() const;
	int getYear() const;
	int getPages() const;

	// constructors
	Book();
	explicit Book(const string &a);
	Book(const string &a, const string &n);
	Book(const string &a, const string &n, int y);
	Book(const string &a, const string &n, int y, int p);
	
	// destructors
	~Book();

private:
	string author;
	string name;
	int year;
	int pages;
};

