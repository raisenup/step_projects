#pragma once
#include "lib.h"

struct Boiler
{
private:
	string company;
	string color;
	int power;
	int volume;
	int max_temp;
public:
	// setters
	void setCompany(const string &c);
	void setColor(const string &clr);
	void setPower(int p);
	void setVolume(int v);
	void setMaxTemp(int t);

	// getters 
	string getCompany() const;
	string getColor() const;
	int getPower() const;
	int getVolume() const;
	int getMaxTemp() const;

	// constructors
	Boiler();
	explicit Boiler(const string &c);
	Boiler(const string &c, const string &clr);
	Boiler(const string &c, const string &clr, int p);
	Boiler(const string &c, const string &clr, int p, int v);
	Boiler(const string &c, const string &clr, int p, int v, int t);

	// destructors 
	~Boiler();
};

