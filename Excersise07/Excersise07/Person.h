#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "Address.h"
#include "Date.h";

class Person
{
	std::string _firstName;
	std::string _lastName;
	Address _address;
	Date _dateOfBirth;
public:
	Person() {};
	Person(std::string firstName, std::string lastName, Address address, Date dateOfBirth)
		: _firstName(firstName), _lastName(lastName)
	{
		_address = address;
		_dateOfBirth = dateOfBirth;
	}
	virtual ~Person() {};

	friend std::ostream& operator <<  (std::ostream& os, const Person& person) {
		return os << person._firstName << " " << person._lastName << " " << person._address << " " << person._dateOfBirth;
	}

	friend std::istream& operator >> (std::istream& is, Person& person) {
		return is >> person._firstName >> person._lastName >> person._address >> person._dateOfBirth;
	}
};

#endif // !PERSON_H
