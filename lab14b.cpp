// Using Recursion
// Uses recursion to convert a given decimal number to hexidecimal

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>
#include<cstring>
#include<cctype>
#include<cstdio>

using std::cout;
using std::endl;
using std::cin;

void convert(int);

int main()
{
	int decimal;
	
	cout << "Please enter the decimal number: ";
	cin >> decimal;
	cout << "The decimal number " << decimal << " is ";
	

	convert(decimal);
	
	cout << " in hexidecimal";
		
	return 0;	
}

void convert(int val)
{
	char conversions[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	int div, remainder;
	remainder = val % 16; // gets the remainder aka the digit in base 16 at the end
	div = val / 16; // gets the next base 16 digit
	
	// putting the case before I output the number makes it so it doesn't print backwards
	if(div > 0) convert(div); // should be more like >= 1
	if(remainder < 10)
		cout << remainder;
	else
		cout << conversions[remainder - 10];
	return;	
}

