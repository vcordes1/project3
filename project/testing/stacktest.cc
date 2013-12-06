#include <iostream>
#include "stack.h"

using namespace std;


int main()
{
	//variables for loop and switch statement
	char pick = 'y';
	int choice = 0;
	int input = 0;

	//stack declaration
	Stack *myStack = new Stack();
	Node *popNode = new Node();

	while (pick != 'n')
    	{
        	cout << "What would you like to do?\n";
        	cout << "1 Quit\n";
        	cout << "2 Push\n";
        	cout << "3 Pop\n";
		cout << "4 Peek\n";

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
			cout << "Enter a value for the node to be pushed: ";
			cin >> input;
			Node *newNode = new Node(input);
			myStack -> push(newNode);
                	break;
                	}
            	case 3:
                	{
			popNode = myStack -> pop();
                	break;
                	}
		case 4:
			{
			myStack -> peek();
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

