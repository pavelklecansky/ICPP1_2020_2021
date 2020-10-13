#pragma once
#ifndef UTILS_H
#define UTILS_H

#include <iostream>

class Base {
	int id;
public:

	virtual ~Base() {
	}

	virtual void PrintMe() const {
		std::cout << "Base" << std::endl;
	}
};

class Advanced : public Base
{
public:
	void PrintMe() const
	{
		std::cout << "Advenced" << std::endl;
	}
};

class Advanced2 : public Base
{
	int id2;
	int* id3;
public:
	Advanced2()
	{
		id3 = new int(0);
	}

	~Advanced2()
	{
		delete id3;
	}

	void PrintMe() const
	{
		std::cout << "Advenced2" << std::endl;
	}
};

#endif