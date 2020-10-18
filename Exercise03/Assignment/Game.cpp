#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
	delete[] objects;
}

void Game::addObject(Object* o)
{
}

int* Game::findIdOfStaticObject(double xmin, double xmax, double ymin, double ymax)
{
	return nullptr;
}

MovingObject** Game::findMovingObjectsInArea(double x, double y, double r)
{
	return nullptr;
}

MovingObject** Game::findMovingObjectsInArea(double x, double y, double r, double umin, double umax)
{
	return nullptr;
}
