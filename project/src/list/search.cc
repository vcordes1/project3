#include "list.h"

using namespace std;

bool List :: search(int input)
{
	Node *tmp;
	tmp = this -> start;

	while(tmp != NULL)
	{

		if (tmp -> getValue() == input)
		{
			cout << "Found it!!\n";
			return(true);
		}
		tmp = tmp -> getNext();
	}

	cout << "We couldnt find it. Try again.\n";
	return(false);


}
