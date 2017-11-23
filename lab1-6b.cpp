/*
This program takes an amount of north/south posts and east/west posts then makes and prints a fence to the console.
Introduction to loops and control structures.
*/

#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int nsposts, ewposts;
	char loop;
		
	cout << "2016 Bruin Farmville Fence Builder" << endl << endl;
	
	do {
	     cout << "What is the Number of North/South Fence posts? ";
	     cin >> nsposts;
         while (nsposts < 2) // makes sure its over 2 posts
			{
				cout << "Value must be at least 2 please try again" << endl;
				cout << "What is the Number of North/South Fence posts? ";
				cin >> nsposts;
			}
	
			cout << "What is the Number of East/West Fence posts? ";
			cin >> ewposts;
		while (ewposts < 2) 
			{
				cout << "Value must be at least 2 please try again" << endl;
				cout << "What is the Number of East/West Fence posts? ";
				cin >> ewposts;
			}
		cout << endl << endl;
	
		if (nsposts > 10) nsposts = 10; // makes sure its no larger than 10
		if (ewposts > 10) ewposts = 10;
		//makes ns column
	//needs atleast 2 posts and 1 board
		cout << "|==";
		for (int i = nsposts; i > 2; i--) 
			cout << "|==";
	
		cout << "|" << endl;
	
	//makes ew colums
	//needs atleast 1 board, first 2 posts are already made
		cout << ":  ";
		for (int i = nsposts; i > 2; i--) 
				cout << "   ";
	 
	    cout << ":" << endl;
	
	    for(int j = ewposts; j > 2; j--)
	    {
		//makes the post column
		  cout << "-  ";
		  for (int i = nsposts; i > 2; i--) 
					cout << "   ";
	 
		  cout << "-" << endl;
		
		//makes the boards
		   cout << ":  ";
		   for (int i = nsposts; i > 2; i--) 
				cout << "   ";
	       cout << ":" << endl;
	     } 
	
	//makes second ns column
	//needs atleast 2 posts and 1 board
	     cout << "|==";
	     for (int i = nsposts; i > 2; i--) 
       		cout << "|==";

	  	cout << "|" << endl << endl;
		cout << "Coral Built!!" << endl << endl << endl
		     << "Would you like to build another (Y/N)? ";
	    cin >> loop;
		
	}while (loop != 'N'); 
	
	
return 0;	
	
	
}
