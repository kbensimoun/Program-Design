// Kevin Bensimoun
// Program will calculate the voltage needed in an experiment using repeated voltage signal

#include <stdio.h>
#include <math.h>

#define v 10
#define r 3000
#define c (50 * pow(10.0, -6))  // macro definitions
#define T 0.15

int main(void)
{
	double voltageFinal = 0;// basic variables
	double t = 0;
	int x = 1;
	int y = 15;

	printf("time (sec)    voltage\n"); // print statement

	for(t = 0; t <= 1; t += (((double)x)/y)){  // basic loop that increments by 1/15
		voltageFinal = (v * (1 - exp(-t/T)));  //calculates the final voltage over the one second period
		
		printf("  %.02lf            %.02lf\n", t, voltageFinal); // prints in proper format
	
	}
	return 0;
}
