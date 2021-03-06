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



































void List :: haha()
{

	cout << "                       \\WWW/" << endl;
	cout << "                       /   \\" << endl;
	cout << "                      /wwwww\\" << endl;
	cout << "                    _|  o_o  |_" << endl;
	cout << "       \\WWWWWWW/   (_   / \\   _)" << endl;
	cout << "     _/`  o_o  `\\_   |  \\_/  |" << endl;
	cout << "    (_    (_)    _)  : ~~~~~ :" << endl;
	cout << "      \\ '-...-' /     \\_____/" << endl;
	cout << "      (`'-----'`)     [     ]" << endl;


	cout << "Ernie: \"Hey uhh, Bert.\"" << endl;
	sleep(3);
	cout << "Bert: \"Yea Ernie?\"" << endl;
	sleep(3);
	cout << "Ernie: \"Why do birds fly south for the winter?\"" << endl;
	sleep(3);
	cout << "Bert: \"Well gee Ernie, I dont know.\"" << endl;
	sleep(3);
	cout << "Ernie: \"Because its too far to walk!\"" << endl;
	sleep(3);
	cout << "Bert & Ernie: \"YUK YUK YUK YUK YUK!!\"" << endl;
	cout << endl;
}

