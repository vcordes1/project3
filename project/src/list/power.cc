//displays the power sets
#include "list.h"

using namespace std;

void List :: power()
{
	//declarations...lots of um
	List *copy = new List();
	copy = this -> copyList();
	Node *tmp, *tmp2, *tmp3, *tmp4;

	tmp = this -> start;
	tmp2 = tmp -> getNext();
	tmp4 = tmp2 -> getNext();
	tmp3 = copy -> start;

	//begins printing the set
	cout << "P(A) = { ";

	//outer loop controls and prints all singles
	while(tmp3 != NULL)
	{
		//prints out the in-betweens
		while (tmp2 != NULL)
		{
			cout << "{ " << tmp -> getValue() << ", ";

			//all the elements after tmp
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



	//empty set
	cout << "NULL }" << endl;
}
