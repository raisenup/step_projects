#include "UserProvider.h"

void UserProvider::addUser(User const *user, const string &filename) const
{
	ofstream file(filename, std::ios::app);
	if (file.is_open())
	{
		file << user->getName() << ',' << user->getSurname() << ',' << user->getEmail() << ',' << user->getAccount().getLogin() << ',' << user->getAccount().getPassword() << ',' << user->getAccount().getIsAdmin() << '\n';
	}
	file.close();
}

void UserProvider::readUserData(vector<User> &userdata, const string &filename) const
{
	ifstream file(filename);
	
	if (file.is_open())
	{
		string line;
		while (getline(file, line))
		{
			string name, surname, email, login, password;
			bool isAdmin;

			stringstream ss(line);

			getline(ss, name, ',');
			getline(ss, surname, ',');
			getline(ss, email, ',');
			getline(ss, login, ',');
			getline(ss, password, ',');
			ss >> isAdmin;
			ss.ignore();

			userdata.emplace_back(name, surname, email, login, password, isAdmin);
		}
	}
	file.close();
}


