#pragma once
// Declaration of a doubly-linked list
class List
{
public:
	//Constructor an destructor
	List();
	~List();

	// Checker
	//bool assert();


	// Modifiers
	void push_front(const int& value);
	void push_back(const int& value);
	void pop_front();
	void pop_back();
	void insert(unsigned int position, const int& value);
	void erase(unsigned int position);
	void clear();
	

	// Getters
	int& front();
	int& back();
	int& value_at(unsigned int position);
	bool empty() const;
	unsigned int size() const;
	void printList() const;

private:
	// Internal struct for list nodes
	struct Node
	{
		int value;
		Node* next;
		Node* prev;
	};

	// List internals
	Node* first = nullptr;
	Node* last = nullptr;
	unsigned int num_elems = 0;

};

