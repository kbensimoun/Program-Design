// Kevin Bensimoun
// Program finds largest or smallest of the ten command - line arguments

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char command[3]; // character array
	char str[11];    // character array
	int temp = 0; // basic variables
	int max = 0, min = 0;
	int temp2 = 0, j = 10, x = 0;

	printf("./find_largest_smallest "); // print statement

	if(scanf("%2s", command) == 1) // takes in string while also checking that if something is entered it is true
	{
		for(x = 0; x < j && scanf("%11s", str) == 1; x++) // for loop that takes in each new number as a string
		{
			temp = atoi(str); // atoi to convert string to integer
			temp2 = temp;

			if(x == 0) // checks to see if its on the first element of the array
			{
				min = temp2; // sets min equal to temp since its the first value
				max = temp2; // sets max equal to temp since its the first value
			}
			else
			{
				if(max < temp2) // to find max value
				{
					max = temp2;
				}
				if(min > temp2) // to find min value
				{
					min = temp2;
				}
			}
		}
		
		if(strcmp(command, "-l") == 0) // false comparison check 
		{
			printf("output: The largest number is %d\n", max);
		}
		else if(strcmp(command, "-s") == 0) // false comparison check
		{
			printf("output: The smallest number is %d\n", min);			}
		else  // error message
		{
			printf("Error: Please enter a valid command next time.\n");
		}
	}
	return 0;
}	
			
	
	
