//search for a value

#include "list.h"

using namespace std;

bool List :: search(int input)
{
	Node *tmp;
	tmp = this -> start;
	//loop to check for equivilency(probably mispelled)
	while(tmp != NULL)
	{
		if (tmp -> getValue() == input)
		{
			cout << "Found it!!\n";
			cout << endl;
			return(true);
		}
		tmp = tmp -> getNext();
	}

	cout << "We couldnt find it. Try again.\n";
	cout << endl;

	return(false);


}
