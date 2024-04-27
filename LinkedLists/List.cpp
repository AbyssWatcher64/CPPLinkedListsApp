#include "List.h"
#include <iostream>

List::List()
{
}
List::~List()
{
	clear();
}

// Checker
//bool List::assert()
//{
//	assert
//}

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
		first->prev = node;
		first = node;
	}
	num_elems++;
}

void List::push_back(const int& value)
{
	Node* node = new Node;
	node->value = value;
	node->next = nullptr;
	if (num_elems == 0)
	{
		node->prev = nullptr;
		first = last = node;
	}
	else
	{
		node->prev = last;
		last->next = node;
		last = node;
	}
	num_elems++;
}

void List::pop_front()
{
	Node* pTmp = first->next;
	pTmp->prev = nullptr;
	pTmp->next = first->next->next;
	delete first;
	first = pTmp;
	num_elems--;
}

void List::pop_back()
{
	Node* pTmp = last->prev;
	pTmp->prev = last->prev->prev;
	pTmp->next = nullptr;
	delete last;
	last = pTmp;
	num_elems--;
}

void List::insert(unsigned int position, const int& value)
{
	Node* node = new Node;
	node->value = value;

	Node* pTmp = first;
	for (int i = 1; i != position; i++)
	{
		pTmp = pTmp->next;
	}
	node->prev = pTmp->prev;
	node->next = pTmp;
	node->prev->next = node;
	node->next->prev = node;
	pTmp = node;
	num_elems++;
}

void List::erase(unsigned int position)
{
	Node* pTmp = first;
	for (int i = 1; i != position; i++)
	{
		pTmp = pTmp->next;
	}
	pTmp->next->prev = pTmp->prev;
	pTmp->prev->next = pTmp->next;
	delete pTmp;
	num_elems--;
}

void List::clear()
{
	first = nullptr;
	last = nullptr;
	num_elems = 0;
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
	for (int i = 1; i < position; i++)
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
	std::cout << std::endl;
}