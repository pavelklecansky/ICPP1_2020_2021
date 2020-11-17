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
	Person(std::string firstName, std::string lastName, Address address, Date dateOfBirth) {
		_firstName = firstName;
		_lastName = lastName;
		_address = address;
		_dateOfBirth = dateOfBirth;
	}
	virtual ~Person() {};
};

#endif // !PERSON_H
