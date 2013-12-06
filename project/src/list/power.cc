//displays the power sets
#include "list.h"

using namespace std;

List *List :: power(List *)
{
	List *copy = new List();
	copy = this -> copyList();
	Node *tmp, *tmp2, *tmp3, *tmp4;

	tmp = this -> start;
	tmp2 = tmp -> getNext();
	tmp4 = tmp2 -> getNext();
	tmp3 = copy -> start;


	while(tmp3 != NULL)
	{
		while (tmp2 != NULL)
		{
			cout << "{ " << tmp -> getValue() << ", ";
			while (tmp2 != NULL)
			{
				cout << tmp2 -> getValue() << ", ";
				tmp2 = tmp2 -> getNext();
			}
			cout << "}, ";

		if(tmp4 != NULL)
		{
			cout << "{ " << tmp -> getValue() << ", " << tmp4 -> getValue() << " }, ";
			tmp4 = tmp4 -> getNext();
		}
			tmp2 = tmp -> getNext();
			cout << "{ " << tmp -> getValue() << ", " << tmp2 -> getValue() << " }, ";
			tmp = tmp -> getNext();
			tmp2 = tmp -> getNext();
		}
		cout << "{ " << tmp3 -> getValue() << " }, ";
		tmp3 = tmp3 -> getNext();
	}

/*	tmp = copy -> getEnd() -> getPrev();
	tmp2 = tmp -> getPrev();
	while(tmp2 != NULL)
	{
		cout << "{ " << tmp -> getValue() << ", ";
		while (tmp2 != NULL)
		{
			cout << tmp2 -> getValue() << ", ";
			tmp2 = tmp2 -> getPrev();
		}
		cout << "}, ";
		tmp = tmp -> getPrev();
		tmp2 = tmp -> getPrev();
	}

/*	tmp = this -> getEnd();
	while((tmp != this -> getStart()) && tmp2 != NULL)
	{
		tmp = this -> getNode(this -> getStart());
		this -> power(this);
	}
*/


	//empty set
	cout << "NULL }" << endl;
	return (copy);
}
