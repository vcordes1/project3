#include <iostream>
#include "list.h"

using namespace std;
 

int main()
{
	//variables for loop and switch statement
	char pick = 'y';
	int choice = 0;
	int input = 0;

	//list and node declarations
	List *myList = new List();
	Node *place = new Node();
	List *copy = new List();

	while (pick != 'n')
    	{
        	cout << "What would you like to do?\n";
        	cout << "1  Quit\n";
        	cout << "2  Build a set\n";
        	cout << "3  Display forward\n";
		cout << "4  Display backward\n";
		cout << "5  Display as a set\n";
		cout << "6  Append\n";
		cout << "7  Insert\n";
		cout << "8  Select a node\n";
		cout << "9  Pull a node\n";
		cout << "10 Sort\n";
		cout << "11 Super set\n";
		cout << "12 Search\n";
		cout << "13 Power\n";
		cout << "14 Permu\n";
		cout << "15 Copy\n";

        	cin >> choice;

	        switch(choice)
        	{
            	case 1:
                	{
                	pick = 'n';
                	break;
                	}
            	case 2:
                	{
			myList -> build();
                	break;
                	}
            	case 3:
                	{
			myList -> displayf();
                	break;
			}
		case 4:
			{
			myList -> displayb();
			break;
			}
		case 5:
			{
			myList -> displaySet();
			break;
			}
		case 6:
			{
			cout << "enter a value for the node: ";
			cin >> input;
			Node *appendNode = new Node(input);
			myList -> append(place, appendNode);
			break;
                	}
		case 7:
			{
			cout << "enter a value for the node: ";
			cin >> input;
			Node *insertNode = new Node(input);
			myList -> insert(place, insertNode);
			break;
			}
		case 8:
			{
			place = myList -> getLocation(place);
			break;
			}
		case 9:
			{
			place = myList -> getNode(place);
			break;
			}
		case 10:
			{
			myList -> sort();
			break;
			}
		case 11:
			{
			myList -> super();
			break;
			}
		case 12:
			{
			cout << "What value would you like to search for? ";
			cin >> input;
			myList -> search(input);
			break;
			}
		case 13:
			{
			cout << "P(A) = { ";
			myList = myList -> power(myList);
			break;
			}
		case 14:
			{
			myList -> permu();
			break;
			}
		case 15:
			{
			copy = myList -> copyList();
			break;
			}
           	default:
                	{
                	cout << "Not a valid option\n";
                	break;
                	}
        	}
    	}

    return 0;
}

