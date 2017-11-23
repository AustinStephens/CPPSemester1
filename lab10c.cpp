// Introduction to 2D arrays
// Passes the matrix into functions this time to show how to pass arrays into functions.

#include<iostream>
#include<cmath>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision; 

void getArray(float [][3]);
void outArray(const float [][3]);
float dtmntArray(const float [][3]);

int main()
{
	float detArray[3][3];
	float det;
	char yn;
	
	do
	{
		cout << "Calculation of 3 x 3 Determinant" << endl << endl;
		
		getArray(detArray);
		outArray(detArray);
		det = dtmntArray(detArray);
		
		cout << endl << "The determinant of the above matrix is " << det << endl << endl;
		
		cout << "Would you like to Do another Matrix (Y/N)? ";
		cin >> yn;
		cout << endl;
		
	}while(yn != 'N' && yn != 'n');
	
	return 0;
}

void getArray(float matrix[][3]) // only need the size of one dimension when passing it into a function
{
	for (int i = 0; i<3; i++)
		{   cout << "What is row  " << i + 1 << " of the matrix?";
			for (int j = 0; j<3; j++)
			{
				cin >> matrix[i][j];
			}
		}
}

void outArray(const float matrix[][3])
{
	cout << endl << "3 x 3 Matrix entered is" << endl;
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cout << fixed << setprecision(3) << matrix[i][j] << "   ";
		}
		cout << endl;
	}
}

float dtmntArray(const float detArray[][3])
{
	float x;
	x = (detArray[0][0] * detArray[1][1] * detArray[2][2]) + (detArray[0][1] * detArray[1][2] * detArray[2][0])
	  + (detArray[0][2] * detArray[1][0] * detArray[2][1]) - (detArray[0][1] * detArray[1][0] * detArray[2][2])
	  - (detArray[0][0] * detArray[1][2] * detArray[2][1]) - (detArray[0][2] * detArray[1][1] * detArray[2][0]);
	return x;
}
