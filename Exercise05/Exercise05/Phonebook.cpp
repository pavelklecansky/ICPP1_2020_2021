#include "Phonebook.h"
#include <stdexcept>


void Model::Phonebook::AddPerson(Entity::Person person)
{
	if (beginning == nullptr)
	{
		beginning = new ListNode{ person };
		return;
	}
	ListNode* temp = beginning;
	while (temp->GetNextNode() != nullptr)
	{
		temp = temp->GetNextNode();
	}
	temp->SetNextNode(new ListNode(person));
}

std::string Model::Phonebook::FindPhone(std::string name) const
{	
	if (name.empty())
	{
		throw std::invalid_argument("Empty name");
	}
	if (beginning == nullptr)
	{
		throw std::out_of_range("Empty list");
	}
	ListNode* temp = beginning;
	while (temp != nullptr)
	{
		if (temp->GetPerson().GetName()._Equal(name))
		{
			return temp->GetPerson().GetPhone();
		}
		temp = temp->GetNextNode();
	}
	throw std::exception("Phone not found");
}

std::string Model::Phonebook::FindPhone(int id) const
{
	if (id < 0)
	{
		throw std::invalid_argument("Bad id");
	}
	if (beginning == nullptr)
	{
		throw std::out_of_range("Empty list");
	}
	ListNode* temp = beginning;
	while (temp != nullptr)
	{
		if (temp->GetPerson().GetId() == id)
		{
			return temp->GetPerson().GetPhone();
		}
		temp = temp->GetNextNode();
	}
	throw std::exception("Phone not found");
}
