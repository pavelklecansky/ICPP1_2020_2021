#include <iostream>
#include "Car.h"

int main(int argc, char** argv) {
	//std::cout << "Choose print count: ";
	//int count;
	//std::cin >> count;
	//std::cout << std::endl;
	//for (int i = 1; i < argc && i <= count; i++)
	//{
	//	std::cout << argv[i] << std::endl;
	//}

	Car car = Car();
	car.Move();

	Car* car1 = (Car*)malloc(sizeof(Car));
	car1->Move();
	free(car1);
	Car* car2 = new Car();
	car2->Move();
	delete car2;


	Car* cars = new Car[3]();
	Car* carA = &cars[0];
	Car* carB = &cars[1];
	Car* carC = &cars[2];
	delete[] cars;

	return 0;
}