// Introduction to pointers
// Uses pointers as arguments in a function / using address operator.

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>

using std::cout;

int doSomething(int *, int *);

int main()
{
	int x = 2;
	int y = 1;
	
	int answer = doSomething(&x,&y);
	
	cout << "The value of x plus y after going through the doSomething function is " << answer;
	
	return 0;
}

int doSomething(int *ptx, int *pty)
{
	int temp = *ptx;
	*ptx = *pty * 10;
	*pty = temp * 10;
	return *ptx + *pty;
}
