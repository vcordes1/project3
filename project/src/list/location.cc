#include "list.h"

using namespace std;

Node * List :: getLocation (Node *place)
{
	Node *tmp = this -> start;
	int i = 0;
	int input = 0;


	cout << "What location are you looking for? ";
	cin >> input;

	if (input == 0)
	{
		tmp = tmp;
	}
	else
	{
		while(i < input)
		{
			tmp = tmp -> getNext();
			i++;
		}
	}
	place = tmp;

	return(place);
}
