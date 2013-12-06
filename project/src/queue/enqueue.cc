#include "queue.h"

using namespace std;

void Queue :: enqueue(Node *newNode)
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
		tmp = this -> data -> getStart();
		this -> data -> insert(tmp, newNode);
		this -> back = this -> data -> getStart();
	}

	this -> bufsiz = bufsiz++;
	this -> data -> displayf();
}
