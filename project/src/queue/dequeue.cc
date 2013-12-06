#include "queue.h"

using namespace std;

Node * Queue :: dequeue()
{
	Node *tmp;

	if(this -> data == NULL)
	{
		cout << "Nothing to dequeue!" << endl;
		return 0;
	}

	tmp = this -> data -> getEnd();
	this -> front = tmp -> getPrev();

	tmp = this -> data -> getNode(tmp);

	this -> bufsiz = bufsiz--;

	return (tmp);
}
