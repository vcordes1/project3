#include <iostream>
#include "list.h"

using namespace std;


int main()
{
	//variables for operations
	char pick = 'y';
	int choice = 0;
	int input = 0;
	int check = 0;

	//list declaration
	List *myList = new List();

	//switch
	while (pick != 'n')
    	{
        	cout << "What would you like to do?\n";
        	cout << "1  Quit\n";
        	cout << "2  Build a set\n";
		cout << "3  Display as a set\n";
		cout << "4  Sort\n";
		cout << "5  Super set\n";
		cout << "6  Power\n";
		cout << "7  Permu\n";
		cout << "8  Search\n";
		cout << "9  Surprise!\n";
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
			myList -> displaySet();
			break;
			}
		case 4:
			{
			myList -> sort();
			break;
			}
		case 5:
			{
			myList -> super();
			break;
			}
		case 6:
			{
			myList -> power();
			break;
			}
		case 7:
			{
			myList -> permu(check);
			break;
			}
		case 8:
			{
			cout << "Enter a value to search for: ";
			cin >> input;
			myList -> search(input);
			break;
			}
		case 9:
			{
			myList -> surprise();
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

