#include "stack.h"

using namespace std;

Node * Stack :: pop()
{
	Node *tmp;

	if(this -> data == NULL)
	{
		cout << "Nothing to pop!" << endl;
		return 0;
	}

	tmp = this -> data -> getNode(this -> data -> getEnd());

	this -> size = size--;
	return (tmp);

}
