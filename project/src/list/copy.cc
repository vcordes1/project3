#include "list.h"

using namespace std;

List *List :: copyList()
{
	List *copy = new List();
	Node *tmp;
	tmp = this -> start;
	Node *newNode = NULL;


	while(tmp != NULL)
	{
		newNode = tmp -> copy();
		copy -> append(copy -> getEnd(), newNode);
		tmp = tmp -> getNext();

	}

	return (copy);
}
