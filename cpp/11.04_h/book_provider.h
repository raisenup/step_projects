#pragma once
#include "book.h"

struct BookProvider
{
	void addBook(Book const *book, const string &filename = "bookdata.csv") const;
	void readBookData(vector<Book> &bookdata, const string &filename = "bookdata.csv") const; 
	void printBook(Book const *book) const;
};

