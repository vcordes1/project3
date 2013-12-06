//insert sort greatest to least

#include "list.h"

using namespace std;

void List :: sort()
{
	Node *tmp;
	tmp = this -> start;

	//iterates one element at a time, if the next element is larger...
	//places it at the beginning of the list
	while (tmp -> getNext() != NULL)
	{
		if (tmp -> getNext() -> getValue() > tmp -> getValue())
		{
			tmp = tmp -> getNext();
			this  -> getNode(tmp);
			this -> insert(this -> start, tmp);
			tmp = this -> start;
		}
		else
		tmp = tmp -> getNext();
	}
}
