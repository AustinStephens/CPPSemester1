// Introduction to 2D arrays (matrix)
// Calculates the determinant of a given matrix.

#include<iostream>
#include<cmath>
#include<iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::setprecision;

int main()
{
	float detArray[3][3];
	float det;
	char yn;
	
	
	do
	{
		cout << "Calculation of 3 x 3 Determinant" << endl << endl;
		
		for (int i = 0; i<3; i++)
		{   cout << "What is row  " << i + 1 << " of the matrix?";
			for (int j = 0; j<3; j++)
			{
				cin >> detArray[i][j];
			}
		}
		
		det = (detArray[0][0] * detArray[1][1] * detArray[2][2]) + (detArray[0][1] * detArray[1][2] * detArray[2][0])
			+ (detArray[0][2] * detArray[1][0] * detArray[2][1]) - (detArray[0][1] * detArray[1][0] * detArray[2][2])
			- (detArray[0][0] * detArray[1][2] * detArray[2][1]) - (detArray[0][2] * detArray[1][1] * detArray[2][0]);
		
		cout << endl << "3 x 3 Matrix entered is" << endl;
		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j<3; j++)
			{
				cout << fixed << setprecision(3) << detArray[i][j] << "   ";
			}
			cout << endl;
		}
		cout << endl << "The determinant of the above matrix is " << det << endl << endl;
		cout << "Would you like to Do another Matrix (Y/N)? ";
		cin >> yn;		
	}while(yn != 'N' && yn !='n');
	
	return 0;
}
