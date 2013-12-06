#include "stack.h"

using namespace std;

void Stack :: push(Node *newNode)
{
	Node *tmp;
	tmp = newNode;

	if (this -> data == NULL)
	{
		this -> data = new List();
		newNode = this -> data -> getStart();
	}
	else
	{
		tmp = this -> data -> getEnd();
		this -> data -> append(tmp, newNode);
		this -> top = this -> data -> getEnd();
	}

	this -> size = size++;
	this -> data -> displayf();
}
