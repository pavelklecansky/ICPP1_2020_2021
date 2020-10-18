#pragma once
#ifndef GAME_H
#define GAME_H

#include "Object.h"
#include "MovingObject.h"

class Game
{
	Object** objects;
public:
	Game();
	~Game();
	void addObject(Object* o);
	int* findIdOfStaticObject(double xmin, double xmax, double ymin, double ymax);
	MovingObject** findMovingObjectsInArea(double x, double y, double r);
	MovingObject** findMovingObjectsInArea(double x, double y, double r, double umin, double umax);
};
#endif
