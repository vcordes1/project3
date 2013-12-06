//displays a super set
//just adds an element to the set
//that isnt currently in the set

#include "list.h"

using namespace std;

void List :: super()
{
	Node *tmp = new Node(8233); //pulled a random number out of my head
				    //with more time it would ideally search the set and add
				    //a number gauranteed to not be in the set

	this -> append(this -> end, tmp);
	this -> displaySet();

	this -> getNode(this -> end);

}

