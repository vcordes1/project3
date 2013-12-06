#include <iostream>
#include "list.h"

using namespace std;


int main()
{
	//variables for loop and switch statement
	char pick = 'y';
	int choice = 0;

	//
	List *myList = new List();
	Node *newNode = new Node();


	while (pick != 'n')
    	{
        	cout << "What would you like to do?\n";
        	cout << "1 Quit\n";
        	cout << "2 Build a set\n";
        	cout << "3 Print your set\n";

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
			newNode = myList -> getStart() -> copy();
			cout << newNode -> getValue() << endl;
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

