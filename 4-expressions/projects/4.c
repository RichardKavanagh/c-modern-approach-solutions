#include "stdio.h"

int main(void)
{

	int input;
	
	printf("%s", "Enter a number between 0 and 32767: ");
	scanf("%d", &input);

	printf("%s%d%d%d%d%d\n", "In octal, your number is: ", 
		(input / 4096 ) % 8, 
		(input / 512 ) % 8,  
		(input / 64 ) % 8,  
		(input / 8 ) % 8,  
		(input % 8));

	return 0;
}

