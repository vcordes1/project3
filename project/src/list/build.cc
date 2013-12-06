#include "list.h"

using namespace std;

void List :: build()
{
	Node *tmp = new Node;
	int input = 0;

	cout << "Enter a value -1 to quit: ";
	cin >> input;

	while (input != -1)
	{
		Node *newNode = new Node(input);

		if (this -> start == NULL)
		{
			this -> insert(this -> start, newNode);
		}
		else
		{
			this -> append(this -> end, newNode);
		}

		cout << "Enter another value -1 to quit: ";
		cin >> input;
		this -> qty++;

	}
}
