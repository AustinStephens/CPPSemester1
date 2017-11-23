// Using strings
// Reverses a given string then prints it out.

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>
#include<cstring>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
	string phrase;
	
	cout << "Enter the string you want reversed ";
	getline(cin, phrase);
	cout << endl;
	
	for (int i = phrase.length()-1; i >= 0; i--)
	{
		cout << phrase[i];
	}
	
	return 0;
}
