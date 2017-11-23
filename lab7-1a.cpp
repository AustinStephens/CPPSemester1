// File I/O
// Takes 5 numbers and outputs them to a file.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std; // avoiding having a ton of using statements, this isnt a header so I should be fine.

int main()
{
	float num1, num2, num3, num4, num5;
	
	
	ofstream outfile("ADS1.dat");
	cout << "Writing data to ADS1.dat file:" << endl;
	cout << "Enter Number 1: ";
	cin >> num1;
	cout << "Enter Number 2: ";
	cin >> num2;
	cout << "Enter Number 3: ";
	cin >> num3;
	cout << "Enter Number 4: ";
	cin >> num4;
	cout << "Enter Number 5: ";
	cin >> num5;
	outfile << fixed << setprecision(3) << num1 << endl << num2 << endl 
			<< num3 << endl << num4 << endl << num5 << endl << "Austin Stephens" 
			<< endl << "Lab #101-7.1-A" << endl << "CP 101 Fall 2016";
	outfile.close();
	
	return 0;
}
