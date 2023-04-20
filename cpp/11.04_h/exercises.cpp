#include "lib.h"
#include "student_provider.h"
#include "car_provider.h"
#include "good_provider.h"
#include "weather_provider.h"
#include "book_provider.h"
#include "team_provider.h"
#include "city_provider.h"

void ex_1()
{
	auto const *student_provider = new StudentProvider();
	vector<Student> studentdata;
	student_provider->readStudentData(studentdata);
	for (auto const &i : studentdata)
	{
		student_provider->printStudent(&i);
	}
	delete student_provider;
}

void ex_2()
{
	auto const *car_provider = new CarProvider();
	vector<Car> cardata;
	car_provider->readCarData(cardata);
	for (const auto &i : cardata)
	{
		if (i.getMileage() < 10000)
		{
			car_provider->printCar(&i);
		}
	}
	delete car_provider;
}

void ex_3()
{
	auto const *good_provider = new GoodProvider();
	vector<Good> gooddata;
	good_provider->readGoodData(gooddata);
	for (const auto &i : gooddata)
	{
		if (i.getAmount() > 10)
		{
			good_provider->printGood(&i);
		}
	}
	delete good_provider;
}

void ex_4()
{
	auto const *weather_provider = new WeatherProvider();
	vector<Weather> weatherdata;
	weather_provider->readWeatherData(weatherdata);
	for (const auto &i : weatherdata)
	{
		if (i.getTemperature() < 0)
		{
			weather_provider->printWeather(&i);
		}
	}
	delete weather_provider;
}

void ex_5()
{
	auto const *book_provider = new BookProvider();
	vector<Book> bookdata;
	book_provider->readBookData(bookdata);
	for (const auto &i : bookdata)
	{
		if (i.getYear() > 2000)
		{
			book_provider->printBook(&i);
		}
	}
	delete book_provider;
}

void ex_6()
{
	auto const *team_provider = new TeamProvider();
	vector<Team> teamdata;
	team_provider->readTeamData(teamdata);
	for (const auto &i : teamdata)
	{
		if ((double)(i.getWins()) / (i.getWins() + i.getLosses()) > 0.5)
		{
			team_provider->printTeam(&i);
		}
	}
	delete team_provider;
}

void ex_7()
{
	auto const *city_provider = new CityProvider();
	vector<City> citydata;
	city_provider->readCityData(citydata);
	for (const auto &i : citydata)
	{
		if (i.getPopulation() > 1e6)
		{
			city_provider->printCity(&i);
		}
	}
	delete city_provider;
}

