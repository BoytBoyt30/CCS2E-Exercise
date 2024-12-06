#include<stdio.h>
#include<conio.h>
#define PI 3.141592653589793238462643383279502884197

int main()
{
	//initializing variables
	float diameter, area, radius;
	
	//input for diameter
	printf("What is the diamter of the circle? ");
	scanf("%f", &diameter);
	
	//equation for radius conversion & area solution
	radius = diameter / 2;
	area = PI * (radius * radius);
	
	//output area
	printf("The area of the circle given the diameter is %.2f", area);
	
	getch();
	return 0;
}