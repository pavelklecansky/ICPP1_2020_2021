#pragma once
#ifndef MOVING_OBJECT_H
#define MOVING_OBJECT_H

#include "Object.h"
class MovingObject : public Object
{
	double angleOfRotation;
public:
	MovingObject(int id);
	double GetAngleOfRotation() const;
	void SetAngleOfRotation(double angle);
};
#endif
