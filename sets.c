// Kevin Bensimoun
// Program that reads in sets of numbers and calculates unions / intersections

#include <stdio.h>

int main(void)
{
	int n = 0, i = 0; // basic variables
	int array1[10] = {0}; // two empty arrays of size 10
	int array2[10] = {0};	
	int temp = 0;
	printf("Please enter the number of elements in set A: ");
	scanf("%d", &n); // takes in size of the array

	printf("Enter the numbers in set A: ");
	for(i = 0; i < n; i++){ // takes in all the numbers in first set
		scanf("%d", &temp);
		array1[temp] = 1; // sets the location of those numbers to 1
	}

	printf("Please enter the number of elements in set B: ");
	scanf("%d", &n); // takes in size of the array
	
	printf("Enter the numbers in set B: ");
	for(i = 0; i < n; i++){ // takes in all the numbers of the second set
		scanf("%d", &temp);
		array2[temp] = 1; // sets the locations of those numbers to 1
	}		
	
	printf("Output: \n");
	printf("The union of set A and B is: ");

	for(i = 0; i < 10; i++){ // logical or with a for loop to check for the location of the 1s to print that number
		if(array1[i] == 1 || array2[i] == 1){
			printf("%d ", i);
		}
		else{
			continue;
		}
	}

	printf("\nThe intersection of set A and B is: ");
	for(i = 0; i < 10; i++){ // logcal and with a for loop to check for the location of the is to print that number
		if(array1[i] == 1 && array2[i] == 1){
			printf("%d ", i);
		}
		else{
			continue;
		}
	}
	printf("\n");

	return 0;
}
