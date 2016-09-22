/*************************************************
 * Calculate the day the work of the student
 * should be due to not interfere with
 * holy days
 *
 * Project 1, Program Design
 * ***********************************************
 Kevin Bensimoun */

#include <stdio.h>

int main(void)
{
	int dayOfWeek = 0;
	int days = 0;         // variables
	int dateFinal = 0;

	printf("Please enter today's day: ");
	scanf("%d", &dayOfWeek);  // takes in day of the week

	if(dayOfWeek > 6 || dayOfWeek < 0){
		printf("Please enter a valid number for today's date next time.\n");
		return 0; // checks if number is within valid range
	}

	printf("Please enter the number of days until the assignment is due: ");
	scanf("%d", &days); // takes in number of days till due

	dateFinal = (days + dayOfWeek) % 7; // calculates what day of the week it'll fall on

	switch(dayOfWeek){ // switch statement depending on day of week
	       	case 0: if(dateFinal == 0){ // checks outcome of dateFinal to determine the day
				days++; // increments days
				printf("Due date Monday in %d days\n", days); // prints due date
				return 0;
			}

	            	if(dateFinal == 1){ // repeat
				printf("Due date Monday in %d days\n", days);
				return 0;
			}
				
			if(dateFinal == 2){ // repeat
				printf("Due date Tuesday in %d days\n", days);
				return 0;
			}
			
			if(dateFinal == 3){
				printf("Due date Wednesday in %d days\n", days);
				return 0;
			}

			if(dateFinal == 4){
				printf("Due date Thursday in %d days\n", days);
				return 0;
			}				
			
			if(dateFinal == 5){
				days += 3;
				printf("Due date Monday in %d days\n", days);
				return 0;
			} 

			if(dateFinal == 6){ // increments by 3 and 2 depending on the day
				days += 2;
				printf("Due date Monday in %d days\n", days);
				return 0;
			}

			break;
			
		case 1: if(dateFinal == 0){ // for the following day but same checks
                                days++;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 1){
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 2){
                                printf("Due date Tuesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 3){
                                printf("Due date Wednesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 4){
                                printf("Due date Thursday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 5){
                                days += 3;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 6){
                                days += 2;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        break;

	        case 2: if(dateFinal == 0){ // for the following day but same checks
                                days++;
                                printf("Due date Monday in %d days\n", days);
                                return 0;
                        }

                        if(dateFinal == 1){
                                printf("Due date Monday in %d days\n", days);
                                return 0;
                        }

                        if(dateFinal == 2){
                                printf("Due date Tuesday in %d days\n", days);
                                return 0;
                        }

                        if(dateFinal == 3){
                                printf("Due date Wednesday in %d days\n", days);
                                return 0;
                        }

                        if(dateFinal == 4){
                                printf("Due date Thursday in %d days\n", days);
                                return 0;
                        }

                        if(dateFinal == 5){
                                days += 3;
                                printf("Due date Monday in %d days\n", days);
                                return 0;
                        }

                        if(dateFinal == 6){
                                days += 2;
                                printf("Due date Monday in %d days\n", days);
                                return 0;
                        }

                        break;
 
		case 3: if(dateFinal == 0){ // for the following day but same checks
                                days++;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 1){
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 2){
                                printf("Due date Tuesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 3){
                                printf("Due date Wednesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 4){
                                printf("Due date Thursday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 5){
                                days += 3;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 6){
                                days += 2;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        break;
		
	       case 4: if(dateFinal == 0){ // for the following day but same checks
                                days++;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 1){
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 2){
                                printf("Due date Tuesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 3){
                                printf("Due date Wednesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 4){
                                printf("Due date Thursday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 5){
                                days += 3;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 6){
                                days += 2;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        break;

		case 5: if(dateFinal == 0){ // for the following day but same checks
                                days++;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 1){
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 2){
                                printf("Due date Tuesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 3){
                                printf("Due date Wednesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 4){
                                printf("Due date Thursday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 5){
                                days += 3;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 6){
                                days += 2;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        break;

	       case 6: if(dateFinal == 0){ // for the following day but same checks
                                days++;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 1){
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 2){
                                printf("Due date Tuesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 3){
                                printf("Due date Wednesday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 4){
                                printf("Due date Thursday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 5){
                                days += 3;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        if(dateFinal == 6){
                                days += 2;
                                printf("Due date Monday in %d days\n", days);
				return 0;
                        }

                        break;

	}

	return 0;
}


					
								



				




















		
