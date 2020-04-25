#include "stdio.h"
#include "stdbool.h"

int main(void) {

	bool is_special_case = false;
	int first_digit, second_digit;
	printf("%s", "Enter a two-digit number: ");
	scanf("%1d%1d", &first_digit, &second_digit);

	printf("%s", "You entered the number ");

	switch (first_digit) {
		case (9): 
			printf("%s", "ninety"); break;
		case (8):  
			printf("%s", "eighty "); break;
		case (7):  
			printf("%s", "seventy"); break;
		case (6):  
			printf("%s", "sixthy"); break;
		case (5): 
			printf("%s", "fifthy"); break;
		case (4): 
			printf("%s", "fourty"); break;
		case (3): 
			printf("%s", "thirty"); break;
		case (2): 
			printf("%s", "twenty"); break;
		case (1):  {

			is_special_case = true;
			switch (second_digit) {
				case (9): 
					printf("%s\n", "nineteen"); break;
				case (8):  
					printf("%s\n", "eighteen"); break;
				case (7):  
					printf("%s\n", "seventeen"); break;
				case (6):  
					printf("%s\n", "sixteen"); break;
				case (5): 
					printf("%s\n", "fiveteen"); break;
				case (4): 
					printf("%s\n", "fourteen"); break;
				case (3): 
					printf("%s\n", "thirteen"); break;
				case (2): 
					printf("%s\n", "twelve"); break;
				case (1):
					printf("%s\n", "eleven"); break;
				case (0):
					printf("%s\n", "ten"); break;
			}			
			break;
		}
		case (0): break;
	}

	if (!is_special_case) {	
		printf("%s", "-");
		switch (second_digit) {
			case (9): 
				printf("%s\n", "nine"); break;
			case (8):  
				printf("%s\n", "eight"); break;
			case (7):  
				printf("%s\n", "seven"); break;
			case (6):  
				printf("%s\n", "six"); break;
			case (5): 
				printf("%s\n", "five"); break;
			case (4): 
				printf("%s\n", "four"); break;
			case (3): 
				printf("%s\n", "three"); break;
			case (2): 
				printf("%s\n", "two"); break;
			case (1):
				printf("%s\n", "one"); break;
			case (0): break;
		}
	}

	return 0;
}
