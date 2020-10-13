#include "Object.h"

Object::Object(int id)
{
	this->id = id;
}

int Object::GetId() const
{
	return id;
}

double Object::GetX() const
{
	return x;
}

void Object::SetX(double x)
{
	this->x = x;
}

double Object::GetY() const
{
	return y;
}

void Object::SetY(double y)
{
	this->y = y;
}