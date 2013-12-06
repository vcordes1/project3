#include "node.h"

Node * Node :: copy()
{
	Node *tmp = new Node(this -> getValue());
	tmp -> setPrev(this -> getPrev());
	tmp -> setNext(this -> getNext());
	return(tmp);
}
