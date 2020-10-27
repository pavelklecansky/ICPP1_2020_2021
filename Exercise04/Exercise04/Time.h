#pragma once
#ifndef TIME_H
#define TIME_H

#include "IComparable.h"

class Time : public IComparable
{
	int _hours;
	int _minutes;
	int _seconds;
	int GetAllSeconds() const;
public:
	Time(int hours, int minutes, int seconds);
	int compareTo(IComparable* obj) const;
	string  toString() const;
};
#endif
