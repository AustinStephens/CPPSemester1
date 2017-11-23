//This program gets the degrees in celsius and calculates its amount in farenheit and kelvin.

#include<iostream>
#include<string>

using std::cout;

int main()
{
	
	float celsius;
	float farenheit;
	float kelvin;
	
	cout << "Celsius Converter\n\n";
	cout << "Enter how many degrees (Celsius) it is: ";
	cin >> celsius;
	
	farenheit = (celsius * 9 / 5) + 32;
	kelvin = celsius + 273;
	
	cout << celsius << " degrees Celsius = " << kelvin << " degrees Kelvin\n";
	cout << celsius << " degrees Celsius = " << farenheit << " degrees Farenheit";
	
	
	
	
}
