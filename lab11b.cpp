// Introduction to iteration
// Checks if the number given is in the array.

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>

using std::cout;
using std::cin;


int main ()
{
	int numbers[10] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
	int position = -1;
	int winners;
	do
	{
		cout << "What are the wining 5 numbers this week? ";
		cin >> winners;
	}while(winners < 0 || winners > 99999);
	
	// linear search
	for (int i = 0; i < 10 && position == -1; i++)
	{
		if (numbers[i] == winners)
		{
				position = i;
		}	
	}
	
	if (position == -1)
	{
		cout << "None of the ten tickets were winners this week";	
	}
	else 
	{
		cout << "The numbers " << numbers[position] << " was on one of his tickets!";
	}
	
	
	
	return 0;
}
