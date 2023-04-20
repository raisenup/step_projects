#include "team.h"

// setters
void Team::setName(const string &n) 
{
	name = n;
}

void Team::setWins(int w) 
{
	wins = w;
}

void Team::setLosses(int l) 
{
	losses = l;
}

// getters
string Team::getName() const
{
	return name;
}

int Team::getWins() const
{
	return wins;
}

int Team::getLosses() const
{
	return losses;
}

// constructors
Team::Team()
{
	setName("null");
	setWins(0);
	setLosses(0);
}
Team::Team(const string &n) : Team()
{
	setName(n);
}
Team::Team(const string &n, int w) : Team(n)
{
	setWins(w);
}
Team::Team(const string &n, int w, int l) : Team(n,w)
{
	setLosses(l);
}

// destructors
Team::~Team()
{
	name.clear();
	setWins(0);
	setLosses(0);
}

