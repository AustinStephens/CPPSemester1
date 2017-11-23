// This program gets information on a loan, then calculates and prints out the information on the interest on the loan.

#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>

using namespace std; // usually considered bad practice but this isn't a header or anything so I'll leave it, but now I exclude this statement from most programs.

int main()
{
	float loan;
	float newPayment;
	int numberOfPayments;
	float interestA;

	
	cout << "Monthly Payment Calculator\n\n";
	cout << "What was the original loan amount? ";
	cin >> loan;
	cout << "How many payments? ";
	cin >> numberOfPayments;
	cout << "What is your annual interest? (as a decimal) ";
	cin >> interestA;
	
	float interestM = interestA / 12;		
	newPayment = (interestM * pow(1 + interestM, numberOfPayments)) * loan / (pow(1 + interestM, numberOfPayments)-1);
	float totalPayment = newPayment * numberOfPayments;
	float interestPaid = totalPayment - loan;
	
	cout << showpoint << fixed<<setprecision(2);
	cout << "\nLoan Amount:                  $" << setw(9) << loan;
	cout << "\nMonthly Interest Rate:             " << setw(4) << (interestM * 100) << "%" ;
	cout << "\nNumber of Payments:                  " << setw(3) << numberOfPayments;
	cout << "\nMonthly Payment:              $" << setw(9) << newPayment;
	cout << "\nAmount Paid Back:             $" << setw(9) << totalPayment;
	cout << "\nInterest Paid:                $" << setw(9) << interestPaid;
	
	
	
	
	
}
