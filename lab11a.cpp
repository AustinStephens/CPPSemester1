// Random Number Generation
// Randomly generates a given amount of numbers, then sorts them and then prints them in ascending and descending order.

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
	int amount;
	bool swapped = true;
	int tmp;
	
	time_t timer;
	srand(time(&timer));
	
	cout << "Data Searching and Sorting!!" << endl << endl;
			
	cout << "How many numbers would you like to be generated(2-20)? ";
	cin >> amount;
	
	while(amount < 2 || amount > 20)
	{
		cout << "Sorry, that is invalid try again." << endl;
		cout << "How many numbers would you like to be generated(2-20)? ";
		cin >> amount;
	}
	
	int numbers[amount];
	
	for (int i = 0; i < amount; i++)
	{
		numbers[i] = rand()%151; // generates a number between 0-150
	}
	
	// prints the array
	cout << endl << endl << "The " << amount << " numbers generated are:" << endl;
	for (int i = 0; i < amount; i++)
	{
		cout << numbers[i] << "  ";
	}	
	cout << endl << endl << endl;
	
	// bubble sort, sorts in descending order
	while (swapped)  // checks if its at the end of the array or if any swaps have been performed in the last iteration
	{
		swapped = false; // resets the swapped flag
		for (int i = 0; i < amount - 1; i++)
		{
			if (numbers[i] < numbers[i+1]) // swaps the elements if the left is lesser than the right
			{
				tmp = numbers[i+1];
				numbers[i+1] = numbers[i];
				numbers[i] = tmp;
				swapped = true;
			}
		}
	}
	
	cout << "The Highest number is " << numbers[0] << endl;
	cout << "The Lowest number is " << numbers[amount-1] << endl << endl << endl;
	cout << "The " << amount << " numbers in Ascending Order:"<< endl;
	for (int i = 0; i < amount; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl << endl << "The " << amount << " numbers in Descending Order:" << endl;
	for (int i = amount-1; i >= 0; i--)
	{
		cout << numbers[i] << " ";
	}
	
	return 0;
}
