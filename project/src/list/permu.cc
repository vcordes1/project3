//displays the permutations
#include "list.h"

using namespace std;

void List :: permu()
{
	List *copy = new List();
	List *copy2 = new List();
	copy = this -> copyList();
	copy2 = this -> copyList();
	Node *tmp, *tmp2, *tmp3, *tmp4;

	tmp = copy -> start;
	tmp2 = this -> getStart() -> getNext();
	tmp3 = copy2 -> getStart();
	tmp4 = this -> getStart();

	while(tmp4 != NULL)
	{
		while(tmp2 != NULL)
		{
			tmp = tmp -> getNext();
			copy -> getNode(tmp);
			copy -> insert(copy -> getStart() -> getNext(), tmp);
			copy -> displaySet();
			tmp2 = tmp2 -> getNext();
		}
		tmp3 = tmp3 -> getNext();
		copy2 -> getNode(tmp3);
		copy2 -> insert(copy2 -> getStart(), tmp3);
		copy = copy2 -> copyList();
		tmp = copy -> getStart();
		tmp2 = this -> getStart() -> getNext();
		tmp4 = tmp4 -> getNext();
	}


/*	while(tmp2 != NULL)
	{
		tmp = tmp -> getNext();
		while(count < check)
		{
			if(tmp -> getNext() != NULL)
			{
				tmp = tmp -> getNext();
			}
			count++;
		}
		this -> getNode(tmp);
		this -> insert(this -> start -> getNext(), tmp);
		this -> displaySet();
		tmp2 = tmp2 -> getNext();
		tmp = this -> start;
		check++;
		count = 0;
	}




/*	tmp = tmp2 = copy -> start;
	while(tmp2 != NULL)
	{
		tmp = tmp -> getPrev();
		this -> getNode(tmp);
		this -> insert(this -> start, tmp);
		tmp = tmp -> getPrev();
		tmp2 - tmp2 -> getPrev();
	}
*/
}
