#include <iostream>

//----  Program 5
struct Triangle
{
	int firstSide;
	int secondSide;
	int thirdSide;
};

bool canBeConstructed(Triangle* triangle) {
	bool first = triangle->firstSide + triangle->secondSide > triangle->thirdSide;
	bool second = triangle->firstSide + triangle->thirdSide > triangle->secondSide;
	bool third = triangle->secondSide + triangle->thirdSide > triangle->firstSide;
	return first && second && third;
}

int calcPerimert(Triangle* triangle) {
	return triangle->firstSide + triangle->secondSide + triangle->thirdSide;
}

int main(int args, char** argv) {
	std::cout << "How many triagles do you want to load? ";
	int count;
	std::cin >> count;
	Triangle* triangle = new Triangle[count]();
	for (int i = 0; i < count; i++)
	{
		std::cout << "Enter first side of triangle ";
		std::cin >> triangle[i].firstSide;
		std::cout << std::endl;

		std::cout << "Enter second side of triangle ";
		std::cin >> triangle[i].secondSide;
		std::cout << std::endl;

		std::cout << "Enter third side of triangle ";
		std::cin >> triangle[i].thirdSide;
		std::cout << std::endl;

		if (canBeConstructed(&triangle[i]))
		{
			std::cout << "The perimetr is " << calcPerimert(&triangle[i]) << std::endl;
		}
		else {
			std::cout << "Can't be construct" << std::endl;
		}
	}

	delete[] triangle;
}

//----  Program 4
//struct Triangle
//{
//	int firstSide;
//	int secondSide;
//	int thirdSide;
//};
//
//bool canBeConstructed(Triangle* triangle) {
//	bool first = triangle->firstSide + triangle->secondSide > triangle->thirdSide;
//	bool second = triangle->firstSide + triangle->thirdSide > triangle->secondSide;
//	bool third = triangle->secondSide + triangle->thirdSide > triangle->firstSide;
//	return first && second && third;
//}
//
//int calcPerimert(Triangle* triangle) {
//	return triangle->firstSide + triangle->secondSide + triangle->thirdSide;
//}
//
//int main(int args, char** argv) {
//	Triangle* triangle = new Triangle();
//
//	std::cout << "Enter first side of triangle ";
//	std::cin >> triangle->firstSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter second side of triangle ";
//	std::cin >> triangle->secondSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter third side of triangle ";
//	std::cin >> triangle->thirdSide;
//	std::cout << std::endl;
//
//	if (canBeConstructed(triangle))
//	{
//		std::cout << "The perimetr is " << calcPerimert(triangle) << std::endl;
//	}
//	else {
//		std::cout << "Can't be construct" << std::endl;
//	}
//	delete triangle;
//}

//---- Program 3
//struct Triangle
//{
//	int firstSide;
//	int secondSide;
//	int thirdSide;
//};
//
//bool canBeConstructed(Triangle* triangle) {
//	bool first = triangle->firstSide + triangle->secondSide > triangle->thirdSide;
//	bool second = triangle->firstSide + triangle->thirdSide > triangle->secondSide;
//	bool third = triangle->secondSide + triangle->thirdSide > triangle->firstSide;
//	return first && second && third;
//}
//
//int calcPerimert(Triangle* triangle) {
//	return triangle->firstSide + triangle->secondSide + triangle->thirdSide;
//}
//
//int main(int args, char** argv) {
//
//	Triangle* pointer = (Triangle*)malloc(sizeof(Triangle));
//
//	std::cout << "Enter first side of triangle ";
//	std::cin >> pointer->firstSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter second side of triangle ";
//	std::cin >> pointer->secondSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter third side of triangle ";
//	std::cin >> pointer->thirdSide;
//	std::cout << std::endl;
//
//	if (canBeConstructed(pointer))
//	{
//		std::cout << "The perimetr is " << calcPerimert(pointer) << std::endl;
//	}
//	else {
//		std::cout << "Can't be construct" << std::endl;
//	}
//	free(pointer);
//}

//------- Program 2
//struct Triangle
//{
//	int firstSide;
//	int secondSide;
//	int thirdSide;
//};
//
//bool canBeConstructed(Triangle triangle) {
//	bool first = triangle.firstSide + triangle.secondSide > triangle.thirdSide;
//	bool second = triangle.firstSide + triangle.thirdSide > triangle.secondSide;
//	bool third = triangle.secondSide + triangle.thirdSide > triangle.firstSide;
//	return first && second && third;
//}
//
//int calcPerimert(Triangle triangle) {
//	return triangle.firstSide + triangle.secondSide + triangle.thirdSide;
//}
//
//int main(int args, char** argv) {
//
//	Triangle triangle;
//
//	std::cout << "Enter first side of triangle ";
//	std::cin >> triangle.firstSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter second side of triangle ";
//	std::cin >> triangle.secondSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter third side of triangle ";
//	std::cin >> triangle.thirdSide;
//	std::cout << std::endl;
//
//	if (canBeConstructed(triangle))
//	{
//		std::cout << "The perimetr is " << calcPerimert(triangle) << std::endl;
//	}
//	else {
//		std::cout << "Can't be construct" << std::endl;
//	}
//}

//------- Program 1
//bool canBeConstructed(int firstSide, int secondSide, int thirdSide) {
//	bool first = firstSide + secondSide > thirdSide;
//	bool second = firstSide + thirdSide > secondSide;
//	bool third = secondSide + thirdSide > firstSide;
//	return first && second && third;
//}
//
//int calcPerimert(int firstSide, int secondSide, int thirdSide) {
//	return firstSide + secondSide + thirdSide;
//}
//
//int main(int args, char** argv) {
//	std::cout << "Enter first side of triangle ";
//	int firstSide;
//	std::cin >> firstSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter second side of triangle ";
//	int secondSide;
//	std::cin >> secondSide;
//	std::cout << std::endl;
//
//	std::cout << "Enter third side of triangle ";
//	int thirdSide;
//	std::cin >> thirdSide;
//	std::cout << std::endl;
//
//	if (canBeConstructed(firstSide, secondSide, thirdSide))
//	{
//		std::cout << "The perimetr is " << calcPerimert(firstSide, secondSide, thirdSide) << std::endl;
//	}
//	else {
//		std::cout << "Can't be construct" << std::endl;
//	}
//}