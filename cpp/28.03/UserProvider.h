#pragma once
#include "User.h"

struct UserProvider
{
	void addUser(User const *user, const string &filename = "data/userdata.csv") const;
	void readUserData(vector<User> &userdata, const string &filename = "data/userdata.csv") const;
	
};

