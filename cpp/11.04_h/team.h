#pragma once
#include "lib.h"

struct Team
{
public:
	// setters
	void setName(const string &n);
	void setWins(int w);
	void setLosses(int l);

	// getters
	string getName() const;
	int getWins() const;
	int getLosses() const;

	// constructors
	Team();
	Team(const string &n);
	Team(const string &n, int w);
	Team(const string &n, int w, int l);

	// destructors
	~Team();

private:
	string name;
	int wins;
	int losses;
};

