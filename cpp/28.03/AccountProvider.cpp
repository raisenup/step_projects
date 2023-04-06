#include "AccountProvider.h"
#include "UserProvider.h"

User* AccountProvider::findUser(Account const *account, vector<User> &userdata)
{
	auto *blank_user = new User();
	string login = account->getLogin();
	string password = account->getPassword();
	bool isAdmin = account->getIsAdmin();

	for (User &user : userdata)
	{
		string curr_login = user.getAccount().getLogin();
		string curr_password = user.getAccount().getPassword();
		bool curr_isAdmin = user.getAccount().getIsAdmin();
		
		if (curr_login == login && curr_password == password && curr_isAdmin == isAdmin)
		{
			return &user;
		}
	}
	return blank_user;
}




