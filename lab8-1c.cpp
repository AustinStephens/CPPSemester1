// Introduction to Functions
// Gets the mass and velocity of an object and calculates its kinetic energy.

#include<iostream>
#include<iomanip>
#include<cmath>

using std::cout;
using std::endl;
using std::cin;

float kineticEnergy(float, float);

int main()
{
	float mass;
	float velocity;
	float kEnergy;
	
	cout << "What is the mass of the object?(in kilograms) ";
	cin >> mass;
	cout << "What is the velocity of the object?(in m/s) ";
	cin >> velocity;
	kEnergy = kineticEnergy(mass, velocity);
	cout << endl << "The kinectic energy is " << kEnergy;
}

float kineticEnergy(float m, float v)
{
	float ke;
	ke = v * v * m * 0.5f;
	return ke;
}
