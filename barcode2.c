// Kevin Bensimoun
// Program that assigns new input values depending on the 1s and 0s of the barcode

#include <stdio.h>
void edge(int n, int *a1, int *a2); // method call before main function


int main(void)
{
	int n = 8, i = 0; // basic variables / arrays
	int a1[8] = {0}; 
	int a2[8] = {0};		

	printf("Input:  \t");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d", &a1[0], &a1[1], &a1[2], &a1[3], &a1[4], &a1[5], &a1[6], &a1[7]);
	// line before takes input and splits into individual numbers
	edge(n, a1, a2); // calls method

	printf("Output: \t");

	for(i = 0; i < n; i++){
		printf("%d", a2[i]); // for loop to print everything in array
	}
	
	printf("\n");

	return 0;
}

void edge(int n, int *a1, int *a2) // method 
{	
	
	int *p; // basic variables1
	*a2 = 0; // declaring first element in array 2 to be zero
	int *q;

	for(p = a1 + 1; p < a1 + n; p++){
		q = a2 + 1; 
		q++;               // Think the issue was with the if statement but unsure of why it wasn't working
		if(*p == *(p-1)){ // if statement to compare index at p and index p-1
			*q = 0; // sets element equal to zero if true
			
		}
		else{
			*q = 1; // otherwise sets element equal to one
			
		}

		
	}

}
