// Introduction to Functions
// Calculates the distance fallen each second. Not really sure if the math in this is correct.

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using std::cout;
using std::endl;

float fallingDistance(float t);

int main()
{
	float distance;
	
	for (float time = 1; time <= 10; time++)
	{
		distance = fallingDistance(time);
		cout << "Distance after " << time << " seconds is " << distance << " meters." << endl;
	}
	return 0;
}

float fallingDistance(float t)
{
	float d;
	d = t * t * 9.8 * 0.5;
	return d;
}
