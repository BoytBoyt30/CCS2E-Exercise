/************************
**Keith Justin Mandal  **
**October 8, 2024      **
**CCS2 - E			   **
************************/
#include<stdio.h>

int main () {
	char x;
	//input for letter
	printf("Enter a letter: ");
	scanf("%c", &x);
	//switch case for vowel or consonant depending on input
	switch (x) {
		//print vowel if input satisfies case
		case 'A':
		case 'a': 
		case 'E':
		case 'e': 
		case 'I':
		case 'i': 
		case 'U':
		case 'u': 
		case 'O':
		case 'o': printf("\nThe letter is a vowel");
			break;
		//print consonant if input satisfies case 
		//using ASCII values to shorten code
		case 66 ... 68: 
		case 70 ... 72: 
		case 74 ... 78: 
		case 80 ... 84: 
		case 86 ... 90: 
		case 98 ... 100: 
		case 102 ... 104: 
		case 106 ... 110: 
		case 112 ... 116: 
		case 118 ... 122: printf("\nThe letter is a consonant");
			break;
		//invalid if special characters
		default: printf("\nInvalid");
			break;
	}
}