// This program gets information on a showing of a movie and outputs to the console.

#include <stdio.h>
#include <string>

using namespace std;


int main()
{		
	//costs of tickets
	const float ADULT_COST = 8.25;
	const float CHILD_COST = 6.50;
	
	//declaring variables
	char name[16];
	int adults;
	int children;
	

	
	//display
	printf("Box Office Program\n\n");
	printf("What is the name of the movie? ");
	scanf(" %s", name);
	printf("How many adults attended? ");
	scanf(" %d", &adults);
	printf("How many children attended? ");
	scanf(" %d", &children);
	float gross = (static_cast<float>(adults) * ADULT_COST) + (static_cast<float>(children) * CHILD_COST);
	float net = gross * .2;
	float paid = gross - net;
	printf("\n\nMovie Name:                     \"%s\"", name);
	printf("\nAdult Tickets Sold:                %d", adults);
	printf("\nChild Tickets Sold:                %d", children);
	printf("\nGross Box Office Profit:         $ %.2f", gross); 
	printf("\nNet Box Office Profit:           $ %.2f", net);
	printf("\nAmount Paid to Distributor:      $ %.2f", paid);
	
	
	
}
