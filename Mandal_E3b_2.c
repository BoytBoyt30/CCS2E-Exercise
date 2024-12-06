/*************************
**Keith Justin C. Mandal**
**November 17, 2024     **
**CCS2 - E              **
*************************/

//pre-processing directives
#include <stdio.h> 
#include <stdlib.h>

//gotoxy to cursor of console to certain pos
void gotoxy(int x, int y) { 
    printf("%c[%d;%df", 0x1B, y, x); 
}

int main () {
	int k, n, count, row;
	char choice = 'y';
	//do while loop if user wants to enter multiple times
	do {
		k = 1;
		n = 1;
		count = 1;
		printf("Enter number of rows (max is 9): ");
		scanf(" %d", &row);
		
		if (row <= 9 && row > 0) { //if condition for number tree limit (1-9 only)
			for (int i = 0; i < row; i++) { //variable 'i' is for the number of rows 
				
				int rowpos = 2 * k - 1; //k-1 decreases the position after each row to have tree effect
 
				gotoxy(60 - rowpos / 2, i + 3); //for x, 60 is the center, rowpos / 2 to start position at the left
											    //for y, i + 3, to start the tree at y = 3
				
				n = 1;
				for (int j = 0; j < k; j++) { //columns, increasing number (ex. 12345)
					if (n == 0)
						continue;
            		printf("%d", n++);
				}
				--n; //decrement after increasing numbers so that middle number will not repeat
				for (int j = 0; j < k; j++) { //columns, decreasing number (ex. 54321)
					if (n == 1)
                        break;
            		printf("%d", --n);
				} 
				printf("\n");
				k++;	
			}
		} else 
			printf("\nNumber is out of range"); //display if number is out of range
		
		printf("\n\nWould you like to enter again? "); //ask to enter again
		scanf(" %c", &choice);
		system("cls");
	}
	while (choice == 'y' || choice == 'Y'); //if 'y' or 'Y', repeat do else end the program
}	