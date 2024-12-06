/*************************
**Keith Justin C. Mandal**
**October 18, 2024      **
**CCS1 - E              **
*************************/
#include <stdio.h>
#include <stdlib.h>

int main () {
	//declaring variables
	int numin, count, ones, tens;
	char choice = 'y';
	//using while choice loop to have multiple entries
	while (choice == 'y' || choice == 'Y') {
		//asks for integer
		printf("Enter an integer (1-100): ");
		scanf(" %d", &numin);
		
		if (numin > 0 && numin <= 100) {
			count = 1;
			while (count <= numin) {
				
 				//if 0 > input < 20
				if (numin > 0 && numin < 20) {
					//switch case if input is from 1 - 19 (single digits to teens)
					switch(numin) {
    					case 1: printf("%d - one", numin); break;
    					case 2: printf("%d - two", numin); break;
    					case 3: printf("%d - three", numin); break;
						case 4: printf("%d - four", numin); break;
						case 5: printf("%d - five", numin); break;
						case 6: printf("%d - six", numin); break;
						case 7: printf("%d - seven", numin); break;
						case 8: printf("%d - eight", numin); break;
						case 9: printf("%d - nine", numin); break; 
						case 10: printf ("%d - ten", numin); break;
						case 11: printf ("%d - eleven", numin); break;
						case 12: printf ("%d - twelve", numin); break;
						case 13: printf ("%d - thirteen", numin); break;
						case 14: printf ("%d - fourteen", numin); break;
						case 15: printf ("%d - fifteen", numin); break;
						case 16: printf ("%d - sixteen", numin); break;
						case 17: printf ("%d - seventeen", numin); break;
						case 18: printf ("%d - eighteen", numin); break;
						case 19: printf ("%d - nineteen", numin); break;
					}
				}
				//if 20 >= input <= 100
				else if (numin >= 20 && numin <= 100) {
		
					tens = numin / 10; //the integer in the tens place to determine if its twenties, thirties, etc.
					ones = numin % 10; //integer in ones place 
						switch(tens) { //display depending on tens place integer. Ex. 25 - twenty(tens) five(ones, in next switch case) 
							case 2: printf("%d - twenty ", numin); break;
							case 3: printf("%d - thirty ", numin); break;
							case 4: printf("%d - forty ", numin); break;
							case 5: printf("%d - fifty ", numin); break;
							case 6: printf("%d - sixty ", numin); break; 
							case 7: printf("%d - seventy ", numin); break;
							case 8: printf("%d - eighty ", numin); break;
							case 9: printf("%d - ninety ", numin); break;
						}	
			
						switch(ones) { //display ones place next to the tens place. Ex. 25 - twenty(tens, from previous switch) five(ones)
							case 0: printf(""); break;
    						case 1: printf("one"); break;
    						case 2: printf("two"); break;
    						case 3: printf("three"); break;
							case 4: printf("four"); break;
							case 5: printf("five"); break;
							case 6: printf("six"); break;
							case 7: printf("seven"); break;
							case 8: printf("eight"); break;
							case 9: printf("nine"); break;
						}		
					} else if (numin == 100) 
						printf("%d - one hundred", numin);
					else //if is not 0 > input < 20, then display it is out of range
						printf("Number is out of range");
					//ask if user wants to repeat process (y(yes) or n(no))
					printf("\n\nDo you want to enter again(y/n)? ");
					scanf(" %c", &choice);
					system("cls"); //clear screen after every process	
				}
			}
		count++; //to repeat loop till it reaches condition of if (count == numin(input variable))
		}	
	return 0;
}
