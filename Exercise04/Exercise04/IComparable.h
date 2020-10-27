#pragma once
#ifndef ICOMPARABLE_H
#define ICOMPARABLE_H
#include "IObject.h"

using namespace std;

class IComparable : public IObject  {
public:
	virtual ~IComparable();
	virtual int compareTo(IComparable* obj) const = 0;
};

#endif