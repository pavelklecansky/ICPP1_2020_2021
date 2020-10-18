#include "MovingObject.h"

MovingObject::MovingObject(int id) : Object(id)
{
	angleOfRotation = 0;
}

double MovingObject::GetAngleOfRotation() const
{
	return angleOfRotation;
}

void MovingObject::SetAngleOfRotation(double angle)
{
	this->angleOfRotation = angle;
}
