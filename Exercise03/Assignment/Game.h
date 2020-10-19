#pragma once
#ifndef GAME_H
#define GAME_H

#include "Object.h"
#include "MovingObject.h"
#include <iostream>

class Game
{
	Object** objects;
	int numberOfObjects;
	bool isObjectInArea(double xmin, double xmax, double ymin, double ymax, Object* o) const;
	bool isObjectInArea(double centerX, double centerY, double r, Object* o) const;
	bool isStaticObject(Object* o) const;
	bool isMovingObject(Object* o) const;
	bool isMovingObjectInAngleRange(double umin, double umax, MovingObject* o);
public:
	Game();
	~Game();
	void addObject(Object* o);
	int* findIdOfStaticObject(double xmin, double xmax, double ymin, double ymax);
	MovingObject** findMovingObjectsInArea(double x, double y, double r);
	MovingObject** findMovingObjectsInArea(double x, double y, double r, double umin, double umax);
};
#endif
