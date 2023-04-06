#include "Account.h"

string Account::getLogin() const
{
	return this->login;
}
string Account::getPassword() const
{
	return this->password;
}
bool Account::getIsAdmin() const
{
	return this->isAdmin;
}
void Account::setLogin(string login)
{
	this->login = login;
}
void Account::setPassword(string password)
{
	this->password = password;
}
void Account::setIsAdmin(bool isAdmin)
{
	this->isAdmin = isAdmin;
}
void Account::about() const
{
	println("Login    : " << this->login);
	println("Password : " << this->password);
	println("Is admin : " << this->isAdmin);
}
bool operator==(Account const &l, Account const &r)
{
	return l.getLogin() == r.getLogin() && l.getPassword() == r.getPassword() && l.getIsAdmin() == r.getIsAdmin();
}
Account::Account()
{
	this->login = "null";
	this->password = "null";
	this->isAdmin = 0;
}
Account::Account(string login, string password, bool isAdmin)
{
	this->login = login;
	this->password = password;
	this->isAdmin = isAdmin;
}

