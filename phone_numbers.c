// Kevin Bensimoun
// Program translates the letters given into a phone number

#include <stdio.h>
#include <string.h>

void translate(char *word, char *phone_number); // translate function
int main(void) // main method
{
	FILE *fp;
	FILE *pFile; // file variables
	char fname[101];
	char str[1001]; // char arrays
	char number[8];

	printf("Enter the file name: ");
	scanf("%s", fname); // takes in file name
	
	fp = fopen(fname, "r"); // sets fp to open file
	pFile = fopen(strcat(fname, ".cvt"), "w"); // sets pFile to open new file with .cvt extension

	if(fp == NULL){ // checks to see if input exists
		printf("Error opening the file.\n");
		return 1;
	}
	printf("Output file name: %s\n", strcat(fname, "")); // returns output name of file
	
	while(fgets(str, 1001, fp) != NULL){ // while loop with fgets
		translate(str, number); // calling translate function
		fprintf(pFile, "%s\n", number); // fprintf to print to new file
	}

	fclose(pFile); // closes file
	fclose(fp);	
	return 0;
}

void translate(char *word, char *phone_number)
{
	int i, j = 2, k = 3, l = 4, a = 5, b = 6, c = 7, u = 8, d = 9; // variables

	for(i = 0; i < 7; i++){ // for loop for all cases
		if(*(word + i) == 'A' || *(word + i) == 'B' || *(word + i) == 'C'){  // checks letter i is on for all if statements
			sprintf(phone_number + i, "%d", j); // if true moves int to new array for all 
		}
		
		if(*(word + i) == 'F' || *(word + i) == 'D' || *(word + i) == 'E'){ 
			sprintf(phone_number + i, "%d", k); 
		}
		
		if(*(word + i) == 'G' || *(word + i) == 'H' || *(word + i) == 'I'){ 
			sprintf(phone_number + i, "%d", l);
		}

		if(*(word + i) == 'J' || *(word + i) == 'K' || *(word + i) == 'L'){ 
			sprintf(phone_number + i, "%d", a);
		}

		if(*(word + i) == 'M' || *(word + i) == 'N' || *(word + i) == 'O'){ 
			sprintf(phone_number + i, "%d", b);
		}

		if(*(word + i) == 'P' || *(word + i) == 'Q' || *(word + i) == 'R' || *(word + i) == 'S'){ 
			sprintf(phone_number + i, "%d", c);
		}
		
		if(*(word + i) == 'T' || *(word + i) == 'U' || *(word + i) == 'V'){ 
			sprintf(phone_number + i, "%d", u);
		} 

		if(*(word + i) == 'W' || *(word + i) == 'X' || *(word + i) == 'Y' || *(word + i) == 'Z'){
			sprintf(phone_number + i, "%d", d);
		}
	}
}
