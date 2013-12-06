//fix me

#include "list.h"

Node * List :: getNode (Node *place)
{
	Node *tmp;

	if (place == this -> start)
	{
		tmp = this -> start;
		tmp = tmp -> getNext();
		this -> start = tmp;
		this -> start -> setPrev(NULL);
		place -> setNext(NULL);
		place -> setPrev(NULL);
	}
	else if(place == this -> end)
	{
		tmp = this -> end;
		this -> end = tmp -> getPrev();
		this -> end -> setNext(NULL);
		place = tmp;
		place -> setNext(NULL);
		place -> setPrev(NULL);
	}
	else
	{
		tmp = place -> getPrev();
		tmp -> setNext(place -> getNext());
		tmp = tmp -> getNext();
		tmp -> setPrev(place -> getPrev());
		place -> setNext(NULL);
		place -> setPrev(NULL);
	}

	this -> qty--;
	return(place);
}
