#pragma once
#include "User.h"
#include "Account.h"

struct AccountProvider
{
	User *findUser(Account const *account, vector<User> &userdata);

};

