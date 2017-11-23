// File I/O
// Reads 5 numbers from a file and outputs them to the console.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std; // avoiding having a ton of using statements, this isnt a header so I should be fine.

int main()
{
	float num1, num2, num3, num4, num5, sum, average;
	
	ifstream infile("ADS1.dat");
	
	cout << fixed << setprecision(3);
	cout << "Reading data from the ADS1.dat file:" << endl << endl;
	infile >> num1;
	cout << "Number 1 is " << num1 << endl;
	infile >> num2;
	cout << "Number 2 is " << num2 << endl;
	infile >> num3;
	cout << "Number 3 is " << num3 << endl;
	infile >> num4;
	cout << "Number 4 is " << num4 << endl;
	infile >> num5;
	cout << "Number 5 is " << num5 << endl << endl;
	
	sum = num1 + num2 + num3 + num4 + num5;
	average = sum / 5;
	
	cout << "The sum of the 5 numbers is " << sum << endl;
	cout << "The Average of these 5 numbers is " << average;
	
	infile.close();
		
	return 0;
}
