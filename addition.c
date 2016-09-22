// Kevin Bensimoun
// Program takes two numbers as input and displays the addition of them

#include <stdio.h>
int add(int n, int m);

int main()
{
	int a;
	int b; // basic variables
	int sum;

	printf("Please enter the first number: ");
	scanf(" %d", &a);
	printf("Please enter the second number: ");
	scanf(" %d", &b); // takes in user input
		
	sum = add(a,b); // calls function
		
	printf("The sum is: %d\n", sum);
	
	return 0;
}

int add(int n, int m)
{

	if(n < 0 && m < 0){ // if to check if they are both negative
		if(n > m){
			return add(++n, --m);

		}

		else if(m >= n){
			return add(--n, ++m); // calls recursively
		}
	
	}

	if((n > 0 && m < 0) || (n < 0 && m > 0)){ // if to check if one is positive other is negative
		if(n > 0){
			return add(--n, ++m);
		}
		
		else if(n < 0){
			return add(++n, --m);		
		}
	
	}

	if(n > 0 && m > 0){ // if to check if both positive
		if(n > m)
			return add(++n, --m);
		else 
			return add(--n, ++m);
	}
	
	if(n == 0 && (m > 0 || m < 0)){ // if to check if one is zero for final output
		return m;
	}

	else
		return n;
	
}

