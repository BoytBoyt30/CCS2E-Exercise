/*************************
**Keith Justin C. Mandal**
**December 3, 2024      **
**CCS2 - E              **
*************************/
#include <stdio.h>
#include <stdlib.h>

int sum(int i);

int main () {
	int i, j, count;
	char choice = 'y';
	do {
		printf("Enter number: ");
		scanf("%d", &i);
		if (i > 0) {
			count = 1;
			j = sum(i);
			while (count < i) {
				printf("%d + ", count++);
			}
			printf("%d", count);
			printf(" = %d", j);
			printf("\nTotal of 1 to %d is: %d", i, j);
		}
		else 
			printf("invalid value");
		printf("\n\nWould you like to enter again? ");
		scanf(" %c", &choice);
		system("cls");
	}
	while (choice == 'y' || choice == 'Y');
}

int sum(int i) {
	static int k;
	if (i == 1) {
		return 1;
	}	
	else {
		k = i + sum(i - 1);
	}
}