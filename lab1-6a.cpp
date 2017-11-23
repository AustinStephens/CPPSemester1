// Introduction to control structures and loops. Prints celsius degrees 0-20 and its corresponding degrees in farenheit.

#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::endl;


int main()
{
	cout << "Celsius table and its Fahrenheit equivilant." << endl << endl;
	for (int i=0; i<=20; i++){
		cout << "Celsius: " << i << "     "
			 << "Fahrenheit: " << ((static_cast<float>(i)* 9) / 5) + 32 << endl;
	}
}
