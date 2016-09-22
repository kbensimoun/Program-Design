// Kevin Bensimoun
// Program that will have a functional menu and will allow the user to convert basic measurements

#include <stdio.h>

int main(void)
{

 	int menu_option = 0;             // basic variables
	double value = 0;
	double final_value = 0;

	printf("       Conversion Menu    \n");
	printf("Please select one of the following options: \n");
	printf("Option 1: Miles to Kilometers\n");         // Menu that offers conversion options
	printf("Option 2: Kilometers to Miles\n");
	printf("Option 3: Inches to Centimeters\n");
	printf("Option 4: Centimeters to Inches\n");
	scanf("%d", &menu_option);  // takes in user input
		
	switch (menu_option) { // switch statement for the different options
	  
	  case 1:  printf("You have chosen to convert a number from Miles to Kilometers!\n");
	           printf("Please enter the number of miles: ");
		   scanf("%lf", &value); // takes in user input
		   final_value = (value * 1.62); // equation to calculate Miles to Kilometers
	     	   printf("%.02lf Miles is equal to %.02lf Kilometers\n", value, final_value);
	           break;
	  
	  case 2:  printf("You have chosen to convert a number from Kilometers to Miles!\n");
		   printf("Please enter the number of Kilometers: ");
	           scanf("%lf", &value); // takes in user input
	           final_value = (value * 0.62); // equation to calculate Kilometers to Miles
		   printf("%.02lf Kilometers is equal to %.02lf Miles\n", value, final_value);
		   break;

	  case 3:  printf("You have chosen to convert a number from Inches to Centimeters!\n");
		   printf("Please enter the number of Inches: ");
		   scanf("%lf", &value); // takes in user input
		   final_value = (value * 2.54); // equation to calculate Inches to Centimeters
		   printf("%.02lf Inches is equal to %.02lf Centimeters\n", value, final_value);
		   break;

	  case 4:  printf("You have chosen to convert a number from Centimeters to Inches!\n");
		   printf("Please enter the number of Centimeters: ");
		   scanf("%lf", &value); // takes in user input
		   final_value = (value * 0.3937); // equation calculate Centimeters to Inches
		   printf("%.02lf Centimeters is equal to %.02lf Inches\n", value, final_value);
		   break;
		
	 default:  printf("You have an entered a number that isn't on our menu, try again next time!\n");
	           break; // default case incase of user input that isn't an option 
 
	}		

	return 0;
}
