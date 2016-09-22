// Kevin Bensimoun
// Program will take a message and remove punctuations, uppercase all letters, and print

#include <stdio.h>
#include <ctype.h>

int main(void)
{		 
	char ch, new_ch; // basic variables

	printf("Please enter any message!\n");
	ch = getchar();	// takes in user input

	while(ch != '\n'){ // while loop to go through user input
		if(ch == ' '){
			ch = ' ';
			printf("%c", ch);
		}
		else if(!ispunct(ch)){ // checks to see if its punctuation
			if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<= 'Z')){ // checks for upper or lower case
				new_ch = toupper(ch);	// converts to upper case
				printf("%c", new_ch);   // prints the new char
			}
		}
		ch = getchar(); // takes in next char
	}
	printf("\n");
	return 0;
}
