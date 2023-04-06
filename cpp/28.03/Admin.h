#include "Account.h"

struct Admin
{
private:
	Account account;
public:
	Admin(string login, string password)
	{
		this->account = Account(login, password, true);
	}
	Account getAccount()
	{
		return this->account;
	}
	void setAccount(Account account)
	{
		this->account = account;
	}
	void about()
	{
		println("Account: ");
		this->account.about();
	}
};
