#pragma once
#include "lib.h"

struct Good
{
public:
	// setters
	void setName(string n);
	void setAmount(int a);
	void setPrice(double p);

	// getters
	string getName() const;
	int getAmount() const;
	double getPrice() const;

	// constructors
	Good();
	Good(const string &n);
	Good(const string &n, int a);
	Good(const string &n, int a, double p);

	// destructors
	~Good();

private:
	string name;
	int amount;
	double price;
};
// setters and getters declarations

