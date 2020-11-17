#pragma once
#ifndef DATE_H
#define DATE_H

class Date
{
	int _day;
	int _month;
	int _year;
public:
	Date()
	{
	};
	Date(int day, int month, int year)
	{
		_day = day;
		_month = month;
		_year = year;
	};
	virtual ~Date();
};
#endif
