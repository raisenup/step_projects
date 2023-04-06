#include "User.h"


string User::getName() const
{
	return this->name;
}
string User::getSurname() const
{
	return this->surname;
}
string User::getEmail() const
{
	return this->email;
}
Account User::getAccount() const
{
	return this->account;
}
void User::setName(string name)
{
	this->name = name;
}
void User::setSurname(string surname)
{
	this->surname = surname;
}
void User::setEmail(string email)
{
	this->email = email;
}
void User::setAccount(Account account)
{
	this->account = account;
}
void User::about() const
{
	println("Name    : " << this->name);
	println("Surname : " << this->surname);
	println("Email   : " << this->email);
	println("Account : ");
	this->account.about();
}

bool operator==(User const &l, User const &r)
{
	return l.getName() == r.getName() && l.getSurname() == r.getSurname() && l.getEmail() == r.getEmail() && l.getAccount() == r.getAccount();
}
User::User()
{
	this->name = "null";
	this->surname = "null";
	this->email = "null";
}
User::User(string name, string surname, string email, string login, string password, bool isAdmin)
{
	this->name = name;
	this->surname = surname;
	this->email = email;
	this->account = Account(login, password, isAdmin);
}

extern User *curr_user;

