#include "Time.h"

int Time::GetAllSeconds() const
{
	return this->_hours * 3600 + this->_minutes * 60 + this->_seconds;
}

Time::Time(int hours, int minutes, int seconds)
{
	_hours = hours;
	_minutes = minutes;
	_seconds = seconds;
}

int Time::compareTo(IComparable* obj) const
{
	if (nullptr == obj)
	{
		throw exception("Null pointer");
	}

	Time* secondTime = dynamic_cast<Time*>(obj);
	if (secondTime == obj)
	{
		throw exception("Bad datatype");
	}
	int firstSeconds = this->GetAllSeconds();
	int secondSeconds = secondTime->GetAllSeconds();

	if (firstSeconds > secondSeconds)
	{
		return 1;
	}
	else if (firstSeconds == secondSeconds) {
		return 0;
	}
	return -1;
}

string Time::toString() const
{
	return "Hours: " + to_string(_hours) + "| Minutes: " + to_string(_minutes) + "| Seconds: " + to_string(_seconds);
}