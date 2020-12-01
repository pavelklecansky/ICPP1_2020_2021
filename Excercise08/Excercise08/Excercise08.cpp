#include <iostream>
#include <fstream>
#include "Person.h"
using namespace std;

#define MAX_ARRAY 3

void PrintArray(int size, const Person* people) {
	for (int i = 0; i < size; i++)
	{
		cout << people[i] << endl;
	}
}

void Save() {
	Person people[MAX_ARRAY] = {
		{"Pavel","Hlavac",Address("Hlavacova","Hlavacov",58741),Date(15,11,1998)},
		{"Honza","Zahradka",Address("Zahradkova","Zahradkov",67871),Date(25,1,1958)},
		{"Josef","Renkl",Address("Reklova","Renklov",47741),Date(19,5,1975)},
	};
	ofstream out{};
	out.open("people.dat",ios_base::binary);
	if (out.is_open())
	{
		for (int i = 0; i < MAX_ARRAY; i++)
		{
			out.write((char*)&people[i], sizeof(Person));
		}
		out.close();
	}
	else {
		cerr << "Soubor se nepodarilo otevrit";
	}
}

void Load() {
	Person people[MAX_ARRAY];
	ifstream in{};

	in.open("people.dat", ios_base::binary);

	if (in.is_open())
	{
		Person person;
		for (int i = 0; i < MAX_ARRAY; i++)
		{
			in.read((char*)&people[i], sizeof(Person));
		}
		in.close();
	}
	PrintArray(MAX_ARRAY, people);
}

int main(int argc, char** argv)
{
	Save();
	Load();
	return 0;
}