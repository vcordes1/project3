#include "stack.h"

using namespace std;

Node * Stack :: peek()
{
	Node *tmp;

	tmp = this -> pop();
	cout << tmp -> getValue() << endl;
	this -> push(tmp);

	return(tmp);

}
