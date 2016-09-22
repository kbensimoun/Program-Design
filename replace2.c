// Kevin Bensimoun
// Program that takes in positive integer and replaces each digit by adding 6 mod 10 and then switches first and last digit

#include <stdio.h>
void replace(int *a, int *b, int n); // functions declaration at beginning
void swap(int *p, int *q);           

int main(void) // main method
{
	int size = 0; // basic variables
	int j = 0;

	printf("Enter the number of digits of the number: "); // takes in size the user wants the number to be
	scanf("%d", &size);
	
	int a1[size]; // declares first array to that size

	printf("Enter the number: "); // for loop that splits number into single digits and saves that digit to each address in array
	for(j = 0; j < size; j++)
	{
		scanf("%1d", &a1[j]);
	}
	
	int b1[size]; // declares second array to that size

	printf("Output: "); // print output

	replace(a1, b1, size); // calls replace function with a1,b1, and size

	swap(&b1[0], &b1[size - 1]); // calls swap function to take last element and swap with first element

	for(j = 0; j < size; j++) // for loop that prints the output from the second array
	{
		printf("%d", b1[j]);
	}		
	printf("\n"); // keeps the output on the last line by itself

	return 0;
}

void replace(int *a, int *b, int n)
{
	int *p; // declares basic pointer variable

	for(p = a; p < a + n; p++) // pointer arithmetic (from class) 
	{

		*b++ = ((*p + 6) % 10); // increments b array index and sets equal to the address of p plus 6 mod 10
	}
}

void swap(int *p, int *q) // swap method to switch first and last element of array
{
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}
