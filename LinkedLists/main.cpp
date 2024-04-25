#include "List.h"
#include <iostream>

using namespace std;


int main()
{
	List* list = new List;
	list->push_front(5);

	cout << list->value_at(0);
	list->printList();

	return 0;
}