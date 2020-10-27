#pragma once
#include <string>
#ifndef IOBJECT_H
#define IOBJECT_H

using namespace std;

class IObject {
public:
	virtual ~IObject();
	virtual string toString() const = 0;
};

#endif