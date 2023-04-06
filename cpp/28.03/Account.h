#pragma once
#include "library.h"

struct Account
{
private:
	string login;
	string password;
	bool isAdmin;
public:
	
	string getLogin() const;
	string getPassword() const;
	bool getIsAdmin() const;

	void setLogin(string login);
	void setPassword(string password);
	void setIsAdmin(bool isAdmin);

	void about() const;

	friend bool operator==(Account const &l, Account const &r);

	Account();
	Account(string login, string password, bool isAdmin);
};

