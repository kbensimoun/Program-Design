// Kevin Bensimoun
// Program that turns the number of cents entered into the correct amount of change


#include <stdio.h>
#define QUARTER 25 // global variables
#define DIME 10
#define NICKEL 5
#define PENNY 1
void coins(int cents, int *quarters, int *dimes, int *nickels, int *pennies); // function call before the main

int main()
{
	//initialize variables and read input
	int cents, pennies, quarters, dimes, nickels; // basic variables
	pennies = quarters = dimes = nickels =0;
        printf("Enter the number of cents:\n");
	scanf("%d", &cents); // takes in user input

	//check the range of the input amount
	if(cents< 0 || cents > 10000) 
	   printf("Invalid amount %d,\nAmount must be between 0 and 10000, inclusive\n", cents);
        else {
		coins(cents, &quarters, &dimes, &nickels, &pennies); // calls coin method with proper pointer variables

		printf("Quarters: %d\n", quarters); // print statement stayed in main method
	        printf("Dimes: %d\n", dimes);
        	printf("Nickels: %d\n", nickels);
	        printf("Pennies: %d\n", pennies);
	}
	return 0;
}

void coins(int cents, int *quarters, int *dimes, int *nickels, int *pennies) // coins method with point variables
{
	*quarters = cents/QUARTER; // equations used to get the correct amount of change
	*dimes = cents%QUARTER/DIME;
	*nickels = cents%QUARTER%DIME/NICKEL;
	*pennies = cents%QUARTER%DIME%NICKEL;
}	
