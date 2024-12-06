/****************************
**	Keith Justin C. Mandal **
**	September 13, 2024     **
**  CCS 2 - E              **
****************************/

#include<stdio.h>

int main()
{
   	//initializing variables
    int num;
	
	//ask for input number
    printf("Enter number: ");
    scanf("%d", &num);
	
	//decision if inputted is positive, negative or neutral
    if(num > 0)
    	printf("%d is a positive number", num);
	else if (num < 0)
		printf("%d is a negative number", num);
	else
		printf("%d is neutral", num);
    return 0;
}