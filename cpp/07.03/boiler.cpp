#include "boiler.h"

// setters
void Boiler::setCompany(const string &c)
{
	company = c;
}
void Boiler::setColor(const string &clr)
{
	color = clr;
}
void Boiler::setPower(int p)
{
	power = p;
}
void Boiler::setVolume(int v)
{
	volume = v;
}
void Boiler::setMaxTemp(int t)
{
	max_temp = t;
}

// getters 
string Boiler::getCompany() const
{
	return company;
}
string Boiler::getColor() const
{
	return color;
}
int Boiler::getPower() const
{
	return power;
}
int Boiler::getVolume() const
{
	return volume;
}
int Boiler::getMaxTemp() const
{
	return max_temp;
}

// consturctors
Boiler::Boiler()
{
	setCompany("null");
	setColor("null");
	setPower(0);
	setVolume(0);
	setMaxTemp(0);
}
Boiler::Boiler(const string &c) : Boiler()
{
	setCompany(c);
}
Boiler::Boiler(const string &c, const string &clr) : Boiler(c)
{
	setColor(clr);
}
Boiler::Boiler(const string &c, const string &clr, int p) : Boiler(c,clr)
{
	setPower(p);
}
Boiler::Boiler(const string &c, const string &clr, int p, int v) : Boiler(c, clr, p)
{
	setVolume(v);
}
Boiler::Boiler(const string &c, const string &clr, int p, int v, int t) : Boiler(c, clr, p, v)
{
	setMaxTemp(t);
}

// destructors
Boiler::~Boiler()
{
	company.clear();
	color.clear();
	power = 0;
	volume = 0;
	max_temp = 0;
}

