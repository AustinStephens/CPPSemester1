// Introduction to enumerators
// Shows functionality of enumerators.

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>

using std::cout;
using std::endl;

int main()
{
	enum Lang {ASL, English, Brail, French, German, Italian, Spanish};
	
	cout << "The number related to ASL is " << ASL << endl;
	cout << "The number related to English is " << English << endl;
	cout << "The number related to Brail is " << Brail << endl;
	cout << "The number related to French is " << French << endl;
	cout << "The number related to German is " << German << endl;
	cout << "The number related to Italian is " << Italian << endl;
	cout << "The number related to Spanish is " << Spanish << endl;
	
	Lang var1 = English;
	
	cout << (var1 > Brail) << endl;
	cout << (var1 < French) << endl;
	cout << (var1 < ASL);
	
	
	return 0;
}
