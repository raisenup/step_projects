#pragma once
#include "library.h"

struct Phone
{
private:
	uint64_t id;
	string model;
	string manufacturer;
	string os;
	int year;
	int price;
public:
	Phone(uint64_t id, string model, string manufacturer, string os, int year, double price)
	{
		this->id = id;
		this->model = model;
		this->manufacturer = manufacturer;
		this->os = os;
		this->year = year;
		this->price = price;
	}
	uint64_t getId() const
	{
		return this->id;
	}
	string getModel() const
	{
		return this->model;
	}
	string getManufacturer() const
	{
		return this->manufacturer;
	}
	string getOs() const
	{
		return this->os;
	}
	int getYear() const
	{
		return this->year;
	}
	double getPrice() const
	{
		return this->price;
	}
	void setId(uint64_t id)
	{
		this->id = id;
	}
	void setModel(string model)
	{
		this->model = model;
	}
	void setManufacturer(string manufacturer)
	{
		this->manufacturer = manufacturer;
	}
	void setOs(string os)
	{
		this->os = os;
	}
	void setYear(int year)
	{
		this->year = year;
	}
	void setPrice(double price)
	{
		this->price = price;
	}
	void about() const
	{
		println("Model: " << this->model);
		println("Manufacturer: " << this->manufacturer);
		println("OS: " << this->os);
		println("Year: " << this->year);
		println("Price: " << this->price);
	}
	
};
