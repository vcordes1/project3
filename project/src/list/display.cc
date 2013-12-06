// 3 display functions here
// 1) forward - as a list
// 2) backward - as a list
// 3) forward - in set notation

#include "list.h"
#include <stdio.h>

using namespace std;

//forward
void List :: displayf()
{
	Node *tmp;
	int i = 0;

	tmp = this -> start;

	while (tmp != NULL)
	{
		fprintf(stdout, "[%u] %u -> ", i, tmp -> getValue());
		i = i + 1;
		tmp = tmp -> getNext();
	}

	fprintf(stdout, "NULL\n");
}

//backward
void List :: displayb()
{
	Node *tmp;
	int i = 0;

	tmp = this -> end;

	while (tmp != NULL)
	{
		fprintf(stdout, "[%u] %u -> ", i, tmp -> getValue());
		i = i + 1;
		tmp = tmp -> getPrev();
	}

	fprintf(stdout, "NULL\n");
}

//set notation
void List :: displaySet()
{
	Node *tmp;
	tmp = this -> start;

	cout << "A = { ";

	while (tmp != NULL)
	{
		cout << tmp -> getValue() << ", ";
		tmp = tmp -> getNext();
	}

	cout << "}" << endl;
}
