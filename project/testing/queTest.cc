#include <iostream>
#include "queue.h"

using namespace std;


int main()
{
	//variables for loop and switch statement
	char pick = 'y';
	int choice = 0;
	int input = 0;

	//queue declaration
	Queue *myQueue = new Queue();
	Node *deNode = new Node();

	while (pick != 'n')
    	{
        	cout << "What would you like to do?\n";
        	cout << "1 Quit\n";
        	cout << "2 Enqueue\n";
        	cout << "3 Dequeue\n";

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
			myQueue -> enqueue(newNode);
                	break;
                	}
            	case 3:
                	{
			deNode = myQueue -> dequeue();
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

