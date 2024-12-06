/*************************
Keith Justin C. Mandal
September 27, 2024
CCS 2 - E
*************************/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int x, y, z, sum;
	float avg;
	char opt;
	
	//ask for values
	printf("Please enter three(3) numbers: ");
	scanf("%d %d %d", &x, &y, &z);
	//gives and asks for options 
	printf("Main Menu:\n");
	printf("\n[A] Check if the numbers are odd/even.");
	printf("\n[B] Check if the numbers are Divisible by 5.");
	printf("\n[C] Check if the numbers are Divisible by 10.");
	printf("\n[D] Check if the numbers are positive/negative.");
	printf("\n[E] Display the maximum value.");
	printf("\n[F] Display the minimum value.");
	printf("\n[G] Display the sum.");
	printf("\n[H] Display the average.");
	printf("\n\nPlease choose an option: ");
	scanf(" %c", &opt);
	//clear screen before showing results from chosen option
	system("cls");
	
	if (opt == 'A' || opt == 'a') { //[A] Check if the numbers are odd/even.
		if (x % 2 == 0) //checks x
			printf("%d is an even number", x);
		else if (x <= 0)
			printf("Not applicable");
		else 	
			printf("%d is an odd number", x);
		if (y % 2 == 0) //checks y
			printf("\n%d is an even number", y);
		else if (y <= 0)
			printf("\nNot applicable");
		else
			printf("\n%d is an odd number", y);
		if (z % 2 == 0) //checks z
			printf("\n%d is an even number", z);
		else if (z <= 0)
			printf("\nNot applicable");
		else
			printf("\n%d is an odd number", z);
	} else if (opt == 'B' || opt == 'b') { //[B] Check if the numbers are Divisible by 5.
		if (x % 5 == 0) //checks x
			printf("%d is divisible by 5", x);
		else if (x < 5)
			printf("Not applicable");
		else 
			printf("%d is not divisible by 5", x);
		if (y % 5 == 0) //checks y
			printf("\n%d is divisible by 5", y);
		else if (y < 5)
			printf("\nNot applicable");
		else
			printf("\n%d is not divisible by 5", y);
		if (z % 5 == 0) //checks z
			printf("\n%d is divisible by 5", z);
		else if (z < 5)
			printf("\nNot applicable");
		else
			printf("\n%d is not divisible by 5", z);  
	} else if (opt == 'C' || opt == 'c') { //[C] Check if the numbers are Divisible by 10.
		if (x % 10 == 0) //checks x
			printf("%d is divisible by 10", x);
		else if (x < 10)
			printf("Not applicable");
		else 
			printf("%d is not divisible by 10", x);
		if (y % 10 == 0) //checks y
			printf("\n%d is divisible by 10", y);
		else if (y < 10)
			printf("\nNot applicable");
		else
			printf("\n%d is not divisible by 10", y);
		if (z % 10 == 0) //checks z
			printf("\n%d is divisible by 10", z);
		else if (z < 10)
			printf("\nNot applicable");
		else
			printf("\n%d is not divisible by 10", z);  
	} else if (opt == 'D' || opt == 'd') { //[D] Check if the numbers are positive/negative.
		if (x > 0) //checks x
			printf("%d is a positive number", x);
		else if (x < 0)
			printf("%d is a negative number", x);
		else
			printf("\n%d is neutral", x);
		if (y > 0) //checks y
			printf("\n%d is a positive number", y);
		else if (y < 0)
			printf("\n%d is a negative number", y);
		else
			printf("\n%d is neutral", y);
		if (z > 0) //checks z
			printf("\n%d is a positive number", z);
		else if (z < 0)
			printf("\n%d is a negative number", z);
		else
			printf("\n%d is neutral", z);
	} else if (opt == 'E' || opt == 'e') { //[E] Display the maximum value.
		if (x > y && x > z) //checks x for max
			printf ("%d is the maximum value from the given", x);
		else if (y > x && y > z) //checks y for max
			printf ("%d is the maximum value from the given", y);
		else //else z is max
			printf ("%d is the maximum value from the given", z);
	} else if (opt == 'F' || opt == 'f') { //[F] Display the minimum value.
		if (x < y && x < z) // checks x for min
			printf ("%d is the minimum value from the given", x);
		else if (y < x && y < z) // checks y for min
			printf ("%d is the minimum value from the given", y);
		else //else z is min
			printf ("%d is the minimum value from the given", z);
	} else if (opt == 'G' || opt == 'g') { //[G] Display the sum.
		sum = x + y + z; //formula for sum
		printf("The sum of %d + %d + %d is: %d", x, y, z, sum); 
	} else if (opt == 'H' || opt == 'h') { //[H] Display the average.
		avg = (x + y + z)/3.0; //avg of all
		printf("The average of %d, %d, and %d is: %.2f", x, y, z, avg); 
	} else {
		printf("Invalid Input");
		exit(0);
	}     
	return 0; 
}