// Introduction to for each loops / iteration
// This program gets input for a array and finds the smallest and greatest number in the given array.

#include<iostream>
#include<cmath>

using std::cout;
using std::cin;
using std::endl;

main()
{
	int myArray[10];
	int maxNum;
	int minNum;
	
	for (int &x : myArray)
	{
		cout << "Please enter the value ";
		cin >> x;
	}
	
	maxNum = myArray[0];
	minNum = myArray[1];
	
	for (int val : myArray)
	{
		if (val < minNum) minNum = val;
		if (val > maxNum) maxNum = val;
	}
	
	cout << "The greatest number in the array is " << maxNum << endl
		 << "and the smallest number in the array is " << minNum;
	
	
	
	return 0;
}
