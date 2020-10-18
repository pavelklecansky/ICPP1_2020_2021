#pragma once
#ifndef STATIC_OBJECT_H
#define STATIC_OBJECT_H

#include "Object.h"
#include "TypeOfObstacle.h"

class StaticObject : public Object
{
	TypeOfObstacle TypeOfObstacleAttribut;
public:
	StaticObject(int id, TypeOfObstacle typeOfObstacle);
	TypeOfObstacle GetTypeOfObstacle() const;
};

#endif
