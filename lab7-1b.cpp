// File I/O
// This program gets information on a showing of a movie and outputs it to a file.


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std; // avoiding having a ton of using statements, this isnt a header so I should be fine.


int main()
{		
	//costs of tickets
	const float ADULT_COST = 8.25;
	const float CHILD_COST = 6.50;
	
	//declaring variables
	string name;
	int adults;
	int children;
	

	
	//display
	cout << "Box Office Program\n\n";
	cout << "What is the name of the movie? ";
	getline(cin, name);
	cout << "How many adults attended? ";
	cin >> adults;
	cout << "How many children attended? ";
	cin >> children;
	float gross = (static_cast<float>(adults) * ADULT_COST) + (static_cast<float>(children) * CHILD_COST);
	float net = gross * .2;
	float paid = gross - net;
	
	ofstream outfile("ADS2.dat");
	outfile << fixed << setprecision(2);
	outfile << "Movie Name:                     " << "\"" << name << "\"" << endl;
	outfile << "Adult Tickets Sold:                " << adults << endl;
	outfile << "Child Tickets Sold:                " << children << endl;
	outfile << "Gross Box Office Profit:         $ " << gross << endl; 
	outfile << "Net Box Office Profit:           $ " << net << endl;
	outfile << "Amount Paid to Distributor:      $ " << paid;
	outfile.close();
	
	return 0;
	
}
