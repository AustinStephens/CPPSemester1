// Introduction to overloading functions
// Overloads a cubed function to take int, float, and bool for parameters.

#include<iostream>
#include<cmath>
#include<iomanip>

using std::cout;
using std::endl;

int cubed(bool);
float cubed(float);
float cubed(int);


int main()
{	
	
	cout << cubed(true) << endl;
	cout << cubed(3.0f) << endl;
	cout << cubed(5);	
	
	return 0;
}

int cubed(bool a)
{
	int b;
	if (a == true)
	{
		b = 1;
	}
	else 
	{
		b = 0;
	}
	return b;
}

float cubed(float a)
{
	float b;
	b = a * a * a;
	return b;
}

float cubed(int a)
{
	float b;
	b = static_cast<float>(a*a*a);
	return b;
}
