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
	virtual ~Date() {};

	friend std::ostream& operator <<  (std::ostream& os, const Date& date) {
		return os << date._day << " " << date._month << " " << date._year;
	}

	friend std::istream& operator >> (std::istream& is, Date& date) {
		return is >> date._day >> date._month >> date._year;
	}

};
#endif
