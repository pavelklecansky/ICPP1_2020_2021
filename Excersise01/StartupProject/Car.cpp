#include "Car.h"
#include <iostream>

Car::Car() :value(6)
{

}


void Car::Move()
{
	std::cout << value << std::endl;
}

