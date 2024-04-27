#include "List.h"
#include <iostream>

using namespace std;


int main()
{
	List* list = new List;
	list->push_back(2);
	list->printList();

	list->push_front(5);

	list->printList();

	list->push_back(9);
	list->printList();


	list->push_back(8);
	list->printList();

	list->push_front(7);
	list->printList();

	cout << "Value at pos 2 = " << list->value_at(2) << endl;

	list->push_front(2);
	list->printList();

	list->pop_back();
	list->printList();

	list->pop_front();
	list->printList();

	list->insert(3, 22);
	list->printList();

	cout << "Value at pos 3 = " << list->value_at(3) << endl;
	list->erase(3);
	list->printList();
	cout << "Value at pos 3 = " << list->value_at(3) << endl;

	return 0;
}