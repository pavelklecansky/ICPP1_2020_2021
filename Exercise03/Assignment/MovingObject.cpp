#include "MovingObject.h"

double MovingObject::GetAngleOfRotation() const
{
	return angleOfRotation;
}

void MovingObject::SetAngleOfRotation(double angle)
{
	this->angleOfRotation = angle;
}
