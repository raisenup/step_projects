#pragma once
#include "Phone.h"

struct PhoneProvider
{
	void printMenuPhone(Phone const *phone) const;
	void printPhone(Phone const *phone) const;
	void readPhoneData(vector<Phone> &phonedata, const string &filename = "data/phonedata.csv") const;

};

