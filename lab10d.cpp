// Using 3D arrays.
// Shows the values of a non initialized array has vs a array with at least 1 initialized value.

#include<iostream>
#include<cmath>
#include<iomanip>

using std::cout;
using std::endl;

int main ()
{
	float no[3][3][3];
	float init[3][3][3]={1};
	

	
	cout << "Outputting non initialized array" << endl;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << "X value " << i + 1 << " | Y value " <<
				j + 1 << " | Z value " << k + 1 << " = " << no[i][j][k]<< endl;
			}
		}
	}
	
	cout << endl << "Outputting initialized array" << endl;
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << "X value " << i + 1 << " | Y value " <<
				j + 1 << " | Z value " << k + 1 << " = " << init[i][j][k]<< endl;
			}
		}
	}
	
	return 0;
}
