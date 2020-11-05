#pragma once
#ifndef PERSON_H
#define PERSON_H

#include <string>

namespace Entity {
	class Person
	{
		int id;
		std::string name;
		std::string phone;
	public:
		Person()
		{

		}
		Person(int id, std::string name, std::string phone)
		{
			this->id = id;
			this->name = name;
			this->phone = phone;
		}
		virtual ~Person() {};
		int GetId() { return id; }
		std::string GetName() { return name; }
		std::string GetPhone() { return phone; }
		void SetId(int id) { this->id = id; }
		void SetName(std::string name) { this->name = name; }
		void SetPhone(std::string phone) { this->phone = phone; }
	};
}
#endif
