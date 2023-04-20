#include "good.h"

// setters
void Good::setName(string n)
{
	name = n;
}
void Good::setAmount(int a)
{
	amount = a;
}
void Good::setPrice(double p)
{
	price = p;
}

// getters
string Good::getName() const
{
	return name;
}
int Good::getAmount() const
{
	return amount;
}
double Good::getPrice() const
{
	return price;
}

// constructors
Good::Good()
{
	setName("null");
	setAmount(0);
	setPrice(0);
}
Good::Good(const string &n) : Good()
{
	setName(n);
}
Good::Good(const string &n, int a) : Good(n)
{
	setAmount(a);
}
Good::Good(const string &n, int a, double p) : Good(n,a)
{
	setPrice(p);
}

// destructors
Good::~Good()
{
	name.clear();
	amount = 0;
	price = 0;
}


