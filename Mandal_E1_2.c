/*************************************
Submitted by: Keith Justin C. Mandal
Date of Submission: September 6, 2024
Filename: Mandal_E1_2.C
*************************************/

#include<stdio.h>
#include<conio.h>

void main()
{
	//declaring variables
	int x, y;
	
	//input the values
	printf("Enter any number: ");
	scanf("%d", &x);
	printf("Enter another number: ");
	scanf("%d", &y);
	
	//display answers for each operator
	printf("\nThe sum of %d and %d = %d", x, y, x + y);
	printf("\nThe difference of %d and %d = %d", x, y, x - y);
	printf("\nThe product of %d and %d = %d", x, y, y * y);
	printf("\nThe qoutient of %d and %d = %d", x, y, x / y);
	printf("\nThe remainder of %d and %d = %d", x, y, x % y);
	getch();
	return;
}
