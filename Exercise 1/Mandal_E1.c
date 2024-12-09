#include<stdio.h>
#include<conio.h>

void main()
{
	char section = 'E';
	int yearlevel = 1;
	float CQPA = 3.25;
	char course[] = "BSIT";
	
	printf("Welcome to CCS2/LibICT21");
	printf("\nEnjoy your programming activities!");
	printf("\n\tSection: %c", section);
	printf("\n\tYear Level: %d", yearlevel);
	printf("\n\tCQPA: %.2f", CQPA);
	printf("\n\tCourse: %s", course);
	getch();
	return;
}