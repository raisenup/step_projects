#pragma once
#include "lib.h"

struct Laundry
{
private:
	string company;
	string color;
	int width;
	int length;
	int height;
	int power;
	int spin_speed;
	int max_temperature;

public:
	// setters
	void setCompany(const string& c);
	void setColor(const string& clr);
	void setWidth(int w);
	void setLength(int l);
	void setHeight(int h);
	void setPower(int p);
	void setSpinSpeed(int ss);
	void setMaxTemp(int mt);

	// getters
	string getCompany() const;
	string getColor() const;
	int getWidth() const;
	int getLength() const;
	int getHeight() const;
	int getPower() const;
	int getSpinSpeed() const;
	int getMaxTemp() const;

	// constructors
	Laundry();
	explicit Laundry(const string &c);
	Laundry(const string &c, const string &clr);
	Laundry(const string &c, const string &clr, int w);
	Laundry(const string &c, const string &clr, int w, int l);
	Laundry(const string &c, const string &clr, int w, int l, int h);
	Laundry(const string &c, const string &clr, int w, int l, int h, int p);
	Laundry(const string &c, const string &clr, int w, int l, int h, int p, int ss);
	Laundry(const string &c, const string &clr, int w, int l, int h, int p, int ss, int mt);

	// destructors
	~Laundry();
};


