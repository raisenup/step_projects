#pragma once
#include "good.h"

struct GoodProvider
{
	void addGood(Good const *good, const string &filename = "gooddata.csv") const;
	void readGoodData(vector<Good> &gooddata, const string &filename = "gooddata.csv") const; 
	void printGood(Good const *good) const;
};


