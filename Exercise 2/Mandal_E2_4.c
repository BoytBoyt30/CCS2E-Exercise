/*********************
Keith Justin C. Mandal
September 24, 2024
CCS 2 - E
*********************/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//initializing variables
	float temp_C, temp_F;
	char opt;
	
	printf("Temperature Conversion");
	
	//ask for conversion
	printf("\n\n(A) Convert Celsius to Farenheit");
	printf("\n(B) Convert Fahrenheit to Celsius");
	printf("\n(C) Check the temperature in Celsius");
	printf("\n\nChoose an option: ");
	scanf("%c", &opt);
	
	//decision for C to F
	if (opt == 'A' || opt == 'a') {
		system("cls"); 
		printf("Enter a temperature in Celsius (C): ");
		scanf("%f", &temp_C);
		temp_F = (temp_C * 9.0/5.0) + 32.0;
		printf("\nThe Temperature %.1f C is equal to %.1f F", temp_C, temp_F); 
	} 
	// decision for F to C
	else if (opt == 'B' || opt == 'b') {
		system("cls"); 
		printf("Enter a temperature in Fahrenheit (F): ");
		scanf("%f", &temp_F);
		temp_C = (temp_F - 32.0) * 5.0/9.0;
		printf("\nThe Temperature %.1f F is equal to %.1f C", temp_F, temp_C); 
	} 
	// check weather in c
	else if (opt == 'C' || opt == 'c') {
		system("cls");
		printf("Enter a temperature in Celsius (C): ");
		scanf("%f", &temp_C);
		
		printf("The temperature %.1f C is ", temp_C);
		//decision for the weather
		if (temp_C < 0.0){
			printf("freezing weather.");
		} else if (temp_C >= 0.0 && temp_C <= 10.0) {
			printf("very cold weather.");
		} else if (temp_C >= 11.0 && temp_C <= 20.0) {
			printf("cold weather.");
		} else if (temp_C >= 21.0 && temp_C <= 30.0) {
			printf("normal in temp.");
		} else if (temp_C >= 31.0 && temp_C <= 40.0) {
			printf("hot.");
		} else if (temp_C >= 41.0){
			printf("very hot.");
		} else
			exit(0);
	} 
	// end if wrong option for conversion
	else {
		system("cls");
		printf("Terminated");
	}
	return 0;
}