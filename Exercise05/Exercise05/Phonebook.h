#pragma once
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <stdexcept>
#include "Person.h"

namespace Model {

	class ListNode
	{
		Entity::Person person;
		ListNode* next;
	public:
		ListNode(Entity::Person person)
		{
			this->person = person;
			next = nullptr;
		}

		ListNode(Entity::Person person, ListNode* next)
		{
			this->person = person;
			this->next = next;
		}

		virtual ~ListNode() {}
		ListNode* GetNextNode() { return next; }
		void SetNextNode(ListNode* next) { this->next = next; }
		Entity::Person GetPerson() { return person; }
		void SetPerson(Entity::Person person) { this->person = person; }
	};

	class Phonebook
	{
		ListNode* beginning = nullptr;
	public:
		Phonebook() {};
		~Phonebook();
		void AddPerson(Entity::Person person);
		std::string FindPhone(std::string name) const;
		std::string FindPhone(int id) const;
	};
}

#endif // !PHONEBOOK_H
