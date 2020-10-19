#include <iostream>
#include "TypeOfObstacle.h"
#include "Object.h"
#include "StaticObject.h"
#include "Game.h"

int main()
{
	/*Object* objekt = new StaticObject{ 1, TypeOfObstacle::Rock };
	StaticObject* so = dynamic_cast<StaticObject*>(objekt);
	if (so != nullptr)
		std::cout << "objekt je StatickyObjekt(nebo jeho potomek)" << so->GetTypeOfObstacle();*/
		/*Game hra = Game();
		for (int i = 0; i < 100; i++)
		{
			hra.addObject(new Object(1));
		}*/
		/*Game hra = Game();
		for (int i = 0; i < 10; i++)
		{
			Object* newObject = new StaticObject(i, TypeOfObstacle::SmallPlant);
			newObject->SetX(120);
			newObject->SetY(100);
			hra.addObject(newObject);
		}
		int* ids = hra.findIdOfStaticObject(50, 200, 80, 120);
		for (int i = 0; i < 10; i++)
		{
			std::cout << ids[i] << std::endl;
		}*/

		//Game hra = Game();
		//for (int i = 0; i < 10; i++)
		//{
		//	Object* newObject = new MovingObject(i);
		//	newObject->SetX(120);
		//	newObject->SetY(100);
		//	hra.addObject(newObject);
		//}
		//MovingObject** moving = hra.findMovingObjectsInArea(120, 100, 10);
		//for (int i = 0; i < 10; i++)
		//{
		//	std::cout << moving[i]->GetId() << std::endl;
		//}

	/*Game hra = Game();
	for (int i = 0; i < 10; i++)
	{
		MovingObject* newObject = new MovingObject(i);
		newObject->SetX(120);
		newObject->SetY(100);
		newObject->SetAngleOfRotation(10 * i);
		hra.addObject(newObject);
	}
	MovingObject** moving = hra.findMovingObjectsInArea(120, 100, 10, 10, 150);
	for (int i = 0; i < 10; i++)
	{
		std::cout << moving[i]->GetAngleOfRotation() << std::endl;
	}*/
}