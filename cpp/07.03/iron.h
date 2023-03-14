#pragma once
#include "lib.h"

struct Iron
{
private:
	string company;
	string model;
	string color;
	int min_temp;
	int max_temp;
	bool steam;
	int power;

public:
	// setters
	void setCompany(const string &c);
	void setModel(const string &m);
	void setColor(const string &clr);
	void setMinTemp(int t);
	void setMaxTemp(int t);
	void setSteam(bool s);
	void setPower(int p);

	// getters
	string getCompany() const;
	string getModel() const;
	string getColor() const;
	int getMinTemp() const;
	int getMaxTemp() const;
	bool getSteam() const;
	int getPower() const;

	// constructors
	Iron();
	explicit Iron(const string &c);
	Iron(const string &c, const string &m);
	Iron(const string &c, const string &m, const string &clr);
	Iron(const string &c, const string &m, const string &clr, int min_t);
	Iron(const string &c, const string &m, const string &clr, int min_t, int max_t);
	Iron(const string &c, const string &m, const string &clr, int min_t, int max_t, bool s);
	Iron(const string &c, const string &m, const string &clr, int min_t, int max_t, bool s, int p);

	// destructors
	~Iron();
};

