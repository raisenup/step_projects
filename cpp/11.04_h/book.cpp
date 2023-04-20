#include "book.h"

// setters
void Book::setAuthor(const string &a)
{
	author = a;
}
void Book::setName(const string &n)
{
	name = n;
}
void Book::setYear(int y)
{
	year = y;
}
void Book::setPages(int p)
{
	pages = p;
}

// getters
string Book::getAuthor() const
{
	return author;
}
string Book::getName() const
{
	return name;
}
int Book::getYear() const
{
	return year;
}
int Book::getPages() const
{
	return pages;
}

// constructors
Book::Book()
{
	setAuthor("null");
	setName("null");
	setYear(0);
	setPages(0);
}
Book::Book(const string &a) : Book()
{
	setAuthor(a);
}
Book::Book(const string &a, const string &n) : Book(a)
{
	setName(n);
}
Book::Book(const string &a, const string &n, int y) : Book(a,n)
{
	setYear(y);
}
Book::Book(const string &a, const string &n, int y, int p) : Book(a,n,y)
{
	setPages(p);
}

// destructors
Book::~Book()
{
	author.clear();
	name.clear();
	setYear(0);
	setPages(0);
}


