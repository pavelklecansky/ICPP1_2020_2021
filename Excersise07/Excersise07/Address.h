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
	Address(std::string street, std::string town, int psc) : _street(street), _town(town)
	{
		_psc = psc;
	}
	virtual ~Address() {};

	friend std::ostream& operator <<  (std::ostream& os, const Address& addresa) {
		return os << addresa._street << " " << addresa._town << " " << addresa._psc;
	}

	friend std::istream& operator >> (std::istream& is, Address& addresa) {
		return is >> addresa._street >> addresa._town >> addresa._psc;
	}
};

#endif