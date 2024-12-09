/*************************
**Keith Justin C. Mandal**
**December 6, 2024      **
**CCS2 - E              **
*************************/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//gobal variables
float initialBill = 0, charge = 0, totalBill = 0;

//declaring functions
void Consumption (float *units);
void DisplayBill (float units);
void Payment (char payMethod);

int main() {
	float units;
	char choice = 'y', payMethod; //pay method variable;
	
	//loop the program
	while (choice == 'y' || choice == 'Y') { //program runs again if user inputs y/Y(yes)
		printf("Welcome to Metro Dumaguete Water"); //placeholder name for water bill
		printf("\n--------------------------------"); //lines to separate code functions, to make it less confusing
		printf("\nEnter Units: "); //units
		scanf("%f", &units);
		printf("\nYou have entered: %f", units);
		printf("\n--------------------------------");
	
		//bill computation
		Consumption(&units);
		
		//display bill
		system("cls");
		DisplayBill(units);
		
		//ask for payment method
		system("cls");
		printf("--------------------------------");
		printf("\nPayment Method");
		printf("\n\n(1) Cash");
		printf("\n(2) Card/Check/E-payment");
		printf("\n\nNote: Card/Check/E-payment includes transaction fee of 10%)");
		printf("\n--------------------------------");
		printf("\nEnter Payment Method: ");
		scanf(" %c", &payMethod); //scans for (1) or (2) for cash or card
	
		//passes the payment option to payment function
		Payment(payMethod);
		
		//shows bill
		system("cls");
		printf("--------------------------------");
		printf("\nThank You for Using Our Services!");
		printf("\n--------------------------------");
		
		//displays entire bill with after charges
		printf("\nUnits: %.2f", units);
		printf("\nBill: PHP %.2f", initialBill);
		printf("\nSurcharge: PHP %.2f", charge);
		printf("\n\nTotal Bill: PHP %.2f", totalBill);
		
		//ask to do transaction again
		printf("\n--------------------------------");
		printf("\nWould you like to make another transaction? ");
		scanf(" %c", &choice);
		system("cls");
	}
	return 0;
}

//funtion to solve initial bill with the units entered
void Consumption(float *units) {
	/**********************************************
	Unit								Charge/unit
	upto 199							@3.20
	200 and above but less than 400		@3.50
	400 and above but less than 600		@3.80
	600 and above						@5.00
	**********************************************/
    if (*units > 0 && *units <= 199) { 
        initialBill = (*units) * 3.20;
    } else if (*units >= 200 && *units < 400) {
        initialBill = (*units) * 3.50;
    } else if (*units >= 400 && *units < 600) {
        initialBill = (*units) * 3.80;
    } else if (*units >= 600) {
        initialBill = (*units) * 5.00;
    } else {
        printf("Invalid units value.\n");
        initialBill = 0;
    }
	
	//surcharge if bill exceeds 650 PHP (10%)
    if (initialBill > 650) {
        charge = initialBill * 0.1;
        totalBill = charge + initialBill;
    } 
}

void DisplayBill(float units) {
	
	//Displays the current bill
	printf("--------------------------------");
	printf("\nUnits: %.2f", units);
	printf("\nBill: PHP %.2f", initialBill);
	printf("\nSurcharge: PHP %.2f", charge);
	printf("\n\nTotal Bill: PHP %.2f", totalBill);
	printf("\n--------------------------------");
	printf("\nEnter any key...");
	getch();
}

void Payment(char payMethod) {
	
	float change, payment;
	int refNo;
	
	system("cls");
	switch (payMethod) {
		
		//case 1 for cash payment
		case '1': 
			printf("--------------------------------");
			printf("\nBill: PHP %.2f", totalBill);
			printf("\nEnter Cash Payment: ");
			scanf("%f", &payment);
			printf("\n--------------------------------");
			
			//error if entered cash is less than bill
			if (payment < totalBill) {
				printf("\ninsufficient funds");
				getch();
				break;
			} else { //continue cash payment
				printf("\nCash Tendered: PHP %.2f", payment);
			
				//change
				change = payment - totalBill;
				printf("\nChange: PHP %.2f", change);
				printf("\n--------------------------------");
				printf("\nEnter any key...");
				getch();
				break;
			}
		//case 2 for card/check/e-payment
		case '2': 
			printf("\n--------------------------------");
			printf("\nBill: PHP %.2f", totalBill);
			printf("\nTransaction Fee: PHP 100"); 
			printf("\nEnter Reference No. : "); //reference number for card/online/check payments
			scanf("%d", &refNo);
			
			totalBill = totalBill + 100.0; //added transaction fee
			printf("\nTotal Bill: %.2f", totalBill);
			printf("\n--------------------------------");
			printf("\nEnter any key...");
			getch();
			break;
		
		//if payment method entered is invalid ex. (3)
		default:
    		printf("\nInvalid payment method.\n");
    		getch();
    		break;
	}
}