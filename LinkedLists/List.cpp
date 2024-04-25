#include "List.h"
#include <iostream>

List::List()
{
}
List::~List()
{

}

// Modifiers
void List::push_front(const int& value)
{
	Node* node = new Node;
	node->value = value;
	node->prev = nullptr;
	if (num_elems == 0)
	{
		node->next = nullptr;
		first = last = node;
	}
	else
	{
		node->next = first;
		first = node;
	}
	num_elems++;
}

void List::push_back(const int& value)
{
	last->prev = last;
	last->value = value;
}

void List::pop_front()
{

}

void List::pop_back()
{

}

void List::insert(unsigned int position, const int& value)
{

}

void List::erase(unsigned int position)
{

}

void List::clear()
{

}

// Getters
int& List::front()
{
	return first->value;
}

int& List::back()
{
	return last->value;
}

int& List::value_at(unsigned int position)
{
	Node* pTmp = first;
	for (int i = 1; i < num_elems; i++)
	{
		pTmp = pTmp->next;
	}
	return pTmp->value;
}

bool List::empty() const
{
	if (num_elems == 0)
		return true;
	else
		return false;
}

unsigned int List::size() const
{
	return num_elems;
}

void List::printList() const
{
	Node* pTmp = first;
	while (pTmp != nullptr)
	{
		std::cout << pTmp->value << " ";
		pTmp = pTmp->next;
	}
}