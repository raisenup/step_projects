#include "laundry.h"

// setters
void Laundry::setCompany(const string& c)
{
	company = c;
}
void Laundry::setColor(const string& clr)
{
	color = clr;
}
void Laundry::setWidth(int w)
{
	width = w;
}
void Laundry::setLength(int l)
{
	length = l;
}
void Laundry::setHeight(int h)
{
	height = h;
}
void Laundry::setPower(int p)
{
	power = p;
}
void Laundry::setSpinSpeed(int ss)
{
	spin_speed = ss;
}
void Laundry::setMaxTemp(int mt)
{
	max_temperature = mt;
}

// getters
string Laundry::getCompany() const
{
	return company;
}
string Laundry::getColor() const 
{
	return color;	
}
int Laundry::getWidth() const
{
	return width;	
}
int Laundry::getLength() const
{
	return length;	
}
int Laundry::getHeight() const
{
	return height;	
}
int Laundry::getPower() const
{
	return power;
}
int Laundry::getSpinSpeed() const
{
	return spin_speed;	
}
int Laundry::getMaxTemp() const
{
	return max_temperature;	
}

// constructors
Laundry::Laundry()
{
	setCompany("null");
	setColor("null");
	setWidth(0);
	setLength(0);
	setHeight(0);
	setSpinSpeed(0);
	setMaxTemp(0);
}
Laundry::Laundry(const string &c) : Laundry()
{
	setCompany(c);
}
Laundry::Laundry(const string &c, const string &clr) : Laundry(c)
{
	setColor(clr);
}
Laundry::Laundry(const string &c, const string &clr, int w) : Laundry(c, clr)
{
	setWidth(w);
}
Laundry::Laundry(const string &c, const string &clr, int w, int l) : Laundry(c, clr, w)
{
	setLength(l);
}
Laundry::Laundry(const string &c, const string &clr, int w, int l, int h) : Laundry(c, clr, w, l)
{
	setHeight(h);
}
Laundry::Laundry(const string &c, const string &clr, int w, int l, int h, int p) : Laundry(c, clr, w, l, h)
{
	setPower(p);
}
Laundry::Laundry(const string &c, const string &clr, int w, int l, int h, int p, int ss) : Laundry(c, clr, w, l, h, p)
{
	setSpinSpeed(ss);
}
Laundry::Laundry(const string &c, const string &clr, int w, int l, int h, int p, int ss, int mt) : Laundry(c, clr, w, l, h, ss)
{
	setMaxTemp(mt);
}

// destructors
Laundry::~Laundry()
{
	this->company.clear();
	this->color.clear();
	this->width = 0;
	this->length = 0;
	this->height = 0;
	this->spin_speed = 0;
	this->max_temperature = 0;
}

