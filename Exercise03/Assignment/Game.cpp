#include "Game.h"
#include <exception>

#define MAX_SIZE 100

Game::Game()
{
	objects = new Object * [MAX_SIZE];
	numberOfObjects = 0;
}
#include "StaticObject.h"

Game::~Game()
{
	delete[] objects;
}

bool Game::isObjectInArea(double xmin, double xmax, double ymin, double ymax, Object* o) const
{
	double x = o->GetX();
	double y = o->GetY();
	bool isInX = x >= xmin && x <= xmax;
	bool isInY = y >= ymin && y <= ymax;

	return isInX && isInY;
}

bool Game::isObjectInArea(double centerX, double centerY, double r, Object* o) const
{
	double x = o->GetX();
	double y = o->GetY();
	double distance = (x - centerX) * (x - centerX) * (y - centerY) * (y - centerY);
	return distance <= r * r;
}

bool Game::isStaticObject(Object* o) const
{
	StaticObject* staticObject = dynamic_cast<StaticObject*>(o);
	return staticObject != nullptr;
}

bool Game::isMovingObject(Object* o) const
{
	MovingObject* staticObject = dynamic_cast<MovingObject*>(o);
	return staticObject != nullptr;
}

bool Game::isMovingObjectInAngleRange(double umin, double umax, MovingObject* o)
{
	double angle = o->GetAngleOfRotation();

	return angle >= umin && angle <= umax;
}

void Game::addObject(Object* o)
{
	if (numberOfObjects >= MAX_SIZE)
	{
		throw std::exception("Game is full");
	}
	objects[numberOfObjects++] = o;
}

int* Game::findIdOfStaticObject(double xmin, double xmax, double ymin, double ymax)
{
	int* arrayOfIds = new int[MAX_SIZE];
	int numberOfIds = 0;
	for (int i = 0; i < numberOfObjects; i++)
	{
		Object* object = objects[i];
		if (isStaticObject(object) && isObjectInArea(xmin, xmax, ymin, ymax, object));
		{
			arrayOfIds[numberOfIds++] = object->GetId();
		}
	}

	return arrayOfIds;
}

MovingObject** Game::findMovingObjectsInArea(double x, double y, double r)
{
	MovingObject** arrayOfMovingObjects = new MovingObject * [MAX_SIZE];
	int numberOfMovingObjects = 0;
	for (int i = 0; i < numberOfObjects; i++)
	{
		Object* object = objects[i];
		if (isMovingObject(object) && isObjectInArea(x, y, r, object))
		{
			arrayOfMovingObjects[numberOfMovingObjects++] = dynamic_cast<MovingObject*>(object);
		}
	}

	return arrayOfMovingObjects;
}

MovingObject** Game::findMovingObjectsInArea(double x, double y, double r, double umin, double umax)
{
	MovingObject** arrayOfMovingObjects = new MovingObject * [MAX_SIZE];
	int numberOfMovingObjects = 0;
	for (int i = 0; i < numberOfObjects; i++)
	{
		Object* object = objects[i];
		if (isMovingObject(object) && isObjectInArea(x, y, r, object))
		{
			MovingObject* movingObject = dynamic_cast<MovingObject*>(object);
			if (isMovingObjectInAngleRange(umin, umax, movingObject))
			{
				arrayOfMovingObjects[numberOfMovingObjects++] = movingObject;
			}
			
		}
	}

	return arrayOfMovingObjects;
}