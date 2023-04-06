#pragma once
#include "library.h"
#include "Account.h"

struct User
{
private:
	string name;
	string surname;
	string email;
	Account account;
public:


	string getName() const;
	string getSurname() const;
	string getEmail() const;
	Account getAccount() const;

	void setName(string name);
	void setSurname(string surname);
	void setEmail(string email);
	void setAccount(Account account);
	
	void about() const;

	friend bool operator==(const User &l, const User &r);

	User();
	User(string name, string surname, string email, string login, string password, bool isAdmin);
};


