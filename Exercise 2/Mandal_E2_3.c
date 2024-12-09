#include <stdio.h>

int main() {
	int h, conft, conin, con1;
	
	printf("What is your height(CM)? ");
	scanf("%d", &h);
	
	con1 = h / 2.54;
	conft = con1 / 12;
	conin = con1 - (12 * conft);
	
	printf("The height %d cm is equal to %d'%d\". ", h, conft, conin);
	
	if (h <= 147)
		printf("It is categorized as Dwarf.");
	else if (h >= 148 && h <= 212) 
		printf("It is categorized as Normal.");
	else
		printf("It is categorized as Giant.");
	return 0;	
}