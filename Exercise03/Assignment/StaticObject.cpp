#include "StaticObject.h"

StaticObject::StaticObject(int id, TypeOfObstacle typeOfObstacle) : Object(id)
{
	this->TypeOfObstacleAttribut = typeOfObstacle;
}

TypeOfObstacle StaticObject::GetTypeOfObstacle()
{
	return TypeOfObstacleAttribut;
}