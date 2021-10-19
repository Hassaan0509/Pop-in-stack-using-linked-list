#include "Header.h"

int stack::pop()
{
	int a = head->data;
	node* temp = head;
	if (!isEmpty())
	{
		head = head->next;
		delete temp;
		return a;
	}
	else
	{
		return -1;
	}
}