//displays the permutations
#include "list.h"

using namespace std;

void List :: permu(int check)
{
	int count = 0;

	//initilizations and declarations
	List *copy = new List();
	copy = this -> copyList();
	Node *tmp, *tmp2;
	tmp = copy -> start;
	tmp2 = this -> getStart() -> getNext();

	//loops to swap the elements after the first element
	while(tmp2 != NULL)
	{
		tmp = tmp -> getNext();
		copy -> getNode(tmp);
		copy -> insert(copy -> getStart() -> getNext(), tmp);
		copy -> displaySet();
		tmp2 = tmp2 -> getNext();
	}

	//reassigns copy and tmp
	tmp = this -> getStart();
	copy = this -> copyList();

	//loops to set the place of tmp
	while(count <= check)
	{
		if(tmp -> getNext() != NULL)
		{
		tmp = tmp -> getNext();
		count++;
		}
		else
		{
		count++;
		}
	}

	//places the second element of the set in the first position
	this -> getNode(tmp);
	this -> insert(this -> getStart(), tmp);

	//increment check and recall the function
	check++;
	if (check < ((this -> qty) /2))
	{
	this -> permu(check);
	}

}
