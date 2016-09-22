/********************************************************
* Program will ask the user to enter a dollar amount    *
* and then show how to pay that amount using            *
* smallest number of bills.                             *
*                                                       *
* Project 1, Program Design                             *
*********************************************************
Kevin Bensimoun */

#include <stdio.h>

int main(void)
{
	int totalDollars = 0;
	int twentyBills = 0;
	int tenBills = 0;  // variables
	int fiveBills = 0;
	int oneBills = 0;
	
	printf("Please enter a dollar amount: ");
	scanf("%d", &totalDollars); // takes in user input
	printf("\n");

	if(totalDollars < 0 || totalDollars > 1000000000){ // checks to make sure number is in range
		printf("You have entered an invalid number.\n"); // error message
		return 0;
	}

	twentyBills = totalDollars / 20;  // starts with twenty dollars bills and goes down to smaller bills to see how many are needed
	totalDollars = totalDollars - (twentyBills * 20);
	tenBills = totalDollars / 10;
	totalDollars = totalDollars - (tenBills * 10);
	fiveBills = totalDollars / 5;
	totalDollars = totalDollars - (fiveBills * 5);
	oneBills = totalDollars / 1;
	
	printf("Twenty Dollar Bills Needed: %d\n", twentyBills); // prints results
	printf("Ten Dollar Bills Needed: %d\n", tenBills);
	printf("Five Dollar Bills Needed: %d\n", fiveBills);
	printf("One Dollar Bills Needed: %d\n\n", oneBills);	

	return 0;
}  
