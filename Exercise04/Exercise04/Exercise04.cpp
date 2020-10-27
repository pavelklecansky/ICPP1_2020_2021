#include <iostream>
#include <cstdlib>
#include "Time.h"
#include <time.h>

#define MAX_ARRAY_SIZE 5000

void Swap(IComparable** first, IComparable** second) {
	IComparable* temp = *first;
	*first = *second;
	*second = temp;
}

void SortArray(IComparable** arrayOfComparable, int arraySize) {
	bool wasSwap;
	for (int i = 0; i < arraySize - 1; ++i)
	{
		wasSwap = false;
		for (int j = 0; j < arraySize - i - 1; ++j)
		{
			if (arrayOfComparable[j]->compareTo(arrayOfComparable[j + 1]) == 1) {
				Swap(&arrayOfComparable[j], &arrayOfComparable[j + 1]);
				wasSwap = true;
			}
		}
		if (!wasSwap) {
			break;
		}
	}
}

int GetRandomFromRange(int min, int max) {
	return (std::rand() % (max - min + 1)) + min;
}

int main()
{
	srand(time(NULL));
	/*Time firstTimeSame{ 15,15,15 };
	Time secondTimeSame{ 15,15,15 };
	std::cout << firstTimeSame.compareTo(&secondTimeSame) << endl;
	Time firstTimeBigger{ 20,15,15 };
	Time secondTimeSmaller{ 15,15,15 };
	std::cout << firstTimeBigger.compareTo(&secondTimeSmaller) << endl;
	std::cout << secondTimeSmaller.compareTo(&firstTimeBigger) << endl;*/
	IComparable** arrayOfComparable = new IComparable * [MAX_ARRAY_SIZE];
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		arrayOfComparable[i] = new Time{ GetRandomFromRange(0,23), GetRandomFromRange(0,59) ,GetRandomFromRange(0,59) };
		std::cout << arrayOfComparable[i]->toString() << std::endl;
	}
	SortArray(arrayOfComparable, MAX_ARRAY_SIZE);
	std::cout << "Sorted" << std::endl;
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		std::cout << arrayOfComparable[i]->toString() << std::endl;
	}
}