// Using Default arguments.
// Calls the volume function 4 different times to show how default arguments work.

#include<iostream>
#include<cmath>
#include<iomanip>

using std::cout;
using std::endl;

float volume(float w = 17, float h = 5, float l = 3);


int main()
{
	cout << volume() << endl;
	cout << volume(1) << endl;
	cout << volume(2,3) << endl;
	cout << volume(4,5,6) << endl;
	
	
	return 0;
}

float volume (float w, float h, float l)
{
	float vol;
	vol = w * h * l;
	return vol;
}

