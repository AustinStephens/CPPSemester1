// Using strings and character testers
// Tests if a given password is valid based on the rules stated.

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdlib>
#include<time.h>
#include<cstring>
#include<cctype>
#include<cstdio>


using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	string password;
	bool flag=false;

	
	while (flag != true)
	{
		flag = true;
		int upper = 0;
		int digit = 0;
		int lower = 0;
		
		cout <<	"Password must be longer than 6 characters, contain upper and lower case, and have at least 1 number" << endl;
		cout << "Please enter your password: ";
		getline(cin, password);
		
		for (int i = 0; i < password.length(); i++)
		{
			if (isupper(password[i]))
			{
				upper++;
			}
			else
			  if (islower(password[i]))
			{
				lower++;
			}
			else if (isdigit(password[i]))
			{
				digit++;
			}
		}
		
		
		
		if (password.length() < 6)
		{
			cout << "Password too short" << endl;
			flag = false;
		}
		if (upper == 0)
		{
			cout << "Password has no uppercase characters" << endl;
			flag = false;
		}
		if (lower == 0)
		{
			cout << "Password has no lowercase characters" << endl;
			flag = false;
		}
		if (digit == 0)
		{
			cout << "Password has no numbers" << endl;
			flag = false;
		}
		
		
		if (!flag )
		{
			cout << "You need to enter a new password" << endl << endl;
		}
	}
	cout << "Your password is valid" << endl;
	return 0;
}
