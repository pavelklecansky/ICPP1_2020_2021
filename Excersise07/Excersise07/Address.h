#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

class Address
{
	std::string _street;
	std::string _town;
	int _psc;
public:
	Address() {};
	Address(std::string street, std::string town, int psc)
	{
		this->_street = street;
		this->_town = town;
		this->_psc = psc;
	}
	virtual ~Address() {};
};

#endif