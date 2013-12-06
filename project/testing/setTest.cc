#include <iostream>
#include "list.h"

using namespace std;
 

int main()
{
	//variables for loop and switch statement
	char pick = 'y';
	int choice = 0;

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
		cout << "8  Surprise!\n";
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
			//slightly sloppy :: was trying recursion for this
			cout << "P(A) = { "; //otherwise this would be in function
			myList = myList -> power(myList);
			break;
			}
		case 7:
			{
			myList -> permu();
			break;
			}
		case 8:
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

