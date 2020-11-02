// Exercise05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "Person.h"
#include "Phonebook.h"

int main()
{
	Model::Phonebook phonebook = Model::Phonebook{};
	phonebook.AddPerson(Entity::Person{ 10,std::string("Pavekl"),std::string("777454474") });
	phonebook.AddPerson(Entity::Person{ 11,std::string("Pavek"),std::string("777454475") });
	phonebook.AddPerson(Entity::Person{ 12,std::string("Pavel"),std::string("777454476") });
	auto phone = phonebook.FindPhone(12);
	std::cout << phone;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file