// Introduction to pointers
// This program goes over the basic functionality of pointers and arrays.

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>

using std::cout;
using std::endl;

int main()
{
	double ar_x[12] = {0,1,2,5,7,2,4,8,0,1,9,7};
	int s, v, u;
	int *pts, *ptv, *ptu;
	pts = &s;
	ptv = &v;
	ptu = &u;
	
	cout << "Enter 3 variables";
	scanf("%d %d %d,", pts, ptu, ptv);
	cout << "The address of s is " << pts << " and the value is " << *pts << endl;
	cout << "The address of u is " << ptu << " and the value is " << *ptu << endl;
	cout << "The address of v is " << ptv << " and the value is " << *ptv << endl;
	cout << "The sum of all of the variables is " << *pts + *ptv + *ptu << endl;
	cout << *pts << " divided by " << *ptv << " equals " << *pts / *ptv << endl;
	cout << *ptu << " times " << *ptv << " equals " << *ptu * *ptv << endl;
	
	double *pxa, *pxb;
	pxa = &ar_x[2];
	pxb= &ar_x[6];
	
	cout << "The 3rd element of the array minus the 7th element is " << pxb - pxa << endl;
	cout << "The address of the 3rd element is " << pxa << endl;
	pxa++;
	cout << "The new address of pxa is " << pxa;
	
	
	
	return 0;
}
