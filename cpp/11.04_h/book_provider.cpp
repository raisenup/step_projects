#include "book_provider.h"

void BookProvider::addBook(Book const *book, const string &filename) const
{
	std::fstream file(filename, std::ios::app);

	file << book->getAuthor() << ',' << book->getName() << ',' << book->getYear() << ',' << book->getPages() << '\n';
	file.close();
}

void BookProvider::readBookData(vector<Book> &bookdata, const string &filename) const
{
	std::ifstream file(filename);

	if (!file.is_open())
	{
		cout << "While opening file error occured...\n";
		return;
	}

	string line;
	while (getline(file, line))
	{
		stringstream ss(line);

		string author;
		string name;
		int year;
		int pages;

		getline(ss, author, ',');
		getline(ss, name, ',');
		ss >> year;
		ss.ignore();
		ss >> pages;
		ss.ignore();

		bookdata.emplace_back(author, name, year, pages);
	}
	file.close();
}

void BookProvider::printBook(Book const *book) const
{
	cout << "Author : " << book->getAuthor() << '\n';
	cout << "Name   : " << book->getName() << '\n';
	cout << "Year   : " << book->getYear() << '\n';
	cout << "Pages  : " << book->getPages() << "\n\n";
}

