#include "iron.h"

// setters
void Iron::setCompany(const string &c)
{
	company = c;
}

void Iron::setModel(const string &m)
{
	model = m;
}

void Iron::setColor(const string &clr)
{
	color = clr;
}

void Iron::setMinTemp(int min_t)
{
	min_temp = min_t;
}

void Iron::setMaxTemp(int max_t)
{
	max_temp = max_t;
}

void Iron::setSteam(bool s)
{
	steam = s;
}

void Iron::setPower(int p)
{
	power = p;
}

// getters 
string Iron::getCompany() const
{
	return company;
}
string Iron::getModel() const
{
	return model;
}
string Iron::getColor() const
{
	return color;
}
int Iron::getMinTemp() const
{
	return min_temp;
}
int Iron::getMaxTemp() const
{
	return max_temp;
}
bool Iron::getSteam() const
{
	return steam;
}
int Iron::getPower() const
{
	return power;
}

// constructors
Iron::Iron()
{
	setCompany("null");
	setModel("null");
	setColor("null");
	setMinTemp(0);
	setMaxTemp(0);
	setSteam(0);
	setPower(0);
}
Iron::Iron(const string &c) : Iron()
{
	setCompany(c);
}
Iron::Iron(const string &c, const string &m) : Iron(c)
{
	setModel(m);
}
Iron::Iron(const string &c, const string &m, const string &clr) : Iron(c, m)
{
	setColor(clr);
}
Iron::Iron(const string &c, const string &m, const string &clr, int min_t) : Iron(c, m, clr)
{
	setMinTemp(min_t);
}
Iron::Iron(const string &c, const string &m, const string &clr, int min_t, int max_t) : Iron(c, m, clr, min_t)
{
	setMaxTemp(max_t);
}
Iron::Iron(const string &c, const string &m, const string &clr, int min_t, int max_t, bool s) : Iron(c, m, clr, min_t, max_t)
{
	setSteam(s);
}
Iron::Iron(const string &c, const string &m, const string &clr, int min_t, int max_t, bool s, int p) : Iron(c, m, clr, min_t, max_t, s)
{
	setPower(p);
}

// desturctors
Iron::~Iron()
{
	company.clear();
	model.clear();
	color.clear();
	min_temp = 0;
	max_temp = 0;
	steam = 0;
	power = 0;
}

