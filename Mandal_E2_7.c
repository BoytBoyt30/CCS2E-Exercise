/************************
**Keith Justin Mandal  **
**October 8, 2024      **
**CCS2 - E			   **
************************/
#include<stdio.h>

int main () {
	int n;
	//ask for number of month input
	printf("Enter a month in number (1-12): ");
	scanf("%d", &n);
	//switch case and print output month depending on input
	switch (n) {
		case 1: printf("\nJanuary"); 
				break;
		case 2: printf("\nFebruary"); 
				break;
		case 3: printf("\nMarch"); 
				break;
		case 4: printf("\nApril");
				break; 
		case 5: printf("\nMay");
				break;
		case 6: printf("\nJune");
				break;
		case 7: printf("\nJuly");
				break;
		case 8: printf("\nAugust");
				break;
		case 9: printf("\nSeptember");
				break;
		case 10: printf("\nOctober");
				break;
		case 11: printf("\nNovember");
				break;
		case 12: printf("\nDecember");
				break;
		//print invalid if number is not from 1-12
		default: printf("\nInvalid");
	}
	return 0;
}