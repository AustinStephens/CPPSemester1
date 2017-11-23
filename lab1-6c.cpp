// Introduction to loops and control structures.
// Takes the speed and a vehicle and how long its driving and prints a chart of its distance traveled per hour.

#include <iostream>
#include <iomanip>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int main ()
{
	int speed, time, distance;
	
	cout << "What is the speed of the vehicle in mph? ";
	cin >> speed;
	while (speed < 0) 
	{
		cout << "You cannot have a negative speed" << endl;
		cout << "What is the speed of the vehicle in mph? ";
		cin >> speed;
	}
	
	cout << "How many hours has in traveled? ";
	cin >> time;
	while (time < 1) 
	{
		cout << "You must have traveled for at least 1 hour" << endl;
		cout << "How many hours has in traveled? ";
		cin >> time;
	}
	
	
	cout << "Hour   Distance Traveled" << endl 
		 << "--------------------------------" << endl;
	for (int i = 1; i <= time; i++)
	{
		distance = i * speed;
		cout << setw(2) << i << "           " 
			 <<	setw(4) << distance << endl;
	}
	
return 0;		 
	
	
}
