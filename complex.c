/*****************************************************************/
/* This program adds, subtracts, or multiplies complex numbers.  */
/* Project 5, Program Design					 */
/*****************************************************************/ 
// Kevin Bensimoun
#include <stdio.h>
void read_numbers(double *r1, double *i1, double *r2, double *i2);
void add(double r1, double i1, double r2, double i2, double *r3, double *i3); // method calls before main method
void subtract(double r1, double i1, double r2, double i2, double *r3, double *i3);
void multiply(double r1, double i1, double r2, double i2, double *r3, double *i3);
void print_complex(double r3, double i3); 

int main(void)
{
	double r1, r2, r3, i1, i2, i3; // basic variables
	int option;
	
	printf("Complex Number Arithmetic Program: \n\n");
	for(;;)
	{
		printf("1. Add two complex numbers\n"); // menu
		printf("2. Subtract two complex numbers\n");
		printf("3. Multiply two complex numbers\n");
		printf("4. Quit\n\n");

		printf("Choose an option (1 - 4): ");
		scanf("%d", &option); // user option choice
		switch(option){
			case 1:
				read_numbers(&r1, &i1, &r2, &i2); // takes in numbers
				add(r1, i1, r2, i2, &r3, &i3);    // does the addition
				print_complex(r3, i3);            // prints
				break;
			case 2:
				read_numbers(&r1, &i1, &r2, &i2); // takes in numbers
				subtract(r1, i1, r2, i2, &r3, &i3); // does subtraction
				print_complex(r3, i3); // prints
				break;
			case 3:
				read_numbers(&r1, &i1, &r2, &i2); // takes in numbers
				multiply(r1, i1, r2, i2, &r3, &i3);// does multiplication
				print_complex(r3, i3); // prints
				break;
			case 4:
				return 0;
			default:
				printf("Invalid option. Choose an option (1-4):\n");

		}
	}

	return 0;
}

void read_numbers(double *r1, double *i1, double *r2, double *i2)
{
	printf("Please enter two real numbers: ");
	scanf("%lf", r1); // takes in real numbers
	scanf("%lf", r2);
	printf("Please enter two imaginary numbers: ");
	scanf("%lf", i1); // takes in imaginar numbers
	scanf("%lf", i2);
}
void add(double r1, double i1, double r2, double i2, double *r3, double *i3)
{
	*r3 = r1 + r2; // addition between two real numbers
	*i3 = i1 + i2; // addition between two imaginary numbers
}
void subtract(double r1, double i1, double r2, double i2, double *r3, double *i3)
{
	*r3 = r2 - r1; // subtraction between two real numbers
	*i3 = i2 - i1; // subtraction between two imaginary numbers
}
void multiply(double r1, double i1, double r2, double i2, double *r3, double *i3)
{		
	*r3 = r2*r1;   // multiplication between two real numbers
	*i3 = i2*i1;   // multiplication between two imaginary numbers

}
void print_complex(double r3, double i3)
{
	if(i3 >= 0)
		printf("The operation yields %.3f + %.3fi\n\n", r3, i3); // prints final answers
	else
		
		printf("The operation yields %.3f  %.3fi\n\n", r3, i3); // prints final answers
}


