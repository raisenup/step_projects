#pragma once
#include "library.h"
#include "ClientScreen.h"
#include "Account.h"
#include "User.h"
#include "AccountProvider.h"
#include "UserProvider.h"

Account *curr_account;
User *curr_user;

struct Screen 
{
public:

	int reg()
	{
		system("cls");

		string name;
		cout << "Input name\n-> ";
		cin >> name;

		string surname;
		cout << "Input surname\n-> ";
		cin >> surname;

		string email;
		cout << "Input email\n-> ";
		cin >> email;

		string login;
		cout << "Input login\n-> ";
		cin >> login;

		string password;
		cout << "Input password\n-> ";
		cin >> password;

		auto *account_provider = new AccountProvider();
		auto const *account = new Account(login, password, false); // false bc everybody can't create admin account
		User *search = account_provider->findUser(account, userdata);
		if (auto const *blank_user = new User();*search == *blank_user)
		{
			auto const *user_provider = new UserProvider();
			User *user = new User(name, surname, email, login, password, false);
			user_provider->addUser(user);
		}
		else
		{
			cout << "Error: same account already exists!\n";
			return 1;
		}

		delete account_provider;
		delete account;
		delete search;

		system("cls");
		return 0;
	}
	
	void login()
	{
		auto *user_provider = new UserProvider();
		user_provider->readUserData(userdata);
		
		cout << "<--------------- LOGIN --------------->\n";
		bool isRegistered;
		cout << "Are you already registered? (1 - yes; 0 - no)\n-> ";
		cin >> isRegistered;

		if (!isRegistered)
		{
			if (reg())  // will break the program if reg() returns 1 (something went wrong)
			{
				return;
			}			
			userdata.clear();
			user_provider->readUserData(userdata);
			cout << "<--------------- LOGIN --------------->\n";
		}

		string login;
		cout << "Input login\n-> ";
		cin >> login;
		
		string password;
		cout << "Input password\n-> ";
		cin >> password;

		auto *account_provider = new AccountProvider();
		curr_account = new Account(login, password, false);
		curr_user = account_provider->findUser(curr_account, userdata);
		if (auto const *blank_user = new User(); *curr_user == *blank_user) // check if user was not found
		{
			cout << "Error: there is no such user!\n";
			return;
		}

		client_screen = new ClientScreen();
		client_screen->menu();
		
		delete account_provider;
		delete user_provider;
		delete curr_account;

		system("cls");
	}

private:
	ClientScreen *client_screen = new ClientScreen();
	vector<User> userdata;

};

