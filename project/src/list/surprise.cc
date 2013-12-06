#include "list.h"

using namespace std;

void List :: surprise()
{
	Node *tmp;
	Node *tmp2 = new Node();
	tmp = this -> getStart();

	while(tmp != NULL)
	{
		tmp2 -> setValue(tmp2 -> getValue() + tmp -> getValue());
		tmp = tmp -> getNext();
	}

	cout << "Surprise!! The sum of the elements in your set is: ";
	cout << tmp2 -> getValue() << endl;

}
