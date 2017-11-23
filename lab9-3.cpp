// Introduction to Overloading functions
// Another example of overloading functions, this time the number of parameters is different, not the type of parameter.

#include<iostream>
#include<cmath>
#include<iomanip>

using std::cout;
using std::endl;

float area(float);

float area(float, float);


int main()
{
	
	cout << area(4) << endl;
	cout << area(5,6);
	
	return 0;
}

float area(float a)
{
	float ar;
	ar = a * a;
	return ar;
}

float area(float a, float b)
{
	float ar;
	ar = a * b;
	return ar;
}
